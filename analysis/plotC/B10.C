void B10()
{
//=========Macro generated from canvas: canvasB10/canvasB10
//=========  (Sat Dec 15 18:51:47 2018) by ROOT version6.06/06
   TCanvas *canvasB10 = new TCanvas("canvasB10", "canvasB10",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasB10->Range(0,0,1,1);
   canvasB10->SetFillColor(0);
   canvasB10->SetBorderMode(0);
   canvasB10->SetBorderSize(2);
   canvasB10->SetRightMargin(0.04957356);
   canvasB10->SetTopMargin(0.03208003);
   canvasB10->SetBottomMargin(0.0609319);
   canvasB10->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasB10_1
   TPad *canvasB10_1 = new TPad("canvasB10_1", "canvasB10_1",0,0.6655906,0.5209121,0.96792);
   canvasB10_1->Draw();
   canvasB10_1->cd();
   canvasB10_1->Range(-23.04474,-3.39794,86.94,2.69897);
   canvasB10_1->SetFillColor(0);
   canvasB10_1->SetBorderMode(0);
   canvasB10_1->SetBorderSize(2);
   canvasB10_1->SetLogy();
   canvasB10_1->SetLeftMargin(0.1827957);
   canvasB10_1->SetRightMargin(0);
   canvasB10_1->SetTopMargin(0);
   canvasB10_1->SetBottomMargin(0);
   canvasB10_1->SetFrameBorderMode(0);
   canvasB10_1->SetFrameBorderMode(0);
   
   TH1F *h1B10_2dO2__85 = new TH1F("h1B10_2dO2__85","^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n",1,-2.94,86.94);
   h1B10_2dO2__85->SetMinimum(0.0004);
   h1B10_2dO2__85->SetMaximum(500);
   h1B10_2dO2__85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1B10_2dO2__85->SetLineColor(ci);
   h1B10_2dO2__85->GetXaxis()->SetRange(1,1);
   h1B10_2dO2__85->GetXaxis()->SetLabelFont(42);
   h1B10_2dO2__85->GetXaxis()->SetLabelSize(0.07);
   h1B10_2dO2__85->GetXaxis()->SetTitleSize(0.07);
   h1B10_2dO2__85->GetXaxis()->SetTitleFont(42);
   h1B10_2dO2__85->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1B10_2dO2__85->GetYaxis()->SetLabelFont(42);
   h1B10_2dO2__85->GetYaxis()->SetLabelSize(0.07);
   h1B10_2dO2__85->GetYaxis()->SetTitleSize(0.07);
   h1B10_2dO2__85->GetYaxis()->SetTitleOffset(1.1);
   h1B10_2dO2__85->GetYaxis()->SetTitleFont(42);
   h1B10_2dO2__85->GetZaxis()->SetLabelFont(42);
   h1B10_2dO2__85->GetZaxis()->SetLabelSize(0.035);
   h1B10_2dO2__85->GetZaxis()->SetTitleSize(0.035);
   h1B10_2dO2__85->GetZaxis()->SetTitleFont(42);
   h1B10_2dO2__85->Draw("");
   
   TPaveText *pt = new TPaveText(0.2620948,0.9312746,0.7379052,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclB10_2dO2__86 = new TH1F("hinclB10_2dO2__86","INCL",17,8,76);
   hinclB10_2dO2__86->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_2dO2__86->SetLineColor(ci);
   hinclB10_2dO2__86->SetLineWidth(2);
   hinclB10_2dO2__86->GetXaxis()->SetRange(0,18);
   hinclB10_2dO2__86->GetXaxis()->SetLabelFont(42);
   hinclB10_2dO2__86->GetXaxis()->SetLabelSize(0.035);
   hinclB10_2dO2__86->GetXaxis()->SetTitleSize(0.035);
   hinclB10_2dO2__86->GetXaxis()->SetTitleFont(42);
   hinclB10_2dO2__86->GetYaxis()->SetLabelFont(42);
   hinclB10_2dO2__86->GetYaxis()->SetLabelSize(0.035);
   hinclB10_2dO2__86->GetYaxis()->SetTitleSize(0.035);
   hinclB10_2dO2__86->GetYaxis()->SetTitleFont(42);
   hinclB10_2dO2__86->GetZaxis()->SetLabelFont(42);
   hinclB10_2dO2__86->GetZaxis()->SetLabelSize(0.035);
   hinclB10_2dO2__86->GetZaxis()->SetTitleSize(0.035);
   hinclB10_2dO2__86->GetZaxis()->SetTitleFont(42);
   hinclB10_2dO2__86->Draw("histCsame");
   
   Double_t Graph0_fx1043[17] = {
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74};
   Double_t Graph0_fy1043[17] = {
   0.3,
   0.2,
   0.3,
   0.7,
   0.3,
   0.3,
   0.5,
   0.9,
   1.1,
   1.7,
   2.9,
   4.6,
   7,
   10,
   7,
   1.5,
   0.9};
   Double_t Graph0_fex1043[17] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph0_fey1043[17] = {
   0.2,
   0.1,
   0.1,
   0.3,
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.4,
   0.6,
   0.8,
   1,
   1,
   1,
   0.4,
   0.1};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n",100,1.2,82.8);
   Graph_Graph1043->SetMinimum(0.09);
   Graph_Graph1043->SetMaximum(12.09);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.7857337,0.8446722,0.9578696,0.9882331,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#theta = 2.2","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasB10_1->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_3
   TPad *canvasB10_3 = new TPad("canvasB10_3", "canvasB10_3",0,0.3632613,0.5209121,0.6655906);
   canvasB10_3->Draw();
   canvasB10_3->cd();
   canvasB10_3->Range(-23.04474,-3.39794,86.94,2.69897);
   canvasB10_3->SetFillColor(0);
   canvasB10_3->SetBorderMode(0);
   canvasB10_3->SetBorderSize(2);
   canvasB10_3->SetLogy();
   canvasB10_3->SetLeftMargin(0.1827957);
   canvasB10_3->SetRightMargin(0);
   canvasB10_3->SetTopMargin(0);
   canvasB10_3->SetBottomMargin(0);
   canvasB10_3->SetFrameBorderMode(0);
   canvasB10_3->SetFrameBorderMode(0);
   
   TH1F *h1B10_4dO9__87 = new TH1F("h1B10_4dO9__87","",1,-2.94,86.94);
   h1B10_4dO9__87->SetMinimum(0.0004);
   h1B10_4dO9__87->SetMaximum(500);
   h1B10_4dO9__87->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_4dO9__87->SetLineColor(ci);
   h1B10_4dO9__87->GetXaxis()->SetRange(1,1);
   h1B10_4dO9__87->GetXaxis()->SetLabelFont(42);
   h1B10_4dO9__87->GetXaxis()->SetLabelSize(0.07);
   h1B10_4dO9__87->GetXaxis()->SetTitleSize(0.07);
   h1B10_4dO9__87->GetXaxis()->SetTitleFont(42);
   h1B10_4dO9__87->GetYaxis()->SetLabelFont(42);
   h1B10_4dO9__87->GetYaxis()->SetLabelSize(0.07);
   h1B10_4dO9__87->GetYaxis()->SetTitleSize(0.07);
   h1B10_4dO9__87->GetYaxis()->SetTitleOffset(1.1);
   h1B10_4dO9__87->GetYaxis()->SetTitleFont(42);
   h1B10_4dO9__87->GetZaxis()->SetLabelFont(42);
   h1B10_4dO9__87->GetZaxis()->SetLabelSize(0.035);
   h1B10_4dO9__87->GetZaxis()->SetTitleSize(0.035);
   h1B10_4dO9__87->GetZaxis()->SetTitleFont(42);
   h1B10_4dO9__87->Draw("");
   
   TH1F *hinclB10_4dO9__88 = new TH1F("hinclB10_4dO9__88","INCL",17,8,76);
   hinclB10_4dO9__88->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_4dO9__88->SetLineColor(ci);
   hinclB10_4dO9__88->SetLineWidth(2);
   hinclB10_4dO9__88->GetXaxis()->SetRange(0,18);
   hinclB10_4dO9__88->GetXaxis()->SetLabelFont(42);
   hinclB10_4dO9__88->GetXaxis()->SetLabelSize(0.035);
   hinclB10_4dO9__88->GetXaxis()->SetTitleSize(0.035);
   hinclB10_4dO9__88->GetXaxis()->SetTitleFont(42);
   hinclB10_4dO9__88->GetYaxis()->SetLabelFont(42);
   hinclB10_4dO9__88->GetYaxis()->SetLabelSize(0.035);
   hinclB10_4dO9__88->GetYaxis()->SetTitleSize(0.035);
   hinclB10_4dO9__88->GetYaxis()->SetTitleFont(42);
   hinclB10_4dO9__88->GetZaxis()->SetLabelFont(42);
   hinclB10_4dO9__88->GetZaxis()->SetLabelSize(0.035);
   hinclB10_4dO9__88->GetZaxis()->SetTitleSize(0.035);
   hinclB10_4dO9__88->GetZaxis()->SetTitleFont(42);
   hinclB10_4dO9__88->Draw("histCsame");
   
   Double_t Graph0_fx1044[17] = {
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74};
   Double_t Graph0_fy1044[17] = {
   0.3,
   0.2,
   0.3,
   0.2,
   0.2,
   0.2,
   0.2,
   0.5,
   0.3,
   0.7,
   1.3,
   1.4,
   2.6,
   1.6,
   2.4,
   0.9,
   0.3};
   Double_t Graph0_fex1044[17] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph0_fey1044[17] = {
   0.2,
   0.1,
   0.2,
   0.1,
   0.1,
   0.1,
   0.1,
   0.2,
   0.1,
   0.2,
   0.4,
   0.4,
   0.5,
   0.4,
   0.5,
   0.5,
   0.2};
   gre = new TGraphErrors(17,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1044 = new TH1F("Graph_Graph1044","",100,1.2,82.8);
   Graph_Graph1044->SetMinimum(0.09);
   Graph_Graph1044->SetMaximum(3.4);
   Graph_Graph1044->SetDirectory(0);
   Graph_Graph1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1044->SetLineColor(ci);
   Graph_Graph1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph1044->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1044->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph1044->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1044->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1044->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1044);
   
   gre->Draw("p ");
   
   leg = new TLegend(0.7857337,0.8446722,0.9578696,0.9882331,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","#theta = 4.9","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasB10_3->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_5
   TPad *canvasB10_5 = new TPad("canvasB10_5", "canvasB10_5",0,0,0.5209121,0.3632613);
   canvasB10_5->Draw();
   canvasB10_5->cd();
   canvasB10_5->Range(-23.04474,-4.761723,86.94,2.69897);
   canvasB10_5->SetFillColor(0);
   canvasB10_5->SetBorderMode(0);
   canvasB10_5->SetBorderSize(2);
   canvasB10_5->SetLogy();
   canvasB10_5->SetLeftMargin(0.1827957);
   canvasB10_5->SetRightMargin(0);
   canvasB10_5->SetTopMargin(0);
   canvasB10_5->SetBottomMargin(0.1827957);
   canvasB10_5->SetFrameBorderMode(0);
   canvasB10_5->SetFrameBorderMode(0);
   
   TH1F *h1B10_11dO1__89 = new TH1F("h1B10_11dO1__89","",1,-2.94,86.94);
   h1B10_11dO1__89->SetMinimum(0.0004);
   h1B10_11dO1__89->SetMaximum(500);
   h1B10_11dO1__89->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_11dO1__89->SetLineColor(ci);
   h1B10_11dO1__89->GetXaxis()->SetRange(1,1);
   h1B10_11dO1__89->GetXaxis()->SetLabelFont(42);
   h1B10_11dO1__89->GetXaxis()->SetLabelSize(0.07);
   h1B10_11dO1__89->GetXaxis()->SetTitleSize(0.07);
   h1B10_11dO1__89->GetXaxis()->SetTitleFont(42);
   h1B10_11dO1__89->GetYaxis()->SetLabelFont(42);
   h1B10_11dO1__89->GetYaxis()->SetLabelSize(0.07);
   h1B10_11dO1__89->GetYaxis()->SetTitleSize(0.07);
   h1B10_11dO1__89->GetYaxis()->SetTitleOffset(1.1);
   h1B10_11dO1__89->GetYaxis()->SetTitleFont(42);
   h1B10_11dO1__89->GetZaxis()->SetLabelFont(42);
   h1B10_11dO1__89->GetZaxis()->SetLabelSize(0.035);
   h1B10_11dO1__89->GetZaxis()->SetTitleSize(0.035);
   h1B10_11dO1__89->GetZaxis()->SetTitleFont(42);
   h1B10_11dO1__89->Draw("");
   
   TH1F *hinclB10_11dO1__90 = new TH1F("hinclB10_11dO1__90","INCL",17,8,76);
   hinclB10_11dO1__90->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_11dO1__90->SetLineColor(ci);
   hinclB10_11dO1__90->SetLineWidth(2);
   hinclB10_11dO1__90->GetXaxis()->SetRange(0,18);
   hinclB10_11dO1__90->GetXaxis()->SetLabelFont(42);
   hinclB10_11dO1__90->GetXaxis()->SetLabelSize(0.035);
   hinclB10_11dO1__90->GetXaxis()->SetTitleSize(0.035);
   hinclB10_11dO1__90->GetXaxis()->SetTitleFont(42);
   hinclB10_11dO1__90->GetYaxis()->SetLabelFont(42);
   hinclB10_11dO1__90->GetYaxis()->SetLabelSize(0.035);
   hinclB10_11dO1__90->GetYaxis()->SetTitleSize(0.035);
   hinclB10_11dO1__90->GetYaxis()->SetTitleFont(42);
   hinclB10_11dO1__90->GetZaxis()->SetLabelFont(42);
   hinclB10_11dO1__90->GetZaxis()->SetLabelSize(0.035);
   hinclB10_11dO1__90->GetZaxis()->SetTitleSize(0.035);
   hinclB10_11dO1__90->GetZaxis()->SetTitleFont(42);
   hinclB10_11dO1__90->Draw("histCsame");
   
   Double_t Graph0_fx1045[17] = {
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74};
   Double_t Graph0_fy1045[17] = {
   0.02,
   0.03,
   0.04,
   0.04,
   0.04,
   0.08,
   0.07,
   0.17,
   0.13,
   0.26,
   0.21,
   0.26,
   0.29,
   0.21,
   0.12,
   0.06,
   0.013};
   Double_t Graph0_fex1045[17] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph0_fey1045[17] = {
   0.01,
   0.01,
   0.01,
   0.02,
   0.01,
   0.02,
   0.02,
   0.03,
   0.03,
   0.05,
   0.04,
   0.05,
   0.05,
   0.04,
   0.03,
   0.02,
   0.008};
   gre = new TGraphErrors(17,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,1.2,82.8);
   Graph_Graph1045->SetMinimum(0.0045);
   Graph_Graph1045->SetMaximum(0.3735);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   gre->Draw("p ");
   
   leg = new TLegend(0.2718386,0.718132,0.5412715,0.9618517,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph0","Exp. Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(2);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hinclB10_11.1","INCL","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.7857337,0.8446722,0.9578696,0.9882331,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","#theta = 11.1","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasB10_5->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_2
   TPad *canvasB10_2 = new TPad("canvasB10_2", "canvasB10_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasB10_2->Draw();
   canvasB10_2->cd();
   canvasB10_2->Range(-2.94,-3.39794,86.94,2.69897);
   canvasB10_2->SetFillColor(0);
   canvasB10_2->SetBorderMode(0);
   canvasB10_2->SetBorderSize(2);
   canvasB10_2->SetLogy();
   canvasB10_2->SetLeftMargin(0);
   canvasB10_2->SetRightMargin(0);
   canvasB10_2->SetTopMargin(0);
   canvasB10_2->SetBottomMargin(0);
   canvasB10_2->SetFrameBorderMode(0);
   canvasB10_2->SetFrameBorderMode(0);
   
   TH1F *h1B10_3dO5__91 = new TH1F("h1B10_3dO5__91","",1,-2.94,86.94);
   h1B10_3dO5__91->SetMinimum(0.0004);
   h1B10_3dO5__91->SetMaximum(500);
   h1B10_3dO5__91->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_3dO5__91->SetLineColor(ci);
   h1B10_3dO5__91->GetXaxis()->SetRange(1,1);
   h1B10_3dO5__91->GetXaxis()->SetLabelFont(42);
   h1B10_3dO5__91->GetXaxis()->SetLabelSize(0.07);
   h1B10_3dO5__91->GetXaxis()->SetTitleSize(0.07);
   h1B10_3dO5__91->GetXaxis()->SetTitleFont(42);
   h1B10_3dO5__91->GetYaxis()->SetLabelFont(42);
   h1B10_3dO5__91->GetYaxis()->SetLabelSize(0.07);
   h1B10_3dO5__91->GetYaxis()->SetTitleSize(0.07);
   h1B10_3dO5__91->GetYaxis()->SetTitleOffset(1.1);
   h1B10_3dO5__91->GetYaxis()->SetTitleFont(42);
   h1B10_3dO5__91->GetZaxis()->SetLabelFont(42);
   h1B10_3dO5__91->GetZaxis()->SetLabelSize(0.035);
   h1B10_3dO5__91->GetZaxis()->SetTitleSize(0.035);
   h1B10_3dO5__91->GetZaxis()->SetTitleFont(42);
   h1B10_3dO5__91->Draw("");
   
   TH1F *hinclB10_3dO5__92 = new TH1F("hinclB10_3dO5__92","INCL",17,8,76);
   hinclB10_3dO5__92->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_3dO5__92->SetLineColor(ci);
   hinclB10_3dO5__92->SetLineWidth(2);
   hinclB10_3dO5__92->GetXaxis()->SetRange(0,18);
   hinclB10_3dO5__92->GetXaxis()->SetLabelFont(42);
   hinclB10_3dO5__92->GetXaxis()->SetLabelSize(0.035);
   hinclB10_3dO5__92->GetXaxis()->SetTitleSize(0.035);
   hinclB10_3dO5__92->GetXaxis()->SetTitleFont(42);
   hinclB10_3dO5__92->GetYaxis()->SetLabelFont(42);
   hinclB10_3dO5__92->GetYaxis()->SetLabelSize(0.035);
   hinclB10_3dO5__92->GetYaxis()->SetTitleSize(0.035);
   hinclB10_3dO5__92->GetYaxis()->SetTitleFont(42);
   hinclB10_3dO5__92->GetZaxis()->SetLabelFont(42);
   hinclB10_3dO5__92->GetZaxis()->SetLabelSize(0.035);
   hinclB10_3dO5__92->GetZaxis()->SetTitleSize(0.035);
   hinclB10_3dO5__92->GetZaxis()->SetTitleFont(42);
   hinclB10_3dO5__92->Draw("histCsame");
   
   Double_t Graph0_fx1046[17] = {
   10,
   14,
   14,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74};
   Double_t Graph0_fy1046[17] = {
   0.3,
   0.8,
   0.2,
   1.1,
   0.7,
   0.4,
   1.1,
   0.6,
   0.6,
   1.2,
   1.6,
   2.5,
   4.4,
   4.8,
   3.1,
   2.1,
   0.3};
   Double_t Graph0_fex1046[17] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph0_fey1046[17] = {
   0.2,
   0.3,
   0.1,
   0.3,
   0.3,
   0.2,
   0.3,
   0.2,
   0.2,
   0.3,
   0.4,
   0.5,
   0.8,
   0.8,
   0.6,
   0.5,
   0.2};
   gre = new TGraphErrors(17,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1046 = new TH1F("Graph_Graph1046","",100,1.2,82.8);
   Graph_Graph1046->SetMinimum(0.09);
   Graph_Graph1046->SetMaximum(6.15);
   Graph_Graph1046->SetDirectory(0);
   Graph_Graph1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1046->SetLineColor(ci);
   Graph_Graph1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph1046->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1046->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph1046->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1046->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1046->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1046);
   
   gre->Draw("p ");
   
   leg = new TLegend(0.7857337,0.8446722,0.9578696,0.9882331,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","#theta = 3.5","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasB10_2->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_4
   TPad *canvasB10_4 = new TPad("canvasB10_4", "canvasB10_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasB10_4->Draw();
   canvasB10_4->cd();
   canvasB10_4->Range(-2.94,-3.39794,86.94,2.69897);
   canvasB10_4->SetFillColor(0);
   canvasB10_4->SetBorderMode(0);
   canvasB10_4->SetBorderSize(2);
   canvasB10_4->SetLogy();
   canvasB10_4->SetLeftMargin(0);
   canvasB10_4->SetRightMargin(0);
   canvasB10_4->SetTopMargin(0);
   canvasB10_4->SetBottomMargin(0);
   canvasB10_4->SetFrameBorderMode(0);
   canvasB10_4->SetFrameBorderMode(0);
   
   TH1F *h1B10_7dO6__93 = new TH1F("h1B10_7dO6__93","",1,-2.94,86.94);
   h1B10_7dO6__93->SetMinimum(0.0004);
   h1B10_7dO6__93->SetMaximum(500);
   h1B10_7dO6__93->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_7dO6__93->SetLineColor(ci);
   h1B10_7dO6__93->GetXaxis()->SetRange(1,1);
   h1B10_7dO6__93->GetXaxis()->SetLabelFont(42);
   h1B10_7dO6__93->GetXaxis()->SetLabelSize(0.07);
   h1B10_7dO6__93->GetXaxis()->SetTitleSize(0.07);
   h1B10_7dO6__93->GetXaxis()->SetTitleFont(42);
   h1B10_7dO6__93->GetYaxis()->SetLabelFont(42);
   h1B10_7dO6__93->GetYaxis()->SetLabelSize(0.07);
   h1B10_7dO6__93->GetYaxis()->SetTitleSize(0.07);
   h1B10_7dO6__93->GetYaxis()->SetTitleOffset(1.1);
   h1B10_7dO6__93->GetYaxis()->SetTitleFont(42);
   h1B10_7dO6__93->GetZaxis()->SetLabelFont(42);
   h1B10_7dO6__93->GetZaxis()->SetLabelSize(0.035);
   h1B10_7dO6__93->GetZaxis()->SetTitleSize(0.035);
   h1B10_7dO6__93->GetZaxis()->SetTitleFont(42);
   h1B10_7dO6__93->Draw("");
   
   TH1F *hinclB10_7dO6__94 = new TH1F("hinclB10_7dO6__94","INCL",17,8,76);
   hinclB10_7dO6__94->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_7dO6__94->SetLineColor(ci);
   hinclB10_7dO6__94->SetLineWidth(2);
   hinclB10_7dO6__94->GetXaxis()->SetRange(0,18);
   hinclB10_7dO6__94->GetXaxis()->SetLabelFont(42);
   hinclB10_7dO6__94->GetXaxis()->SetLabelSize(0.035);
   hinclB10_7dO6__94->GetXaxis()->SetTitleSize(0.035);
   hinclB10_7dO6__94->GetXaxis()->SetTitleFont(42);
   hinclB10_7dO6__94->GetYaxis()->SetLabelFont(42);
   hinclB10_7dO6__94->GetYaxis()->SetLabelSize(0.035);
   hinclB10_7dO6__94->GetYaxis()->SetTitleSize(0.035);
   hinclB10_7dO6__94->GetYaxis()->SetTitleFont(42);
   hinclB10_7dO6__94->GetZaxis()->SetLabelFont(42);
   hinclB10_7dO6__94->GetZaxis()->SetLabelSize(0.035);
   hinclB10_7dO6__94->GetZaxis()->SetTitleSize(0.035);
   hinclB10_7dO6__94->GetZaxis()->SetTitleFont(42);
   hinclB10_7dO6__94->Draw("histCsame");
   
   Double_t Graph0_fx1047[17] = {
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74};
   Double_t Graph0_fy1047[17] = {
   0.06,
   0.05,
   0.08,
   0.09,
   0.09,
   0.12,
   0.15,
   0.31,
   0.43,
   0.7,
   1.2,
   1.4,
   1.2,
   0.65,
   0.4,
   0.18,
   0.06};
   Double_t Graph0_fex1047[17] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph0_fey1047[17] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.03,
   0.05,
   0.06,
   0.1,
   0.2,
   0.2,
   0.2,
   0.09,
   0.06,
   0.03,
   0.02};
   gre = new TGraphErrors(17,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,1.2,82.8);
   Graph_Graph1047->SetMinimum(0.027);
   Graph_Graph1047->SetMaximum(1.757);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   gre->Draw("p ");
   
   leg = new TLegend(0.7857337,0.8446722,0.9578696,0.9882331,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","#theta = 7.6","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasB10_4->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_6
   TPad *canvasB10_6 = new TPad("canvasB10_6", "canvasB10_6",0.5209121,0,0.9504264,0.3632613);
   canvasB10_6->Draw();
   canvasB10_6->cd();
   canvasB10_6->Range(-2.94,-4.761723,86.94,2.69897);
   canvasB10_6->SetFillColor(0);
   canvasB10_6->SetBorderMode(0);
   canvasB10_6->SetBorderSize(2);
   canvasB10_6->SetLogy();
   canvasB10_6->SetLeftMargin(0);
   canvasB10_6->SetRightMargin(0);
   canvasB10_6->SetTopMargin(0);
   canvasB10_6->SetBottomMargin(0.1827957);
   canvasB10_6->SetFrameBorderMode(0);
   canvasB10_6->SetFrameBorderMode(0);
   
   TH1F *h1B10_14dO4__95 = new TH1F("h1B10_14dO4__95","",1,-2.94,86.94);
   h1B10_14dO4__95->SetMinimum(0.0004);
   h1B10_14dO4__95->SetMaximum(500);
   h1B10_14dO4__95->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_14dO4__95->SetLineColor(ci);
   h1B10_14dO4__95->GetXaxis()->SetTitle("E  [MeV/n]");
   h1B10_14dO4__95->GetXaxis()->SetRange(1,1);
   h1B10_14dO4__95->GetXaxis()->SetLabelFont(42);
   h1B10_14dO4__95->GetXaxis()->SetLabelSize(0.07);
   h1B10_14dO4__95->GetXaxis()->SetTitleSize(0.07);
   h1B10_14dO4__95->GetXaxis()->SetTitleFont(42);
   h1B10_14dO4__95->GetYaxis()->SetLabelFont(42);
   h1B10_14dO4__95->GetYaxis()->SetLabelSize(0.07);
   h1B10_14dO4__95->GetYaxis()->SetTitleSize(0.07);
   h1B10_14dO4__95->GetYaxis()->SetTitleOffset(1.1);
   h1B10_14dO4__95->GetYaxis()->SetTitleFont(42);
   h1B10_14dO4__95->GetZaxis()->SetLabelFont(42);
   h1B10_14dO4__95->GetZaxis()->SetLabelSize(0.035);
   h1B10_14dO4__95->GetZaxis()->SetTitleSize(0.035);
   h1B10_14dO4__95->GetZaxis()->SetTitleFont(42);
   h1B10_14dO4__95->Draw("");
   
   TH1F *hinclB10_14dO4__96 = new TH1F("hinclB10_14dO4__96","INCL",16,8,72);
   hinclB10_14dO4__96->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_14dO4__96->SetLineColor(ci);
   hinclB10_14dO4__96->SetLineWidth(2);
   hinclB10_14dO4__96->GetXaxis()->SetRange(0,17);
   hinclB10_14dO4__96->GetXaxis()->SetLabelFont(42);
   hinclB10_14dO4__96->GetXaxis()->SetLabelSize(0.035);
   hinclB10_14dO4__96->GetXaxis()->SetTitleSize(0.035);
   hinclB10_14dO4__96->GetXaxis()->SetTitleFont(42);
   hinclB10_14dO4__96->GetYaxis()->SetLabelFont(42);
   hinclB10_14dO4__96->GetYaxis()->SetLabelSize(0.035);
   hinclB10_14dO4__96->GetYaxis()->SetTitleSize(0.035);
   hinclB10_14dO4__96->GetYaxis()->SetTitleFont(42);
   hinclB10_14dO4__96->GetZaxis()->SetLabelFont(42);
   hinclB10_14dO4__96->GetZaxis()->SetLabelSize(0.035);
   hinclB10_14dO4__96->GetZaxis()->SetTitleSize(0.035);
   hinclB10_14dO4__96->GetZaxis()->SetTitleFont(42);
   hinclB10_14dO4__96->Draw("histCsame");
   
   Double_t Graph0_fx1048[16] = {
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70};
   Double_t Graph0_fy1048[16] = {
   0.005,
   0.02,
   0.025,
   0.021,
   0.015,
   0.022,
   0.023,
   0.039,
   0.05,
   0.05,
   0.038,
   0.027,
   0.016,
   0.008,
   0.005,
   0.005};
   Double_t Graph0_fex1048[16] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph0_fey1048[16] = {
   0.003,
   0.006,
   0.007,
   0.006,
   0.005,
   0.006,
   0.006,
   0.009,
   0.01,
   0.01,
   0.009,
   0.007,
   0.005,
   0.004,
   0.003,
   0.003};
   gre = new TGraphErrors(16,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1048 = new TH1F("Graph_Graph1048","",100,1.6,78.4);
   Graph_Graph1048->SetMinimum(0.0018);
   Graph_Graph1048->SetMaximum(0.0658);
   Graph_Graph1048->SetDirectory(0);
   Graph_Graph1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1048->SetLineColor(ci);
   Graph_Graph1048->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph1048->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1048->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph1048->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1048->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1048->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1048);
   
   gre->Draw("p ");
   
   leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","#theta = 14.4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasB10_6->Modified();
   canvasB10->cd();
   canvasB10->Modified();
   canvasB10->cd();
   canvasB10->SetSelected(canvasB10);
}
