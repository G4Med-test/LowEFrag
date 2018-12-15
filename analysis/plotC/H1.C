void H1()
{
//=========Macro generated from canvas: canvasH1/canvasH1
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
   TCanvas *canvasH1 = new TCanvas("canvasH1", "canvasH1",0,0,800,600);
   gStyle->SetOptStat(0);
   canvasH1->Range(0,0,1,1);
   canvasH1->SetFillColor(0);
   canvasH1->SetBorderMode(0);
   canvasH1->SetBorderSize(2);
   canvasH1->SetRightMargin(0.04957356);
   canvasH1->SetTopMargin(0.04957356);
   canvasH1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasH1_1
   TPad *canvasH1_1 = new TPad("canvasH1_1", "canvasH1_1",0,0.5209121,0.5209121,0.9504264);
   canvasH1_1->Draw();
   canvasH1_1->cd();
   canvasH1_1->Range(-58.61842,-3.39794,207.9,2.69897);
   canvasH1_1->SetFillColor(0);
   canvasH1_1->SetBorderMode(0);
   canvasH1_1->SetBorderSize(2);
   canvasH1_1->SetLogy();
   canvasH1_1->SetLeftMargin(0.1827957);
   canvasH1_1->SetRightMargin(0);
   canvasH1_1->SetTopMargin(0);
   canvasH1_1->SetBottomMargin(0);
   canvasH1_1->SetFrameBorderMode(0);
   canvasH1_1->SetFrameBorderMode(0);
   
   TH1F *h1H1_11dO4__1 = new TH1F("h1H1_11dO4__1","^{12}C + ^{nat}C #rightarrow ^{1}H at 62 MeV/n",1,-9.9,207.9);
   h1H1_11dO4__1->SetMinimum(0.0004);
   h1H1_11dO4__1->SetMaximum(500);
   h1H1_11dO4__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1H1_11dO4__1->SetLineColor(ci);
   h1H1_11dO4__1->GetXaxis()->SetRange(1,1);
   h1H1_11dO4__1->GetXaxis()->SetLabelFont(42);
   h1H1_11dO4__1->GetXaxis()->SetLabelSize(0.07);
   h1H1_11dO4__1->GetXaxis()->SetTitleSize(0.07);
   h1H1_11dO4__1->GetXaxis()->SetTitleFont(42);
   h1H1_11dO4__1->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1H1_11dO4__1->GetYaxis()->SetLabelFont(42);
   h1H1_11dO4__1->GetYaxis()->SetLabelSize(0.08);
   h1H1_11dO4__1->GetYaxis()->SetTitleSize(0.07);
   h1H1_11dO4__1->GetYaxis()->SetTitleOffset(1.1);
   h1H1_11dO4__1->GetYaxis()->SetTitleFont(42);
   h1H1_11dO4__1->GetZaxis()->SetLabelFont(42);
   h1H1_11dO4__1->GetZaxis()->SetLabelSize(0.035);
   h1H1_11dO4__1->GetZaxis()->SetTitleSize(0.035);
   h1H1_11dO4__1->GetZaxis()->SetTitleFont(42);
   h1H1_11dO4__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.2850059,0.9315033,0.7149941,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{1}H at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclH1_11dO4__2 = new TH1F("hinclH1_11dO4__2","INCL",18,0,180);
   hinclH1_11dO4__2->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_11dO4__2->SetLineColor(ci);
   hinclH1_11dO4__2->SetLineWidth(2);
   hinclH1_11dO4__2->GetXaxis()->SetRange(0,19);
   hinclH1_11dO4__2->GetXaxis()->SetLabelFont(42);
   hinclH1_11dO4__2->GetXaxis()->SetLabelSize(0.035);
   hinclH1_11dO4__2->GetXaxis()->SetTitleSize(0.035);
   hinclH1_11dO4__2->GetXaxis()->SetTitleFont(42);
   hinclH1_11dO4__2->GetYaxis()->SetLabelFont(42);
   hinclH1_11dO4__2->GetYaxis()->SetLabelSize(0.035);
   hinclH1_11dO4__2->GetYaxis()->SetTitleSize(0.035);
   hinclH1_11dO4__2->GetYaxis()->SetTitleFont(42);
   hinclH1_11dO4__2->GetZaxis()->SetLabelFont(42);
   hinclH1_11dO4__2->GetZaxis()->SetLabelSize(0.035);
   hinclH1_11dO4__2->GetZaxis()->SetTitleSize(0.035);
   hinclH1_11dO4__2->GetZaxis()->SetTitleFont(42);
   hinclH1_11dO4__2->Draw("histCsame");
   
   Double_t Graph0_fx1001[18] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175};
   Double_t Graph0_fy1001[18] = {
   1.1,
   5,
   5.9,
   9.6,
   14,
   15,
   15,
   11,
   7.6,
   6.6,
   4.1,
   2.7,
   2,
   1.3,
   1.1,
   0.6,
   0.23,
   0.1};
   Double_t Graph0_fex1001[18] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph0_fey1001[18] = {
   0.1,
   0.5,
   0.5,
   0.9,
   1,
   1,
   1,
   1,
   0.8,
   0.7,
   0.5,
   0.3,
   0.3,
   0.2,
   0.2,
   0.1,
   0.06,
   0.04};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{1}H at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","^{12}C + ^{nat}C #rightarrow ^{1}H at 62 MeV/n",100,0,198);
   Graph_Graph1001->SetMinimum(0.054);
   Graph_Graph1001->SetMaximum(17.594);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
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
   canvasH1_1->Modified();
   canvasH1->cd();
  
