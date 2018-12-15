void Li7()
{
//=========Macro generated from canvas: canvasLi7/canvasLi7
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
   TCanvas *canvasLi7 = new TCanvas("canvasLi7", "canvasLi7",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasLi7->Range(0,0,1,1);
   canvasLi7->SetFillColor(0);
   canvasLi7->SetBorderMode(0);
   canvasLi7->SetBorderSize(2);
   canvasLi7->SetRightMargin(0.04957356);
   canvasLi7->SetTopMargin(0.03208003);
   canvasLi7->SetBottomMargin(0.0609319);
   canvasLi7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasLi7_1
   TPad *canvasLi7_1 = new TPad("canvasLi7_1", "canvasLi7_1",0,0.6655906,0.5209121,0.96792);
   canvasLi7_1->Draw();
   canvasLi7_1->cd();
   canvasLi7_1->Range(-26.33684,-3.39794,99.36,2.69897);
   canvasLi7_1->SetFillColor(0);
   canvasLi7_1->SetBorderMode(0);
   canvasLi7_1->SetBorderSize(2);
   canvasLi7_1->SetLogy();
   canvasLi7_1->SetLeftMargin(0.1827957);
   canvasLi7_1->SetRightMargin(0);
   canvasLi7_1->SetTopMargin(0);
   canvasLi7_1->SetBottomMargin(0);
   canvasLi7_1->SetFrameBorderMode(0);
   canvasLi7_1->SetFrameBorderMode(0);
   
   TH1F *h1Li7_2dO2__49 = new TH1F("h1Li7_2dO2__49","^{12}C + ^{nat}C #rightarrow ^{7}Li at 62 MeV/n",1,-3.36,99.36);
   h1Li7_2dO2__49->SetMinimum(0.0004);
   h1Li7_2dO2__49->SetMaximum(500);
   h1Li7_2dO2__49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Li7_2dO2__49->SetLineColor(ci);
   h1Li7_2dO2__49->GetXaxis()->SetRange(1,1);
   h1Li7_2dO2__49->GetXaxis()->SetLabelFont(42);
   h1Li7_2dO2__49->GetXaxis()->SetLabelSize(0.07);
   h1Li7_2dO2__49->GetXaxis()->SetTitleSize(0.07);
   h1Li7_2dO2__49->GetXaxis()->SetTitleFont(42);
   h1Li7_2dO2__49->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Li7_2dO2__49->GetYaxis()->SetLabelFont(42);
   h1Li7_2dO2__49->GetYaxis()->SetLabelSize(0.07);
   h1Li7_2dO2__49->GetYaxis()->SetTitleSize(0.07);
   h1Li7_2dO2__49->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_2dO2__49->GetYaxis()->SetTitleFont(42);
   h1Li7_2dO2__49->GetZaxis()->SetLabelFont(42);
   h1Li7_2dO2__49->GetZaxis()->SetLabelSize(0.035);
   h1Li7_2dO2__49->GetZaxis()->SetTitleSize(0.035);
   h1Li7_2dO2__49->GetZaxis()->SetTitleFont(42);
   h1Li7_2dO2__49->Draw("");
   
   TPaveText *pt = new TPaveText(0.2657123,0.9312746,0.7342877,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{7}Li at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclLi7_2dO2__50 = new TH1F("hinclLi7_2dO2__50","INCL",17,9.142857,86.85714);
   hinclLi7_2dO2__50->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_2dO2__50->SetLineColor(ci);
   hinclLi7_2dO2__50->SetLineWidth(2);
   hinclLi7_2dO2__50->GetXaxis()->SetRange(0,18);
   hinclLi7_2dO2__50->GetXaxis()->SetLabelFont(42);
   hinclLi7_2dO2__50->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_2dO2__50->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_2dO2__50->GetXaxis()->SetTitleFont(42);
   hinclLi7_2dO2__50->GetYaxis()->SetLabelFont(42);
   hinclLi7_2dO2__50->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_2dO2__50->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_2dO2__50->GetYaxis()->SetTitleFont(42);
   hinclLi7_2dO2__50->GetZaxis()->SetLabelFont(42);
   hinclLi7_2dO2__50->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_2dO2__50->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_2dO2__50->GetZaxis()->SetTitleFont(42);
   hinclLi7_2dO2__50->Draw("histCsame");
   
   Double_t Graph0_fx1025[17] = {
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
   Double_t Graph0_fy1025[17] = {
   0.4,
   0.6,
   0.6,
   0.7,
   0.5,
   0.7,
   1,
   1.5,
   2.3,
   3,
   4.3,
   4.9,
   4.2,
   2.3,
   1.4,
   0.6,
   0.3};
   Double_t Graph0_fex1025[17] = {
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
   Double_t Graph0_fey1025[17] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.4,
   0.4,
   0.5,
   0.7,
   0.8,
   0.7,
   0.4,
   0.3,
   0.2,
   0.2};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{7}Li at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","^{12}C + ^{nat}C #rightarrow ^{7}Li at 62 MeV/n",100,1.371429,94.62857);
   Graph_Graph1025->SetMinimum(0.09);
   Graph_Graph1025->SetMaximum(6.26);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
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
   canvasLi7_1->Modified();
   canvasLi7->cd();
  
// ------------>Primitives in pad: canvasLi7_3
   TPad *canvasLi7_3 = new TPad("canvasLi7_3", "canvasLi7_3",0,0.3632613,0.5209121,0.6655906);
   canvasLi7_3->Draw();
   canvasLi7_3->cd();
   canvasLi7_3->Range(-26.33684,-3.39794,99.36,2.69897);
   canvasLi7_3->SetFillColor(0);
   canvasLi7_3->SetBorderMode(0);
   canvasLi7_3->SetBorderSize(2);
   canvasLi7_3->SetLogy();
   canvasLi7_3->SetLeftMargin(0.1827957);
   canvasLi7_3->SetRightMargin(0);
   canvasLi7_3->SetTopMargin(0);
   canvasLi7_3->SetBottomMargin(0);
   canvasLi7_3->SetFrameBorderMode(0);
   canvasLi7_3->SetFrameBorderMode(0);
   
   TH1F *h1Li7_7dO6__51 = new TH1F("h1Li7_7dO6__51","",1,-3.36,99.36);
   h1Li7_7dO6__51->SetMinimum(0.0004);
   h1Li7_7dO6__51->SetMaximum(500);
   h1Li7_7dO6__51->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_7dO6__51->SetLineColor(ci);
   h1Li7_7dO6__51->GetXaxis()->SetRange(1,1);
   h1Li7_7dO6__51->GetXaxis()->SetLabelFont(42);
   h1Li7_7dO6__51->GetXaxis()->SetLabelSize(0.07);
   h1Li7_7dO6__51->GetXaxis()->SetTitleSize(0.07);
   h1Li7_7dO6__51->GetXaxis()->SetTitleFont(42);
   h1Li7_7dO6__51->GetYaxis()->SetLabelFont(42);
   h1Li7_7dO6__51->GetYaxis()->SetLabelSize(0.07);
   h1Li7_7dO6__51->GetYaxis()->SetTitleSize(0.07);
   h1Li7_7dO6__51->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_7dO6__51->GetYaxis()->SetTitleFont(42);
   h1Li7_7dO6__51->GetZaxis()->SetLabelFont(42);
   h1Li7_7dO6__51->GetZaxis()->SetLabelSize(0.035);
   h1Li7_7dO6__51->GetZaxis()->SetTitleSize(0.035);
   h1Li7_7dO6__51->GetZaxis()->SetTitleFont(42);
   h1Li7_7dO6__51->Draw("");
   
   TH1F *hinclLi7_7dO6__52 = new TH1F("hinclLi7_7dO6__52","INCL",17,9.142857,86.85714);
   hinclLi7_7dO6__52->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_7dO6__52->SetLineColor(ci);
   hinclLi7_7dO6__52->SetLineWidth(2);
   hinclLi7_7dO6__52->GetXaxis()->SetRange(0,18);
   hinclLi7_7dO6__52->GetXaxis()->SetLabelFont(42);
   hinclLi7_7dO6__52->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_7dO6__52->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_7dO6__52->GetXaxis()->SetTitleFont(42);
   hinclLi7_7dO6__52->GetYaxis()->SetLabelFont(42);
   hinclLi7_7dO6__52->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_7dO6__52->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_7dO6__52->GetYaxis()->SetTitleFont(42);
   hinclLi7_7dO6__52->GetZaxis()->SetLabelFont(42);
   hinclLi7_7dO6__52->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_7dO6__52->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_7dO6__52->GetZaxis()->SetTitleFont(42);
   hinclLi7_7dO6__52->Draw("histCsame");
   
   Double_t Graph0_fx1026[17] = {
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
   Double_t Graph0_fy1026[17] = {
   0.25,
   0.29,
   0.33,
   0.34,
   0.34,
   0.59,
   0.7,
   1.1,
   1.5,
   1.9,
   1.9,
   1.8,
   1.4,
   1,
   0.37,
   0.16,
   0.02};
   Double_t Graph0_fex1026[17] = {
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
   Double_t Graph0_fey1026[17] = {
   0.04,
   0.05,
   0.06,
   0.05,
   0.05,
   0.08,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.1,
   0.07,
   0.04,
   0.01};
   gre = new TGraphErrors(17,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","",100,1.371429,94.62857);
   Graph_Graph1026->SetMinimum(0.009);
   Graph_Graph1026->SetMaximum(2.309);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
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
   canvasLi7_3->Modified();
   canvasLi7->cd();
  
// ------------>Primitives in pad: canvasLi7_5
   TPad *canvasLi7_5 = new TPad("canvasLi7_5", "canvasLi7_5",0,0,0.5209121,0.3632613);
   canvasLi7_5->Draw();
   canvasLi7_5->cd();
   canvasLi7_5->Range(-26.33684,-4.761723,99.36,2.69897);
   canvasLi7_5->SetFillColor(0);
   canvasLi7_5->SetBorderMode(0);
   canvasLi7_5->SetBorderSize(2);
   canvasLi7_5->SetLogy();
   canvasLi7_5->SetLeftMargin(0.1827957);
   canvasLi7_5->SetRightMargin(0);
   canvasLi7_5->SetTopMargin(0);
   canvasLi7_5->SetBottomMargin(0.1827957);
   canvasLi7_5->SetFrameBorderMode(0);
   canvasLi7_5->SetFrameBorderMode(0);
   
   TH1F *h1Li7_18__53 = new TH1F("h1Li7_18__53","",1,-3.36,99.36);
   h1Li7_18__53->SetMinimum(0.0004);
   h1Li7_18__53->SetMaximum(500);
   h1Li7_18__53->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_18__53->SetLineColor(ci);
   h1Li7_18__53->GetXaxis()->SetRange(1,1);
   h1Li7_18__53->GetXaxis()->SetLabelFont(42);
   h1Li7_18__53->GetXaxis()->SetLabelSize(0.07);
   h1Li7_18__53->GetXaxis()->SetTitleSize(0.07);
   h1Li7_18__53->GetXaxis()->SetTitleFont(42);
   h1Li7_18__53->GetYaxis()->SetLabelFont(42);
   h1Li7_18__53->GetYaxis()->SetLabelSize(0.07);
   h1Li7_18__53->GetYaxis()->SetTitleSize(0.07);
   h1Li7_18__53->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_18__53->GetYaxis()->SetTitleFont(42);
   h1Li7_18__53->GetZaxis()->SetLabelFont(42);
   h1Li7_18__53->GetZaxis()->SetLabelSize(0.035);
   h1Li7_18__53->GetZaxis()->SetTitleSize(0.035);
   h1Li7_18__53->GetZaxis()->SetTitleFont(42);
   h1Li7_18__53->Draw("");
   
   TH1F *hinclLi7_18__54 = new TH1F("hinclLi7_18__54","INCL",15,9.142857,77.71429);
   hinclLi7_18__54->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_18__54->SetLineColor(ci);
   hinclLi7_18__54->SetLineWidth(2);
   hinclLi7_18__54->GetXaxis()->SetRange(0,16);
   hinclLi7_18__54->GetXaxis()->SetLabelFont(42);
   hinclLi7_18__54->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_18__54->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_18__54->GetXaxis()->SetTitleFont(42);
   hinclLi7_18__54->GetYaxis()->SetLabelFont(42);
   hinclLi7_18__54->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_18__54->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_18__54->GetYaxis()->SetTitleFont(42);
   hinclLi7_18__54->GetZaxis()->SetLabelFont(42);
   hinclLi7_18__54->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_18__54->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_18__54->GetZaxis()->SetTitleFont(42);
   hinclLi7_18__54->Draw("histCsame");
   
   Double_t Graph0_fx1027[15] = {
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
   75.42857};
   Double_t Graph0_fy1027[15] = {
   0.11,
   0.08,
   0.08,
   0.05,
   0.07,
   0.06,
   0.07,
   0.07,
   0.07,
   0.06,
   0.06,
   0.05,
   0.018,
   0.012,
   0.003};
   Double_t Graph0_fex1027[15] = {
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
   Double_t Graph0_fey1027[15] = {
   0.02,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.005,
   0.004,
   0.002};
   gre = new TGraphErrors(15,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,2.285714,84.57143);
   Graph_Graph1027->SetMinimum(0.0009);
   Graph_Graph1027->SetMaximum(0.1429);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
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
   entry=leg->AddEntry("hinclLi7_18","INCL","l");

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
   canvasLi7_5->Modified();
   canvasLi7->cd();
  
// ------------>Primitives in pad: canvasLi7_2
   TPad *canvasLi7_2 = new TPad("canvasLi7_2", "canvasLi7_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasLi7_2->Draw();
   canvasLi7_2->cd();
   canvasLi7_2->Range(-3.36,-3.39794,99.36,2.69897);
   canvasLi7_2->SetFillColor(0);
   canvasLi7_2->SetBorderMode(0);
   canvasLi7_2->SetBorderSize(2);
   canvasLi7_2->SetLogy();
   canvasLi7_2->SetLeftMargin(0);
   canvasLi7_2->SetRightMargin(0);
   canvasLi7_2->SetTopMargin(0);
   canvasLi7_2->SetBottomMargin(0);
   canvasLi7_2->SetFrameBorderMode(0);
   canvasLi7_2->SetFrameBorderMode(0);
   
   TH1F *h1Li7_4dO9__55 = new TH1F("h1Li7_4dO9__55","",1,-3.36,99.36);
   h1Li7_4dO9__55->SetMinimum(0.0004);
   h1Li7_4dO9__55->SetMaximum(500);
   h1Li7_4dO9__55->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_4dO9__55->SetLineColor(ci);
   h1Li7_4dO9__55->GetXaxis()->SetRange(1,1);
   h1Li7_4dO9__55->GetXaxis()->SetLabelFont(42);
   h1Li7_4dO9__55->GetXaxis()->SetLabelSize(0.07);
   h1Li7_4dO9__55->GetXaxis()->SetTitleSize(0.07);
   h1Li7_4dO9__55->GetXaxis()->SetTitleFont(42);
   h1Li7_4dO9__55->GetYaxis()->SetLabelFont(42);
   h1Li7_4dO9__55->GetYaxis()->SetLabelSize(0.07);
   h1Li7_4dO9__55->GetYaxis()->SetTitleSize(0.07);
   h1Li7_4dO9__55->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_4dO9__55->GetYaxis()->SetTitleFont(42);
   h1Li7_4dO9__55->GetZaxis()->SetLabelFont(42);
   h1Li7_4dO9__55->GetZaxis()->SetLabelSize(0.035);
   h1Li7_4dO9__55->GetZaxis()->SetTitleSize(0.035);
   h1Li7_4dO9__55->GetZaxis()->SetTitleFont(42);
   h1Li7_4dO9__55->Draw("");
   
   TH1F *hinclLi7_4dO9__56 = new TH1F("hinclLi7_4dO9__56","INCL",17,9.142857,86.85714);
   hinclLi7_4dO9__56->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_4dO9__56->SetLineColor(ci);
   hinclLi7_4dO9__56->SetLineWidth(2);
   hinclLi7_4dO9__56->GetXaxis()->SetRange(0,18);
   hinclLi7_4dO9__56->GetXaxis()->SetLabelFont(42);
   hinclLi7_4dO9__56->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_4dO9__56->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_4dO9__56->GetXaxis()->SetTitleFont(42);
   hinclLi7_4dO9__56->GetYaxis()->SetLabelFont(42);
   hinclLi7_4dO9__56->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_4dO9__56->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_4dO9__56->GetYaxis()->SetTitleFont(42);
   hinclLi7_4dO9__56->GetZaxis()->SetLabelFont(42);
   hinclLi7_4dO9__56->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_4dO9__56->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_4dO9__56->GetZaxis()->SetTitleFont(42);
   hinclLi7_4dO9__56->Draw("histCsame");
   
   Double_t Graph0_fx1028[17] = {
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
   Double_t Graph0_fy1028[17] = {
   0.3,
   0.4,
   0.3,
   0.4,
   0.6,
   0.7,
   1,
   1.2,
   1.5,
   2,
   2.6,
   2.5,
   2.4,
   1.1,
   0.5,
   0.2,
   0.02};
   Double_t Graph0_fex1028[17] = {
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
   Double_t Graph0_fey1028[17] = {
   0.1,
   0.2,
   0.1,
   0.1,
   0.2,
   0.2,
   0.3,
   0.3,
   0.3,
   0.4,
   0.5,
   0.5,
   0.5,
   0.3,
   0.2,
   0.1,
   0.01};
   gre = new TGraphErrors(17,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,1.371429,94.62857);
   Graph_Graph1028->SetMinimum(0.009);
   Graph_Graph1028->SetMaximum(3.409);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
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
   canvasLi7_2->Modified();
   canvasLi7->cd();
  
// ------------>Primitives in pad: canvasLi7_4
   TPad *canvasLi7_4 = new TPad("canvasLi7_4", "canvasLi7_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasLi7_4->Draw();
   canvasLi7_4->cd();
   canvasLi7_4->Range(-3.36,-3.39794,99.36,2.69897);
   canvasLi7_4->SetFillColor(0);
   canvasLi7_4->SetBorderMode(0);
   canvasLi7_4->SetBorderSize(2);
   canvasLi7_4->SetLogy();
   canvasLi7_4->SetLeftMargin(0);
   canvasLi7_4->SetRightMargin(0);
   canvasLi7_4->SetTopMargin(0);
   canvasLi7_4->SetBottomMargin(0);
   canvasLi7_4->SetFrameBorderMode(0);
   canvasLi7_4->SetFrameBorderMode(0);
   
   TH1F *h1Li7_14dO4__57 = new TH1F("h1Li7_14dO4__57","",1,-3.36,99.36);
   h1Li7_14dO4__57->SetMinimum(0.0004);
   h1Li7_14dO4__57->SetMaximum(500);
   h1Li7_14dO4__57->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_14dO4__57->SetLineColor(ci);
   h1Li7_14dO4__57->GetXaxis()->SetRange(1,1);
   h1Li7_14dO4__57->GetXaxis()->SetLabelFont(42);
   h1Li7_14dO4__57->GetXaxis()->SetLabelSize(0.07);
   h1Li7_14dO4__57->GetXaxis()->SetTitleSize(0.07);
   h1Li7_14dO4__57->GetXaxis()->SetTitleFont(42);
   h1Li7_14dO4__57->GetYaxis()->SetLabelFont(42);
   h1Li7_14dO4__57->GetYaxis()->SetLabelSize(0.07);
   h1Li7_14dO4__57->GetYaxis()->SetTitleSize(0.07);
   h1Li7_14dO4__57->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_14dO4__57->GetYaxis()->SetTitleFont(42);
   h1Li7_14dO4__57->GetZaxis()->SetLabelFont(42);
   h1Li7_14dO4__57->GetZaxis()->SetLabelSize(0.035);
   h1Li7_14dO4__57->GetZaxis()->SetTitleSize(0.035);
   h1Li7_14dO4__57->GetZaxis()->SetTitleFont(42);
   h1Li7_14dO4__57->Draw("");
   
   TH1F *hinclLi7_14dO4__58 = new TH1F("hinclLi7_14dO4__58","INCL",17,9.142857,86.85714);
   hinclLi7_14dO4__58->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_14dO4__58->SetLineColor(ci);
   hinclLi7_14dO4__58->SetLineWidth(2);
   hinclLi7_14dO4__58->GetXaxis()->SetRange(0,18);
   hinclLi7_14dO4__58->GetXaxis()->SetLabelFont(42);
   hinclLi7_14dO4__58->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_14dO4__58->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_14dO4__58->GetXaxis()->SetTitleFont(42);
   hinclLi7_14dO4__58->GetYaxis()->SetLabelFont(42);
   hinclLi7_14dO4__58->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_14dO4__58->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_14dO4__58->GetYaxis()->SetTitleFont(42);
   hinclLi7_14dO4__58->GetZaxis()->SetLabelFont(42);
   hinclLi7_14dO4__58->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_14dO4__58->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_14dO4__58->GetZaxis()->SetTitleFont(42);
   hinclLi7_14dO4__58->Draw("histCsame");
   
   Double_t Graph0_fx1029[17] = {
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
   Double_t Graph0_fy1029[17] = {
   0.15,
   0.14,
   0.15,
   0.18,
   0.19,
   0.18,
   0.25,
   0.24,
   0.22,
   0.26,
   0.2,
   0.13,
   0.08,
   0.04,
   0.03,
   0.01,
   0.005};
   Double_t Graph0_fex1029[17] = {
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
   Double_t Graph0_fey1029[17] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.03,
   0.03,
   0.03,
   0.03,
   0.03,
   0.02,
   0.01,
   0.04,
   0.01,
   0.004,
   0.003};
   gre = new TGraphErrors(17,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,1.371429,94.62857);
   Graph_Graph1029->SetMinimum(0.0018);
   Graph_Graph1029->SetMaximum(0.3188);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
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
   canvasLi7_4->Modified();
   canvasLi7->cd();
  
// ------------>Primitives in pad: canvasLi7_6
   TPad *canvasLi7_6 = new TPad("canvasLi7_6", "canvasLi7_6",0.5209121,0,0.9504264,0.3632613);
   canvasLi7_6->Draw();
   canvasLi7_6->cd();
   canvasLi7_6->Range(-3.36,-4.761723,99.36,2.69897);
   canvasLi7_6->SetFillColor(0);
   canvasLi7_6->SetBorderMode(0);
   canvasLi7_6->SetBorderSize(2);
   canvasLi7_6->SetLogy();
   canvasLi7_6->SetLeftMargin(0);
   canvasLi7_6->SetRightMargin(0);
   canvasLi7_6->SetTopMargin(0);
   canvasLi7_6->SetBottomMargin(0.1827957);
   canvasLi7_6->SetFrameBorderMode(0);
   canvasLi7_6->SetFrameBorderMode(0);
   
   TH1F *h1Li7_21dO8__59 = new TH1F("h1Li7_21dO8__59","",1,-3.36,99.36);
   h1Li7_21dO8__59->SetMinimum(0.0004);
   h1Li7_21dO8__59->SetMaximum(500);
   h1Li7_21dO8__59->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_21dO8__59->SetLineColor(ci);
   h1Li7_21dO8__59->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Li7_21dO8__59->GetXaxis()->SetRange(1,1);
   h1Li7_21dO8__59->GetXaxis()->SetLabelFont(42);
   h1Li7_21dO8__59->GetXaxis()->SetLabelSize(0.07);
   h1Li7_21dO8__59->GetXaxis()->SetTitleSize(0.07);
   h1Li7_21dO8__59->GetXaxis()->SetTitleFont(42);
   h1Li7_21dO8__59->GetYaxis()->SetLabelFont(42);
   h1Li7_21dO8__59->GetYaxis()->SetLabelSize(0.07);
   h1Li7_21dO8__59->GetYaxis()->SetTitleSize(0.07);
   h1Li7_21dO8__59->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_21dO8__59->GetYaxis()->SetTitleFont(42);
   h1Li7_21dO8__59->GetZaxis()->SetLabelFont(42);
   h1Li7_21dO8__59->GetZaxis()->SetLabelSize(0.035);
   h1Li7_21dO8__59->GetZaxis()->SetTitleSize(0.035);
   h1Li7_21dO8__59->GetZaxis()->SetTitleFont(42);
   h1Li7_21dO8__59->Draw("");
   
   TH1F *hinclLi7_21dO8__60 = new TH1F("hinclLi7_21dO8__60","INCL",13,9.142857,68.57143);
   hinclLi7_21dO8__60->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_21dO8__60->SetLineColor(ci);
   hinclLi7_21dO8__60->SetLineWidth(2);
   hinclLi7_21dO8__60->GetXaxis()->SetRange(0,14);
   hinclLi7_21dO8__60->GetXaxis()->SetLabelFont(42);
   hinclLi7_21dO8__60->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_21dO8__60->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_21dO8__60->GetXaxis()->SetTitleFont(42);
   hinclLi7_21dO8__60->GetYaxis()->SetLabelFont(42);
   hinclLi7_21dO8__60->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_21dO8__60->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_21dO8__60->GetYaxis()->SetTitleFont(42);
   hinclLi7_21dO8__60->GetZaxis()->SetLabelFont(42);
   hinclLi7_21dO8__60->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_21dO8__60->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_21dO8__60->GetZaxis()->SetTitleFont(42);
   hinclLi7_21dO8__60->Draw("histCsame");
   
   Double_t Graph0_fx1030[13] = {
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
   Double_t Graph0_fy1030[13] = {
   0.08,
   0.07,
   0.04,
   0.042,
   0.03,
   0.028,
   0.03,
   0.037,
   0.021,
   0.021,
   0.012,
   0.0011,
   0.0003};
   Double_t Graph0_fex1030[13] = {
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
   Double_t Graph0_fey1030[13] = {
   0.01,
   0.01,
   0.007,
   0.008,
   0.007,
   0.006,
   0.007,
   0.009,
   0.005,
   0.006,
   0.004,
   0.0004,
   0.0002};
   gre = new TGraphErrors(13,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","",100,3.2,74.51429);
   Graph_Graph1030->SetMinimum(9e-05);
   Graph_Graph1030->SetMaximum(0.09899);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1030->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
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
   canvasLi7_6->Modified();
   canvasLi7->cd();
   canvasLi7->Modified();
   canvasLi7->cd();
   canvasLi7->SetSelected(canvasLi7);
}
