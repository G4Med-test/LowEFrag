void Li6()
{
//=========Macro generated from canvas: canvasLi6/canvasLi6
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
   TCanvas *canvasLi6 = new TCanvas("canvasLi6", "canvasLi6",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasLi6->Range(0,0,1,1);
   canvasLi6->SetFillColor(0);
   canvasLi6->SetBorderMode(0);
   canvasLi6->SetBorderSize(2);
   canvasLi6->SetRightMargin(0.04957356);
   canvasLi6->SetTopMargin(0.03208003);
   canvasLi6->SetBottomMargin(0.0609319);
   canvasLi6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasLi6_1
   TPad *canvasLi6_1 = new TPad("canvasLi6_1", "canvasLi6_1",0,0.6655906,0.5209121,0.96792);
   canvasLi6_1->Draw();
   canvasLi6_1->cd();
   canvasLi6_1->Range(-30.78947,-3.39794,109.2,2.69897);
   canvasLi6_1->SetFillColor(0);
   canvasLi6_1->SetBorderMode(0);
   canvasLi6_1->SetBorderSize(2);
   canvasLi6_1->SetLogy();
   canvasLi6_1->SetLeftMargin(0.1827957);
   canvasLi6_1->SetRightMargin(0);
   canvasLi6_1->SetTopMargin(0);
   canvasLi6_1->SetBottomMargin(0);
   canvasLi6_1->SetFrameBorderMode(0);
   canvasLi6_1->SetFrameBorderMode(0);
   
   TH1F *h1Li6_2dO2__37 = new TH1F("h1Li6_2dO2__37","^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n",1,-5.2,109.2);
   h1Li6_2dO2__37->SetMinimum(0.0004);
   h1Li6_2dO2__37->SetMaximum(500);
   h1Li6_2dO2__37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Li6_2dO2__37->SetLineColor(ci);
   h1Li6_2dO2__37->GetXaxis()->SetRange(1,1);
   h1Li6_2dO2__37->GetXaxis()->SetLabelFont(42);
   h1Li6_2dO2__37->GetXaxis()->SetLabelSize(0.07);
   h1Li6_2dO2__37->GetXaxis()->SetTitleSize(0.07);
   h1Li6_2dO2__37->GetXaxis()->SetTitleFont(42);
   h1Li6_2dO2__37->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Li6_2dO2__37->GetYaxis()->SetLabelFont(42);
   h1Li6_2dO2__37->GetYaxis()->SetLabelSize(0.07);
   h1Li6_2dO2__37->GetYaxis()->SetTitleSize(0.07);
   h1Li6_2dO2__37->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_2dO2__37->GetYaxis()->SetTitleFont(42);
   h1Li6_2dO2__37->GetZaxis()->SetLabelFont(42);
   h1Li6_2dO2__37->GetZaxis()->SetLabelSize(0.035);
   h1Li6_2dO2__37->GetZaxis()->SetTitleSize(0.035);
   h1Li6_2dO2__37->GetZaxis()->SetTitleFont(42);
   h1Li6_2dO2__37->Draw("");
   
   TPaveText *pt = new TPaveText(0.2657123,0.9312746,0.7342877,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclLi6_2dO2__38 = new TH1F("hinclLi6_2dO2__38","INCL",18,5,95);
   hinclLi6_2dO2__38->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_2dO2__38->SetLineColor(ci);
   hinclLi6_2dO2__38->SetLineWidth(2);
   hinclLi6_2dO2__38->GetXaxis()->SetRange(0,19);
   hinclLi6_2dO2__38->GetXaxis()->SetLabelFont(42);
   hinclLi6_2dO2__38->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_2dO2__38->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_2dO2__38->GetXaxis()->SetTitleFont(42);
   hinclLi6_2dO2__38->GetYaxis()->SetLabelFont(42);
   hinclLi6_2dO2__38->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_2dO2__38->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_2dO2__38->GetYaxis()->SetTitleFont(42);
   hinclLi6_2dO2__38->GetZaxis()->SetLabelFont(42);
   hinclLi6_2dO2__38->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_2dO2__38->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_2dO2__38->GetZaxis()->SetTitleFont(42);
   hinclLi6_2dO2__38->Draw("histCsame");
   
   Double_t Graph0_fx1019[18] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5};
   Double_t Graph0_fy1019[18] = {
   0.4,
   0.4,
   0.4,
   0.5,
   1,
   0.7,
   1.4,
   1.6,
   2.3,
   3,
   4.7,
   4.7,
   4,
   2.5,
   1,
   0.4,
   0.2,
   0.2};
   Double_t Graph0_fex1019[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1019[18] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.2,
   0.4,
   0.4,
   0.5,
   0.5,
   0.8,
   0.8,
   0.7,
   0.6,
   0.3,
   0.2,
   0.1,
   0.1};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n",100,0,104);
   Graph_Graph1019->SetMinimum(0.09);
   Graph_Graph1019->SetMaximum(6.04);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
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
   canvasLi6_1->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_3
   TPad *canvasLi6_3 = new TPad("canvasLi6_3", "canvasLi6_3",0,0.3632613,0.5209121,0.6655906);
   canvasLi6_3->Draw();
   canvasLi6_3->cd();
   canvasLi6_3->Range(-30.78947,-3.39794,109.2,2.69897);
   canvasLi6_3->SetFillColor(0);
   canvasLi6_3->SetBorderMode(0);
   canvasLi6_3->SetBorderSize(2);
   canvasLi6_3->SetLogy();
   canvasLi6_3->SetLeftMargin(0.1827957);
   canvasLi6_3->SetRightMargin(0);
   canvasLi6_3->SetTopMargin(0);
   canvasLi6_3->SetBottomMargin(0);
   canvasLi6_3->SetFrameBorderMode(0);
   canvasLi6_3->SetFrameBorderMode(0);
   
   TH1F *h1Li6_7dO6__39 = new TH1F("h1Li6_7dO6__39","",1,-5.2,109.2);
   h1Li6_7dO6__39->SetMinimum(0.0004);
   h1Li6_7dO6__39->SetMaximum(500);
   h1Li6_7dO6__39->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_7dO6__39->SetLineColor(ci);
   h1Li6_7dO6__39->GetXaxis()->SetRange(1,1);
   h1Li6_7dO6__39->GetXaxis()->SetLabelFont(42);
   h1Li6_7dO6__39->GetXaxis()->SetLabelSize(0.07);
   h1Li6_7dO6__39->GetXaxis()->SetTitleSize(0.07);
   h1Li6_7dO6__39->GetXaxis()->SetTitleFont(42);
   h1Li6_7dO6__39->GetYaxis()->SetLabelFont(42);
   h1Li6_7dO6__39->GetYaxis()->SetLabelSize(0.07);
   h1Li6_7dO6__39->GetYaxis()->SetTitleSize(0.07);
   h1Li6_7dO6__39->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_7dO6__39->GetYaxis()->SetTitleFont(42);
   h1Li6_7dO6__39->GetZaxis()->SetLabelFont(42);
   h1Li6_7dO6__39->GetZaxis()->SetLabelSize(0.035);
   h1Li6_7dO6__39->GetZaxis()->SetTitleSize(0.035);
   h1Li6_7dO6__39->GetZaxis()->SetTitleFont(42);
   h1Li6_7dO6__39->Draw("");
   
   TH1F *hinclLi6_7dO6__40 = new TH1F("hinclLi6_7dO6__40","INCL",18,5,95);
   hinclLi6_7dO6__40->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_7dO6__40->SetLineColor(ci);
   hinclLi6_7dO6__40->SetLineWidth(2);
   hinclLi6_7dO6__40->GetXaxis()->SetRange(0,19);
   hinclLi6_7dO6__40->GetXaxis()->SetLabelFont(42);
   hinclLi6_7dO6__40->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_7dO6__40->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_7dO6__40->GetXaxis()->SetTitleFont(42);
   hinclLi6_7dO6__40->GetYaxis()->SetLabelFont(42);
   hinclLi6_7dO6__40->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_7dO6__40->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_7dO6__40->GetYaxis()->SetTitleFont(42);
   hinclLi6_7dO6__40->GetZaxis()->SetLabelFont(42);
   hinclLi6_7dO6__40->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_7dO6__40->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_7dO6__40->GetZaxis()->SetTitleFont(42);
   hinclLi6_7dO6__40->Draw("histCsame");
   
   Double_t Graph0_fx1020[18] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5};
   Double_t Graph0_fy1020[18] = {
   0.12,
   0.35,
   0.33,
   0.47,
   0.43,
   0.59,
   0.79,
   1,
   1.4,
   1.5,
   1.8,
   1.5,
   1.1,
   0.58,
   0.28,
   0.1,
   0.02,
   0.02};
   Double_t Graph0_fex1020[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1020[18] = {
   0.02,
   0.05,
   0.05,
   0.07,
   0.06,
   0.07,
   0.09,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.1,
   0.07,
   0.04,
   0.02,
   0.01,
   0.01};
   gre = new TGraphErrors(18,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,0,104);
   Graph_Graph1020->SetMinimum(0.009);
   Graph_Graph1020->SetMaximum(2.199);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
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
   canvasLi6_3->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_5
   TPad *canvasLi6_5 = new TPad("canvasLi6_5", "canvasLi6_5",0,0,0.5209121,0.3632613);
   canvasLi6_5->Draw();
   canvasLi6_5->cd();
   canvasLi6_5->Range(-30.78947,-4.761723,109.2,2.69897);
   canvasLi6_5->SetFillColor(0);
   canvasLi6_5->SetBorderMode(0);
   canvasLi6_5->SetBorderSize(2);
   canvasLi6_5->SetLogy();
   canvasLi6_5->SetLeftMargin(0.1827957);
   canvasLi6_5->SetRightMargin(0);
   canvasLi6_5->SetTopMargin(0);
   canvasLi6_5->SetBottomMargin(0.1827957);
   canvasLi6_5->SetFrameBorderMode(0);
   canvasLi6_5->SetFrameBorderMode(0);
   
   TH1F *h1Li6_18__41 = new TH1F("h1Li6_18__41","",1,-5.2,109.2);
   h1Li6_18__41->SetMinimum(0.0004);
   h1Li6_18__41->SetMaximum(500);
   h1Li6_18__41->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_18__41->SetLineColor(ci);
   h1Li6_18__41->GetXaxis()->SetRange(1,1);
   h1Li6_18__41->GetXaxis()->SetLabelFont(42);
   h1Li6_18__41->GetXaxis()->SetLabelSize(0.07);
   h1Li6_18__41->GetXaxis()->SetTitleSize(0.07);
   h1Li6_18__41->GetXaxis()->SetTitleFont(42);
   h1Li6_18__41->GetYaxis()->SetLabelFont(42);
   h1Li6_18__41->GetYaxis()->SetLabelSize(0.07);
   h1Li6_18__41->GetYaxis()->SetTitleSize(0.07);
   h1Li6_18__41->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_18__41->GetYaxis()->SetTitleFont(42);
   h1Li6_18__41->GetZaxis()->SetLabelFont(42);
   h1Li6_18__41->GetZaxis()->SetLabelSize(0.035);
   h1Li6_18__41->GetZaxis()->SetTitleSize(0.035);
   h1Li6_18__41->GetZaxis()->SetTitleFont(42);
   h1Li6_18__41->Draw("");
   
   TH1F *hinclLi6_18__42 = new TH1F("hinclLi6_18__42","INCL",17,5,90);
   hinclLi6_18__42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_18__42->SetLineColor(ci);
   hinclLi6_18__42->SetLineWidth(2);
   hinclLi6_18__42->GetXaxis()->SetRange(0,18);
   hinclLi6_18__42->GetXaxis()->SetLabelFont(42);
   hinclLi6_18__42->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_18__42->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_18__42->GetXaxis()->SetTitleFont(42);
   hinclLi6_18__42->GetYaxis()->SetLabelFont(42);
   hinclLi6_18__42->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_18__42->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_18__42->GetYaxis()->SetTitleFont(42);
   hinclLi6_18__42->GetZaxis()->SetLabelFont(42);
   hinclLi6_18__42->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_18__42->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_18__42->GetZaxis()->SetTitleFont(42);
   hinclLi6_18__42->Draw("histCsame");
   
   Double_t Graph0_fx1021[17] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t Graph0_fy1021[17] = {
   0.032,
   0.13,
   0.12,
   0.09,
   0.11,
   0.11,
   0.1,
   0.1,
   0.08,
   0.07,
   0.08,
   0.06,
   0.034,
   0.029,
   0.008,
   0.004,
   0.0031};
   Double_t Graph0_fex1021[17] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1021[17] = {
   0.007,
   0.02,
   0.02,
   0.01,
   0.02,
   0.02,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.007,
   0.008,
   0.004,
   0.003,
   0.0003};
   gre = new TGraphErrors(17,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,0,98.5);
   Graph_Graph1021->SetMinimum(0.0009);
   Graph_Graph1021->SetMaximum(0.1649);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
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
   entry=leg->AddEntry("hinclLi6_18","INCL","l");

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
   entry=leg->AddEntry("NULL","#theta = 18","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasLi6_5->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_2
   TPad *canvasLi6_2 = new TPad("canvasLi6_2", "canvasLi6_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasLi6_2->Draw();
   canvasLi6_2->cd();
   canvasLi6_2->Range(-5.2,-3.39794,109.2,2.69897);
   canvasLi6_2->SetFillColor(0);
   canvasLi6_2->SetBorderMode(0);
   canvasLi6_2->SetBorderSize(2);
   canvasLi6_2->SetLogy();
   canvasLi6_2->SetLeftMargin(0);
   canvasLi6_2->SetRightMargin(0);
   canvasLi6_2->SetTopMargin(0);
   canvasLi6_2->SetBottomMargin(0);
   canvasLi6_2->SetFrameBorderMode(0);
   canvasLi6_2->SetFrameBorderMode(0);
   
   TH1F *h1Li6_4dO9__43 = new TH1F("h1Li6_4dO9__43","",1,-5.2,109.2);
   h1Li6_4dO9__43->SetMinimum(0.0004);
   h1Li6_4dO9__43->SetMaximum(500);
   h1Li6_4dO9__43->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_4dO9__43->SetLineColor(ci);
   h1Li6_4dO9__43->GetXaxis()->SetRange(1,1);
   h1Li6_4dO9__43->GetXaxis()->SetLabelFont(42);
   h1Li6_4dO9__43->GetXaxis()->SetLabelSize(0.07);
   h1Li6_4dO9__43->GetXaxis()->SetTitleSize(0.07);
   h1Li6_4dO9__43->GetXaxis()->SetTitleFont(42);
   h1Li6_4dO9__43->GetYaxis()->SetLabelFont(42);
   h1Li6_4dO9__43->GetYaxis()->SetLabelSize(0.07);
   h1Li6_4dO9__43->GetYaxis()->SetTitleSize(0.07);
   h1Li6_4dO9__43->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_4dO9__43->GetYaxis()->SetTitleFont(42);
   h1Li6_4dO9__43->GetZaxis()->SetLabelFont(42);
   h1Li6_4dO9__43->GetZaxis()->SetLabelSize(0.035);
   h1Li6_4dO9__43->GetZaxis()->SetTitleSize(0.035);
   h1Li6_4dO9__43->GetZaxis()->SetTitleFont(42);
   h1Li6_4dO9__43->Draw("");
   
   TH1F *hinclLi6_4dO9__44 = new TH1F("hinclLi6_4dO9__44","INCL",18,5,95);
   hinclLi6_4dO9__44->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_4dO9__44->SetLineColor(ci);
   hinclLi6_4dO9__44->SetLineWidth(2);
   hinclLi6_4dO9__44->GetXaxis()->SetRange(0,19);
   hinclLi6_4dO9__44->GetXaxis()->SetLabelFont(42);
   hinclLi6_4dO9__44->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_4dO9__44->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_4dO9__44->GetXaxis()->SetTitleFont(42);
   hinclLi6_4dO9__44->GetYaxis()->SetLabelFont(42);
   hinclLi6_4dO9__44->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_4dO9__44->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_4dO9__44->GetYaxis()->SetTitleFont(42);
   hinclLi6_4dO9__44->GetZaxis()->SetLabelFont(42);
   hinclLi6_4dO9__44->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_4dO9__44->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_4dO9__44->GetZaxis()->SetTitleFont(42);
   hinclLi6_4dO9__44->Draw("histCsame");
   
   Double_t Graph0_fx1022[18] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5};
   Double_t Graph0_fy1022[18] = {
   0.09,
   0.14,
   0.18,
   0.14,
   0.5,
   0.8,
   0.9,
   1.1,
   1.6,
   2.3,
   2.4,
   2.1,
   1.4,
   0.9,
   0.4,
   0.2,
   0.02,
   0.02};
   Double_t Graph0_fex1022[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1022[18] = {
   0.03,
   0.03,
   0.04,
   0.03,
   0.2,
   0.3,
   0.3,
   0.3,
   0.3,
   0.5,
   0.5,
   0.4,
   0.3,
   0.3,
   0.1,
   0.1,
   0.01,
   0.01};
   gre = new TGraphErrors(18,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,0,104);
   Graph_Graph1022->SetMinimum(0.009);
   Graph_Graph1022->SetMaximum(3.189);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
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
   canvasLi6_2->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_4
   TPad *canvasLi6_4 = new TPad("canvasLi6_4", "canvasLi6_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasLi6_4->Draw();
   canvasLi6_4->cd();
   canvasLi6_4->Range(-5.2,-3.39794,109.2,2.69897);
   canvasLi6_4->SetFillColor(0);
   canvasLi6_4->SetBorderMode(0);
   canvasLi6_4->SetBorderSize(2);
   canvasLi6_4->SetLogy();
   canvasLi6_4->SetLeftMargin(0);
   canvasLi6_4->SetRightMargin(0);
   canvasLi6_4->SetTopMargin(0);
   canvasLi6_4->SetBottomMargin(0);
   canvasLi6_4->SetFrameBorderMode(0);
   canvasLi6_4->SetFrameBorderMode(0);
   
   TH1F *h1Li6_14dO4__45 = new TH1F("h1Li6_14dO4__45","",1,-5.2,109.2);
   h1Li6_14dO4__45->SetMinimum(0.0004);
   h1Li6_14dO4__45->SetMaximum(500);
   h1Li6_14dO4__45->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_14dO4__45->SetLineColor(ci);
   h1Li6_14dO4__45->GetXaxis()->SetRange(1,1);
   h1Li6_14dO4__45->GetXaxis()->SetLabelFont(42);
   h1Li6_14dO4__45->GetXaxis()->SetLabelSize(0.07);
   h1Li6_14dO4__45->GetXaxis()->SetTitleSize(0.07);
   h1Li6_14dO4__45->GetXaxis()->SetTitleFont(42);
   h1Li6_14dO4__45->GetYaxis()->SetLabelFont(42);
   h1Li6_14dO4__45->GetYaxis()->SetLabelSize(0.07);
   h1Li6_14dO4__45->GetYaxis()->SetTitleSize(0.07);
   h1Li6_14dO4__45->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_14dO4__45->GetYaxis()->SetTitleFont(42);
   h1Li6_14dO4__45->GetZaxis()->SetLabelFont(42);
   h1Li6_14dO4__45->GetZaxis()->SetLabelSize(0.035);
   h1Li6_14dO4__45->GetZaxis()->SetTitleSize(0.035);
   h1Li6_14dO4__45->GetZaxis()->SetTitleFont(42);
   h1Li6_14dO4__45->Draw("");
   
   TH1F *hinclLi6_14dO4__46 = new TH1F("hinclLi6_14dO4__46","INCL",18,5,95);
   hinclLi6_14dO4__46->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_14dO4__46->SetLineColor(ci);
   hinclLi6_14dO4__46->SetLineWidth(2);
   hinclLi6_14dO4__46->GetXaxis()->SetRange(0,19);
   hinclLi6_14dO4__46->GetXaxis()->SetLabelFont(42);
   hinclLi6_14dO4__46->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_14dO4__46->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_14dO4__46->GetXaxis()->SetTitleFont(42);
   hinclLi6_14dO4__46->GetYaxis()->SetLabelFont(42);
   hinclLi6_14dO4__46->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_14dO4__46->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_14dO4__46->GetYaxis()->SetTitleFont(42);
   hinclLi6_14dO4__46->GetZaxis()->SetLabelFont(42);
   hinclLi6_14dO4__46->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_14dO4__46->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_14dO4__46->GetZaxis()->SetTitleFont(42);
   hinclLi6_14dO4__46->Draw("histCsame");
   
   Double_t Graph0_fx1023[18] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5};
   Double_t Graph0_fy1023[18] = {
   0.042,
   0.17,
   0.17,
   0.15,
   0.18,
   0.17,
   0.2,
   0.21,
   0.24,
   0.22,
   0.22,
   0.18,
   0.12,
   0.047,
   0.025,
   0.009,
   0.006,
   0.0031};
   Double_t Graph0_fex1023[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1023[18] = {
   0.007,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.03,
   0.03,
   0.03,
   0.02,
   0.02,
   0.009,
   0.006,
   0.004,
   0.004,
   0.0026};
   gre = new TGraphErrors(18,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,0,104);
   Graph_Graph1023->SetMinimum(0.00045);
   Graph_Graph1023->SetMaximum(0.29695);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
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
   entry=leg->AddEntry("NULL","#theta = 14.4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasLi6_4->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_6
   TPad *canvasLi6_6 = new TPad("canvasLi6_6", "canvasLi6_6",0.5209121,0,0.9504264,0.3632613);
   canvasLi6_6->Draw();
   canvasLi6_6->cd();
   canvasLi6_6->Range(-5.2,-4.761723,109.2,2.69897);
   canvasLi6_6->SetFillColor(0);
   canvasLi6_6->SetBorderMode(0);
   canvasLi6_6->SetBorderSize(2);
   canvasLi6_6->SetLogy();
   canvasLi6_6->SetLeftMargin(0);
   canvasLi6_6->SetRightMargin(0);
   canvasLi6_6->SetTopMargin(0);
   canvasLi6_6->SetBottomMargin(0.1827957);
   canvasLi6_6->SetFrameBorderMode(0);
   canvasLi6_6->SetFrameBorderMode(0);
   
   TH1F *h1Li6_21dO8__47 = new TH1F("h1Li6_21dO8__47","",1,-5.2,109.2);
   h1Li6_21dO8__47->SetMinimum(0.0004);
   h1Li6_21dO8__47->SetMaximum(500);
   h1Li6_21dO8__47->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_21dO8__47->SetLineColor(ci);
   h1Li6_21dO8__47->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Li6_21dO8__47->GetXaxis()->SetRange(1,1);
   h1Li6_21dO8__47->GetXaxis()->SetLabelFont(42);
   h1Li6_21dO8__47->GetXaxis()->SetLabelSize(0.07);
   h1Li6_21dO8__47->GetXaxis()->SetTitleSize(0.07);
   h1Li6_21dO8__47->GetXaxis()->SetTitleFont(42);
   h1Li6_21dO8__47->GetYaxis()->SetLabelFont(42);
   h1Li6_21dO8__47->GetYaxis()->SetLabelSize(0.07);
   h1Li6_21dO8__47->GetYaxis()->SetTitleSize(0.07);
   h1Li6_21dO8__47->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_21dO8__47->GetYaxis()->SetTitleFont(42);
   h1Li6_21dO8__47->GetZaxis()->SetLabelFont(42);
   h1Li6_21dO8__47->GetZaxis()->SetLabelSize(0.035);
   h1Li6_21dO8__47->GetZaxis()->SetTitleSize(0.035);
   h1Li6_21dO8__47->GetZaxis()->SetTitleFont(42);
   h1Li6_21dO8__47->Draw("");
   
   TH1F *hinclLi6_21dO8__48 = new TH1F("hinclLi6_21dO8__48","INCL",14,5,75);
   hinclLi6_21dO8__48->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_21dO8__48->SetLineColor(ci);
   hinclLi6_21dO8__48->SetLineWidth(2);
   hinclLi6_21dO8__48->GetXaxis()->SetRange(0,15);
   hinclLi6_21dO8__48->GetXaxis()->SetLabelFont(42);
   hinclLi6_21dO8__48->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_21dO8__48->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_21dO8__48->GetXaxis()->SetTitleFont(42);
   hinclLi6_21dO8__48->GetYaxis()->SetLabelFont(42);
   hinclLi6_21dO8__48->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_21dO8__48->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_21dO8__48->GetYaxis()->SetTitleFont(42);
   hinclLi6_21dO8__48->GetZaxis()->SetLabelFont(42);
   hinclLi6_21dO8__48->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_21dO8__48->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_21dO8__48->GetZaxis()->SetTitleFont(42);
   hinclLi6_21dO8__48->Draw("histCsame");
   
   Double_t Graph0_fx1024[14] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5};
   Double_t Graph0_fy1024[14] = {
   0.05,
   0.14,
   0.09,
   0.06,
   0.07,
   0.05,
   0.049,
   0.036,
   0.021,
   0.028,
   0.011,
   0.01,
   0.002,
   0.0008};
   Double_t Graph0_fex1024[14] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1024[14] = {
   0.01,
   0.02,
   0.01,
   0.01,
   0.01,
   0.01,
   0.009,
   0.007,
   0.004,
   0.007,
   0.004,
   0.004,
   0.0006,
   0.0004};
   gre = new TGraphErrors(14,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","",100,0,82);
   Graph_Graph1024->SetMinimum(0.00036);
   Graph_Graph1024->SetMaximum(0.17596);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1024->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
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
   entry=leg->AddEntry("NULL","#theta = 21.8","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasLi6_6->Modified();
   canvasLi6->cd();
   canvasLi6->Modified();
   canvasLi6->cd();
   canvasLi6->SetSelected(canvasLi6);
}