// ------------>Primitives in pad: canvasH1_3
   TPad *canvasH1_3 = new TPad("canvasH1_3", "canvasH1_3",0,0,0.5209121,0.5209121);
   canvasH1_3->Draw();
   canvasH1_3->cd();
   canvasH1_3->Range(-58.61842,-4.761723,207.9,2.69897);
   canvasH1_3->SetFillColor(0);
   canvasH1_3->SetBorderMode(0);
   canvasH1_3->SetBorderSize(2);
   canvasH1_3->SetLogy();
   canvasH1_3->SetLeftMargin(0.1827957);
   canvasH1_3->SetRightMargin(0);
   canvasH1_3->SetTopMargin(0);
   canvasH1_3->SetBottomMargin(0.1827957);
   canvasH1_3->SetFrameBorderMode(0);
   canvasH1_3->SetFrameBorderMode(0);
   
   TH1F *h1H1_17dO2__3 = new TH1F("h1H1_17dO2__3","",1,-9.9,207.9);
   h1H1_17dO2__3->SetMinimum(0.0004);
   h1H1_17dO2__3->SetMaximum(500);
   h1H1_17dO2__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H1_17dO2__3->SetLineColor(ci);
   h1H1_17dO2__3->GetXaxis()->SetRange(1,1);
   h1H1_17dO2__3->GetXaxis()->SetLabelFont(42);
   h1H1_17dO2__3->GetXaxis()->SetLabelSize(0.07);
   h1H1_17dO2__3->GetXaxis()->SetTitleSize(0.07);
   h1H1_17dO2__3->GetXaxis()->SetTitleFont(42);
   h1H1_17dO2__3->GetYaxis()->SetLabelFont(42);
   h1H1_17dO2__3->GetYaxis()->SetLabelSize(0.07);
   h1H1_17dO2__3->GetYaxis()->SetTitleSize(0.07);
   h1H1_17dO2__3->GetYaxis()->SetTitleOffset(1.1);
   h1H1_17dO2__3->GetYaxis()->SetTitleFont(42);
   h1H1_17dO2__3->GetZaxis()->SetLabelFont(42);
   h1H1_17dO2__3->GetZaxis()->SetLabelSize(0.035);
   h1H1_17dO2__3->GetZaxis()->SetTitleSize(0.035);
   h1H1_17dO2__3->GetZaxis()->SetTitleFont(42);
   h1H1_17dO2__3->Draw("");
   
   TH1F *hinclH1_17dO2__4 = new TH1F("hinclH1_17dO2__4","INCL",16,0,160);
   hinclH1_17dO2__4->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_17dO2__4->SetLineColor(ci);
   hinclH1_17dO2__4->SetLineWidth(2);
   hinclH1_17dO2__4->GetXaxis()->SetRange(0,17);
   hinclH1_17dO2__4->GetXaxis()->SetLabelFont(42);
   hinclH1_17dO2__4->GetXaxis()->SetLabelSize(0.035);
   hinclH1_17dO2__4->GetXaxis()->SetTitleSize(0.035);
   hinclH1_17dO2__4->GetXaxis()->SetTitleFont(42);
   hinclH1_17dO2__4->GetYaxis()->SetLabelFont(42);
   hinclH1_17dO2__4->GetYaxis()->SetLabelSize(0.035);
   hinclH1_17dO2__4->GetYaxis()->SetTitleSize(0.035);
   hinclH1_17dO2__4->GetYaxis()->SetTitleFont(42);
   hinclH1_17dO2__4->GetZaxis()->SetLabelFont(42);
   hinclH1_17dO2__4->GetZaxis()->SetLabelSize(0.035);
   hinclH1_17dO2__4->GetZaxis()->SetTitleSize(0.035);
   hinclH1_17dO2__4->GetZaxis()->SetTitleFont(42);
   hinclH1_17dO2__4->Draw("histCsame");
   
   Double_t Graph0_fx1002[16] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155};
   Double_t Graph0_fy1002[16] = {
   0.51,
   5,
   6.4,
   7.4,
   8.7,
   8.9,
   8.7,
   7.7,
   5.2,
   3,
   1.7,
   0.7,
   0.41,
   0.19,
   0.12,
   0.06};
   Double_t Graph0_fex1002[16] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph0_fey1002[16] = {
   0.08,
   0.5,
   0.6,
   0.7,
   0.8,
   0.8,
   0.8,
   0.7,
   0.5,
   0.3,
   0.2,
   0.1,
   0.08,
   0.05,
   0.04,
   0.03};
   gre = new TGraphErrors(16,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,0,176);
   Graph_Graph1002->SetMinimum(0.027);
   Graph_Graph1002->SetMaximum(10.667);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
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
   entry=leg->AddEntry("hinclH1_17.2","INCL","l");

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
   canvasH1_3->Modified();
   canvasH1->cd();
  
