void B11()
{
//=========Macro generated from canvas: canvasB11/canvasB11
//=========  (Sat Dec 15 20:27:36 2018) by ROOT version6.06/06
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
   canvasB11_1->Range(-16.74474,-3.39794,82.58727,3.69897);
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
   
   TH1F *h1B11_2dO2__145 = new TH1F("h1B11_2dO2__145","^{12}C + ^{nat}C #rightarrow ^{11}B at 62 MeV/n",1,1.412727,82.58727);
   h1B11_2dO2__145->SetMinimum(0.0004);
   h1B11_2dO2__145->SetMaximum(5000);
   h1B11_2dO2__145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1B11_2dO2__145->SetLineColor(ci);
   h1B11_2dO2__145->GetXaxis()->SetRange(1,1);
   h1B11_2dO2__145->GetXaxis()->SetLabelFont(42);
   h1B11_2dO2__145->GetXaxis()->SetLabelSize(0.07);
   h1B11_2dO2__145->GetXaxis()->SetTitleSize(0.07);
   h1B11_2dO2__145->GetXaxis()->SetTitleFont(42);
   h1B11_2dO2__145->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1B11_2dO2__145->GetYaxis()->SetLabelFont(42);
   h1B11_2dO2__145->GetYaxis()->SetLabelSize(0.07);
   h1B11_2dO2__145->GetYaxis()->SetTitleSize(0.07);
   h1B11_2dO2__145->GetYaxis()->SetTitleOffset(1.1);
   h1B11_2dO2__145->GetYaxis()->SetTitleFont(42);
   h1B11_2dO2__145->GetZaxis()->SetLabelFont(42);
   h1B11_2dO2__145->GetZaxis()->SetLabelSize(0.035);
   h1B11_2dO2__145->GetZaxis()->SetTitleSize(0.035);
   h1B11_2dO2__145->GetZaxis()->SetTitleFont(42);
   h1B11_2dO2__145->Draw("");
   
   TPaveText *pt = new TPaveText(0.2633006,0.9312746,0.7366994,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{11}B at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicB11_2dO2__146 = new TH1F("hbicB11_2dO2__146","BIC",16,11.45455,72.54545);
   hbicB11_2dO2__146->SetBinContent(0,1.881519);
   hbicB11_2dO2__146->SetBinContent(1,0.08180518);
   hbicB11_2dO2__146->SetBinContent(13,123.5258);
   hbicB11_2dO2__146->SetBinContent(14,300.1432);
   hbicB11_2dO2__146->SetEntries(5203);
   hbicB11_2dO2__146->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB11_2dO2__146->SetLineColor(ci);
   hbicB11_2dO2__146->SetLineWidth(2);
   hbicB11_2dO2__146->GetXaxis()->SetRange(0,17);
   hbicB11_2dO2__146->GetXaxis()->SetLabelFont(42);
   hbicB11_2dO2__146->GetXaxis()->SetLabelSize(0.035);
   hbicB11_2dO2__146->GetXaxis()->SetTitleSize(0.035);
   hbicB11_2dO2__146->GetXaxis()->SetTitleFont(42);
   hbicB11_2dO2__146->GetYaxis()->SetLabelFont(42);
   hbicB11_2dO2__146->GetYaxis()->SetLabelSize(0.035);
   hbicB11_2dO2__146->GetYaxis()->SetTitleSize(0.035);
   hbicB11_2dO2__146->GetYaxis()->SetTitleFont(42);
   hbicB11_2dO2__146->GetZaxis()->SetLabelFont(42);
   hbicB11_2dO2__146->GetZaxis()->SetLabelSize(0.035);
   hbicB11_2dO2__146->GetZaxis()->SetTitleSize(0.035);
   hbicB11_2dO2__146->GetZaxis()->SetTitleFont(42);
   hbicB11_2dO2__146->Draw("histCsame");
   
   TH1F *hinclB11_2dO2__147 = new TH1F("hinclB11_2dO2__147","INCL",16,11.45455,72.54545);
   hinclB11_2dO2__147->SetBinContent(0,0.3272207);
   hinclB11_2dO2__147->SetBinContent(1,0.3272207);
   hinclB11_2dO2__147->SetBinContent(2,1.227078);
   hinclB11_2dO2__147->SetBinContent(3,2.454155);
   hinclB11_2dO2__147->SetBinContent(4,5.399142);
   hinclB11_2dO2__147->SetBinContent(5,8.262323);
   hinclB11_2dO2__147->SetBinContent(6,15.87021);
   hinclB11_2dO2__147->SetBinContent(7,20.4513);
   hinclB11_2dO2__147->SetBinContent(8,33.29471);
   hinclB11_2dO2__147->SetBinContent(9,43.35675);
   hinclB11_2dO2__147->SetBinContent(10,52.60073);
   hinclB11_2dO2__147->SetBinContent(11,76.24243);
   hinclB11_2dO2__147->SetBinContent(12,44.74744);
   hinclB11_2dO2__147->SetBinContent(13,3.517623);
   hinclB11_2dO2__147->SetEntries(3766);
   hinclB11_2dO2__147->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_2dO2__147->SetLineColor(ci);
   hinclB11_2dO2__147->SetLineWidth(2);
   hinclB11_2dO2__147->GetXaxis()->SetRange(0,17);
   hinclB11_2dO2__147->GetXaxis()->SetLabelFont(42);
   hinclB11_2dO2__147->GetXaxis()->SetLabelSize(0.035);
   hinclB11_2dO2__147->GetXaxis()->SetTitleSize(0.035);
   hinclB11_2dO2__147->GetXaxis()->SetTitleFont(42);
   hinclB11_2dO2__147->GetYaxis()->SetLabelFont(42);
   hinclB11_2dO2__147->GetYaxis()->SetLabelSize(0.035);
   hinclB11_2dO2__147->GetYaxis()->SetTitleSize(0.035);
   hinclB11_2dO2__147->GetYaxis()->SetTitleFont(42);
   hinclB11_2dO2__147->GetZaxis()->SetLabelFont(42);
   hinclB11_2dO2__147->GetZaxis()->SetLabelSize(0.035);
   hinclB11_2dO2__147->GetZaxis()->SetTitleSize(0.035);
   hinclB11_2dO2__147->GetZaxis()->SetTitleFont(42);
   hinclB11_2dO2__147->Draw("histCsame");
   
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
   canvasB11_3->Range(-16.74474,-3.39794,82.58727,3.69897);
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
   
   TH1F *h1B11_4dO9__148 = new TH1F("h1B11_4dO9__148","",1,1.412727,82.58727);
   h1B11_4dO9__148->SetMinimum(0.0004);
   h1B11_4dO9__148->SetMaximum(5000);
   h1B11_4dO9__148->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_4dO9__148->SetLineColor(ci);
   h1B11_4dO9__148->GetXaxis()->SetRange(1,1);
   h1B11_4dO9__148->GetXaxis()->SetLabelFont(42);
   h1B11_4dO9__148->GetXaxis()->SetLabelSize(0.07);
   h1B11_4dO9__148->GetXaxis()->SetTitleSize(0.07);
   h1B11_4dO9__148->GetXaxis()->SetTitleFont(42);
   h1B11_4dO9__148->GetYaxis()->SetLabelFont(42);
   h1B11_4dO9__148->GetYaxis()->SetLabelSize(0.07);
   h1B11_4dO9__148->GetYaxis()->SetTitleSize(0.07);
   h1B11_4dO9__148->GetYaxis()->SetTitleOffset(1.1);
   h1B11_4dO9__148->GetYaxis()->SetTitleFont(42);
   h1B11_4dO9__148->GetZaxis()->SetLabelFont(42);
   h1B11_4dO9__148->GetZaxis()->SetLabelSize(0.035);
   h1B11_4dO9__148->GetZaxis()->SetTitleSize(0.035);
   h1B11_4dO9__148->GetZaxis()->SetTitleFont(42);
   h1B11_4dO9__148->Draw("");
   
   TH1F *hbicB11_4dO9__149 = new TH1F("hbicB11_4dO9__149","BIC",17,7.636364,72.54545);
   hbicB11_4dO9__149->SetBinContent(0,1.801467);
   hbicB11_4dO9__149->SetBinContent(3,0.03676463);
   hbicB11_4dO9__149->SetBinContent(13,0.3308817);
   hbicB11_4dO9__149->SetBinContent(14,150.5879);
   hbicB11_4dO9__149->SetBinContent(15,10.14704);
   hbicB11_4dO9__149->SetEntries(4431);
   hbicB11_4dO9__149->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB11_4dO9__149->SetLineColor(ci);
   hbicB11_4dO9__149->SetLineWidth(2);
   hbicB11_4dO9__149->GetXaxis()->SetRange(0,18);
   hbicB11_4dO9__149->GetXaxis()->SetLabelFont(42);
   hbicB11_4dO9__149->GetXaxis()->SetLabelSize(0.035);
   hbicB11_4dO9__149->GetXaxis()->SetTitleSize(0.035);
   hbicB11_4dO9__149->GetXaxis()->SetTitleFont(42);
   hbicB11_4dO9__149->GetYaxis()->SetLabelFont(42);
   hbicB11_4dO9__149->GetYaxis()->SetLabelSize(0.035);
   hbicB11_4dO9__149->GetYaxis()->SetTitleSize(0.035);
   hbicB11_4dO9__149->GetYaxis()->SetTitleFont(42);
   hbicB11_4dO9__149->GetZaxis()->SetLabelFont(42);
   hbicB11_4dO9__149->GetZaxis()->SetLabelSize(0.035);
   hbicB11_4dO9__149->GetZaxis()->SetTitleSize(0.035);
   hbicB11_4dO9__149->GetZaxis()->SetTitleFont(42);
   hbicB11_4dO9__149->Draw("histCsame");
   
   TH1F *hinclB11_4dO9__150 = new TH1F("hinclB11_4dO9__150","INCL",17,7.636364,72.54545);
   hinclB11_4dO9__150->SetBinContent(0,0.404411);
   hinclB11_4dO9__150->SetBinContent(2,0.3676463);
   hinclB11_4dO9__150->SetBinContent(3,0.7352927);
   hinclB11_4dO9__150->SetBinContent(4,2.132349);
   hinclB11_4dO9__150->SetBinContent(5,3.786757);
   hinclB11_4dO9__150->SetBinContent(6,5.882341);
   hinclB11_4dO9__150->SetBinContent(7,7.941161);
   hinclB11_4dO9__150->SetBinContent(8,11.47057);
   hinclB11_4dO9__150->SetBinContent(9,13.3088);
   hinclB11_4dO9__150->SetBinContent(10,10.55145);
   hinclB11_4dO9__150->SetBinContent(11,8.455866);
   hinclB11_4dO9__150->SetBinContent(12,6.176458);
   hinclB11_4dO9__150->SetBinContent(13,2.389701);
   hinclB11_4dO9__150->SetBinContent(14,0.1102939);
   hinclB11_4dO9__150->SetEntries(2005);
   hinclB11_4dO9__150->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_4dO9__150->SetLineColor(ci);
   hinclB11_4dO9__150->SetLineWidth(2);
   hinclB11_4dO9__150->GetXaxis()->SetRange(0,18);
   hinclB11_4dO9__150->GetXaxis()->SetLabelFont(42);
   hinclB11_4dO9__150->GetXaxis()->SetLabelSize(0.035);
   hinclB11_4dO9__150->GetXaxis()->SetTitleSize(0.035);
   hinclB11_4dO9__150->GetXaxis()->SetTitleFont(42);
   hinclB11_4dO9__150->GetYaxis()->SetLabelFont(42);
   hinclB11_4dO9__150->GetYaxis()->SetLabelSize(0.035);
   hinclB11_4dO9__150->GetYaxis()->SetTitleSize(0.035);
   hinclB11_4dO9__150->GetYaxis()->SetTitleFont(42);
   hinclB11_4dO9__150->GetZaxis()->SetLabelFont(42);
   hinclB11_4dO9__150->GetZaxis()->SetLabelSize(0.035);
   hinclB11_4dO9__150->GetZaxis()->SetTitleSize(0.035);
   hinclB11_4dO9__150->GetZaxis()->SetTitleFont(42);
   hinclB11_4dO9__150->Draw("histCsame");
   
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
   canvasB11_5->Range(-16.74474,-4.985407,82.58727,3.69897);
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
   
   TH1F *h1B11_11dO1__151 = new TH1F("h1B11_11dO1__151","",1,1.412727,82.58727);
   h1B11_11dO1__151->SetMinimum(0.0004);
   h1B11_11dO1__151->SetMaximum(5000);
   h1B11_11dO1__151->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_11dO1__151->SetLineColor(ci);
   h1B11_11dO1__151->GetXaxis()->SetRange(1,1);
   h1B11_11dO1__151->GetXaxis()->SetLabelFont(42);
   h1B11_11dO1__151->GetXaxis()->SetLabelSize(0.07);
   h1B11_11dO1__151->GetXaxis()->SetTitleSize(0.07);
   h1B11_11dO1__151->GetXaxis()->SetTitleFont(42);
   h1B11_11dO1__151->GetYaxis()->SetLabelFont(42);
   h1B11_11dO1__151->GetYaxis()->SetLabelSize(0.07);
   h1B11_11dO1__151->GetYaxis()->SetTitleSize(0.07);
   h1B11_11dO1__151->GetYaxis()->SetTitleOffset(1.1);
   h1B11_11dO1__151->GetYaxis()->SetTitleFont(42);
   h1B11_11dO1__151->GetZaxis()->SetLabelFont(42);
   h1B11_11dO1__151->GetZaxis()->SetLabelSize(0.035);
   h1B11_11dO1__151->GetZaxis()->SetTitleSize(0.035);
   h1B11_11dO1__151->GetZaxis()->SetTitleFont(42);
   h1B11_11dO1__151->Draw("");
   
   TH1F *hbicB11_11dO1__152 = new TH1F("hbicB11_11dO1__152","BIC",17,7.636364,72.54545);
   hbicB11_11dO1__152->SetBinContent(0,1.553019);
   hbicB11_11dO1__152->SetBinContent(1,0.03480156);
   hbicB11_11dO1__152->SetBinContent(2,0.1261556);
   hbicB11_11dO1__152->SetBinContent(3,0.04785214);
   hbicB11_11dO1__152->SetBinContent(4,0.02175097);
   hbicB11_11dO1__152->SetBinContent(6,0.004350195);
   hbicB11_11dO1__152->SetBinContent(11,0.004350195);
   hbicB11_11dO1__152->SetBinContent(12,3.005985);
   hbicB11_11dO1__152->SetBinContent(13,29.64658);
   hbicB11_11dO1__152->SetBinContent(14,15.44319);
   hbicB11_11dO1__152->SetBinContent(15,0.008700389);
   hbicB11_11dO1__152->SetEntries(11470);
   hbicB11_11dO1__152->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB11_11dO1__152->SetLineColor(ci);
   hbicB11_11dO1__152->SetLineWidth(2);
   hbicB11_11dO1__152->GetXaxis()->SetRange(0,18);
   hbicB11_11dO1__152->GetXaxis()->SetLabelFont(42);
   hbicB11_11dO1__152->GetXaxis()->SetLabelSize(0.035);
   hbicB11_11dO1__152->GetXaxis()->SetTitleSize(0.035);
   hbicB11_11dO1__152->GetXaxis()->SetTitleFont(42);
   hbicB11_11dO1__152->GetYaxis()->SetLabelFont(42);
   hbicB11_11dO1__152->GetYaxis()->SetLabelSize(0.035);
   hbicB11_11dO1__152->GetYaxis()->SetTitleSize(0.035);
   hbicB11_11dO1__152->GetYaxis()->SetTitleFont(42);
   hbicB11_11dO1__152->GetZaxis()->SetLabelFont(42);
   hbicB11_11dO1__152->GetZaxis()->SetLabelSize(0.035);
   hbicB11_11dO1__152->GetZaxis()->SetTitleSize(0.035);
   hbicB11_11dO1__152->GetZaxis()->SetTitleFont(42);
   hbicB11_11dO1__152->Draw("histCsame");
   
   TH1F *hinclB11_11dO1__153 = new TH1F("hinclB11_11dO1__153","INCL",17,7.636364,72.54545);
   hinclB11_11dO1__153->SetBinContent(0,0.3784669);
   hinclB11_11dO1__153->SetBinContent(1,0.02175097);
   hinclB11_11dO1__153->SetBinContent(2,0.1000545);
   hinclB11_11dO1__153->SetBinContent(3,0.2653619);
   hinclB11_11dO1__153->SetBinContent(4,0.5220233);
   hinclB11_11dO1__153->SetBinContent(5,0.7351829);
   hinclB11_11dO1__153->SetBinContent(6,0.8439378);
   hinclB11_11dO1__153->SetBinContent(7,0.6177276);
   hinclB11_11dO1__153->SetBinContent(8,0.3784669);
   hinclB11_11dO1__153->SetBinContent(9,0.2305603);
   hinclB11_11dO1__153->SetBinContent(10,0.1087549);
   hinclB11_11dO1__153->SetBinContent(11,0.02610117);
   hinclB11_11dO1__153->SetEntries(972);
   hinclB11_11dO1__153->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_11dO1__153->SetLineColor(ci);
   hinclB11_11dO1__153->SetLineWidth(2);
   hinclB11_11dO1__153->GetXaxis()->SetRange(0,18);
   hinclB11_11dO1__153->GetXaxis()->SetLabelFont(42);
   hinclB11_11dO1__153->GetXaxis()->SetLabelSize(0.035);
   hinclB11_11dO1__153->GetXaxis()->SetTitleSize(0.035);
   hinclB11_11dO1__153->GetXaxis()->SetTitleFont(42);
   hinclB11_11dO1__153->GetYaxis()->SetLabelFont(42);
   hinclB11_11dO1__153->GetYaxis()->SetLabelSize(0.035);
   hinclB11_11dO1__153->GetYaxis()->SetTitleSize(0.035);
   hinclB11_11dO1__153->GetYaxis()->SetTitleFont(42);
   hinclB11_11dO1__153->GetZaxis()->SetLabelFont(42);
   hinclB11_11dO1__153->GetZaxis()->SetLabelSize(0.035);
   hinclB11_11dO1__153->GetZaxis()->SetTitleSize(0.035);
   hinclB11_11dO1__153->GetZaxis()->SetTitleFont(42);
   hinclB11_11dO1__153->Draw("histCsame");
   
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
   entry=leg->AddEntry("hbicB11_11.1","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   canvasB11_2->Range(1.412727,-3.39794,82.58727,3.69897);
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
   
   TH1F *h1B11_3dO5__154 = new TH1F("h1B11_3dO5__154","",1,1.412727,82.58727);
   h1B11_3dO5__154->SetMinimum(0.0004);
   h1B11_3dO5__154->SetMaximum(5000);
   h1B11_3dO5__154->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_3dO5__154->SetLineColor(ci);
   h1B11_3dO5__154->GetXaxis()->SetRange(1,1);
   h1B11_3dO5__154->GetXaxis()->SetLabelFont(42);
   h1B11_3dO5__154->GetXaxis()->SetLabelSize(0.07);
   h1B11_3dO5__154->GetXaxis()->SetTitleSize(0.07);
   h1B11_3dO5__154->GetXaxis()->SetTitleFont(42);
   h1B11_3dO5__154->GetYaxis()->SetLabelFont(42);
   h1B11_3dO5__154->GetYaxis()->SetLabelSize(0.07);
   h1B11_3dO5__154->GetYaxis()->SetTitleSize(0.07);
   h1B11_3dO5__154->GetYaxis()->SetTitleOffset(1.1);
   h1B11_3dO5__154->GetYaxis()->SetTitleFont(42);
   h1B11_3dO5__154->GetZaxis()->SetLabelFont(42);
   h1B11_3dO5__154->GetZaxis()->SetLabelSize(0.035);
   h1B11_3dO5__154->GetZaxis()->SetTitleSize(0.035);
   h1B11_3dO5__154->GetZaxis()->SetTitleFont(42);
   h1B11_3dO5__154->Draw("");
   
   TH1F *hbicB11_3dO5__155 = new TH1F("hbicB11_3dO5__155","BIC",17,7.636364,72.54545);
   hbicB11_3dO5__155->SetBinContent(0,1.440313);
   hbicB11_3dO5__155->SetBinContent(1,0.05143975);
   hbicB11_3dO5__155->SetBinContent(2,0.05143975);
   hbicB11_3dO5__155->SetBinContent(3,0.1028795);
   hbicB11_3dO5__155->SetBinContent(13,0.05143975);
   hbicB11_3dO5__155->SetBinContent(14,190.43);
   hbicB11_3dO5__155->SetBinContent(15,55.40062);
   hbicB11_3dO5__155->SetEntries(4812);
   hbicB11_3dO5__155->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB11_3dO5__155->SetLineColor(ci);
   hbicB11_3dO5__155->SetLineWidth(2);
   hbicB11_3dO5__155->GetXaxis()->SetRange(0,18);
   hbicB11_3dO5__155->GetXaxis()->SetLabelFont(42);
   hbicB11_3dO5__155->GetXaxis()->SetLabelSize(0.035);
   hbicB11_3dO5__155->GetXaxis()->SetTitleSize(0.035);
   hbicB11_3dO5__155->GetXaxis()->SetTitleFont(42);
   hbicB11_3dO5__155->GetYaxis()->SetLabelFont(42);
   hbicB11_3dO5__155->GetYaxis()->SetLabelSize(0.035);
   hbicB11_3dO5__155->GetYaxis()->SetTitleSize(0.035);
   hbicB11_3dO5__155->GetYaxis()->SetTitleFont(42);
   hbicB11_3dO5__155->GetZaxis()->SetLabelFont(42);
   hbicB11_3dO5__155->GetZaxis()->SetLabelSize(0.035);
   hbicB11_3dO5__155->GetZaxis()->SetTitleSize(0.035);
   hbicB11_3dO5__155->GetZaxis()->SetTitleFont(42);
   hbicB11_3dO5__155->Draw("histCsame");
   
   TH1F *hinclB11_3dO5__156 = new TH1F("hinclB11_3dO5__156","INCL",17,7.636364,72.54545);
   hinclB11_3dO5__156->SetBinContent(0,0.4629578);
   hinclB11_3dO5__156->SetBinContent(1,0.1028795);
   hinclB11_3dO5__156->SetBinContent(2,0.1028795);
   hinclB11_3dO5__156->SetBinContent(3,0.6687168);
   hinclB11_3dO5__156->SetBinContent(4,1.954711);
   hinclB11_3dO5__156->SetBinContent(5,4.989656);
   hinclB11_3dO5__156->SetBinContent(6,7.870282);
   hinclB11_3dO5__156->SetBinContent(7,11.31675);
   hinclB11_3dO5__156->SetBinContent(8,17.18088);
   hinclB11_3dO5__156->SetBinContent(9,22.01621);
   hinclB11_3dO5__156->SetBinContent(10,24.79396);
   hinclB11_3dO5__156->SetBinContent(11,24.12524);
   hinclB11_3dO5__156->SetBinContent(12,27.77747);
   hinclB11_3dO5__156->SetBinContent(13,12.0369);
   hinclB11_3dO5__156->SetBinContent(14,0.9773553);
   hinclB11_3dO5__156->SetEntries(3040);
   hinclB11_3dO5__156->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_3dO5__156->SetLineColor(ci);
   hinclB11_3dO5__156->SetLineWidth(2);
   hinclB11_3dO5__156->GetXaxis()->SetRange(0,18);
   hinclB11_3dO5__156->GetXaxis()->SetLabelFont(42);
   hinclB11_3dO5__156->GetXaxis()->SetLabelSize(0.035);
   hinclB11_3dO5__156->GetXaxis()->SetTitleSize(0.035);
   hinclB11_3dO5__156->GetXaxis()->SetTitleFont(42);
   hinclB11_3dO5__156->GetYaxis()->SetLabelFont(42);
   hinclB11_3dO5__156->GetYaxis()->SetLabelSize(0.035);
   hinclB11_3dO5__156->GetYaxis()->SetTitleSize(0.035);
   hinclB11_3dO5__156->GetYaxis()->SetTitleFont(42);
   hinclB11_3dO5__156->GetZaxis()->SetLabelFont(42);
   hinclB11_3dO5__156->GetZaxis()->SetLabelSize(0.035);
   hinclB11_3dO5__156->GetZaxis()->SetTitleSize(0.035);
   hinclB11_3dO5__156->GetZaxis()->SetTitleFont(42);
   hinclB11_3dO5__156->Draw("histCsame");
   
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
   canvasB11_4->Range(1.412727,-3.39794,82.58727,3.69897);
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
   
   TH1F *h1B11_7dO6__157 = new TH1F("h1B11_7dO6__157","",1,1.412727,82.58727);
   h1B11_7dO6__157->SetMinimum(0.0004);
   h1B11_7dO6__157->SetMaximum(5000);
   h1B11_7dO6__157->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_7dO6__157->SetLineColor(ci);
   h1B11_7dO6__157->GetXaxis()->SetRange(1,1);
   h1B11_7dO6__157->GetXaxis()->SetLabelFont(42);
   h1B11_7dO6__157->GetXaxis()->SetLabelSize(0.07);
   h1B11_7dO6__157->GetXaxis()->SetTitleSize(0.07);
   h1B11_7dO6__157->GetXaxis()->SetTitleFont(42);
   h1B11_7dO6__157->GetYaxis()->SetLabelFont(42);
   h1B11_7dO6__157->GetYaxis()->SetLabelSize(0.07);
   h1B11_7dO6__157->GetYaxis()->SetTitleSize(0.07);
   h1B11_7dO6__157->GetYaxis()->SetTitleOffset(1.1);
   h1B11_7dO6__157->GetYaxis()->SetTitleFont(42);
   h1B11_7dO6__157->GetZaxis()->SetLabelFont(42);
   h1B11_7dO6__157->GetZaxis()->SetLabelSize(0.035);
   h1B11_7dO6__157->GetZaxis()->SetTitleSize(0.035);
   h1B11_7dO6__157->GetZaxis()->SetTitleFont(42);
   h1B11_7dO6__157->Draw("");
   
   TH1F *hbicB11_7dO6__158 = new TH1F("hbicB11_7dO6__158","BIC",17,7.636364,72.54545);
   hbicB11_7dO6__158->SetBinContent(0,1.475463);
   hbicB11_7dO6__158->SetBinContent(1,0.0443272);
   hbicB11_7dO6__158->SetBinContent(2,0.06332458);
   hbicB11_7dO6__158->SetBinContent(3,0.0443272);
   hbicB11_7dO6__158->SetBinContent(4,0.006332458);
   hbicB11_7dO6__158->SetBinContent(6,0.006332458);
   hbicB11_7dO6__158->SetBinContent(12,0.0443272);
   hbicB11_7dO6__158->SetBinContent(13,15.09025);
   hbicB11_7dO6__158->SetBinContent(14,73.45651);
   hbicB11_7dO6__158->SetBinContent(15,0.595251);
   hbicB11_7dO6__158->SetEntries(14343);
   hbicB11_7dO6__158->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB11_7dO6__158->SetLineColor(ci);
   hbicB11_7dO6__158->SetLineWidth(2);
   hbicB11_7dO6__158->GetXaxis()->SetRange(0,18);
   hbicB11_7dO6__158->GetXaxis()->SetLabelFont(42);
   hbicB11_7dO6__158->GetXaxis()->SetLabelSize(0.035);
   hbicB11_7dO6__158->GetXaxis()->SetTitleSize(0.035);
   hbicB11_7dO6__158->GetXaxis()->SetTitleFont(42);
   hbicB11_7dO6__158->GetYaxis()->SetLabelFont(42);
   hbicB11_7dO6__158->GetYaxis()->SetLabelSize(0.035);
   hbicB11_7dO6__158->GetYaxis()->SetTitleSize(0.035);
   hbicB11_7dO6__158->GetYaxis()->SetTitleFont(42);
   hbicB11_7dO6__158->GetZaxis()->SetLabelFont(42);
   hbicB11_7dO6__158->GetZaxis()->SetLabelSize(0.035);
   hbicB11_7dO6__158->GetZaxis()->SetTitleSize(0.035);
   hbicB11_7dO6__158->GetZaxis()->SetTitleFont(42);
   hbicB11_7dO6__158->Draw("histCsame");
   
   TH1F *hinclB11_7dO6__159 = new TH1F("hinclB11_7dO6__159","INCL",17,7.636364,72.54545);
   hinclB11_7dO6__159->SetBinContent(0,0.3546176);
   hinclB11_7dO6__159->SetBinContent(1,0.0443272);
   hinclB11_7dO6__159->SetBinContent(2,0.221636);
   hinclB11_7dO6__159->SetBinContent(3,0.4812668);
   hinclB11_7dO6__159->SetBinContent(4,1.203167);
   hinclB11_7dO6__159->SetBinContent(5,2.001057);
   hinclB11_7dO6__159->SetBinContent(6,3.020582);
   hinclB11_7dO6__159->SetBinContent(7,3.32454);
   hinclB11_7dO6__159->SetBinContent(8,3.406862);
   hinclB11_7dO6__159->SetBinContent(9,2.691295);
   hinclB11_7dO6__159->SetBinContent(10,1.963062);
   hinclB11_7dO6__159->SetBinContent(11,0.8928766);
   hinclB11_7dO6__159->SetBinContent(12,0.4875993);
   hinclB11_7dO6__159->SetBinContent(13,0.1329816);
   hinclB11_7dO6__159->SetEntries(3194);
   hinclB11_7dO6__159->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_7dO6__159->SetLineColor(ci);
   hinclB11_7dO6__159->SetLineWidth(2);
   hinclB11_7dO6__159->GetXaxis()->SetRange(0,18);
   hinclB11_7dO6__159->GetXaxis()->SetLabelFont(42);
   hinclB11_7dO6__159->GetXaxis()->SetLabelSize(0.035);
   hinclB11_7dO6__159->GetXaxis()->SetTitleSize(0.035);
   hinclB11_7dO6__159->GetXaxis()->SetTitleFont(42);
   hinclB11_7dO6__159->GetYaxis()->SetLabelFont(42);
   hinclB11_7dO6__159->GetYaxis()->SetLabelSize(0.035);
   hinclB11_7dO6__159->GetYaxis()->SetTitleSize(0.035);
   hinclB11_7dO6__159->GetYaxis()->SetTitleFont(42);
   hinclB11_7dO6__159->GetZaxis()->SetLabelFont(42);
   hinclB11_7dO6__159->GetZaxis()->SetLabelSize(0.035);
   hinclB11_7dO6__159->GetZaxis()->SetTitleSize(0.035);
   hinclB11_7dO6__159->GetZaxis()->SetTitleFont(42);
   hinclB11_7dO6__159->Draw("histCsame");
   
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
   canvasB11_6->Range(1.412727,-4.985407,82.58727,3.69897);
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
   
   TH1F *h1B11_14dO4__160 = new TH1F("h1B11_14dO4__160","",1,1.412727,82.58727);
   h1B11_14dO4__160->SetMinimum(0.0004);
   h1B11_14dO4__160->SetMaximum(5000);
   h1B11_14dO4__160->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B11_14dO4__160->SetLineColor(ci);
   h1B11_14dO4__160->GetXaxis()->SetTitle("E  [MeV/n]");
   h1B11_14dO4__160->GetXaxis()->SetRange(1,1);
   h1B11_14dO4__160->GetXaxis()->SetLabelFont(42);
   h1B11_14dO4__160->GetXaxis()->SetLabelSize(0.07);
   h1B11_14dO4__160->GetXaxis()->SetTitleSize(0.07);
   h1B11_14dO4__160->GetXaxis()->SetTitleFont(42);
   h1B11_14dO4__160->GetYaxis()->SetLabelFont(42);
   h1B11_14dO4__160->GetYaxis()->SetLabelSize(0.07);
   h1B11_14dO4__160->GetYaxis()->SetTitleSize(0.07);
   h1B11_14dO4__160->GetYaxis()->SetTitleOffset(1.1);
   h1B11_14dO4__160->GetYaxis()->SetTitleFont(42);
   h1B11_14dO4__160->GetZaxis()->SetLabelFont(42);
   h1B11_14dO4__160->GetZaxis()->SetLabelSize(0.035);
   h1B11_14dO4__160->GetZaxis()->SetTitleSize(0.035);
   h1B11_14dO4__160->GetZaxis()->SetTitleFont(42);
   h1B11_14dO4__160->Draw("");
   
   TH1F *hbicB11_14dO4__161 = new TH1F("hbicB11_14dO4__161","BIC",15,7.636364,68.72727);
   hbicB11_14dO4__161->SetBinContent(0,1.228151);
   hbicB11_14dO4__161->SetBinContent(1,0.0978732);
   hbicB11_14dO4__161->SetBinContent(2,0.205218);
   hbicB11_14dO4__161->SetBinContent(3,0.1136592);
   hbicB11_14dO4__161->SetBinContent(4,0.0126288);
   hbicB11_14dO4__161->SetBinContent(9,0.0031572);
   hbicB11_14dO4__161->SetBinContent(11,3.482392);
   hbicB11_14dO4__161->SetBinContent(12,16.32588);
   hbicB11_14dO4__161->SetBinContent(13,3.681295);
   hbicB11_14dO4__161->SetEntries(7966);
   hbicB11_14dO4__161->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB11_14dO4__161->SetLineColor(ci);
   hbicB11_14dO4__161->SetLineWidth(2);
   hbicB11_14dO4__161->GetXaxis()->SetRange(0,16);
   hbicB11_14dO4__161->GetXaxis()->SetLabelFont(42);
   hbicB11_14dO4__161->GetXaxis()->SetLabelSize(0.035);
   hbicB11_14dO4__161->GetXaxis()->SetTitleSize(0.035);
   hbicB11_14dO4__161->GetXaxis()->SetTitleFont(42);
   hbicB11_14dO4__161->GetYaxis()->SetLabelFont(42);
   hbicB11_14dO4__161->GetYaxis()->SetLabelSize(0.035);
   hbicB11_14dO4__161->GetYaxis()->SetTitleSize(0.035);
   hbicB11_14dO4__161->GetYaxis()->SetTitleFont(42);
   hbicB11_14dO4__161->GetZaxis()->SetLabelFont(42);
   hbicB11_14dO4__161->GetZaxis()->SetLabelSize(0.035);
   hbicB11_14dO4__161->GetZaxis()->SetTitleSize(0.035);
   hbicB11_14dO4__161->GetZaxis()->SetTitleFont(42);
   hbicB11_14dO4__161->Draw("histCsame");
   
   TH1F *hinclB11_14dO4__162 = new TH1F("hinclB11_14dO4__162","INCL",15,7.636364,68.72727);
   hinclB11_14dO4__162->SetBinContent(0,0.3125628);
   hinclB11_14dO4__162->SetBinContent(1,0.015786);
   hinclB11_14dO4__162->SetBinContent(2,0.0663012);
   hinclB11_14dO4__162->SetBinContent(3,0.1073448);
   hinclB11_14dO4__162->SetBinContent(4,0.1768032);
   hinclB11_14dO4__162->SetBinContent(5,0.23679);
   hinclB11_14dO4__162->SetBinContent(6,0.1231308);
   hinclB11_14dO4__162->SetBinContent(7,0.0536724);
   hinclB11_14dO4__162->SetBinContent(8,0.031572);
   hinclB11_14dO4__162->SetBinContent(9,0.0031572);
   hinclB11_14dO4__162->SetEntries(357);
   hinclB11_14dO4__162->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB11_14dO4__162->SetLineColor(ci);
   hinclB11_14dO4__162->SetLineWidth(2);
   hinclB11_14dO4__162->GetXaxis()->SetRange(0,16);
   hinclB11_14dO4__162->GetXaxis()->SetLabelFont(42);
   hinclB11_14dO4__162->GetXaxis()->SetLabelSize(0.035);
   hinclB11_14dO4__162->GetXaxis()->SetTitleSize(0.035);
   hinclB11_14dO4__162->GetXaxis()->SetTitleFont(42);
   hinclB11_14dO4__162->GetYaxis()->SetLabelFont(42);
   hinclB11_14dO4__162->GetYaxis()->SetLabelSize(0.035);
   hinclB11_14dO4__162->GetYaxis()->SetTitleSize(0.035);
   hinclB11_14dO4__162->GetYaxis()->SetTitleFont(42);
   hinclB11_14dO4__162->GetZaxis()->SetLabelFont(42);
   hinclB11_14dO4__162->GetZaxis()->SetLabelSize(0.035);
   hinclB11_14dO4__162->GetZaxis()->SetTitleSize(0.035);
   hinclB11_14dO4__162->GetZaxis()->SetTitleFont(42);
   hinclB11_14dO4__162->Draw("histCsame");
   
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
