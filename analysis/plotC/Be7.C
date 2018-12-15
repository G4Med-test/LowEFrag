void Be7()
{
//=========Macro generated from canvas: canvasBe7/canvasBe7
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
   TCanvas *canvasBe7 = new TCanvas("canvasBe7", "canvasBe7",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasBe7->Range(0,0,1,1);
   canvasBe7->SetFillColor(0);
   canvasBe7->SetBorderMode(0);
   canvasBe7->SetBorderSize(2);
   canvasBe7->SetRightMargin(0.04957356);
   canvasBe7->SetTopMargin(0.03208003);
   canvasBe7->SetBottomMargin(0.0609319);
   canvasBe7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasBe7_1
   TPad *canvasBe7_1 = new TPad("canvasBe7_1", "canvasBe7_1",0,0.6655906,0.5209121,0.96792);
   canvasBe7_1->Draw();
   canvasBe7_1->cd();
   canvasBe7_1->Range(-28.38496,-3.39794,104.64,2.69897);
   canvasBe7_1->SetFillColor(0);
   canvasBe7_1->SetBorderMode(0);
   canvasBe7_1->SetBorderSize(2);
   canvasBe7_1->SetLogy();
   canvasBe7_1->SetLeftMargin(0.1827957);
   canvasBe7_1->SetRightMargin(0);
   canvasBe7_1->SetTopMargin(0);
   canvasBe7_1->SetBottomMargin(0);
   canvasBe7_1->SetFrameBorderMode(0);
   canvasBe7_1->SetFrameBorderMode(0);
   
   TH1F *h1Be7_2dO2__61 = new TH1F("h1Be7_2dO2__61","^{12}C + ^{nat}C #rightarrow ^{7}Be at 62 MeV/n",1,-4.068571,104.64);
   h1Be7_2dO2__61->SetMinimum(0.0004);
   h1Be7_2dO2__61->SetMaximum(500);
   h1Be7_2dO2__61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Be7_2dO2__61->SetLineColor(ci);
   h1Be7_2dO2__61->GetXaxis()->SetRange(1,1);
   h1Be7_2dO2__61->GetXaxis()->SetLabelFont(42);
   h1Be7_2dO2__61->GetXaxis()->SetLabelSize(0.07);
   h1Be7_2dO2__61->GetXaxis()->SetTitleSize(0.07);
   h1Be7_2dO2__61->GetXaxis()->SetTitleFont(42);
   h1Be7_2dO2__61->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Be7_2dO2__61->GetYaxis()->SetLabelFont(42);
   h1Be7_2dO2__61->GetYaxis()->SetLabelSize(0.07);
   h1Be7_2dO2__61->GetYaxis()->SetTitleSize(0.07);
   h1Be7_2dO2__61->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_2dO2__61->GetYaxis()->SetTitleFont(42);
   h1Be7_2dO2__61->GetZaxis()->SetLabelFont(42);
   h1Be7_2dO2__61->GetZaxis()->SetLabelSize(0.035);
   h1Be7_2dO2__61->GetZaxis()->SetTitleSize(0.035);
   h1Be7_2dO2__61->GetZaxis()->SetTitleFont(42);
   h1Be7_2dO2__61->Draw("");
   
   TPaveText *pt = new TPaveText(0.2596831,0.9312746,0.7403169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{7}Be at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclBe7_2dO2__62 = new TH1F("hinclBe7_2dO2__62","INCL",18,9.142857,91.42857);
   hinclBe7_2dO2__62->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_2dO2__62->SetLineColor(ci);
   hinclBe7_2dO2__62->SetLineWidth(2);
   hinclBe7_2dO2__62->GetXaxis()->SetRange(0,19);
   hinclBe7_2dO2__62->GetXaxis()->SetLabelFont(42);
   hinclBe7_2dO2__62->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_2dO2__62->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_2dO2__62->GetXaxis()->SetTitleFont(42);
   hinclBe7_2dO2__62->GetYaxis()->SetLabelFont(42);
   hinclBe7_2dO2__62->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_2dO2__62->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_2dO2__62->GetYaxis()->SetTitleFont(42);
   hinclBe7_2dO2__62->GetZaxis()->SetLabelFont(42);
   hinclBe7_2dO2__62->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_2dO2__62->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_2dO2__62->GetZaxis()->SetTitleFont(42);
   hinclBe7_2dO2__62->Draw("histCsame");
   
   Double_t Graph0_fx1031[18] = {
   11.42857,
   16,
   20.57143,
   25.14286,
   29.71429,
   34.28571,
   38.85714,
   43.42857,
   48,
   52.57143,
   57.14286,
   61.71429,
   66.28571,
   70.85714,
   75.42857,
   80,
   84.57143,
   89.14286};
   Double_t Graph0_fy1031[18] = {
   0.3,
   0.4,
   0.5,
   0.4,
   0.7,
   0.8,
   0.9,
   1.2,
   1.8,
   2.3,
   3.3,
   4.2,
   3.2,
   2.5,
   1.8,
   0.5,
   0.3,
   0.14};
   Double_t Graph0_fex1031[18] = {
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714};
   Double_t Graph0_fey1031[18] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.3,
   0.3,
   0.4,
   0.5,
   0.6,
   0.7,
   0.6,
   0.5,
   0.4,
   0.2,
   0.2,
   0.12};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{7}Be at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","^{12}C + ^{nat}C #rightarrow ^{7}Be at 62 MeV/n",100,0.9142857,99.65714);
   Graph_Graph1031->SetMinimum(0.018);
   Graph_Graph1031->SetMaximum(5.388);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
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
   canvasBe7_1->Modified();
   canvasBe7->cd();
  
// ------------>Primitives in pad: canvasBe7_3
   TPad *canvasBe7_3 = new TPad("canvasBe7_3", "canvasBe7_3",0,0.3632613,0.5209121,0.6655906);
   canvasBe7_3->Draw();
   canvasBe7_3->cd();
   canvasBe7_3->Range(-28.38496,-3.39794,104.64,2.69897);
   canvasBe7_3->SetFillColor(0);
   canvasBe7_3->SetBorderMode(0);
   canvasBe7_3->SetBorderSize(2);
   canvasBe7_3->SetLogy();
   canvasBe7_3->SetLeftMargin(0.1827957);
   canvasBe7_3->SetRightMargin(0);
   canvasBe7_3->SetTopMargin(0);
   canvasBe7_3->SetBottomMargin(0);
   canvasBe7_3->SetFrameBorderMode(0);
   canvasBe7_3->SetFrameBorderMode(0);
   
   TH1F *h1Be7_7dO6__63 = new TH1F("h1Be7_7dO6__63","",1,-4.068571,104.64);
   h1Be7_7dO6__63->SetMinimum(0.0004);
   h1Be7_7dO6__63->SetMaximum(500);
   h1Be7_7dO6__63->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_7dO6__63->SetLineColor(ci);
   h1Be7_7dO6__63->GetXaxis()->SetRange(1,1);
   h1Be7_7dO6__63->GetXaxis()->SetLabelFont(42);
   h1Be7_7dO6__63->GetXaxis()->SetLabelSize(0.07);
   h1Be7_7dO6__63->GetXaxis()->SetTitleSize(0.07);
   h1Be7_7dO6__63->GetXaxis()->SetTitleFont(42);
   h1Be7_7dO6__63->GetYaxis()->SetLabelFont(42);
   h1Be7_7dO6__63->GetYaxis()->SetLabelSize(0.07);
   h1Be7_7dO6__63->GetYaxis()->SetTitleSize(0.07);
   h1Be7_7dO6__63->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_7dO6__63->GetYaxis()->SetTitleFont(42);
   h1Be7_7dO6__63->GetZaxis()->SetLabelFont(42);
   h1Be7_7dO6__63->GetZaxis()->SetLabelSize(0.035);
   h1Be7_7dO6__63->GetZaxis()->SetTitleSize(0.035);
   h1Be7_7dO6__63->GetZaxis()->SetTitleFont(42);
   h1Be7_7dO6__63->Draw("");
   
   TH1F *hinclBe7_7dO6__64 = new TH1F("hinclBe7_7dO6__64","INCL",16,9.142857,82.28571);
   hinclBe7_7dO6__64->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_7dO6__64->SetLineColor(ci);
   hinclBe7_7dO6__64->SetLineWidth(2);
   hinclBe7_7dO6__64->GetXaxis()->SetRange(0,17);
   hinclBe7_7dO6__64->GetXaxis()->SetLabelFont(42);
   hinclBe7_7dO6__64->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_7dO6__64->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_7dO6__64->GetXaxis()->SetTitleFont(42);
   hinclBe7_7dO6__64->GetYaxis()->SetLabelFont(42);
   hinclBe7_7dO6__64->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_7dO6__64->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_7dO6__64->GetYaxis()->SetTitleFont(42);
   hinclBe7_7dO6__64->GetZaxis()->SetLabelFont(42);
   hinclBe7_7dO6__64->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_7dO6__64->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_7dO6__64->GetZaxis()->SetTitleFont(42);
   hinclBe7_7dO6__64->Draw("histCsame");
   
   Double_t Graph0_fx1032[16] = {
   11.42857,
   16,
   20.57143,
   25.14286,
   29.71429,
   34.28571,
   38.85714,
   43.42857,
   48,
   52.57143,
   57.14286,
   61.71429,
   66.28571,
   70.85714,
   75.42857,
   80};
   Double_t Graph0_fy1032[16] = {
   0.14,
   0.2,
   0.22,
   0.31,
   0.39,
   0.45,
   0.67,
   0.8,
   1.3,
   1.5,
   1.6,
   1.1,
   0.66,
   0.34,
   0.1,
   0.02};
   Double_t Graph0_fex1032[16] = {
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714};
   Double_t Graph0_fey1032[16] = {
   0.03,
   0.04,
   0.04,
   0.05,
   0.06,
   0.06,
   0.08,
   0.1,
   0.1,
   0.2,
   0.2,
   0.1,
   0.09,
   0.05,
   0.03,
   0.01};
   gre = new TGraphErrors(16,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","",100,1.828571,89.6);
   Graph_Graph1032->SetMinimum(0.009);
   Graph_Graph1032->SetMaximum(1.979);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1032->SetLineColor(ci);
   Graph_Graph1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph1032->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1032->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1032);
   
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
   canvasBe7_3->Modified();
   canvasBe7->cd();
  
// ------------>Primitives in pad: canvasBe7_5
   TPad *canvasBe7_5 = new TPad("canvasBe7_5", "canvasBe7_5",0,0,0.5209121,0.3632613);
   canvasBe7_5->Draw();
   canvasBe7_5->cd();
   canvasBe7_5->Range(-28.38496,-4.761723,104.64,2.69897);
   canvasBe7_5->SetFillColor(0);
   canvasBe7_5->SetBorderMode(0);
   canvasBe7_5->SetBorderSize(2);
   canvasBe7_5->SetLogy();
   canvasBe7_5->SetLeftMargin(0.1827957);
   canvasBe7_5->SetRightMargin(0);
   canvasBe7_5->SetTopMargin(0);
   canvasBe7_5->SetBottomMargin(0.1827957);
   canvasBe7_5->SetFrameBorderMode(0);
   canvasBe7_5->SetFrameBorderMode(0);
   
   TH1F *h1Be7_18__65 = new TH1F("h1Be7_18__65","",1,-4.068571,104.64);
   h1Be7_18__65->SetMinimum(0.0004);
   h1Be7_18__65->SetMaximum(500);
   h1Be7_18__65->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_18__65->SetLineColor(ci);
   h1Be7_18__65->GetXaxis()->SetRange(1,1);
   h1Be7_18__65->GetXaxis()->SetLabelFont(42);
   h1Be7_18__65->GetXaxis()->SetLabelSize(0.07);
   h1Be7_18__65->GetXaxis()->SetTitleSize(0.07);
   h1Be7_18__65->GetXaxis()->SetTitleFont(42);
   h1Be7_18__65->GetYaxis()->SetLabelFont(42);
   h1Be7_18__65->GetYaxis()->SetLabelSize(0.07);
   h1Be7_18__65->GetYaxis()->SetTitleSize(0.07);
   h1Be7_18__65->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_18__65->GetYaxis()->SetTitleFont(42);
   h1Be7_18__65->GetZaxis()->SetLabelFont(42);
   h1Be7_18__65->GetZaxis()->SetLabelSize(0.035);
   h1Be7_18__65->GetZaxis()->SetTitleSize(0.035);
   h1Be7_18__65->GetZaxis()->SetTitleFont(42);
   h1Be7_18__65->Draw("");
   
   TH1F *hinclBe7_18__66 = new TH1F("hinclBe7_18__66","INCL",16,9.142857,82.28571);
   hinclBe7_18__66->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_18__66->SetLineColor(ci);
   hinclBe7_18__66->SetLineWidth(2);
   hinclBe7_18__66->GetXaxis()->SetRange(0,17);
   hinclBe7_18__66->GetXaxis()->SetLabelFont(42);
   hinclBe7_18__66->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_18__66->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_18__66->GetXaxis()->SetTitleFont(42);
   hinclBe7_18__66->GetYaxis()->SetLabelFont(42);
   hinclBe7_18__66->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_18__66->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_18__66->GetYaxis()->SetTitleFont(42);
   hinclBe7_18__66->GetZaxis()->SetLabelFont(42);
   hinclBe7_18__66->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_18__66->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_18__66->GetZaxis()->SetTitleFont(42);
   hinclBe7_18__66->Draw("histCsame");
   
   Double_t Graph0_fx1033[16] = {
   11.42857,
   16,
   20.57143,
   25.14286,
   29.71429,
   34.28571,
   38.85714,
   43.42857,
   48,
   52.57143,
   57.14286,
   61.71429,
   66.28571,
   70.85714,
   75.42857,
   80};
   Double_t Graph0_fy1033[16] = {
   0.03,
   0.06,
   0.06,
   0.049,
   0.043,
   0.047,
   0.048,
   0.05,
   0.05,
   0.044,
   0.037,
   0.035,
   0.014,
   0.0023,
   0.0006,
   0.0003};
   Double_t Graph0_fex1033[16] = {
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714};
   Double_t Graph0_fey1033[16] = {
   0.006,
   0.01,
   0.01,
   0.009,
   0.008,
   0.009,
   0.009,
   0.01,
   0.01,
   0.009,
   0.008,
   0.008,
   0.005,
   0.0006,
   0.0003,
   0.0002};
   gre = new TGraphErrors(16,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,1.828571,89.6);
   Graph_Graph1033->SetMinimum(9e-05);
   Graph_Graph1033->SetMaximum(0.07699);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
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
   entry=leg->AddEntry("hinclBe7_18","INCL","l");

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
   canvasBe7_5->Modified();
   canvasBe7->cd();
  
// ------------>Primitives in pad: canvasBe7_2
   TPad *canvasBe7_2 = new TPad("canvasBe7_2", "canvasBe7_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasBe7_2->Draw();
   canvasBe7_2->cd();
   canvasBe7_2->Range(-4.068571,-3.39794,104.64,2.69897);
   canvasBe7_2->SetFillColor(0);
   canvasBe7_2->SetBorderMode(0);
   canvasBe7_2->SetBorderSize(2);
   canvasBe7_2->SetLogy();
   canvasBe7_2->SetLeftMargin(0);
   canvasBe7_2->SetRightMargin(0);
   canvasBe7_2->SetTopMargin(0);
   canvasBe7_2->SetBottomMargin(0);
   canvasBe7_2->SetFrameBorderMode(0);
   canvasBe7_2->SetFrameBorderMode(0);
   
   TH1F *h1Be7_4dO9__67 = new TH1F("h1Be7_4dO9__67","",1,-4.068571,104.64);
   h1Be7_4dO9__67->SetMinimum(0.0004);
   h1Be7_4dO9__67->SetMaximum(500);
   h1Be7_4dO9__67->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_4dO9__67->SetLineColor(ci);
   h1Be7_4dO9__67->GetXaxis()->SetRange(1,1);
   h1Be7_4dO9__67->GetXaxis()->SetLabelFont(42);
   h1Be7_4dO9__67->GetXaxis()->SetLabelSize(0.07);
   h1Be7_4dO9__67->GetXaxis()->SetTitleSize(0.07);
   h1Be7_4dO9__67->GetXaxis()->SetTitleFont(42);
   h1Be7_4dO9__67->GetYaxis()->SetLabelFont(42);
   h1Be7_4dO9__67->GetYaxis()->SetLabelSize(0.07);
   h1Be7_4dO9__67->GetYaxis()->SetTitleSize(0.07);
   h1Be7_4dO9__67->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_4dO9__67->GetYaxis()->SetTitleFont(42);
   h1Be7_4dO9__67->GetZaxis()->SetLabelFont(42);
   h1Be7_4dO9__67->GetZaxis()->SetLabelSize(0.035);
   h1Be7_4dO9__67->GetZaxis()->SetTitleSize(0.035);
   h1Be7_4dO9__67->GetZaxis()->SetTitleFont(42);
   h1Be7_4dO9__67->Draw("");
   
   TH1F *hinclBe7_4dO9__68 = new TH1F("hinclBe7_4dO9__68","INCL",17,9.142857,86.85714);
   hinclBe7_4dO9__68->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_4dO9__68->SetLineColor(ci);
   hinclBe7_4dO9__68->SetLineWidth(2);
   hinclBe7_4dO9__68->GetXaxis()->SetRange(0,18);
   hinclBe7_4dO9__68->GetXaxis()->SetLabelFont(42);
   hinclBe7_4dO9__68->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_4dO9__68->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_4dO9__68->GetXaxis()->SetTitleFont(42);
   hinclBe7_4dO9__68->GetYaxis()->SetLabelFont(42);
   hinclBe7_4dO9__68->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_4dO9__68->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_4dO9__68->GetYaxis()->SetTitleFont(42);
   hinclBe7_4dO9__68->GetZaxis()->SetLabelFont(42);
   hinclBe7_4dO9__68->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_4dO9__68->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_4dO9__68->GetZaxis()->SetTitleFont(42);
   hinclBe7_4dO9__68->Draw("histCsame");
   
   Double_t Graph0_fx1034[17] = {
   11.42857,
   16,
   20.57143,
   25.14286,
   29.71429,
   34.28571,
   38.85714,
   43.42857,
   48,
   52.57143,
   57.14286,
   61.71429,
   66.28571,
   70.85714,
   75.42857,
   80,
   84.57143};
   Double_t Graph0_fy1034[17] = {
   0.2,
   0.3,
   0.3,
   0.4,
   0.6,
   0.5,
   0.6,
   1,
   1.8,
   2.2,
   2.8,
   2.2,
   0.9,
   0.7,
   0.3,
   0.2,
   0.13};
   Double_t Graph0_fex1034[17] = {
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714};
   Double_t Graph0_fey1034[17] = {
   0.1,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.4,
   0.5,
   0.6,
   0.5,
   0.3,
   0.2,
   0.2,
   0.1,
   0.12};
   gre = new TGraphErrors(17,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1034 = new TH1F("Graph_Graph1034","",100,1.371429,94.62857);
   Graph_Graph1034->SetMinimum(0.009);
   Graph_Graph1034->SetMaximum(3.739);
   Graph_Graph1034->SetDirectory(0);
   Graph_Graph1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1034->SetLineColor(ci);
   Graph_Graph1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph1034->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1034->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1034->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1034->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1034);
   
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
   canvasBe7_2->Modified();
   canvasBe7->cd();
  
// ------------>Primitives in pad: canvasBe7_4
   TPad *canvasBe7_4 = new TPad("canvasBe7_4", "canvasBe7_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasBe7_4->Draw();
   canvasBe7_4->cd();
   canvasBe7_4->Range(-4.068571,-3.39794,104.64,2.69897);
   canvasBe7_4->SetFillColor(0);
   canvasBe7_4->SetBorderMode(0);
   canvasBe7_4->SetBorderSize(2);
   canvasBe7_4->SetLogy();
   canvasBe7_4->SetLeftMargin(0);
   canvasBe7_4->SetRightMargin(0);
   canvasBe7_4->SetTopMargin(0);
   canvasBe7_4->SetBottomMargin(0);
   canvasBe7_4->SetFrameBorderMode(0);
   canvasBe7_4->SetFrameBorderMode(0);
   
   TH1F *h1Be7_14dO4__69 = new TH1F("h1Be7_14dO4__69","",1,-4.068571,104.64);
   h1Be7_14dO4__69->SetMinimum(0.0004);
   h1Be7_14dO4__69->SetMaximum(500);
   h1Be7_14dO4__69->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_14dO4__69->SetLineColor(ci);
   h1Be7_14dO4__69->GetXaxis()->SetRange(1,1);
   h1Be7_14dO4__69->GetXaxis()->SetLabelFont(42);
   h1Be7_14dO4__69->GetXaxis()->SetLabelSize(0.07);
   h1Be7_14dO4__69->GetXaxis()->SetTitleSize(0.07);
   h1Be7_14dO4__69->GetXaxis()->SetTitleFont(42);
   h1Be7_14dO4__69->GetYaxis()->SetLabelFont(42);
   h1Be7_14dO4__69->GetYaxis()->SetLabelSize(0.07);
   h1Be7_14dO4__69->GetYaxis()->SetTitleSize(0.07);
   h1Be7_14dO4__69->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_14dO4__69->GetYaxis()->SetTitleFont(42);
   h1Be7_14dO4__69->GetZaxis()->SetLabelFont(42);
   h1Be7_14dO4__69->GetZaxis()->SetLabelSize(0.035);
   h1Be7_14dO4__69->GetZaxis()->SetTitleSize(0.035);
   h1Be7_14dO4__69->GetZaxis()->SetTitleFont(42);
   h1Be7_14dO4__69->Draw("");
   
   TH1F *hinclBe7_14dO4__70 = new TH1F("hinclBe7_14dO4__70","INCL",16,9.142857,82.28571);
   hinclBe7_14dO4__70->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_14dO4__70->SetLineColor(ci);
   hinclBe7_14dO4__70->SetLineWidth(2);
   hinclBe7_14dO4__70->GetXaxis()->SetRange(0,17);
   hinclBe7_14dO4__70->GetXaxis()->SetLabelFont(42);
   hinclBe7_14dO4__70->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_14dO4__70->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_14dO4__70->GetXaxis()->SetTitleFont(42);
   hinclBe7_14dO4__70->GetYaxis()->SetLabelFont(42);
   hinclBe7_14dO4__70->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_14dO4__70->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_14dO4__70->GetYaxis()->SetTitleFont(42);
   hinclBe7_14dO4__70->GetZaxis()->SetLabelFont(42);
   hinclBe7_14dO4__70->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_14dO4__70->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_14dO4__70->GetZaxis()->SetTitleFont(42);
   hinclBe7_14dO4__70->Draw("histCsame");
   
   Double_t Graph0_fx1035[16] = {
   11.42857,
   16,
   20.57143,
   25.14286,
   29.71429,
   34.28571,
   38.85714,
   43.42857,
   48,
   52.57143,
   57.14286,
   61.71429,
   66.28571,
   70.85714,
   75.42857,
   80};
   Double_t Graph0_fy1035[16] = {
   0.046,
   0.09,
   0.08,
   0.08,
   0.1,
   0.1,
   0.14,
   0.11,
   0.14,
   0.15,
   0.15,
   0.08,
   0.041,
   0.023,
   0.008,
   0.003};
   Double_t Graph0_fex1035[16] = {
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714};
   Double_t Graph0_fey1035[16] = {
   0.008,
   0.01,
   0.01,
   0.01,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.01,
   0.008,
   0.006,
   0.004,
   0.002};
   gre = new TGraphErrors(16,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,1.828571,89.6);
   Graph_Graph1035->SetMinimum(0.0009);
   Graph_Graph1035->SetMaximum(0.1869);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1035->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
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
   canvasBe7_4->Modified();
   canvasBe7->cd();
  
// ------------>Primitives in pad: canvasBe7_6
   TPad *canvasBe7_6 = new TPad("canvasBe7_6", "canvasBe7_6",0.5209121,0,0.9504264,0.3632613);
   canvasBe7_6->Draw();
   canvasBe7_6->cd();
   canvasBe7_6->Range(-4.068571,-4.761723,104.64,2.69897);
   canvasBe7_6->SetFillColor(0);
   canvasBe7_6->SetBorderMode(0);
   canvasBe7_6->SetBorderSize(2);
   canvasBe7_6->SetLogy();
   canvasBe7_6->SetLeftMargin(0);
   canvasBe7_6->SetRightMargin(0);
   canvasBe7_6->SetTopMargin(0);
   canvasBe7_6->SetBottomMargin(0.1827957);
   canvasBe7_6->SetFrameBorderMode(0);
   canvasBe7_6->SetFrameBorderMode(0);
   
   TH1F *h1Be7_21dO8__71 = new TH1F("h1Be7_21dO8__71","",1,-4.068571,104.64);
   h1Be7_21dO8__71->SetMinimum(0.0004);
   h1Be7_21dO8__71->SetMaximum(500);
   h1Be7_21dO8__71->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_21dO8__71->SetLineColor(ci);
   h1Be7_21dO8__71->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Be7_21dO8__71->GetXaxis()->SetRange(1,1);
   h1Be7_21dO8__71->GetXaxis()->SetLabelFont(42);
   h1Be7_21dO8__71->GetXaxis()->SetLabelSize(0.07);
   h1Be7_21dO8__71->GetXaxis()->SetTitleSize(0.07);
   h1Be7_21dO8__71->GetXaxis()->SetTitleFont(42);
   h1Be7_21dO8__71->GetYaxis()->SetLabelFont(42);
   h1Be7_21dO8__71->GetYaxis()->SetLabelSize(0.07);
   h1Be7_21dO8__71->GetYaxis()->SetTitleSize(0.07);
   h1Be7_21dO8__71->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_21dO8__71->GetYaxis()->SetTitleFont(42);
   h1Be7_21dO8__71->GetZaxis()->SetLabelFont(42);
   h1Be7_21dO8__71->GetZaxis()->SetLabelSize(0.035);
   h1Be7_21dO8__71->GetZaxis()->SetTitleSize(0.035);
   h1Be7_21dO8__71->GetZaxis()->SetTitleFont(42);
   h1Be7_21dO8__71->Draw("");
   
   TH1F *hinclBe7_21dO8__72 = new TH1F("hinclBe7_21dO8__72","INCL",13,9.142857,68.57143);
   hinclBe7_21dO8__72->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_21dO8__72->SetLineColor(ci);
   hinclBe7_21dO8__72->SetLineWidth(2);
   hinclBe7_21dO8__72->GetXaxis()->SetRange(0,14);
   hinclBe7_21dO8__72->GetXaxis()->SetLabelFont(42);
   hinclBe7_21dO8__72->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_21dO8__72->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_21dO8__72->GetXaxis()->SetTitleFont(42);
   hinclBe7_21dO8__72->GetYaxis()->SetLabelFont(42);
   hinclBe7_21dO8__72->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_21dO8__72->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_21dO8__72->GetYaxis()->SetTitleFont(42);
   hinclBe7_21dO8__72->GetZaxis()->SetLabelFont(42);
   hinclBe7_21dO8__72->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_21dO8__72->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_21dO8__72->GetZaxis()->SetTitleFont(42);
   hinclBe7_21dO8__72->Draw("histCsame");
   
   Double_t Graph0_fx1036[13] = {
   11.42857,
   16,
   20.57143,
   25.14286,
   29.71429,
   34.28571,
   38.85714,
   43.42857,
   48,
   52.57143,
   57.14286,
   61.71429,
   66.28571};
   Double_t Graph0_fy1036[13] = {
   0.037,
   0.035,
   0.034,
   0.022,
   0.021,
   0.022,
   0.017,
   0.015,
   0.009,
   0.013,
   0.01,
   0.003,
   0.003};
   Double_t Graph0_fex1036[13] = {
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714,
   2.285714};
   Double_t Graph0_fey1036[13] = {
   0.008,
   0.006,
   0.007,
   0.005,
   0.005,
   0.006,
   0.005,
   0.005,
   0.004,
   0.005,
   0.004,
   0.002,
   0.002};
   gre = new TGraphErrors(13,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1036 = new TH1F("Graph_Graph1036","",100,3.2,74.51429);
   Graph_Graph1036->SetMinimum(0.0009);
   Graph_Graph1036->SetMaximum(0.0494);
   Graph_Graph1036->SetDirectory(0);
   Graph_Graph1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1036->SetLineColor(ci);
   Graph_Graph1036->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph1036->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1036->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1036->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1036->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1036);
   
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
   canvasBe7_6->Modified();
   canvasBe7->cd();
   canvasBe7->Modified();
   canvasBe7->cd();
   canvasBe7->SetSelected(canvasBe7);
}