// ------------>Primitives in pad: canvasH1_2
   TPad *canvasH1_2 = new TPad("canvasH1_2", "canvasH1_2",0.5209121,0.5209121,0.9504264,0.9504264);
   canvasH1_2->Draw();
   canvasH1_2->cd();
   canvasH1_2->Range(-9.9,-3.39794,207.9,2.69897);
   canvasH1_2->SetFillColor(0);
   canvasH1_2->SetBorderMode(0);
   canvasH1_2->SetBorderSize(2);
   canvasH1_2->SetLogy();
   canvasH1_2->SetLeftMargin(0);
   canvasH1_2->SetRightMargin(0);
   canvasH1_2->SetTopMargin(0);
   canvasH1_2->SetBottomMargin(0);
   canvasH1_2->SetFrameBorderMode(0);
   canvasH1_2->SetFrameBorderMode(0);
   
   TH1F *h1H1_14dO4__5 = new TH1F("h1H1_14dO4__5","",1,-9.9,207.9);
   h1H1_14dO4__5->SetMinimum(0.0004);
   h1H1_14dO4__5->SetMaximum(500);
   h1H1_14dO4__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H1_14dO4__5->SetLineColor(ci);
   h1H1_14dO4__5->GetXaxis()->SetRange(1,1);
   h1H1_14dO4__5->GetXaxis()->SetLabelFont(42);
   h1H1_14dO4__5->GetXaxis()->SetLabelSize(0.07);
   h1H1_14dO4__5->GetXaxis()->SetTitleSize(0.07);
   h1H1_14dO4__5->GetXaxis()->SetTitleFont(42);
   h1H1_14dO4__5->GetYaxis()->SetLabelFont(42);
   h1H1_14dO4__5->GetYaxis()->SetLabelSize(0.07);
   h1H1_14dO4__5->GetYaxis()->SetTitleSize(0.07);
   h1H1_14dO4__5->GetYaxis()->SetTitleOffset(1.1);
   h1H1_14dO4__5->GetYaxis()->SetTitleFont(42);
   h1H1_14dO4__5->GetZaxis()->SetLabelFont(42);
   h1H1_14dO4__5->GetZaxis()->SetLabelSize(0.035);
   h1H1_14dO4__5->GetZaxis()->SetTitleSize(0.035);
   h1H1_14dO4__5->GetZaxis()->SetTitleFont(42);
   h1H1_14dO4__5->Draw("");
   
   TH1F *hinclH1_14dO4__6 = new TH1F("hinclH1_14dO4__6","INCL",18,0,180);
   hinclH1_14dO4__6->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_14dO4__6->SetLineColor(ci);
   hinclH1_14dO4__6->SetLineWidth(2);
   hinclH1_14dO4__6->GetXaxis()->SetRange(0,19);
   hinclH1_14dO4__6->GetXaxis()->SetLabelFont(42);
   hinclH1_14dO4__6->GetXaxis()->SetLabelSize(0.035);
   hinclH1_14dO4__6->GetXaxis()->SetTitleSize(0.035);
   hinclH1_14dO4__6->GetXaxis()->SetTitleFont(42);
   hinclH1_14dO4__6->GetYaxis()->SetLabelFont(42);
   hinclH1_14dO4__6->GetYaxis()->SetLabelSize(0.035);
   hinclH1_14dO4__6->GetYaxis()->SetTitleSize(0.035);
   hinclH1_14dO4__6->GetYaxis()->SetTitleFont(42);
   hinclH1_14dO4__6->GetZaxis()->SetLabelFont(42);
   hinclH1_14dO4__6->GetZaxis()->SetLabelSize(0.035);
   hinclH1_14dO4__6->GetZaxis()->SetTitleSize(0.035);
   hinclH1_14dO4__6->GetZaxis()->SetTitleFont(42);
   hinclH1_14dO4__6->Draw("histCsame");
   
   Double_t Graph0_fx1003[18] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175};
   Double_t Graph0_fy1003[18] = {
   1.5,
   5.1,
   6.9,
   8.5,
   12,
   14,
   14,
   11,
   7.2,
   4.4,
   2.5,
   1.8,
   1.1,
   0.6,
   0.4,
   0.23,
   0.12,
   0.05};
   Double_t Graph0_fex1003[18] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph0_fey1003[18] = {
   0.2,
   0.5,
   0.6,
   0.7,
   1,
   1,
   1,
   1,
   0.7,
   0.5,
   0.3,
   0.2,
   0.2,
   0.1,
   0.09,
   0.07,
   0.05,
   0.03};
   gre = new TGraphErrors(18,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,198);
   Graph_Graph1003->SetMinimum(0.018);
   Graph_Graph1003->SetMaximum(16.498);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
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
   canvasH1_2->Modified();
   canvasH1->cd();
  
