#include <string>
#include <iostream>
#include <sstream>

#include "TMath.h"
#include "TH1F.h"
#include "TGraphErrors.h"
#include "TObjArray.h"
#include "TTree.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TPad.h"
#include "TAxis.h"
#include "TLatex.h"

using namespace std;

std::string path = "../build/";
std::string expDataDir = "./expData/";

TChain *bic_tree  = nullptr;
TChain *incl_tree = nullptr;
TChain *qmd_tree  = nullptr;

Double_t cs =1051.9; //mb  (total inelastic cross section)

Int_t nPrim_bic = 1000000;
Int_t nPrim_incl= 1000000;
Int_t nPrim_qmd = 1000000;

bool initialized = false;

const int nThreads = 10;

void init();
std::string my_to_string(const double dbl);
double deg2rad(const double ang);
TObjArray* cfr_data_mc(const Int_t A=4,const Int_t Z=2,
		       const Double_t ang=2.2, const Double_t acceptance=0.5,
		       bool saveOnPdf=false);
void plotAll(const int wantedZ=-1);

void init()
{
  if(initialized)
    return;

  initialized = true;
  
  gStyle->SetOptStat(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameBorderMode(0);

  
  std::vector<std::string> inclfiles;
  for(int i=0; i<nThreads; i++)
    {
      inclfiles.push_back("incl_t"+my_to_string(i)+".root");      
    }
  incl_tree = new TChain("tree","tree");
  for (size_t i=0; i<inclfiles.size(); i++)
    {
      std::string file = path+inclfiles[i];
      std::cout << "adding file: "<< file <<std::endl;
      incl_tree->AddFile(file.c_str());
    }

  std::vector<std::string> bicfiles;
  for(int i=0; i<nThreads; i++)
    {
      bicfiles.push_back("bic_t"+my_to_string(i)+".root");      
    }
  bic_tree = new TChain("tree","tree");
  for (size_t i=0; i<bicfiles.size(); i++)
    {
      std::string file = path+bicfiles[i];
      std::cout << "adding file: "<< file <<std::endl;
      bic_tree->AddFile(file.c_str());
    }

  std::vector<std::string> qmdfiles;
  for(int i=0; i<nThreads; i++)
    {
      qmdfiles.push_back("qmd_t"+my_to_string(i)+".root");      
    }
  qmd_tree = new TChain("tree","tree");
  for (size_t i=0; i<qmdfiles.size(); i++)
    {
      std::string file = path+qmdfiles[i];
      std::cout << "adding file: "<< file <<std::endl;
      qmd_tree->AddFile(file.c_str());
    }
  
}
 
std::string my_to_string(const double dbl)
{
  std::ostringstream strs;
  strs << dbl;
  std::string str = strs.str();
  return str;
}

double deg2rad(const double ang)
{
  return ang*TMath::Pi()/180.;
}

double solidAngle(const double ang, const double acceptance)
{
  double Omega = ( TMath::Cos(deg2rad(ang-acceptance))
		   -TMath::Cos(deg2rad(ang+acceptance)) ) *2.*TMath::Pi();
  return Omega;
}

TObjArray* cfr_data_mc(const Int_t A,const Int_t Z,
		       const Double_t ang, const Double_t acceptance,
		       bool saveOnPdf)
{
  init();
  
  TObjArray* res=new TObjArray();
  
  std::string isotopename="";
  if(Z==1)
    isotopename="H";
  else if(Z==2)
    isotopename="He";
  else if(Z==3)
    isotopename="Li";
  else if(Z==4)
    isotopename="Be";  
  else if(Z==5)
    isotopename="B";
  isotopename+=my_to_string(A);

  TTree *expdata = new TTree(("expdata"+isotopename+"_"+my_to_string(ang)).c_str()
			     ,("expdata"+isotopename+"_"+my_to_string(ang)).c_str());
  expdata->ReadFile((expDataDir+isotopename+".txt").c_str(),"cs/D:csErr/D:Epro/D:E/D:Eerr/D:Ang/D");
  if(expdata->GetEntriesFast()<2) return res;
  
  TCanvas *canvasTMP=new TCanvas(("canvasTMP"+isotopename+"_"+my_to_string(ang)).c_str(),("canvasTMP"+isotopename+"_"+my_to_string(ang)).c_str(),800,600);

  TGraphErrors *gr;
  canvasTMP->SetLogy();
  expdata->Draw(("cs:E/"+my_to_string(A)+":csErr.:Eerr/"+my_to_string(A)).c_str(),("Ang=="+my_to_string(ang)).c_str());
  gr = new TGraphErrors(expdata->GetSelectedRows(),
			expdata->GetV2(),
			expdata->GetV1(),
			expdata->GetV4(),
			expdata->GetV3());
  
  Int_t Npoints = gr->GetN() -1;
  
  double xmingr= -1.;
  double ymingr= -1.;
  
  gr->GetPoint(0, xmingr, ymingr);
  cout << "min X val of data: " << xmingr << endl;
  
  double xmaxgr= -1.;
  double ymaxgr= -1.;
  gr->GetPoint(Npoints, xmaxgr, ymaxgr);					     

  double errMin = gr->GetErrorX(0) *2;
  double Emin = xmingr - errMin/2;
  double errMax= gr->GetErrorX(Npoints) *2;
  cout << "max X val of data: " << xmaxgr << endl;
  double Emax = xmaxgr + errMax/2;
  double binSize = errMin;
  if(errMin!=errMax)
    {
      cout<< "ERROR: errMin != errMax "<<errMin<<" "<<errMax<<endl;
							      binSize = (errMin+errMax)/2;
    }
	
  int nBin = (int)((Emax - Emin)/binSize);

  std::string hbicname = "hbic"+isotopename+"_"+my_to_string(ang);
  std::string hinclname = "hincl"+isotopename+"_"+my_to_string(ang);
  std::string hqmdname = "hqmd"+isotopename+"_"+my_to_string(ang);
  
  TH1F* hbic=new TH1F(hbicname.c_str(),"BIC",nBin,Emin,Emax);
  TH1F* hincl=new TH1F(hinclname.c_str(),"INCL",nBin,Emin,Emax);
  TH1F* hqmd=new TH1F(hqmdname.c_str(),"QMD",nBin,Emin,Emax);

    //acceptance e' alpa/2
  Double_t Omega = solidAngle(ang, acceptance);
  
  Double_t rho=1.;//g/cm

  Double_t sf_bic = cs/nPrim_bic/Omega/hbic->GetBinWidth(1);
  Double_t sf_incl = cs/nPrim_incl/Omega/hincl->GetBinWidth(1);
  Double_t sf_qmd = cs/nPrim_qmd/Omega/hqmd->GetBinWidth(1);

  gr->Draw("ap");
  res->Add(gr);
  
  std::string selection = ( "theta>="+my_to_string(ang-acceptance)
			    +" && theta<="+my_to_string(ang+acceptance)
			    +" && Z=="+my_to_string(Z) +" && A=="+my_to_string(A) ).c_str();
  
  cout<<"MC selection: "<<selection<<endl;

  if(bic_tree)
    {
      bic_tree->Draw(("Ek/A>>"+hbicname).c_str(),selection.c_str(),"same");
      hbic->Scale(sf_bic);
      hbic->SetLineColor(kGreen);
      hbic->SetLineWidth(2);
      hbic->Draw("C same");
    }

  if(incl_tree)
    {
      incl_tree->Draw(("Ek/A>>"+hinclname).c_str(),selection.c_str(),"same");
      hincl->Scale(sf_incl);
      hincl->SetLineColor(kBlue);
      hincl->SetLineWidth(2);
      hincl->Draw("C same");
    }
  
  if(qmd_tree)
    {
      qmd_tree->Draw(("Ek/A>>"+hqmdname).c_str(),selection.c_str(),"same");
      hqmd->Scale(sf_qmd);
      hqmd->SetLineColor(kRed);
      hqmd->SetLineWidth(2);
      hqmd->Draw("C same");
    }

  bool legLeft = false;
  if(Z==5) legLeft=true;

  double_t xminleg = 0.65;
  double_t xmaxleg = 0.85;
  if(legLeft)
    {
      xminleg = 0.15;
      xmaxleg = 0.35;
    }
  TLegend* myLeg=new TLegend(xminleg,0.7,xmaxleg,0.85);

  myLeg->AddEntry(gr,"Exp. Data","lep");
  if(bic_tree)  myLeg->AddEntry(hbic,"BIC","l");
  if(qmd_tree)  myLeg->AddEntry(hqmd,"QMD","l");
  if(incl_tree) myLeg->AddEntry(hincl,"INCL","l");	    
  myLeg->Draw("same");

  if(saveOnPdf) 
    {
      canvasTMP->SaveAs(("plot/"+isotopename+"_"+my_to_string(ang)+".pdf").c_str());
    }
  if(bic_tree)  res->Add(hbic);
  if(qmd_tree)  res->Add(hqmd);
  if(incl_tree) res->Add(hincl);
  
  return res;
}


void plotAll(const int wantedZ)
{
  init();
  
  std::vector<int> As = {1, 2, 3, 4, 6, 7, 7, 9, 10, 11};
  std::vector<int> Zs = {1, 1, 1, 2, 3, 3, 4, 4,  5,  5};

  
  if(wantedZ>0)
    {
      for(size_t i=0; i<Zs.size(); i++)
	{
	  std::cout<<"Z: "<<Zs[i]<<"\t A: "<<As[i]<<std::endl;
	}
      std::cout<<std::endl;
      vector<int> toberemoved;
      for(size_t i=0;i<Zs.size();i++)
	{
	  if(Zs[i]!=wantedZ) toberemoved.push_back(i);
	}
      for(size_t i=toberemoved.size(); i-->0; )
	{
	  As.erase(As.begin()+toberemoved[i]);
	  Zs.erase(Zs.begin()+toberemoved[i]);	  
	}
      for(size_t i=0; i<Zs.size(); i++)
	{
	  std::cout<<"Z: "<<Zs[i]<<"\t A: "<<As[i]<<std::endl;
	}
      std::cout<<std::endl;
    }
  
  std::vector<double> angs;  
  std::vector<double> accept;

  int nBin = 50;
  double xmin = 0;
  double xmax = 15;

  if(As.size() != Zs.size()) cout<<"Error As and Zs have different sizes."<<endl;
  int canvasIndex = 1;
  
  double xAx_max ;
  double xAx_min ;
  double yAx_max ;
  double yAx_min ;

  double lxm=-1., hxm=-1.;
  double lym=4.e-4, hym=5.e+3;
  
  
  for(size_t i=0;i<As.size(); i++)
    //  for(size_t i=0;i<1; i++)
    {

      std::string isotopename="";
      if(Zs[i]==1)
	isotopename="H";
      else if(Zs[i]==2)
	isotopename="He";
      else if(Zs[i]==3)
	isotopename="Li";
      else if(Zs[i]==4)
	isotopename="Be";  
      else if(Zs[i]==5)
	isotopename="B";
      std::string isotopename2 = isotopename;
      isotopename+=my_to_string(As[i]);

      int nRowsCanvas = 2;
      
      //   Be9                        B
      if( (Zs[i]==4 && As[i]==9) || (Zs[i]==5) )
  	{
  	  angs.clear();
  	  accept.clear();
  	  angs   = {2.2, 3.5, 4.9, 7.6, 11.1, 14.4};
  	  accept = {0.4, 0.4, 0.4, 1.5,  1.5,  1.5};
	  nRowsCanvas = 3;
  	}
      else if( Zs[i]==1 )
  	{
  	  angs.clear();
  	  accept.clear();
  	  angs   = {11.4, 14.4, 17.2, 19.4};
  	  accept = {1.5,   1.5,  1.5,  1.5};
	  nRowsCanvas = 2;
  	}
      else
  	{
  	  angs.clear();
  	  accept.clear();
  	  angs   = {2.2, 4.9, 7.6, 14.4,  18, 21.8};
  	  accept = {0.4, 0.4, 1.5,  1.5, 1.5,  1.5};
	  nRowsCanvas = 3;
  	}
      TCanvas *canvas=new TCanvas(("canvas"+isotopename).c_str(), ("canvas"+isotopename).c_str(), 800, 300*nRowsCanvas );
      canvas->SetLeftMargin(0.17);
      canvas->SetBottomMargin(0.17);
      canvas->Divide(2,nRowsCanvas,0,0);

      for(size_t j=0;j<angs.size();j++)
  	{
  	  TObjArray *hs = cfr_data_mc(As[i], Zs[i], angs[j], accept[j], false);
	  TPad *p = (TPad *)canvas->cd(canvasIndex);
	  //	  l.DrawLatex(xAx_max*.75,yAx_max*.75,("#theta = "+my_to_string(angs[i])).c_str());
	  p->SetLogy();
	  cout<<"cding in canvas "<<canvasIndex<<endl;
	  TGraphErrors *gr = (TGraphErrors*) hs->At(0);
	  double size = 0.07;
	  TAxis *xAx= gr->GetXaxis();
	  TAxis *yAx= gr->GetYaxis();
	  xAx_max = xAx->GetBinUpEdge(xAx->GetNbins());
	  xAx_min = xAx->GetBinLowEdge(1);
	  yAx_max = yAx->GetBinUpEdge(yAx->GetNbins());
	  yAx_min = yAx->GetBinLowEdge(1);
	  if(canvasIndex==1)
	    {
	      lxm = xAx_min - (xAx_max*0.05);
	      hxm = xAx_max + (xAx_max*0.05);
	      cout<<"Saving X range user limits to: "<<lxm<<", "<<hxm<<endl;
	    }
	  xAx->SetTitleSize(size);
	  xAx->SetLabelSize(size);
	  yAx->SetTitleSize(size);
	  yAx->SetTitleOffset(1.1);	  
	  yAx->SetLabelSize(size);

	  //	  xAx->SetRange(1,101);
	  
	  TH1F* h1 = new TH1F(("h1"+isotopename+"_"+my_to_string(angs[j])).c_str(),"h1",1,lxm,hxm);
	  TAxis *xAx2= h1->GetXaxis();
	  TAxis *yAx2= h1->GetYaxis();
	  xAx2->SetTitleSize(size);
	  xAx2->SetLabelSize(size);
	  yAx2->SetTitleSize(size);
	  yAx2->SetTitleOffset(1.1);	  
	  yAx2->SetLabelSize(size);
	  h1->Draw();
	  yAx2->SetRangeUser(lym, hym);
	  cout<<"Setting X2 range user limits to: "<<lxm<<", "<<hxm<<endl;
	  xAx2->SetRangeUser(lxm, hxm);

	  
	  if(canvasIndex==1)
	    {
	      yAx->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
	      yAx2->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
	      if(nRowsCanvas==2)
		{
		  yAx->SetLabelSize(0.08);
		  yAx2->SetLabelSize(0.08);
		}
	      std::string reaction="^{12}C + ^{12}C #rightarrow ^{"+my_to_string(As[i])+"}"+isotopename2+" at 62 MeV/n";
	      gr->SetTitle(reaction.c_str());
	      h1->SetTitle(reaction.c_str());
	    }
	  else
	    {
	      h1->SetTitle("");
	      gr->SetTitle("");
	      yAx->SetTitle("");
	      yAx2->SetTitle("");
	    }
	  if(canvasIndex==(nRowsCanvas*2))
	    {
	      xAx->SetTitle("E  [MeV/n]");
	      xAx2->SetTitle("E  [MeV/n]");
	    }
	  else
	    {
	      xAx->SetTitle("");
	      xAx2->SetTitle("");	    
	    }
	  h1->Draw();
	  p->Update();
	  p->Modified();
	  canvas->Update();
	  canvas->Modified();
	  
	  //	  gr->SetTitle("");
	  gr->SetMarkerStyle(2);
	  gr->SetLineWidth(2);

	  Double_t x1, x2, y1, y2;
	  x1=0.2718386;
	  y1=0.2303651;
	  x2=0.5412715;
	  y2=0.4740848;
	  // if(isotopename=="Li" || isotopename=="B" || isotopename=="Be")
	  if(Zs[i]>=3)
	    {
	      Double_t Dy = 0.48776690;
	      y1 += Dy;
	      y2 += Dy;
	    }
	  
	  TLegend* myLeg=new TLegend(x1,y1,x2,y2,NULL,"brNDC");

	  myLeg->SetBorderSize(1);
	  // myLeg->SetTextAlign(22);
	  myLeg->SetTextSize(0.05);
	  myLeg->SetLineColor(1);
	  myLeg->SetLineStyle(1);
	  myLeg->SetLineWidth(0);
	  myLeg->SetFillColor(0);
	  myLeg->SetFillStyle(1001);
	  
	  myLeg->AddEntry(gr,"Exp. Data","lep");
	  //myLeg->AddEntry(h1,"BIC","l");
	  
	  for(int iH=1; iH<hs->GetEntries(); iH++)
	    {
	      TH1F* h = (TH1F*) hs->At(iH);
	      h->GetXaxis()->SetRangeUser(lxm, hxm);
	      h->Draw("histCsame");
	      h->GetXaxis()->SetRangeUser(lxm, hxm);
	      p->Update();
	      p->Modified();
	      canvas->Update();
	      canvas->Modified();
	      cout<<"drawing "<<hs->At(iH)->GetTitle()<<endl;
	  
	      myLeg->AddEntry(h,h->GetTitle(),"l");
	    }
	  gr->Draw("p same");
	  cout<<"drawing graph "<<hs->At(0)->GetTitle()<<endl;
	  
	  if(canvasIndex==(nRowsCanvas*2-1))
	    {
	      myLeg->Draw();
	    }
	  
	  TLegend *leg = new TLegend(0.7857337,0.8446722,0.9578696,0.9882331,NULL,"brNDC");
	  leg->SetBorderSize(1);
	  leg->SetTextAlign(22);
	  leg->SetTextSize(0.07);
	  leg->SetLineColor(1);
	  leg->SetLineStyle(1);
	  leg->SetLineWidth(0);
	  leg->SetFillColor(0);
	  leg->SetFillStyle(1001);
	  leg->SetHeader(("#theta = "+my_to_string(angs[j])).c_str());
	  leg->Draw();
	  
	  canvasIndex+=1;
	  if(canvasIndex>(nRowsCanvas*2) ) canvasIndex=1;
	  // delete hs;
	  // delete p;
  	}

      // canvas->Modified();
      canvas->SaveAs(("plotC/"+isotopename+".C").c_str());
      canvas->SaveAs(("plot/"+isotopename+".pdf").c_str());
      //      delete canvas;
    }
    
}

