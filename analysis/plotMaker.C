// #include <string>
// #include <iostream>
// // #include <filesystem> //c++17

// #include <boost/filesystem.hpp>
// #include <boost/algorithm/string.hpp>
// #include <algorithm>

// #include <TStyle.h>
// #include <TMath.h>
// #include <TChain.h>
// #include <TH1F.h>
// #include <TGraphErrors.h>
// #include <TObjArray.h>
// #include <TCanvas.h>
// #include <TLegend.h>
// #include <TStyle.h>
// #include <TPad.h>
// #include <TAxis.h>
// #include <TLatex.h>

// //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

Int_t nPrim = 1000;
Double_t cs =1051.9; //mb
Double_t rho=1.;//g/cm

// //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// struct path_leaf_string;

// std::vector<std::string> read_directory(const std::string& path);

// std::string get_extension(const std::string& filename,
// 			  const char delimiter='.',
// 			  const int element=-1);

// void select_files(std::vector<std::string>& input,
// 		  const std::string& extension,
// 		  const char delimiter='.',
// 		  const int element=-1);

// std::vector<std::string> get_all_root_files(const std::string& prefix,
// 					    const std::string& path);


double deg2rad(const double ang);
double solidAngle(const double ang, const double acceptance);
std::string my_to_string(const double dbl);

void plotAll(std::vector<TChain*> trees);
TObjArray* cfr_data_mc(std::vector<TChain*> trees, const Int_t A=4,const Int_t Z=2,
		       const Double_t ang=2.2, const Double_t acceptance=0.5);

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// int main()
// {
//   const std::string path = "../";
//   gStyle->SetOptStat(0);
//   gStyle->SetPadBorderMode(0);
//   gStyle->SetFrameBorderMode(0);
  
//   std::vector<std::string> files = get_all_root_files("incl",path);
//   std::vector<TChain*> allTheTrees;
//   TChain* incl_tree = new TChain("tree","tree");
//   for (const auto& file : files)
//     {
//       std::cout << "adding file: "<< file <<std::endl;
//       incl_tree->AddFile((path+file).c_str());
//     }
//   incl_tree->SetName("incl_tree");
//   std::cout << incl_tree->GetEntries()  <<std::endl;
//   allTheTrees.push_back(incl_tree);

//   plotAll(allTheTrees);

//   delete incl_tree;

// }

