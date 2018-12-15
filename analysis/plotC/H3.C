void H3()
{
//=========Macro generated from canvas: canvasH3/canvasH3
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
   TCanvas *canvasH3 = new TCanvas("canvasH3", "canvasH3",0,0,800,600);
   gStyle->SetOptStat(0);
   canvasH3->Range(0,0,1,1);
   canvasH3->SetFillColor(0);
   canvasH3->SetBorderMode(0);
   canvasH3->SetBorderSize(2);
   canvasH3->SetRightMargin(0.04957356);
   canvasH3->SetTopMargin(0.04957356);
   canvasH3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasH3_1
   TPad *canvasH3_1 = new TPad("canvasH3_1", "canvasH3_1",0,0.5209121,0.5209121,0.9504264);
   canvasH3_1->Draw();
   canvasH3_1->cd();
   canvasH3_1->Range(-41.25,-3.39794,146.3,2.69897);
   canvasH3_1->SetFillColor(0);
   canvasH3_1->SetBorderMode(0);
   canvasH3_1->SetBorderSize(2);
   canvasH3_1->SetLogy();
   canvasH3_1->SetLeftMargin(0.1827957);
   canvasH3_1->SetRightMargin(0);
   canvasH3_1->SetTopMargin(0);
   canvasH3_1->SetBottomMargin(0);
   canvasH3_1->SetFrameBorderMode(0);
   canvasH3_1->SetFrameBorderMode(0);
   
   TH1F *h1H3_11dO4__17 = new TH1F("h1H3_11dO4__17","^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n",1,-6.966667,146.3);
   h1H3_11dO4__17->SetMinimum(0.0004);
   h1H3_11dO4__17->SetMaximum(500);
   h1H3_11dO4__17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1H3_11dO4__17->SetLineColor(ci);
   h1H3_11dO4__17->GetXaxis()->SetRange(1,1);
   h1H3_11dO4__17->GetXaxis()->SetLabelFont(42);
   h1H3_11dO4__17->GetXaxis()->SetLabelSize(0.07);
   h1H3_11dO4__17->GetXaxis()->SetTitleSize(0.07);
   h1H3_11dO4__17->GetXaxis()->SetTitleFont(42);
   h1H3_11dO4__17->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1H3_11dO4__17->GetYaxis()->SetLabelFont(42);
   h1H3_11dO4__17->GetYaxis()->SetLabelSize(0.08);
   h1H3_11dO4__17->GetYaxis()->SetTitleSize(0.07);
   h1H3_11dO4__17->GetYaxis()->SetTitleOffset(1.1);
   h1H3_11dO4__17->GetYaxis()->SetTitleFont(42);
   h1H3_11dO4__17->GetZaxis()->SetLabelFont(42);
   h1H3_11dO4__17->GetZaxis()->SetLabelSize(0.035);
   h1H3_11dO4__17->GetZaxis()->SetTitleSize(0.035);
   h1H3_11dO4__17->GetZaxis()->SetTitleFont(42);
   h1H3_11dO4__17->Draw("");
   
   TPaveText *pt = new TPaveText(0.2838,0.9315033,0.7162,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclH3_11dO4__18 = new TH1F("hinclH3_11dO4__18","INCL",18,0,126.6667);
   hinclH3_11dO4__18->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_11dO4__18->SetLineColor(ci);
   hinclH3_11dO4__18->SetLineWidth(2);
   hinclH3_11dO4__18->GetXaxis()->SetRange(0,19);
   hinclH3_11dO4__18->GetXaxis()->SetLabelFont(42);
   hinclH3_11dO4__18->GetXaxis()->SetLabelSize(0.035);
   hinclH3_11dO4__18->GetXaxis()->SetTitleSize(0.035);
   hinclH3_11dO4__18->GetXaxis()->SetTitleFont(42);
   hinclH3_11dO4__18->GetYaxis()->SetLabelFont(42);
   hinclH3_11dO4__18->GetYaxis()->SetLabelSize(0.035);
   hinclH3_11dO4__18->GetYaxis()->SetTitleSize(0.035);
   hinclH3_11dO4__18->GetYaxis()->SetTitleFont(42);
   hinclH3_11dO4__18->GetZaxis()->SetLabelFont(42);
   hinclH3_11dO4__18->GetZaxis()->SetLabelSize(0.035);
   hinclH3_11dO4__18->GetZaxis()->SetTitleSize(0.035);
   hinclH3_11dO4__18->GetZaxis()->SetTitleFont(42);
   hinclH3_11dO4__18->Draw("histCsame");
   
   Double_t Graph0_fx1009[19] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667,
   103.3333,
   110,
   116.6667,
   123.3333};
   Double_t Graph0_fy1009[19] = {
   0.64,
   1.3,
   1.6,
   2,
   2.1,
   2.4,
   2.5,
   2.3,
   2,
   1.6,
   1.4,
   0.9,
   0.7,
   0.47,
   0.37,
   0.15,
   0.05,
   0.04,
   0.013};
   Double_t Graph0_fex1009[19] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1009[19] = {
   0.08,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.1,
   0.1,
   0.08,
   0.07,
   0.04,
   0.02,
   0.02,
   0.012};
   TGraphErrors *gre = new TGraphErrors(19,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n",100,0,139.3333);
   Graph_Graph1009->SetMinimum(0.0009);
   Graph_Graph1009->SetMaximum(2.9699);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
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
   TLegendEntry *entry=leg->AddEntry("NULL","#theta = 11.4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasH3_1->Modified();
   canvasH3->cd();
  
// ------------>Primitives in pad: canvasH3_3
   TPad *canvasH3_3 = new TPad("canvasH3_3", "canvasH3_3",0,0,0.5209121,0.5209121);
   canvasH3_3->Draw();
   canvasH3_3->cd();
   canvasH3_3->Range(-41.25,-4.761723,146.3,2.69897);
   canvasH3_3->SetFillColor(0);
   canvasH3_3->SetBorderMode(0);
   canvasH3_3->SetBorderSize(2);
   canvasH3_3->SetLogy();
   canvasH3_3->SetLeftMargin(0.1827957);
   canvasH3_3->SetRightMargin(0);
   canvasH3_3->SetTopMargin(0);
   canvasH3_3->SetBottomMargin(0.1827957);
   canvasH3_3->SetFrameBorderMode(0);
   canvasH3_3->SetFrameBorderMode(0);
   
   TH1F *h1H3_17dO2__19 = new TH1F("h1H3_17dO2__19","",1,-6.966667,146.3);
   h1H3_17dO2__19->SetMinimum(0.0004);
   h1H3_17dO2__19->SetMaximum(500);
   h1H3_17dO2__19->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H3_17dO2__19->SetLineColor(ci);
   h1H3_17dO2__19->GetXaxis()->SetRange(1,1);
   h1H3_17dO2__19->GetXaxis()->SetLabelFont(42);
   h1H3_17dO2__19->GetXaxis()->SetLabelSize(0.07);
   h1H3_17dO2__19->GetXaxis()->SetTitleSize(0.07);
   h1H3_17dO2__19->GetXaxis()->SetTitleFont(42);
   h1H3_17dO2__19->GetYaxis()->SetLabelFont(42);
   h1H3_17dO2__19->GetYaxis()->SetLabelSize(0.07);
   h1H3_17dO2__19->GetYaxis()->SetTitleSize(0.07);
   h1H3_17dO2__19->GetYaxis()->SetTitleOffset(1.1);
   h1H3_17dO2__19->GetYaxis()->SetTitleFont(42);
   h1H3_17dO2__19->GetZaxis()->SetLabelFont(42);
   h1H3_17dO2__19->GetZaxis()->SetLabelSize(0.035);
   h1H3_17dO2__19->GetZaxis()->SetTitleSize(0.035);
   h1H3_17dO2__19->GetZaxis()->SetTitleFont(42);
   h1H3_17dO2__19->Draw("");
   
   TH1F *hinclH3_17dO2__20 = new TH1F("hinclH3_17dO2__20","INCL",15,0,100);
   hinclH3_17dO2__20->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_17dO2__20->SetLineColor(ci);
   hinclH3_17dO2__20->SetLineWidth(2);
   hinclH3_17dO2__20->GetXaxis()->SetRange(0,16);
   hinclH3_17dO2__20->GetXaxis()->SetLabelFont(42);
   hinclH3_17dO2__20->GetXaxis()->SetLabelSize(0.035);
   hinclH3_17dO2__20->GetXaxis()->SetTitleSize(0.035);
   hinclH3_17dO2__20->GetXaxis()->SetTitleFont(42);
   hinclH3_17dO2__20->GetYaxis()->SetLabelFont(42);
   hinclH3_17dO2__20->GetYaxis()->SetLabelSize(0.035);
   hinclH3_17dO2__20->GetYaxis()->SetTitleSize(0.035);
   hinclH3_17dO2__20->GetYaxis()->SetTitleFont(42);
   hinclH3_17dO2__20->GetZaxis()->SetLabelFont(42);
   hinclH3_17dO2__20->GetZaxis()->SetLabelSize(0.035);
   hinclH3_17dO2__20->GetZaxis()->SetTitleSize(0.035);
   hinclH3_17dO2__20->GetZaxis()->SetTitleFont(42);
   hinclH3_17dO2__20->Draw("histCsame");
   
   Double_t Graph0_fx1010[15] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667};
   Double_t Graph0_fy1010[15] = {
   0.3,
   0.9,
   0.89,
   0.8,
   0.9,
   0.9,
   0.7,
   0.56,
   0.46,
   0.41,
   0.27,
   0.18,
   0.07,
   0.04,
   0.015};
   Double_t Graph0_fex1010[15] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1010[15] = {
   0.04,
   0.1,
   0.09,
   0.1,
   0.1,
   0.1,
   0.1,
   0.09,
   0.08,
   0.07,
   0.06,
   0.04,
   0.02,
   0.02,
   0.012};
   gre = new TGraphErrors(15,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,0,110);
   Graph_Graph1010->SetMinimum(0.0027);
   Graph_Graph1010->SetMaximum(1.0997);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("p ");
   
   leg = new TLegend(0.2718386,0.2303651,0.5412715,0.4740848,NULL,"brNDC");
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
   entry=leg->AddEntry("hinclH3_17.2","INCL","l");

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
   entry=leg->AddEntry("NULL","#theta = 17.2","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasH3_3->Modified();
   canvasH3->cd();
  
// ------------>Primitives in pad: canvasH3_2
   TPad *canvasH3_2 = new TPad("canvasH3_2", "canvasH3_2",0.5209121,0.5209121,0.9504264,0.9504264);
   canvasH3_2->Draw();
   canvasH3_2->cd();
   canvasH3_2->Range(-6.966667,-3.39794,146.3,2.69897);
   canvasH3_2->SetFillColor(0);
   canvasH3_2->SetBorderMode(0);
   canvasH3_2->SetBorderSize(2);
   canvasH3_2->SetLogy();
   canvasH3_2->SetLeftMargin(0);
   canvasH3_2->SetRightMargin(0);
   canvasH3_2->SetTopMargin(0);
   canvasH3_2->SetBottomMargin(0);
   canvasH3_2->SetFrameBorderMode(0);
   canvasH3_2->SetFrameBorderMode(0);
   
   TH1F *h1H3_14dO4__21 = new TH1F("h1H3_14dO4__21","",1,-6.966667,146.3);
   h1H3_14dO4__21->SetMinimum(0.0004);
   h1H3_14dO4__21->SetMaximum(500);
   h1H3_14dO4__21->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H3_14dO4__21->SetLineColor(ci);
   h1H3_14dO4__21->GetXaxis()->SetRange(1,1);
   h1H3_14dO4__21->GetXaxis()->SetLabelFont(42);
   h1H3_14dO4__21->GetXaxis()->SetLabelSize(0.07);
   h1H3_14dO4__21->GetXaxis()->SetTitleSize(0.07);
   h1H3_14dO4__21->GetXaxis()->SetTitleFont(42);
   h1H3_14dO4__21->GetYaxis()->SetLabelFont(42);
   h1H3_14dO4__21->GetYaxis()->SetLabelSize(0.07);
   h1H3_14dO4__21->GetYaxis()->SetTitleSize(0.07);
   h1H3_14dO4__21->GetYaxis()->SetTitleOffset(1.1);
   h1H3_14dO4__21->GetYaxis()->SetTitleFont(42);
   h1H3_14dO4__21->GetZaxis()->SetLabelFont(42);
   h1H3_14dO4__21->GetZaxis()->SetLabelSize(0.035);
   h1H3_14dO4__21->GetZaxis()->SetTitleSize(0.035);
   h1H3_14dO4__21->GetZaxis()->SetTitleFont(42);
   h1H3_14dO4__21->Draw("");
   
   TH1F *hinclH3_14dO4__22 = new TH1F("hinclH3_14dO4__22","INCL",17,0,113.3333);
   hinclH3_14dO4__22->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_14dO4__22->SetLineColor(ci);
   hinclH3_14dO4__22->SetLineWidth(2);
   hinclH3_14dO4__22->GetXaxis()->SetRange(0,18);
   hinclH3_14dO4__22->GetXaxis()->SetLabelFont(42);
   hinclH3_14dO4__22->GetXaxis()->SetLabelSize(0.035);
   hinclH3_14dO4__22->GetXaxis()->SetTitleSize(0.035);
   hinclH3_14dO4__22->GetXaxis()->SetTitleFont(42);
   hinclH3_14dO4__22->GetYaxis()->SetLabelFont(42);
   hinclH3_14dO4__22->GetYaxis()->SetLabelSize(0.035);
   hinclH3_14dO4__22->GetYaxis()->SetTitleSize(0.035);
   hinclH3_14dO4__22->GetYaxis()->SetTitleFont(42);
   hinclH3_14dO4__22->GetZaxis()->SetLabelFont(42);
   hinclH3_14dO4__22->GetZaxis()->SetLabelSize(0.035);
   hinclH3_14dO4__22->GetZaxis()->SetTitleSize(0.035);
   hinclH3_14dO4__22->GetZaxis()->SetTitleFont(42);
   hinclH3_14dO4__22->Draw("histCsame");
   
   Double_t Graph0_fx1011[17] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667,
   103.3333,
   110};
   Double_t Graph0_fy1011[17] = {
   0.49,
   1.1,
   1,
   1.2,
   1.5,
   1.7,
   1.7,
   1.6,
   1.6,
   1.1,
   0.67,
   0.4,
   0.21,
   0.11,
   0.04,
   0.03,
   0.015};
   Double_t Graph0_fex1011[17] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1011[17] = {
   0.06,
   0.1,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.08,
   0.06,
   0.04,
   0.03,
   0.02,
   0.02,
   0.012};
   gre = new TGraphErrors(17,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,0,124.6667);
   Graph_Graph1011->SetMinimum(0.0027);
   Graph_Graph1011->SetMaximum(2.0897);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
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
   canvasH3_2->Modified();
   canvasH3->cd();
  
// ------------>Primitives in pad: canvasH3_4
   TPad *canvasH3_4 = new TPad("canvasH3_4", "canvasH3_4",0.5209121,0,0.9504264,0.5209121);
   canvasH3_4->Draw();
   canvasH3_4->cd();
   canvasH3_4->Range(-6.966667,-4.761723,146.3,2.69897);
   canvasH3_4->SetFillColor(0);
   canvasH3_4->SetBorderMode(0);
   canvasH3_4->SetBorderSize(2);
   canvasH3_4->SetLogy();
   canvasH3_4->SetLeftMargin(0);
   canvasH3_4->SetRightMargin(0);
   canvasH3_4->SetTopMargin(0);
   canvasH3_4->SetBottomMargin(0.1827957);
   canvasH3_4->SetFrameBorderMode(0);
   canvasH3_4->SetFrameBorderMode(0);
   
   TH1F *h1H3_19dO4__23 = new TH1F("h1H3_19dO4__23","",1,-6.966667,146.3);
   h1H3_19dO4__23->SetMinimum(0.0004);
   h1H3_19dO4__23->SetMaximum(500);
   h1H3_19dO4__23->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H3_19dO4__23->SetLineColor(ci);
   h1H3_19dO4__23->GetXaxis()->SetTitle("E  [MeV/n]");
   h1H3_19dO4__23->GetXaxis()->SetRange(1,1);
   h1H3_19dO4__23->GetXaxis()->SetLabelFont(42);
   h1H3_19dO4__23->GetXaxis()->SetLabelSize(0.07);
   h1H3_19dO4__23->GetXaxis()->SetTitleSize(0.07);
   h1H3_19dO4__23->GetXaxis()->SetTitleFont(42);
   h1H3_19dO4__23->GetYaxis()->SetLabelFont(42);
   h1H3_19dO4__23->GetYaxis()->SetLabelSize(0.07);
   h1H3_19dO4__23->GetYaxis()->SetTitleSize(0.07);
   h1H3_19dO4__23->GetYaxis()->SetTitleOffset(1.1);
   h1H3_19dO4__23->GetYaxis()->SetTitleFont(42);
   h1H3_19dO4__23->GetZaxis()->SetLabelFont(42);
   h1H3_19dO4__23->GetZaxis()->SetLabelSize(0.035);
   h1H3_19dO4__23->GetZaxis()->SetTitleSize(0.035);
   h1H3_19dO4__23->GetZaxis()->SetTitleFont(42);
   h1H3_19dO4__23->Draw("");
   
   TH1F *hinclH3_19dO4__24 = new TH1F("hinclH3_19dO4__24","INCL",13,0,93.33333);
   hinclH3_19dO4__24->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_19dO4__24->SetLineColor(ci);
   hinclH3_19dO4__24->SetLineWidth(2);
   hinclH3_19dO4__24->GetXaxis()->SetRange(0,14);
   hinclH3_19dO4__24->GetXaxis()->SetLabelFont(42);
   hinclH3_19dO4__24->GetXaxis()->SetLabelSize(0.035);
   hinclH3_19dO4__24->GetXaxis()->SetTitleSize(0.035);
   hinclH3_19dO4__24->GetXaxis()->SetTitleFont(42);
   hinclH3_19dO4__24->GetYaxis()->SetLabelFont(42);
   hinclH3_19dO4__24->GetYaxis()->SetLabelSize(0.035);
   hinclH3_19dO4__24->GetYaxis()->SetTitleSize(0.035);
   hinclH3_19dO4__24->GetYaxis()->SetTitleFont(42);
   hinclH3_19dO4__24->GetZaxis()->SetLabelFont(42);
   hinclH3_19dO4__24->GetZaxis()->SetLabelSize(0.035);
   hinclH3_19dO4__24->GetZaxis()->SetTitleSize(0.035);
   hinclH3_19dO4__24->GetZaxis()->SetTitleFont(42);
   hinclH3_19dO4__24->Draw("histCsame");
   
   Double_t Graph0_fx1012[14] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90};
   Double_t Graph0_fy1012[14] = {
   0.26,
   0.7,
   0.7,
   0.66,
   0.8,
   0.8,
   0.61,
   0.48,
   0.36,
   0.23,
   0.17,
   0.1,
   0.023,
   0.02};
   Double_t Graph0_fex1012[14] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1012[14] = {
   0.04,
   0.1,
   0.1,
   0.09,
   0.1,
   0.1,
   0.09,
   0.09,
   0.07,
   0.06,
   0.05,
   0.04,
   0.017,
   0.017};
   gre = new TGraphErrors(14,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,0,102.6667);
   Graph_Graph1012->SetMinimum(0.0027);
   Graph_Graph1012->SetMaximum(0.9897);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
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
   entry=leg->AddEntry("NULL","#theta = 19.4","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   canvasH3_4->Modified();
   canvasH3->cd();
   canvasH3->Modified();
   canvasH3->cd();
   canvasH3->SetSelected(canvasH3);
}