// ------------>Primitives in pad: canvasH1_4
   TPad *canvasH1_4 = new TPad("canvasH1_4", "canvasH1_4",0.5209121,0,0.9504264,0.5209121);
   canvasH1_4->Draw();
   canvasH1_4->cd();
   canvasH1_4->Range(-9.9,-4.761723,207.9,2.69897);
   canvasH1_4->SetFillColor(0);
   canvasH1_4->SetBorderMode(0);
   canvasH1_4->SetBorderSize(2);
   canvasH1_4->SetLogy();
   canvasH1_4->SetLeftMargin(0);
   canvasH1_4->SetRightMargin(0);
   canvasH1_4->SetTopMargin(0);
   canvasH1_4->SetBottomMargin(0.1827957);
   canvasH1_4->SetFrameBorderMode(0);
   canvasH1_4->SetFrameBorderMode(0);
   
   TH1F *h1H1_19dO4__7 = new TH1F("h1H1_19dO4__7","",1,-9.9,207.9);
   h1H1_19dO4__7->SetMinimum(0.0004);
   h1H1_19dO4__7->SetMaximum(500);
   h1H1_19dO4__7->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H1_19dO4__7->SetLineColor(ci);
   h1H1_19dO4__7->GetXaxis()->SetTitle("E  [MeV/n]");
   h1H1_19dO4__7->GetXaxis()->SetRange(1,1);
   h1H1_19dO4__7->GetXaxis()->SetLabelFont(42);
   h1H1_19dO4__7->GetXaxis()->SetLabelSize(0.07);
   h1H1_19dO4__7->GetXaxis()->SetTitleSize(0.07);
   h1H1_19dO4__7->GetXaxis()->SetTitleFont(42);
   h1H1_19dO4__7->GetYaxis()->SetLabelFont(42);
   h1H1_19dO4__7->GetYaxis()->SetLabelSize(0.07);
   h1H1_19dO4__7->GetYaxis()->SetTitleSize(0.07);
   h1H1_19dO4__7->GetYaxis()->SetTitleOffset(1.1);
   h1H1_19dO4__7->GetYaxis()->SetTitleFont(42);
   h1H1_19dO4__7->GetZaxis()->SetLabelFont(42);
   h1H1_19dO4__7->GetZaxis()->SetLabelSize(0.035);
   h1H1_19dO4__7->GetZaxis()->SetTitleSize(0.035);
   h1H1_19dO4__7->GetZaxis()->SetTitleFont(42);
   h1H1_19dO4__7->Draw("");
   
   TH1F *hinclH1_19dO4__8 = new TH1F("hinclH1_19dO4__8","INCL",15,0,150);
   hinclH1_19dO4__8->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_19dO4__8->SetLineColor(ci);
   hinclH1_19dO4__8->SetLineWidth(2);
   hinclH1_19dO4__8->GetXaxis()->SetRange(0,16);
   hinclH1_19dO4__8->GetXaxis()->SetLabelFont(42);
   hinclH1_19dO4__8->GetXaxis()->SetLabelSize(0.035);
   hinclH1_19dO4__8->GetXaxis()->SetTitleSize(0.035);
   hinclH1_19dO4__8->GetXaxis()->SetTitleFont(42);
   hinclH1_19dO4__8->GetYaxis()->SetLabelFont(42);
   hinclH1_19dO4__8->GetYaxis()->SetLabelSize(0.035);
   hinclH1_19dO4__8->GetYaxis()->SetTitleSize(0.035);
   hinclH1_19dO4__8->GetYaxis()->SetTitleFont(42);
   hinclH1_19dO4__8->GetZaxis()->SetLabelFont(42);
   hinclH1_19dO4__8->GetZaxis()->SetLabelSize(0.035);
   hinclH1_19dO4__8->GetZaxis()->SetTitleSize(0.035);
   hinclH1_19dO4__8->GetZaxis()->SetTitleFont(42);
   hinclH1_19dO4__8->Draw("histCsame");
   
   Double_t Graph0_fx1004[15] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145};
   Double_t Graph0_fy1004[15] = {
   0.8,
   4.9,
   6.1,
   7.9,
   7.9,
   6.7,
   5.1,
   3.7,
   2.6,
   1.3,
   0.8,
   0.26,
   0.21,
   0.07,
   0.025};
   Double_t Graph0_fex1004[15] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph0_fey1004[15] = {
   0.1,
   0.5,
   0.6,
   0.7,
   0.8,
   0.7,
   0.6,
   0.4,
   0.3,
   0.2,
   0.1,
   0.06,
   0.06,
   0.03,
   0.024};
   gre = new TGraphErrors(15,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,0,165);
   Graph_Graph1004->SetMinimum(0.0009);
   Graph_Graph1004->SetMaximum(9.5699);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
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
   canvasH1_4->Modified();
   canvasH1->cd();
   canvasH1->Modified();
   canvasH1->cd();
   canvasH1->SetSelected(canvasH1);
}