void from_root()
{
  const std::string path = "../";
  gStyle->SetOptStat(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameBorderMode(0);

  std::vector<std::string> files = {"../incl_t7.root",
				    "../incl_t6.root",
				    "../incl_t5.root",
				    "../incl_t4.root",
				    "../incl_t3.root",
				    "../incl_t2.root",
				    "../incl_t1.root",
				    "../incl_t0.root"};
  std::vector<TChain*> allTheTrees;
  TChain* incl_tree = new TChain("tree","tree");
  for (size_t i=0; i<allTheTrees.size(); i++)
    {
      std::string file = files[i];
      std::cout << "adding file: "<< file <<std::endl;
      incl_tree->AddFile((path+file).c_str());
    }
  incl_tree->SetName("incl_tree");
  std::cout << incl_tree->GetEntries()  <<std::endl;
  allTheTrees.push_back(incl_tree);
  
  plotAll(allTheTrees);
  
  delete incl_tree;
  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// struct path_leaf_string
// {
//     std::string operator()(const boost::filesystem::directory_entry& entry) const
//     {
//         return entry.path().leaf().string();
//     }
// };

// //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// std::vector<std::string> read_directory(const std::string& path)
// {
//   std::vector<std::string> v;
//   boost::filesystem::path p(path);
//   boost::filesystem::directory_iterator start(p);
//   boost::filesystem::directory_iterator end;
//   std::transform(start, end, std::back_inserter(v), path_leaf_string());
//   //  return std::filesystem::directory_iterator(path) //c++17
//   return v;
// }

// //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// std::string get_extension(const std::string& filename,
// 			  const char delimiter,
// 			  const int element)
// {
//   std::vector<std::string> splitted;
//   boost::split(splitted, filename, [&delimiter](char c){return c == delimiter;});
//   //  std::cout << "extension: " <<  splitted.back() << std::endl;
//   if(element<0)
//     return splitted.back();
//   else
//     return splitted[element];
// }

// //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// void select_files(std::vector<std::string>& input,
// 		  const std::string& extension,
// 		  const char delimiter,
// 		  const int element)
// {
//   input.erase(std::remove_if(input.begin(),input.end(),
// 			     [&extension,&delimiter,&element](std::string& in)
// 			     {return get_extension(in,delimiter,element)!=extension;}),
// 	      input.end());
// }

// //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// std::vector<std::string> get_all_root_files(const std::string& prefix, const std::string& path)
// {
//   std::vector<std::string> files = read_directory(path);
//   select_files(files,"root");
//   select_files(files,prefix,'_',0);
//   return files;
// }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

double deg2rad(const double ang)
{
  return ang*TMath::Pi()/180.;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

double solidAngle(const double ang, const double acceptance)
{
  double Omega = ( TMath::Cos(deg2rad(ang-acceptance))
		   -TMath::Cos(deg2rad(ang+acceptance)) ) *2.*TMath::Pi();
  return Omega;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

std::string my_to_string(const double dbl)
{
  //c++98
  std::ostringstream strs;
  strs << dbl;
  std::string str = strs.str();
  return str;
  // return std::to_string(dbl);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

 void plotAll(std::vector<TChain*> trees)
 {
   // std::vector<int> As = {1, 2, 3, 4, 6, 7, 7, 9, 10, 11};
   // std::vector<int> Zs = {1, 1, 1, 2, 3, 3, 4, 4,  5,  5};

   std::vector<int> As = {1};
   std::vector<int> Zs = {1};

   std::vector<double> angs;  
   std::vector<double> accept;
   
   int nBin = 50;
   double xmin = 0;
   double xmax = 15;

   int canvasIndex = 1;
   
   double xAx_max ;
   double xAx_min ;
   double yAx_max ;
   double yAx_min ;
   
   double lxm=-1., hxm=-1.;
   double lym=4.e-4, hym=5.e+2;

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
      std::cout<<"dividing canvas in: 2x"<<nRowsCanvas<<std::endl;
      canvas->Divide(2,nRowsCanvas,0,0);
      for(size_t j=0;j<angs.size();j++)
  	{
  	  TObjArray *hs = cfr_data_mc(trees, As[i], Zs[i], angs[j], accept[j]);
	  TPad *p = (TPad *)canvas->cd(canvasIndex);
	  std::cout<<"cding in canvas "<<canvasIndex<<std::endl;
	  
	  p->SetLogy();
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
	      std::cout<<"Saving X range user limits to: "<<lxm<<", "<<hxm<<std::endl;
	    }
	  xAx->SetTitleSize(size);
	  xAx->SetLabelSize(size);
	  yAx->SetTitleSize(size);
	  yAx->SetTitleOffset(1.1);	  
	  yAx->SetLabelSize(size);
	  std::string hName = "h1_"+isotopename2+"_"+my_to_string(angs[j]);
	  std::cout<<hName<<std::endl;
	  TH1F* h1 = new TH1F(hName.c_str(),hName.c_str(),1,lxm,hxm);
	  TAxis *xAx2= h1->GetXaxis();
	  TAxis *yAx2= h1->GetYaxis();
	  xAx2->SetTitleSize(size);
	  xAx2->SetLabelSize(size);
	  yAx2->SetTitleSize(size);
	  yAx2->SetTitleOffset(1.1);	  
	  yAx2->SetLabelSize(size);
	  h1->Draw();
	  yAx2->SetRangeUser(lym, hym);
	  std::cout<<"Setting X2 range user limits to: "<<lxm<<", "<<hxm<<std::endl;
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
	      std::string reaction="^{12}C + ^{nat}C #rightarrow ^{"+my_to_string(As[i])+"}"+isotopename2+" at 62 MeV/n";
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
	  
	  gr->SetMarkerStyle(2);
	  gr->SetLineWidth(2);

	  Double_t x1, x2, y1, y2;
	  x1=0.2718386;
	  y1=0.2303651;
	  x2=0.5412715;
	  y2=0.4740848;
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

	  
	  bool firstHisto = true;
	  for(int iH=1; iH<hs->GetEntries(); iH++)
	    {
	      TH1F* h = (TH1F*) hs->At(iH);
	      h->GetXaxis()->SetRangeUser(lxm, hxm);
	      if(firstHisto)
		{
		  firstHisto = false;
		  h->Draw("histCsame");
		}
	      else
		{
		  h->Draw("histC");
		}		
	      h->GetXaxis()->SetRangeUser(lxm, hxm);
	      p->Update();
	      p->Modified();
	      canvas->Update();
	      canvas->Modified();
	      std::cout<<"drawing "<<hs->At(iH)->GetTitle()<<std::endl;
	  
	      myLeg->AddEntry(h,h->GetTitle(),"l");
	    }
	  gr->Draw("p same");
	  std::cout<<"drawing graph "<<hs->At(0)->GetTitle()<<std::endl;
	  
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

	  // delete leg;
	  // delete myLeg;
	  // delete h1;
	  // delete hs;
	}//end loop over angles

      canvas->SaveAs(("plot/"+isotopename+".C").c_str());
      canvas->SaveAs(("plot/"+isotopename+".pdf").c_str());
      delete canvas;
    }//end loop over isotopes
 }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

TObjArray* cfr_data_mc(std::vector<TChain*> trees, const Int_t A,const Int_t Z,
		       const Double_t ang, const Double_t acceptance)
{
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
  

  
  TTree *expdata = new TTree(("expdata"+isotopename).c_str(),("expdata"+isotopename).c_str());
  expdata->ReadFile(("../expData/"+isotopename+".txt").c_str(),"cs/D:csErr/D:Epro/D:E/D:Eerr/D:Ang/D");
  expdata->Draw(("cs:E/"+my_to_string(A)+":csErr.:Eerr/"+my_to_string(A)).c_str(),("Ang=="+my_to_string(ang)).c_str());
  TGraphErrors *gr = new TGraphErrors(expdata->GetSelectedRows(),
				      expdata->GetV2(),
				      expdata->GetV1(),
				      expdata->GetV4(),
				      expdata->GetV3());
  
  res->Add(gr);

  Int_t Npoints = gr->GetN() -1;
  double xmingr= -1.;
  double ymingr= -1.;
  gr->GetPoint(0, xmingr, ymingr);
  double xmaxgr= -1.;
  double ymaxgr= -1.;
  gr->GetPoint(Npoints, xmaxgr, ymaxgr);
  double errMin = gr->GetErrorX(0) *2;
  double errMax= gr->GetErrorX(Npoints) *2;
  
  double Emin = xmingr - errMin/2;
  double Emax = xmaxgr + errMax/2;
  double binSize = errMin;
  int nBin = (int)((Emax - Emin)/binSize);
  
  Double_t Omega = solidAngle(ang, acceptance);
  
  std::string selection = ( "theta>="+my_to_string(ang-acceptance)
			    +" && theta<="+my_to_string(ang+acceptance)
			    +" && Z=="+my_to_string(Z) +" && A=="+my_to_string(A) ).c_str();
  
  std::cout<<"MC selection: "<<selection<<std::endl;
  
  for(auto& thisTree : trees)
    {
      std::string hname = "h"+isotopename+thisTree->GetName()+my_to_string(ang);
      TH1F* h=new TH1F(hname.c_str(), hname.c_str(),nBin,Emin,Emax);		     
      Double_t sf = cs/nPrim/Omega/h->GetBinWidth(1);
      thisTree->Draw(("Ek/A >>"+hname).c_str(),selection.c_str(),"same");
      h->Scale(sf);
      res->Add(h);
    }//end loop over trees
  
  
  delete expdata;
  return res;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
