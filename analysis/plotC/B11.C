void B11()
{
//=========Macro generated from canvas: canvasB11/canvasB11
//=========  (Sat Dec 15 18:51:47 2018) by ROOT version6.06/06
   TCanvas *canvasB11 = new TCanvas("canvasB11", "canvasB11",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasB11->Range(0,0,1,1);
   canvasB11->SetFillColor(0);
   canvasB11->SetBorderMode(0);
   canvasB11->SetBorderSize(2);
   canvasB11->SetRightMargin(0.04957356);
   canvasB11->SetTopMargin(0.03208003);
   canvasB11->SetBottomMargin(0.0609319);
   canvasB11->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasB11_1
   TPad *canvasB11_1 = new TPad("canvasB11_1", "canvasB11_1",0,0.6655906,0.5209121,0.96792);
   canvasB11_1->Draw();
   canvasB11_1->cd();
   canvasB11_1->Range(-16.74474,-3.39794,82.58727,2.69897);
   canvasB11_1->SetFillColor(0);
   canvasB11_1->SetBorderMode(0);
   canvasB11_1->SetBorderSize(2);
   canvasB11_1->SetLogy();
   canvasB11_1->SetLeftMargin(0.1827957);
   canvasB11_1->SetRightMargin(0);
   canvasB11_1->SetTopMargin(0);
   canvasB11_1->SetBottomMargin(0);
   canvasB11_1->SetFrameBorderMode(0);
   canvasB11_1->SetFrameBorderMode(0);
   
   TH1F *h1B11_2dO2__97 = new TH1F("h1B11_2dO2__97","^{12}C + ^{nat}C #rightarrow ^{11}B at 62 MeV/n",1,1.412727,82.58727);
   h1B11_2dO2__97->SetMinimum(0.0004);
   h1B11_2dO2__97->SetMaximum(500);
   h1B11_2dO2__97->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1B11_2dO2__97->SetLineColor(ci);
   h1B11_2dO2__97->GetXaxis()->SetRange(1,1);
   h1B11_2dO2__97->GetXaxis()->SetLabelFont(42);
   h1B11_2dO2__97->GetXaxis()->SetLabelSize(0.07);
   h1B11_2dO2__97->GetXaxis()->SetTitleSize(0.07);
   h1B11_2dO2__97->GetXaxis()->SetTitleFont(42);
   h1B11_2dO2__97->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1B11_2dO2__97->GetYaxis()->SetLabelFont(42);
   h1B11_2dO2__97->GetYaxis()->SetLabelSize(0.07);
   h1B11_2dO2__97->GetYaxis()->SetTitleSize(0.07);
   h1B11_2dO2__97->GetYaxis()->SetTitleOffset(1.1);
   h1B11_2dO2__97->GetYaxis()->SetTitleFont(42);
   h1B11_2dO2__97->GetZaxis()->SetLabelFont(42);
   h1B11_2dO2__97->GetZaxis()->SetLabelSize(0.035);
   h1B11_2dO2__97->GetZaxis()->SetTitleSize(0.035);
   h1B11_2dO2__97->GetZaxis()->SetTitleFont(42);
   h1B11_2dO2__97->Draw("");
   
   TPaveText *pt = new TPaveText(0.2633006,0.9312746,0.7366994,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{11}B at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclB11_2dO2__98 = new TH1F("hinclB11_2dO2__98","INCL",16,11.45455,72.54545);
   hinclB11_2dO2__98->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_2dO2__98->SetLineColor(ci);
   hinclB11_2dO2__98->SetLineWidth(2);
   hinclB11_2dO2__98->GetXaxis()->SetRange(0,17);
   hinclB11_2dO2__98->GetXaxis()->SetLabelFont(42);
   hinclB11_2dO2__98->GetXaxis()->SetLabelSize(0.035);
   hinclB11_2dO2__98->GetXaxis()->SetTitleSize(0.035);
   hinclB11_2dO2__98->GetXaxis()->SetTitleFont(42);
   hinclB11_2dO2__98->GetYaxis()->SetLabelFont(42);
   hinclB11_2dO2__98->GetYaxis()->SetLabelSize(0.035);
   hinclB11_2dO2__98->GetYaxis()->SetTitleSize(0.035);
   hinclB11_2dO2__98->GetYaxis()->SetTitleFont(42);
   hinclB11_2dO2__98->GetZaxis()->SetLabelFont(42);
   hinclB11_2dO2__98->GetZaxis()->SetLabelSize(0.035);
   hinclB11_2dO2__98->GetZaxis()->SetTitleSize(0.035);
   hinclB11_2dO2__98->GetZaxis()->SetTitleFont(42);
   hinclB11_2dO2__98->Draw("histCsame");
   
   Double_t Graph0_fx1049[16] = {
   13.36364,
   17.18182,
   21,
   24.81818,
   28.63636,
   32.45455,
   36.27273,
   40.09091,
   43.90909,
   47.72727,
   51.54545,
   55.36364,
   59.18182,
   63,
   66.81818,
   70.63636};
   Double_t Graph0_fy1049[16] = {
   0.4,
   0.2,
   0.6,
   0.7,
   0.7,
   0.7,
   0.8,
   1.2,
   1.7,
   1.3,
   3.9,
   6,
   11,
   12,
   3.3,
   0.27};
   Double_t Graph0_fex1049[16] = {
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091};
   Double_t Graph0_fey1049[16] = {
   0.2,
   0.1,
   0.2,
   0.3,
   0.2,
   0.2,
   0.3,
   0.4,
   0.4,
   0.4,
   0.7,
   1,
   2,
   2,
   0.6,
   0.04};
   TGraphErrors *gre = new TGraphErrors(16,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{11}B at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","^{12}C + ^{nat}C #rightarrow ^{11}B at 62 MeV/n",100,5.345455,78.65455);
   Graph_Graph1049->SetMinimum(0.09);
   Graph_Graph1049->SetMaximum(15.39);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
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
   canvasB11_1->Modified();
   canvasB11->cd();
  
// ------------>Primitives in pad: canvasB11_3
   TPad *canvasB11_3 = new TPad("canvasB11_3", "canvasB11_3",0,0.3632613,0.5209121,0.6655906);
   canvasB11_3->Draw();
   canvasB11_3->cd();
   canvasB11_3->Range(-16.74474,-3.39794,82.58727,2.69897);
   canvasB11_3->SetFillColor(0);
   canvasB11_3->SetBorderMode(0);
   canvasB11_3->SetBorderSize(2);
   canvasB11_3->SetLogy();
   canvasB11_3->SetLeftMargin(0.1827957);
   canvasB11_3->SetRightMargin(0);
   canvasB11_3->SetTopMargin(0);
   canvasB11_3->SetBottomMargin(0);
   canvasB11_3->SetFrameBorderMode(0);
   canvasB11_3->SetFrameBorderMode(0);
   
   TH1F *h1B11_4dO9__99 = new TH1F("h1B11_4dO9__99","",1,1.412727,82.58727);
   h1B11_4dO9__99->SetMinimum(0.0004);
   h1B11_4dO9__99->SetMaximum(500);
   h1B11_4dO9__99->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_4dO9__99->SetLineColor(ci);
   h1B11_4dO9__99->GetXaxis()->SetRange(1,1);
   h1B11_4dO9__99->GetXaxis()->SetLabelFont(42);
   h1B11_4dO9__99->GetXaxis()->SetLabelSize(0.07);
   h1B11_4dO9__99->GetXaxis()->SetTitleSize(0.07);
   h1B11_4dO9__99->GetXaxis()->SetTitleFont(42);
   h1B11_4dO9__99->GetYaxis()->SetLabelFont(42);
   h1B11_4dO9__99->GetYaxis()->SetLabelSize(0.07);
   h1B11_4dO9__99->GetYaxis()->SetTitleSize(0.07);
   h1B11_4dO9__99->GetYaxis()->SetTitleOffset(1.1);
   h1B11_4dO9__99->GetYaxis()->SetTitleFont(42);
   h1B11_4dO9__99->GetZaxis()->SetLabelFont(42);
   h1B11_4dO9__99->GetZaxis()->SetLabelSize(0.035);
   h1B11_4dO9__99->GetZaxis()->SetTitleSize(0.035);
   h1B11_4dO9__99->GetZaxis()->SetTitleFont(42);
   h1B11_4dO9__99->Draw("");
   
   TH1F *hinclB11_4dO9__100 = new TH1F("hinclB11_4dO9__100","INCL",17,7.636364,72.54545);
   hinclB11_4dO9__100->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_4dO9__100->SetLineColor(ci);
   hinclB11_4dO9__100->SetLineWidth(2);
   hinclB11_4dO9__100->GetXaxis()->SetRange(0,18);
   hinclB11_4dO9__100->GetXaxis()->SetLabelFont(42);
   hinclB11_4dO9__100->GetXaxis()->SetLabelSize(0.035);
   hinclB11_4dO9__100->GetXaxis()->SetTitleSize(0.035);
   hinclB11_4dO9__100->GetXaxis()->SetTitleFont(42);
   hinclB11_4dO9__100->GetYaxis()->SetLabelFont(42);
   hinclB11_4dO9__100->GetYaxis()->SetLabelSize(0.035);
   hinclB11_4dO9__100->GetYaxis()->SetTitleSize(0.035);
   hinclB11_4dO9__100->GetYaxis()->SetTitleFont(42);
   hinclB11_4dO9__100->GetZaxis()->SetLabelFont(42);
   hinclB11_4dO9__100->GetZaxis()->SetLabelSize(0.035);
   hinclB11_4dO9__100->GetZaxis()->SetTitleSize(0.035);
   hinclB11_4dO9__100->GetZaxis()->SetTitleFont(42);
   hinclB11_4dO9__100->Draw("histCsame");
   
   Double_t Graph0_fx1050[17] = {
   9.545455,
   13.36364,
   17.18182,
   21,
   24.81818,
   28.63636,
   32.45455,
   36.27273,
   40.09091,
   43.90909,
   47.72727,
   51.54545,
   55.36364,
   59.18182,
   63,
   66.81818,
   70.63636};
   Double_t Graph0_fy1050[17] = {
   0.011,
   0.02,
   0.011,
   0.011,
   0.011,
   0.2,
   0.2,
   0.3,
   0.9,
   0.4,
   0.9,
   2.9,
   3.9,
   4.1,
   3.4,
   1.2,
   0.3};
   Double_t Graph0_fex1050[17] = {
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091};
   Double_t Graph0_fey1050[17] = {
   0.008,
   0.01,
   0.008,
   0.008,
   0.008,
   0.1,
   0.1,
   0.2,
   0.3,
   0.2,
   0.3,
   0.6,
   0.7,
   0.8,
   0.7,
   0.4,
   0.2};
   gre = new TGraphErrors(17,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1050 = new TH1F("Graph_Graph1050","",100,1.145455,79.03636);
   Graph_Graph1050->SetMinimum(0.0027);
   Graph_Graph1050->SetMaximum(5.3897);
   Graph_Graph1050->SetDirectory(0);
   Graph_Graph1050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1050->SetLineColor(ci);
   Graph_Graph1050->GetXaxis()->SetLabelFont(42);
   Graph_Graph1050->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1050->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1050->GetXaxis()->SetTitleFont(42);
   Graph_Graph1050->GetYaxis()->SetLabelFont(42);
   Graph_Graph1050->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1050->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1050->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1050->GetYaxis()->SetTitleFont(42);
   Graph_Graph1050->GetZaxis()->SetLabelFont(42);
   Graph_Graph1050->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1050->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1050);
   
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
   canvasB11_3->Modified();
   canvasB11->cd();
  
// ------------>Primitives in pad: canvasB11_5
   TPad *canvasB11_5 = new TPad("canvasB11_5", "canvasB11_5",0,0,0.5209121,0.3632613);
   canvasB11_5->Draw();
   canvasB11_5->cd();
   canvasB11_5->Range(-16.74474,-4.761723,82.58727,2.69897);
   canvasB11_5->SetFillColor(0);
   canvasB11_5->SetBorderMode(0);
   canvasB11_5->SetBorderSize(2);
   canvasB11_5->SetLogy();
   canvasB11_5->SetLeftMargin(0.1827957);
   canvasB11_5->SetRightMargin(0);
   canvasB11_5->SetTopMargin(0);
   canvasB11_5->SetBottomMargin(0.1827957);
   canvasB11_5->SetFrameBorderMode(0);
   canvasB11_5->SetFrameBorderMode(0);
   
   TH1F *h1B11_11dO1__101 = new TH1F("h1B11_11dO1__101","",1,1.412727,82.58727);
   h1B11_11dO1__101->SetMinimum(0.0004);
   h1B11_11dO1__101->SetMaximum(500);
   h1B11_11dO1__101->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_11dO1__101->SetLineColor(ci);
   h1B11_11dO1__101->GetXaxis()->SetRange(1,1);
   h1B11_11dO1__101->GetXaxis()->SetLabelFont(42);
   h1B11_11dO1__101->GetXaxis()->SetLabelSize(0.07);
   h1B11_11dO1__101->GetXaxis()->SetTitleSize(0.07);
   h1B11_11dO1__101->GetXaxis()->SetTitleFont(42);
   h1B11_11dO1__101->GetYaxis()->SetLabelFont(42);
   h1B11_11dO1__101->GetYaxis()->SetLabelSize(0.07);
   h1B11_11dO1__101->GetYaxis()->SetTitleSize(0.07);
   h1B11_11dO1__101->GetYaxis()->SetTitleOffset(1.1);
   h1B11_11dO1__101->GetYaxis()->SetTitleFont(42);
   h1B11_11dO1__101->GetZaxis()->SetLabelFont(42);
   h1B11_11dO1__101->GetZaxis()->SetLabelSize(0.035);
   h1B11_11dO1__101->GetZaxis()->SetTitleSize(0.035);
   h1B11_11dO1__101->GetZaxis()->SetTitleFont(42);
   h1B11_11dO1__101->Draw("");
   
   TH1F *hinclB11_11dO1__102 = new TH1F("hinclB11_11dO1__102","INCL",17,7.636364,72.54545);
   hinclB11_11dO1__102->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_11dO1__102->SetLineColor(ci);
   hinclB11_11dO1__102->SetLineWidth(2);
   hinclB11_11dO1__102->GetXaxis()->SetRange(0,18);
   hinclB11_11dO1__102->GetXaxis()->SetLabelFont(42);
   hinclB11_11dO1__102->GetXaxis()->SetLabelSize(0.035);
   hinclB11_11dO1__102->GetXaxis()->SetTitleSize(0.035);
   hinclB11_11dO1__102->GetXaxis()->SetTitleFont(42);
   hinclB11_11dO1__102->GetYaxis()->SetLabelFont(42);
   hinclB11_11dO1__102->GetYaxis()->SetLabelSize(0.035);
   hinclB11_11dO1__102->GetYaxis()->SetTitleSize(0.035);
   hinclB11_11dO1__102->GetYaxis()->SetTitleFont(42);
   hinclB11_11dO1__102->GetZaxis()->SetLabelFont(42);
   hinclB11_11dO1__102->GetZaxis()->SetLabelSize(0.035);
   hinclB11_11dO1__102->GetZaxis()->SetTitleSize(0.035);
   hinclB11_11dO1__102->GetZaxis()->SetTitleFont(42);
   hinclB11_11dO1__102->Draw("histCsame");
   
   Double_t Graph0_fx1051[17] = {
   9.545455,
   13.36364,
   17.18182,
   21,
   24.81818,
   28.63636,
   32.45455,
   36.27273,
   40.09091,
   43.90909,
   47.72727,
   51.54545,
   55.36364,
   59.18182,
   63,
   66.81818,
   70.63636};
   Double_t Graph0_fy1051[17] = {
   0.03,
   0.018,
   0.014,
   0.02,
   0.02,
   0.03,
   0.03,
   0.08,
   0.13,
   0.13,
   0.23,
   0.33,
   0.33,
   0.32,
   0.24,
   0.13,
   0.012};
   Double_t Graph0_fex1051[17] = {
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091};
   Double_t Graph0_fey1051[17] = {
   0.01,
   0.008,
   0.008,
   0.01,
   0.01,
   0.01,
   0.01,
   0.02,
   0.03,
   0.03,
   0.04,
   0.05,
   0.05,
   0.05,
   0.05,
   0.03,
   0.008};
   gre = new TGraphErrors(17,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,1.145455,79.03636);
   Graph_Graph1051->SetMinimum(0.0036);
   Graph_Graph1051->SetMaximum(0.4176);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1051->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
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
   entry=leg->AddEntry("hinclB11_11.1","INCL","l");

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
   canvasB11_5->Modified();
   canvasB11->cd();
  
// ------------>Primitives in pad: canvasB11_2
   TPad *canvasB11_2 = new TPad("canvasB11_2", "canvasB11_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasB11_2->Draw();
   canvasB11_2->cd();
   canvasB11_2->Range(1.412727,-3.39794,82.58727,2.69897);
   canvasB11_2->SetFillColor(0);
   canvasB11_2->SetBorderMode(0);
   canvasB11_2->SetBorderSize(2);
   canvasB11_2->SetLogy();
   canvasB11_2->SetLeftMargin(0);
   canvasB11_2->SetRightMargin(0);
   canvasB11_2->SetTopMargin(0);
   canvasB11_2->SetBottomMargin(0);
   canvasB11_2->SetFrameBorderMode(0);
   canvasB11_2->SetFrameBorderMode(0);
   
   TH1F *h1B11_3dO5__103 = new TH1F("h1B11_3dO5__103","",1,1.412727,82.58727);
   h1B11_3dO5__103->SetMinimum(0.0004);
   h1B11_3dO5__103->SetMaximum(500);
   h1B11_3dO5__103->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_3dO5__103->SetLineColor(ci);
   h1B11_3dO5__103->GetXaxis()->SetRange(1,1);
   h1B11_3dO5__103->GetXaxis()->SetLabelFont(42);
   h1B11_3dO5__103->GetXaxis()->SetLabelSize(0.07);
   h1B11_3dO5__103->GetXaxis()->SetTitleSize(0.07);
   h1B11_3dO5__103->GetXaxis()->SetTitleFont(42);
   h1B11_3dO5__103->GetYaxis()->SetLabelFont(42);
   h1B11_3dO5__103->GetYaxis()->SetLabelSize(0.07);
   h1B11_3dO5__103->GetYaxis()->SetTitleSize(0.07);
   h1B11_3dO5__103->GetYaxis()->SetTitleOffset(1.1);
   h1B11_3dO5__103->GetYaxis()->SetTitleFont(42);
   h1B11_3dO5__103->GetZaxis()->SetLabelFont(42);
   h1B11_3dO5__103->GetZaxis()->SetLabelSize(0.035);
   h1B11_3dO5__103->GetZaxis()->SetTitleSize(0.035);
   h1B11_3dO5__103->GetZaxis()->SetTitleFont(42);
   h1B11_3dO5__103->Draw("");
   
   TH1F *hinclB11_3dO5__104 = new TH1F("hinclB11_3dO5__104","INCL",17,7.636364,72.54545);
   hinclB11_3dO5__104->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_3dO5__104->SetLineColor(ci);
   hinclB11_3dO5__104->SetLineWidth(2);
   hinclB11_3dO5__104->GetXaxis()->SetRange(0,18);
   hinclB11_3dO5__104->GetXaxis()->SetLabelFont(42);
   hinclB11_3dO5__104->GetXaxis()->SetLabelSize(0.035);
   hinclB11_3dO5__104->GetXaxis()->SetTitleSize(0.035);
   hinclB11_3dO5__104->GetXaxis()->SetTitleFont(42);
   hinclB11_3dO5__104->GetYaxis()->SetLabelFont(42);
   hinclB11_3dO5__104->GetYaxis()->SetLabelSize(0.035);
   hinclB11_3dO5__104->GetYaxis()->SetTitleSize(0.035);
   hinclB11_3dO5__104->GetYaxis()->SetTitleFont(42);
   hinclB11_3dO5__104->GetZaxis()->SetLabelFont(42);
   hinclB11_3dO5__104->GetZaxis()->SetLabelSize(0.035);
   hinclB11_3dO5__104->GetZaxis()->SetTitleSize(0.035);
   hinclB11_3dO5__104->GetZaxis()->SetTitleFont(42);
   hinclB11_3dO5__104->Draw("histCsame");
   
   Double_t Graph0_fx1052[17] = {
   9.545455,
   13.36364,
   17.18182,
   21,
   24.81818,
   28.63636,
   32.45455,
   36.27273,
   40.09091,
   43.90909,
   47.72727,
   51.54545,
   55.36364,
   59.18182,
   63,
   66.81818,
   70.63636};
   Double_t Graph0_fy1052[17] = {
   0.2,
   0.8,
   0.5,
   0.5,
   0.5,
   0.6,
   1,
   0.9,
   0.7,
   1.1,
   2.1,
   4.1,
   5.1,
   7,
   6,
   1.7,
   0.6};
   Double_t Graph0_fex1052[17] = {
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091};
   Double_t Graph0_fey1052[17] = {
   0.1,
   0.3,
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.2,
   0.3,
   0.5,
   0.7,
   0.9,
   1,
   1,
   0.4,
   0.2};
   gre = new TGraphErrors(17,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1052 = new TH1F("Graph_Graph1052","",100,1.145455,79.03636);
   Graph_Graph1052->SetMinimum(0.09);
   Graph_Graph1052->SetMaximum(8.79);
   Graph_Graph1052->SetDirectory(0);
   Graph_Graph1052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1052->SetLineColor(ci);
   Graph_Graph1052->GetXaxis()->SetLabelFont(42);
   Graph_Graph1052->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1052->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1052->GetXaxis()->SetTitleFont(42);
   Graph_Graph1052->GetYaxis()->SetLabelFont(42);
   Graph_Graph1052->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1052->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1052->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1052->GetYaxis()->SetTitleFont(42);
   Graph_Graph1052->GetZaxis()->SetLabelFont(42);
   Graph_Graph1052->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1052->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1052);
   
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
   canvasB11_2->Modified();
   canvasB11->cd();
  
// ------------>Primitives in pad: canvasB11_4
   TPad *canvasB11_4 = new TPad("canvasB11_4", "canvasB11_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasB11_4->Draw();
   canvasB11_4->cd();
   canvasB11_4->Range(1.412727,-3.39794,82.58727,2.69897);
   canvasB11_4->SetFillColor(0);
   canvasB11_4->SetBorderMode(0);
   canvasB11_4->SetBorderSize(2);
   canvasB11_4->SetLogy();
   canvasB11_4->SetLeftMargin(0);
   canvasB11_4->SetRightMargin(0);
   canvasB11_4->SetTopMargin(0);
   canvasB11_4->SetBottomMargin(0);
   canvasB11_4->SetFrameBorderMode(0);
   canvasB11_4->SetFrameBorderMode(0);
   
   TH1F *h1B11_7dO6__105 = new TH1F("h1B11_7dO6__105","",1,1.412727,82.58727);
   h1B11_7dO6__105->SetMinimum(0.0004);
   h1B11_7dO6__105->SetMaximum(500);
   h1B11_7dO6__105->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_7dO6__105->SetLineColor(ci);
   h1B11_7dO6__105->GetXaxis()->SetRange(1,1);
   h1B11_7dO6__105->GetXaxis()->SetLabelFont(42);
   h1B11_7dO6__105->GetXaxis()->SetLabelSize(0.07);
   h1B11_7dO6__105->GetXaxis()->SetTitleSize(0.07);
   h1B11_7dO6__105->GetXaxis()->SetTitleFont(42);
   h1B11_7dO6__105->GetYaxis()->SetLabelFont(42);
   h1B11_7dO6__105->GetYaxis()->SetLabelSize(0.07);
   h1B11_7dO6__105->GetYaxis()->SetTitleSize(0.07);
   h1B11_7dO6__105->GetYaxis()->SetTitleOffset(1.1);
   h1B11_7dO6__105->GetYaxis()->SetTitleFont(42);
   h1B11_7dO6__105->GetZaxis()->SetLabelFont(42);
   h1B11_7dO6__105->GetZaxis()->SetLabelSize(0.035);
   h1B11_7dO6__105->GetZaxis()->SetTitleSize(0.035);
   h1B11_7dO6__105->GetZaxis()->SetTitleFont(42);
   h1B11_7dO6__105->Draw("");
   
   TH1F *hinclB11_7dO6__106 = new TH1F("hinclB11_7dO6__106","INCL",17,7.636364,72.54545);
   hinclB11_7dO6__106->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_7dO6__106->SetLineColor(ci);
   hinclB11_7dO6__106->SetLineWidth(2);
   hinclB11_7dO6__106->GetXaxis()->SetRange(0,18);
   hinclB11_7dO6__106->GetXaxis()->SetLabelFont(42);
   hinclB11_7dO6__106->GetXaxis()->SetLabelSize(0.035);
   hinclB11_7dO6__106->GetXaxis()->SetTitleSize(0.035);
   hinclB11_7dO6__106->GetXaxis()->SetTitleFont(42);
   hinclB11_7dO6__106->GetYaxis()->SetLabelFont(42);
   hinclB11_7dO6__106->GetYaxis()->SetLabelSize(0.035);
   hinclB11_7dO6__106->GetYaxis()->SetTitleSize(0.035);
   hinclB11_7dO6__106->GetYaxis()->SetTitleFont(42);
   hinclB11_7dO6__106->GetZaxis()->SetLabelFont(42);
   hinclB11_7dO6__106->GetZaxis()->SetLabelSize(0.035);
   hinclB11_7dO6__106->GetZaxis()->SetTitleSize(0.035);
   hinclB11_7dO6__106->GetZaxis()->SetTitleFont(42);
   hinclB11_7dO6__106->Draw("histCsame");
   
   Double_t Graph0_fx1053[17] = {
   9.545455,
   13.36364,
   17.18182,
   21,
   24.81818,
   28.63636,
   32.45455,
   36.27273,
   40.09091,
   43.90909,
   47.72727,
   51.54545,
   55.36364,
   59.18182,
   63,
   66.81818,
   70.63636};
   Double_t Graph0_fy1053[17] = {
   0.08,
   0.09,
   0.04,
   0.04,
   0.07,
   0.12,
   0.16,
   0.21,
   0.41,
   0.65,
   1.2,
   1.8,
   1.9,
   1.4,
   0.7,
   0.39,
   0.07};
   Double_t Graph0_fex1053[17] = {
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091};
   Double_t Graph0_fey1053[17] = {
   0.02,
   0.02,
   0.01,
   0.01,
   0.02,
   0.03,
   0.03,
   0.04,
   0.06,
   0.09,
   0.2,
   0.2,
   0.2,
   0.2,
   0.09,
   0.06,
   0.02};
   gre = new TGraphErrors(17,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,1.145455,79.03636);
   Graph_Graph1053->SetMinimum(0.027);
   Graph_Graph1053->SetMaximum(2.307);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1053->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
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
   canvasB11_4->Modified();
   canvasB11->cd();
  
// ------------>Primitives in pad: canvasB11_6
   TPad *canvasB11_6 = new TPad("canvasB11_6", "canvasB11_6",0.5209121,0,0.9504264,0.3632613);
   canvasB11_6->Draw();
   canvasB11_6->cd();
   canvasB11_6->Range(1.412727,-4.761723,82.58727,2.69897);
   canvasB11_6->SetFillColor(0);
   canvasB11_6->SetBorderMode(0);
   canvasB11_6->SetBorderSize(2);
   canvasB11_6->SetLogy();
   canvasB11_6->SetLeftMargin(0);
   canvasB11_6->SetRightMargin(0);
   canvasB11_6->SetTopMargin(0);
   canvasB11_6->SetBottomMargin(0.1827957);
   canvasB11_6->SetFrameBorderMode(0);
   canvasB11_6->SetFrameBorderMode(0);
   
   TH1F *h1B11_14dO4__107 = new TH1F("h1B11_14dO4__107","",1,1.412727,82.58727);
   h1B11_14dO4__107->SetMinimum(0.0004);
   h1B11_14dO4__107->SetMaximum(500);
   h1B11_14dO4__107->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_14dO4__107->SetLineColor(ci);
   h1B11_14dO4__107->GetXaxis()->SetTitle("E  [MeV/n]");
   h1B11_14dO4__107->GetXaxis()->SetRange(1,1);
   h1B11_14dO4__107->GetXaxis()->SetLabelFont(42);
   h1B11_14dO4__107->GetXaxis()->SetLabelSize(0.07);
   h1B11_14dO4__107->GetXaxis()->SetTitleSize(0.07);
   h1B11_14dO4__107->GetXaxis()->SetTitleFont(42);
   h1B11_14dO4__107->GetYaxis()->SetLabelFont(42);
   h1B11_14dO4__107->GetYaxis()->SetLabelSize(0.07);
   h1B11_14dO4__107->GetYaxis()->SetTitleSize(0.07);
   h1B11_14dO4__107->GetYaxis()->SetTitleOffset(1.1);
   h1B11_14dO4__107->GetYaxis()->SetTitleFont(42);
   h1B11_14dO4__107->GetZaxis()->SetLabelFont(42);
   h1B11_14dO4__107->GetZaxis()->SetLabelSize(0.035);
   h1B11_14dO4__107->GetZaxis()->SetTitleSize(0.035);
   h1B11_14dO4__107->GetZaxis()->SetTitleFont(42);
   h1B11_14dO4__107->Draw("");
   
   TH1F *hinclB11_14dO4__108 = new TH1F("hinclB11_14dO4__108","INCL",15,7.636364,68.72727);
   hinclB11_14dO4__108->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_14dO4__108->SetLineColor(ci);
   hinclB11_14dO4__108->SetLineWidth(2);
   hinclB11_14dO4__108->GetXaxis()->SetRange(0,16);
   hinclB11_14dO4__108->GetXaxis()->SetLabelFont(42);
   hinclB11_14dO4__108->GetXaxis()->SetLabelSize(0.035);
   hinclB11_14dO4__108->GetXaxis()->SetTitleSize(0.035);
   hinclB11_14dO4__108->GetXaxis()->SetTitleFont(42);
   hinclB11_14dO4__108->GetYaxis()->SetLabelFont(42);
   hinclB11_14dO4__108->GetYaxis()->SetLabelSize(0.035);
   hinclB11_14dO4__108->GetYaxis()->SetTitleSize(0.035);
   hinclB11_14dO4__108->GetYaxis()->SetTitleFont(42);
   hinclB11_14dO4__108->GetZaxis()->SetLabelFont(42);
   hinclB11_14dO4__108->GetZaxis()->SetLabelSize(0.035);
   hinclB11_14dO4__108->GetZaxis()->SetTitleSize(0.035);
   hinclB11_14dO4__108->GetZaxis()->SetTitleFont(42);
   hinclB11_14dO4__108->Draw("histCsame");
   
   Double_t Graph0_fx1054[16] = {
   9.545455,
   13.36364,
   17.18182,
   21,
   24.81818,
   28.63636,
   32.45455,
   36.27273,
   40.09091,
   43.90909,
   47.72727,
   51.54545,
   55.36364,
   59.18182,
   63,
   66.81818};
   Double_t Graph0_fy1054[16] = {
   0.004,
   0.004,
   0.009,
   0.007,
   0.007,
   0.006,
   0.007,
   0.01,
   0.014,
   0.028,
   0.04,
   0.032,
   0.028,
   0.014,
   0.004,
   0.004};
   Double_t Graph0_fex1054[16] = {
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091,
   1.909091};
   Double_t Graph0_fey1054[16] = {
   0.003,
   0.003,
   0.003,
   0.003,
   0.003,
   0.003,
   0.003,
   0.004,
   0.005,
   0.007,
   0.01,
   0.008,
   0.007,
   0.005,
   0.003,
   0.003};
   gre = new TGraphErrors(16,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1054 = new TH1F("Graph_Graph1054","",100,1.527273,74.83636);
   Graph_Graph1054->SetMinimum(0.0009);
   Graph_Graph1054->SetMaximum(0.0549);
   Graph_Graph1054->SetDirectory(0);
   Graph_Graph1054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1054->SetLineColor(ci);
   Graph_Graph1054->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1054->GetXaxis()->SetLabelFont(42);
   Graph_Graph1054->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1054->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1054->GetXaxis()->SetTitleFont(42);
   Graph_Graph1054->GetYaxis()->SetLabelFont(42);
   Graph_Graph1054->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1054->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1054->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1054->GetYaxis()->SetTitleFont(42);
   Graph_Graph1054->GetZaxis()->SetLabelFont(42);
   Graph_Graph1054->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1054->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1054);
   
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
   canvasB11_6->Modified();
   canvasB11->cd();
   canvasB11->Modified();
   canvasB11->cd();
   canvasB11->SetSelected(canvasB11);
}
