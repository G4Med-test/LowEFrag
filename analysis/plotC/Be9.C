void Be9()
{
//=========Macro generated from canvas: canvasBe9/canvasBe9
//=========  (Sat Dec 15 20:26:21 2018) by ROOT version6.06/06
   TCanvas *canvasBe9 = new TCanvas("canvasBe9", "canvasBe9",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasBe9->Range(0,0,1,1);
   canvasBe9->SetFillColor(0);
   canvasBe9->SetBorderMode(0);
   canvasBe9->SetBorderSize(2);
   canvasBe9->SetRightMargin(0.04957356);
   canvasBe9->SetTopMargin(0.03208003);
   canvasBe9->SetBottomMargin(0.0609319);
   canvasBe9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasBe9_1
   TPad *canvasBe9_1 = new TPad("canvasBe9_1", "canvasBe9_1",0,0.6655906,0.5209121,0.96792);
   canvasBe9_1->Draw();
   canvasBe9_1->cd();
   canvasBe9_1->Range(-23.04474,-3.39794,86.94,3.69897);
   canvasBe9_1->SetFillColor(0);
   canvasBe9_1->SetBorderMode(0);
   canvasBe9_1->SetBorderSize(2);
   canvasBe9_1->SetLogy();
   canvasBe9_1->SetLeftMargin(0.1827957);
   canvasBe9_1->SetRightMargin(0);
   canvasBe9_1->SetTopMargin(0);
   canvasBe9_1->SetBottomMargin(0);
   canvasBe9_1->SetFrameBorderMode(0);
   canvasBe9_1->SetFrameBorderMode(0);
   
   TH1F *h1Be9_2dO2__109 = new TH1F("h1Be9_2dO2__109","^{12}C + ^{nat}C #rightarrow ^{9}Be at 62 MeV/n",1,-2.94,86.94);
   h1Be9_2dO2__109->SetMinimum(0.0004);
   h1Be9_2dO2__109->SetMaximum(5000);
   h1Be9_2dO2__109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Be9_2dO2__109->SetLineColor(ci);
   h1Be9_2dO2__109->GetXaxis()->SetRange(1,1);
   h1Be9_2dO2__109->GetXaxis()->SetLabelFont(42);
   h1Be9_2dO2__109->GetXaxis()->SetLabelSize(0.07);
   h1Be9_2dO2__109->GetXaxis()->SetTitleSize(0.07);
   h1Be9_2dO2__109->GetXaxis()->SetTitleFont(42);
   h1Be9_2dO2__109->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Be9_2dO2__109->GetYaxis()->SetLabelFont(42);
   h1Be9_2dO2__109->GetYaxis()->SetLabelSize(0.07);
   h1Be9_2dO2__109->GetYaxis()->SetTitleSize(0.07);
   h1Be9_2dO2__109->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_2dO2__109->GetYaxis()->SetTitleFont(42);
   h1Be9_2dO2__109->GetZaxis()->SetLabelFont(42);
   h1Be9_2dO2__109->GetZaxis()->SetLabelSize(0.035);
   h1Be9_2dO2__109->GetZaxis()->SetTitleSize(0.035);
   h1Be9_2dO2__109->GetZaxis()->SetTitleFont(42);
   h1Be9_2dO2__109->Draw("");
   
   TPaveText *pt = new TPaveText(0.2596831,0.9312746,0.7403169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{9}Be at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicBe9_2dO2__110 = new TH1F("hbicBe9_2dO2__110","BIC",17,8,76);
   hbicBe9_2dO2__110->SetBinContent(0,0.07808676);
   hbicBe9_2dO2__110->SetBinContent(2,0.07808676);
   hbicBe9_2dO2__110->SetBinContent(3,0.07808676);
   hbicBe9_2dO2__110->SetBinContent(12,1.015128);
   hbicBe9_2dO2__110->SetBinContent(13,11.08832);
   hbicBe9_2dO2__110->SetBinContent(14,19.44361);
   hbicBe9_2dO2__110->SetBinContent(15,3.591991);
   hbicBe9_2dO2__110->SetEntries(453);
   hbicBe9_2dO2__110->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe9_2dO2__110->SetLineColor(ci);
   hbicBe9_2dO2__110->SetLineWidth(2);
   hbicBe9_2dO2__110->GetXaxis()->SetRange(0,18);
   hbicBe9_2dO2__110->GetXaxis()->SetLabelFont(42);
   hbicBe9_2dO2__110->GetXaxis()->SetLabelSize(0.035);
   hbicBe9_2dO2__110->GetXaxis()->SetTitleSize(0.035);
   hbicBe9_2dO2__110->GetXaxis()->SetTitleFont(42);
   hbicBe9_2dO2__110->GetYaxis()->SetLabelFont(42);
   hbicBe9_2dO2__110->GetYaxis()->SetLabelSize(0.035);
   hbicBe9_2dO2__110->GetYaxis()->SetTitleSize(0.035);
   hbicBe9_2dO2__110->GetYaxis()->SetTitleFont(42);
   hbicBe9_2dO2__110->GetZaxis()->SetLabelFont(42);
   hbicBe9_2dO2__110->GetZaxis()->SetLabelSize(0.035);
   hbicBe9_2dO2__110->GetZaxis()->SetTitleSize(0.035);
   hbicBe9_2dO2__110->GetZaxis()->SetTitleFont(42);
   hbicBe9_2dO2__110->Draw("histCsame");
   
   TH1F *hinclBe9_2dO2__111 = new TH1F("hinclBe9_2dO2__111","INCL",17,8,76);
   hinclBe9_2dO2__111->SetBinContent(0,0.07808676);
   hinclBe9_2dO2__111->SetBinContent(2,0.07808676);
   hinclBe9_2dO2__111->SetBinContent(3,0.9370412);
   hinclBe9_2dO2__111->SetBinContent(4,1.717909);
   hinclBe9_2dO2__111->SetBinContent(5,2.88921);
   hinclBe9_2dO2__111->SetBinContent(6,3.982425);
   hinclBe9_2dO2__111->SetBinContent(7,6.246942);
   hinclBe9_2dO2__111->SetBinContent(8,9.91702);
   hinclBe9_2dO2__111->SetBinContent(9,13.5871);
   hinclBe9_2dO2__111->SetBinContent(10,20.53682);
   hinclBe9_2dO2__111->SetBinContent(11,31.23471);
   hinclBe9_2dO2__111->SetBinContent(12,25.61246);
   hinclBe9_2dO2__111->SetBinContent(13,5.07564);
   hinclBe9_2dO2__111->SetBinContent(14,0.2342603);
   hinclBe9_2dO2__111->SetEntries(1564);
   hinclBe9_2dO2__111->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_2dO2__111->SetLineColor(ci);
   hinclBe9_2dO2__111->SetLineWidth(2);
   hinclBe9_2dO2__111->GetXaxis()->SetRange(0,18);
   hinclBe9_2dO2__111->GetXaxis()->SetLabelFont(42);
   hinclBe9_2dO2__111->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_2dO2__111->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_2dO2__111->GetXaxis()->SetTitleFont(42);
   hinclBe9_2dO2__111->GetYaxis()->SetLabelFont(42);
   hinclBe9_2dO2__111->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_2dO2__111->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_2dO2__111->GetYaxis()->SetTitleFont(42);
   hinclBe9_2dO2__111->GetZaxis()->SetLabelFont(42);
   hinclBe9_2dO2__111->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_2dO2__111->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_2dO2__111->GetZaxis()->SetTitleFont(42);
   hinclBe9_2dO2__111->Draw("histCsame");
   
   Double_t Graph0_fx1037[17] = {
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
   Double_t Graph0_fy1037[17] = {
   0.14,
   0.2,
   0.2,
   0.14,
   0.13,
   0.14,
   0.2,
   0.6,
   0.6,
   1,
   1.8,
   2.5,
   2.8,
   3.2,
   2.1,
   0.5,
   0.2};
   Double_t Graph0_fex1037[17] = {
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
   Double_t Graph0_fey1037[17] = {
   0.11,
   0.1,
   0.1,
   0.11,
   0.11,
   0.11,
   0.1,
   0.2,
   0.2,
   0.3,
   0.4,
   0.5,
   0.6,
   0.7,
   0.5,
   0.2,
   0.1};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{9}Be at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","^{12}C + ^{nat}C #rightarrow ^{9}Be at 62 MeV/n",100,1.2,82.8);
   Graph_Graph1037->SetMinimum(0.018);
   Graph_Graph1037->SetMaximum(4.288);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
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
   canvasBe9_1->Modified();
   canvasBe9->cd();
  
// ------------>Primitives in pad: canvasBe9_3
   TPad *canvasBe9_3 = new TPad("canvasBe9_3", "canvasBe9_3",0,0.3632613,0.5209121,0.6655906);
   canvasBe9_3->Draw();
   canvasBe9_3->cd();
   canvasBe9_3->Range(-23.04474,-3.39794,86.94,3.69897);
   canvasBe9_3->SetFillColor(0);
   canvasBe9_3->SetBorderMode(0);
   canvasBe9_3->SetBorderSize(2);
   canvasBe9_3->SetLogy();
   canvasBe9_3->SetLeftMargin(0.1827957);
   canvasBe9_3->SetRightMargin(0);
   canvasBe9_3->SetTopMargin(0);
   canvasBe9_3->SetBottomMargin(0);
   canvasBe9_3->SetFrameBorderMode(0);
   canvasBe9_3->SetFrameBorderMode(0);
   
   TH1F *h1Be9_4dO9__112 = new TH1F("h1Be9_4dO9__112","",1,-2.94,86.94);
   h1Be9_4dO9__112->SetMinimum(0.0004);
   h1Be9_4dO9__112->SetMaximum(5000);
   h1Be9_4dO9__112->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_4dO9__112->SetLineColor(ci);
   h1Be9_4dO9__112->GetXaxis()->SetRange(1,1);
   h1Be9_4dO9__112->GetXaxis()->SetLabelFont(42);
   h1Be9_4dO9__112->GetXaxis()->SetLabelSize(0.07);
   h1Be9_4dO9__112->GetXaxis()->SetTitleSize(0.07);
   h1Be9_4dO9__112->GetXaxis()->SetTitleFont(42);
   h1Be9_4dO9__112->GetYaxis()->SetLabelFont(42);
   h1Be9_4dO9__112->GetYaxis()->SetLabelSize(0.07);
   h1Be9_4dO9__112->GetYaxis()->SetTitleSize(0.07);
   h1Be9_4dO9__112->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_4dO9__112->GetYaxis()->SetTitleFont(42);
   h1Be9_4dO9__112->GetZaxis()->SetLabelFont(42);
   h1Be9_4dO9__112->GetZaxis()->SetLabelSize(0.035);
   h1Be9_4dO9__112->GetZaxis()->SetTitleSize(0.035);
   h1Be9_4dO9__112->GetZaxis()->SetTitleFont(42);
   h1Be9_4dO9__112->Draw("");
   
   TH1F *hbicBe9_4dO9__113 = new TH1F("hbicBe9_4dO9__113","BIC",17,8,76);
   hbicBe9_4dO9__113->SetBinContent(0,0.140374);
   hbicBe9_4dO9__113->SetBinContent(1,0.03509351);
   hbicBe9_4dO9__113->SetBinContent(2,0.03509351);
   hbicBe9_4dO9__113->SetBinContent(11,0.03509351);
   hbicBe9_4dO9__113->SetBinContent(12,1.087899);
   hbicBe9_4dO9__113->SetBinContent(13,6.176458);
   hbicBe9_4dO9__113->SetBinContent(14,5.79043);
   hbicBe9_4dO9__113->SetBinContent(15,0.6667768);
   hbicBe9_4dO9__113->SetEntries(398);
   hbicBe9_4dO9__113->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe9_4dO9__113->SetLineColor(ci);
   hbicBe9_4dO9__113->SetLineWidth(2);
   hbicBe9_4dO9__113->GetXaxis()->SetRange(0,18);
   hbicBe9_4dO9__113->GetXaxis()->SetLabelFont(42);
   hbicBe9_4dO9__113->GetXaxis()->SetLabelSize(0.035);
   hbicBe9_4dO9__113->GetXaxis()->SetTitleSize(0.035);
   hbicBe9_4dO9__113->GetXaxis()->SetTitleFont(42);
   hbicBe9_4dO9__113->GetYaxis()->SetLabelFont(42);
   hbicBe9_4dO9__113->GetYaxis()->SetLabelSize(0.035);
   hbicBe9_4dO9__113->GetYaxis()->SetTitleSize(0.035);
   hbicBe9_4dO9__113->GetYaxis()->SetTitleFont(42);
   hbicBe9_4dO9__113->GetZaxis()->SetLabelFont(42);
   hbicBe9_4dO9__113->GetZaxis()->SetLabelSize(0.035);
   hbicBe9_4dO9__113->GetZaxis()->SetTitleSize(0.035);
   hbicBe9_4dO9__113->GetZaxis()->SetTitleFont(42);
   hbicBe9_4dO9__113->Draw("histCsame");
   
   TH1F *hinclBe9_4dO9__114 = new TH1F("hinclBe9_4dO9__114","INCL",17,8,76);
   hinclBe9_4dO9__114->SetBinContent(0,0.1754676);
   hinclBe9_4dO9__114->SetBinContent(1,0.03509351);
   hinclBe9_4dO9__114->SetBinContent(2,0.3158416);
   hinclBe9_4dO9__114->SetBinContent(3,0.8071508);
   hinclBe9_4dO9__114->SetBinContent(4,1.052805);
   hinclBe9_4dO9__114->SetBinContent(5,2.105611);
   hinclBe9_4dO9__114->SetBinContent(6,3.544445);
   hinclBe9_4dO9__114->SetBinContent(7,3.89538);
   hinclBe9_4dO9__114->SetBinContent(8,4.141035);
   hinclBe9_4dO9__114->SetBinContent(9,4.421782);
   hinclBe9_4dO9__114->SetBinContent(10,4.983279);
   hinclBe9_4dO9__114->SetBinContent(11,5.158746);
   hinclBe9_4dO9__114->SetBinContent(12,3.614632);
   hinclBe9_4dO9__114->SetBinContent(13,1.368647);
   hinclBe9_4dO9__114->SetEntries(1015);
   hinclBe9_4dO9__114->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_4dO9__114->SetLineColor(ci);
   hinclBe9_4dO9__114->SetLineWidth(2);
   hinclBe9_4dO9__114->GetXaxis()->SetRange(0,18);
   hinclBe9_4dO9__114->GetXaxis()->SetLabelFont(42);
   hinclBe9_4dO9__114->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_4dO9__114->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_4dO9__114->GetXaxis()->SetTitleFont(42);
   hinclBe9_4dO9__114->GetYaxis()->SetLabelFont(42);
   hinclBe9_4dO9__114->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_4dO9__114->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_4dO9__114->GetYaxis()->SetTitleFont(42);
   hinclBe9_4dO9__114->GetZaxis()->SetLabelFont(42);
   hinclBe9_4dO9__114->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_4dO9__114->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_4dO9__114->GetZaxis()->SetTitleFont(42);
   hinclBe9_4dO9__114->Draw("histCsame");
   
   Double_t Graph0_fx1038[17] = {
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
   Double_t Graph0_fy1038[17] = {
   0.12,
   0.13,
   0.14,
   0.13,
   0.12,
   0.14,
   0.2,
   0.3,
   0.4,
   0.9,
   0.9,
   1.4,
   1.6,
   0.8,
   0.3,
   0.15,
   0.12};
   Double_t Graph0_fex1038[17] = {
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
   Double_t Graph0_fey1038[17] = {
   0.11,
   0.11,
   0.11,
   0.11,
   0.11,
   0.11,
   0.1,
   0.2,
   0.2,
   0.3,
   0.3,
   0.4,
   0.4,
   0.2,
   0.2,
   0.11,
   0.11};
   gre = new TGraphErrors(17,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","",100,1.2,82.8);
   Graph_Graph1038->SetMinimum(0.009);
   Graph_Graph1038->SetMaximum(2.199);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1038->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
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
   canvasBe9_3->Modified();
   canvasBe9->cd();
  
// ------------>Primitives in pad: canvasBe9_5
   TPad *canvasBe9_5 = new TPad("canvasBe9_5", "canvasBe9_5",0,0,0.5209121,0.3632613);
   canvasBe9_5->Draw();
   canvasBe9_5->cd();
   canvasBe9_5->Range(-23.04474,-4.985407,86.94,3.69897);
   canvasBe9_5->SetFillColor(0);
   canvasBe9_5->SetBorderMode(0);
   canvasBe9_5->SetBorderSize(2);
   canvasBe9_5->SetLogy();
   canvasBe9_5->SetLeftMargin(0.1827957);
   canvasBe9_5->SetRightMargin(0);
   canvasBe9_5->SetTopMargin(0);
   canvasBe9_5->SetBottomMargin(0.1827957);
   canvasBe9_5->SetFrameBorderMode(0);
   canvasBe9_5->SetFrameBorderMode(0);
   
   TH1F *h1Be9_11dO1__115 = new TH1F("h1Be9_11dO1__115","",1,-2.94,86.94);
   h1Be9_11dO1__115->SetMinimum(0.0004);
   h1Be9_11dO1__115->SetMaximum(5000);
   h1Be9_11dO1__115->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_11dO1__115->SetLineColor(ci);
   h1Be9_11dO1__115->GetXaxis()->SetRange(1,1);
   h1Be9_11dO1__115->GetXaxis()->SetLabelFont(42);
   h1Be9_11dO1__115->GetXaxis()->SetLabelSize(0.07);
   h1Be9_11dO1__115->GetXaxis()->SetTitleSize(0.07);
   h1Be9_11dO1__115->GetXaxis()->SetTitleFont(42);
   h1Be9_11dO1__115->GetYaxis()->SetLabelFont(42);
   h1Be9_11dO1__115->GetYaxis()->SetLabelSize(0.07);
   h1Be9_11dO1__115->GetYaxis()->SetTitleSize(0.07);
   h1Be9_11dO1__115->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_11dO1__115->GetYaxis()->SetTitleFont(42);
   h1Be9_11dO1__115->GetZaxis()->SetLabelFont(42);
   h1Be9_11dO1__115->GetZaxis()->SetLabelSize(0.035);
   h1Be9_11dO1__115->GetZaxis()->SetTitleSize(0.035);
   h1Be9_11dO1__115->GetZaxis()->SetTitleFont(42);
   h1Be9_11dO1__115->Draw("");
   
   TH1F *hbicBe9_11dO1__116 = new TH1F("hbicBe9_11dO1__116","BIC",17,8,76);
   hbicBe9_11dO1__116->SetBinContent(0,0.1121164);
   hbicBe9_11dO1__116->SetBinContent(1,0.04567704);
   hbicBe9_11dO1__116->SetBinContent(2,0.07889671);
   hbicBe9_11dO1__116->SetBinContent(3,0.03321967);
   hbicBe9_11dO1__116->SetBinContent(5,0.004152459);
   hbicBe9_11dO1__116->SetBinContent(10,0.01660983);
   hbicBe9_11dO1__116->SetBinContent(11,0.5024475);
   hbicBe9_11dO1__116->SetBinContent(12,2.375206);
   hbicBe9_11dO1__116->SetBinContent(13,3.089429);
   hbicBe9_11dO1__116->SetBinContent(14,0.6602409);
   hbicBe9_11dO1__116->SetBinContent(15,0.02906721);
   hbicBe9_11dO1__116->SetEntries(1673);
   hbicBe9_11dO1__116->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe9_11dO1__116->SetLineColor(ci);
   hbicBe9_11dO1__116->SetLineWidth(2);
   hbicBe9_11dO1__116->GetXaxis()->SetRange(0,18);
   hbicBe9_11dO1__116->GetXaxis()->SetLabelFont(42);
   hbicBe9_11dO1__116->GetXaxis()->SetLabelSize(0.035);
   hbicBe9_11dO1__116->GetXaxis()->SetTitleSize(0.035);
   hbicBe9_11dO1__116->GetXaxis()->SetTitleFont(42);
   hbicBe9_11dO1__116->GetYaxis()->SetLabelFont(42);
   hbicBe9_11dO1__116->GetYaxis()->SetLabelSize(0.035);
   hbicBe9_11dO1__116->GetYaxis()->SetTitleSize(0.035);
   hbicBe9_11dO1__116->GetYaxis()->SetTitleFont(42);
   hbicBe9_11dO1__116->GetZaxis()->SetLabelFont(42);
   hbicBe9_11dO1__116->GetZaxis()->SetLabelSize(0.035);
   hbicBe9_11dO1__116->GetZaxis()->SetTitleSize(0.035);
   hbicBe9_11dO1__116->GetZaxis()->SetTitleFont(42);
   hbicBe9_11dO1__116->Draw("histCsame");
   
   TH1F *hinclBe9_11dO1__117 = new TH1F("hinclBe9_11dO1__117","INCL",17,8,76);
   hinclBe9_11dO1__117->SetBinContent(0,0.07889671);
   hinclBe9_11dO1__117->SetBinContent(1,0.02906721);
   hinclBe9_11dO1__117->SetBinContent(2,0.08720163);
   hinclBe9_11dO1__117->SetBinContent(3,0.2325377);
   hinclBe9_11dO1__117->SetBinContent(4,0.3861786);
   hinclBe9_11dO1__117->SetBinContent(5,0.4858376);
   hinclBe9_11dO1__117->SetBinContent(6,0.4567704);
   hinclBe9_11dO1__117->SetBinContent(7,0.3612639);
   hinclBe9_11dO1__117->SetBinContent(8,0.2533);
   hinclBe9_11dO1__117->SetBinContent(9,0.1079639);
   hinclBe9_11dO1__117->SetBinContent(10,0.07474425);
   hinclBe9_11dO1__117->SetBinContent(11,0.01660983);
   hinclBe9_11dO1__117->SetEntries(619);
   hinclBe9_11dO1__117->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_11dO1__117->SetLineColor(ci);
   hinclBe9_11dO1__117->SetLineWidth(2);
   hinclBe9_11dO1__117->GetXaxis()->SetRange(0,18);
   hinclBe9_11dO1__117->GetXaxis()->SetLabelFont(42);
   hinclBe9_11dO1__117->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_11dO1__117->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_11dO1__117->GetXaxis()->SetTitleFont(42);
   hinclBe9_11dO1__117->GetYaxis()->SetLabelFont(42);
   hinclBe9_11dO1__117->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_11dO1__117->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_11dO1__117->GetYaxis()->SetTitleFont(42);
   hinclBe9_11dO1__117->GetZaxis()->SetLabelFont(42);
   hinclBe9_11dO1__117->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_11dO1__117->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_11dO1__117->GetZaxis()->SetTitleFont(42);
   hinclBe9_11dO1__117->Draw("histCsame");
   
   Double_t Graph0_fx1039[17] = {
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
   Double_t Graph0_fy1039[17] = {
   0.03,
   0.03,
   0.02,
   0.03,
   0.02,
   0.07,
   0.05,
   0.07,
   0.07,
   0.1,
   0.18,
   0.15,
   0.18,
   0.11,
   0.12,
   0.06,
   0.014};
   Double_t Graph0_fex1039[17] = {
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
   Double_t Graph0_fey1039[17] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.02,
   0.01,
   0.02,
   0.02,
   0.02,
   0.04,
   0.03,
   0.04,
   0.03,
   0.03,
   0.02,
   0.009};
   gre = new TGraphErrors(17,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,1.2,82.8);
   Graph_Graph1039->SetMinimum(0.0045);
   Graph_Graph1039->SetMaximum(0.2415);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1039->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
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
   entry=leg->AddEntry("hbicBe9_11.1","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hinclBe9_11.1","INCL","l");

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
   canvasBe9_5->Modified();
   canvasBe9->cd();
  
// ------------>Primitives in pad: canvasBe9_2
   TPad *canvasBe9_2 = new TPad("canvasBe9_2", "canvasBe9_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasBe9_2->Draw();
   canvasBe9_2->cd();
   canvasBe9_2->Range(-2.94,-3.39794,86.94,3.69897);
   canvasBe9_2->SetFillColor(0);
   canvasBe9_2->SetBorderMode(0);
   canvasBe9_2->SetBorderSize(2);
   canvasBe9_2->SetLogy();
   canvasBe9_2->SetLeftMargin(0);
   canvasBe9_2->SetRightMargin(0);
   canvasBe9_2->SetTopMargin(0);
   canvasBe9_2->SetBottomMargin(0);
   canvasBe9_2->SetFrameBorderMode(0);
   canvasBe9_2->SetFrameBorderMode(0);
   
   TH1F *h1Be9_3dO5__118 = new TH1F("h1Be9_3dO5__118","",1,-2.94,86.94);
   h1Be9_3dO5__118->SetMinimum(0.0004);
   h1Be9_3dO5__118->SetMaximum(5000);
   h1Be9_3dO5__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_3dO5__118->SetLineColor(ci);
   h1Be9_3dO5__118->GetXaxis()->SetRange(1,1);
   h1Be9_3dO5__118->GetXaxis()->SetLabelFont(42);
   h1Be9_3dO5__118->GetXaxis()->SetLabelSize(0.07);
   h1Be9_3dO5__118->GetXaxis()->SetTitleSize(0.07);
   h1Be9_3dO5__118->GetXaxis()->SetTitleFont(42);
   h1Be9_3dO5__118->GetYaxis()->SetLabelFont(42);
   h1Be9_3dO5__118->GetYaxis()->SetLabelSize(0.07);
   h1Be9_3dO5__118->GetYaxis()->SetTitleSize(0.07);
   h1Be9_3dO5__118->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_3dO5__118->GetYaxis()->SetTitleFont(42);
   h1Be9_3dO5__118->GetZaxis()->SetLabelFont(42);
   h1Be9_3dO5__118->GetZaxis()->SetLabelSize(0.035);
   h1Be9_3dO5__118->GetZaxis()->SetTitleSize(0.035);
   h1Be9_3dO5__118->GetZaxis()->SetTitleFont(42);
   h1Be9_3dO5__118->Draw("");
   
   TH1F *hbicBe9_3dO5__119 = new TH1F("hbicBe9_3dO5__119","BIC",17,8,76);
   hbicBe9_3dO5__119->SetBinContent(0,0.09820317);
   hbicBe9_3dO5__119->SetBinContent(2,0.04910158);
   hbicBe9_3dO5__119->SetBinContent(3,0.04910158);
   hbicBe9_3dO5__119->SetBinContent(11,0.04910158);
   hbicBe9_3dO5__119->SetBinContent(12,1.423946);
   hbicBe9_3dO5__119->SetBinContent(13,8.592777);
   hbicBe9_3dO5__119->SetBinContent(14,9.91852);
   hbicBe9_3dO5__119->SetBinContent(15,2.013165);
   hbicBe9_3dO5__119->SetEntries(452);
   hbicBe9_3dO5__119->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe9_3dO5__119->SetLineColor(ci);
   hbicBe9_3dO5__119->SetLineWidth(2);
   hbicBe9_3dO5__119->GetXaxis()->SetRange(0,18);
   hbicBe9_3dO5__119->GetXaxis()->SetLabelFont(42);
   hbicBe9_3dO5__119->GetXaxis()->SetLabelSize(0.035);
   hbicBe9_3dO5__119->GetXaxis()->SetTitleSize(0.035);
   hbicBe9_3dO5__119->GetXaxis()->SetTitleFont(42);
   hbicBe9_3dO5__119->GetYaxis()->SetLabelFont(42);
   hbicBe9_3dO5__119->GetYaxis()->SetLabelSize(0.035);
   hbicBe9_3dO5__119->GetYaxis()->SetTitleSize(0.035);
   hbicBe9_3dO5__119->GetYaxis()->SetTitleFont(42);
   hbicBe9_3dO5__119->GetZaxis()->SetLabelFont(42);
   hbicBe9_3dO5__119->GetZaxis()->SetLabelSize(0.035);
   hbicBe9_3dO5__119->GetZaxis()->SetTitleSize(0.035);
   hbicBe9_3dO5__119->GetZaxis()->SetTitleFont(42);
   hbicBe9_3dO5__119->Draw("histCsame");
   
   TH1F *hinclBe9_3dO5__120 = new TH1F("hinclBe9_3dO5__120","INCL",17,8,76);
   hinclBe9_3dO5__120->SetBinContent(1,0.09820317);
   hinclBe9_3dO5__120->SetBinContent(2,0.5401174);
   hinclBe9_3dO5__120->SetBinContent(3,0.6874222);
   hinclBe9_3dO5__120->SetBinContent(4,1.178438);
   hinclBe9_3dO5__120->SetBinContent(5,2.356876);
   hinclBe9_3dO5__120->SetBinContent(6,3.486212);
   hinclBe9_3dO5__120->SetBinContent(7,4.468244);
   hinclBe9_3dO5__120->SetBinContent(8,5.990393);
   hinclBe9_3dO5__120->SetBinContent(9,8.543675);
   hinclBe9_3dO5__120->SetBinContent(10,12.2754);
   hinclBe9_3dO5__120->SetBinContent(11,15.6143);
   hinclBe9_3dO5__120->SetBinContent(12,13.06102);
   hinclBe9_3dO5__120->SetBinContent(13,3.584415);
   hinclBe9_3dO5__120->SetBinContent(14,0.09820317);
   hinclBe9_3dO5__120->SetEntries(1466);
   hinclBe9_3dO5__120->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_3dO5__120->SetLineColor(ci);
   hinclBe9_3dO5__120->SetLineWidth(2);
   hinclBe9_3dO5__120->GetXaxis()->SetRange(0,18);
   hinclBe9_3dO5__120->GetXaxis()->SetLabelFont(42);
   hinclBe9_3dO5__120->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_3dO5__120->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_3dO5__120->GetXaxis()->SetTitleFont(42);
   hinclBe9_3dO5__120->GetYaxis()->SetLabelFont(42);
   hinclBe9_3dO5__120->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_3dO5__120->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_3dO5__120->GetYaxis()->SetTitleFont(42);
   hinclBe9_3dO5__120->GetZaxis()->SetLabelFont(42);
   hinclBe9_3dO5__120->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_3dO5__120->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_3dO5__120->GetZaxis()->SetTitleFont(42);
   hinclBe9_3dO5__120->Draw("histCsame");
   
   Double_t Graph0_fx1040[17] = {
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
   Double_t Graph0_fy1040[17] = {
   0.2,
   0.2,
   0.2,
   0.3,
   0.2,
   0.3,
   0.2,
   0.2,
   0.5,
   0.7,
   1.1,
   1.9,
   2.8,
   2,
   1.4,
   0.4,
   0.1};
   Double_t Graph0_fex1040[17] = {
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
   Double_t Graph0_fey1040[17] = {
   0.1,
   0.1,
   0.1,
   0.2,
   0.1,
   0.2,
   0.1,
   0.1,
   0.2,
   0.2,
   0.3,
   0.4,
   0.6,
   0.4,
   0.3,
   0.2,
   0.1};
   gre = new TGraphErrors(17,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1040 = new TH1F("Graph_Graph1040","",100,1.2,82.8);
   Graph_Graph1040->SetMinimum(0.03);
   Graph_Graph1040->SetMaximum(3.736667);
   Graph_Graph1040->SetDirectory(0);
   Graph_Graph1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1040->SetLineColor(ci);
   Graph_Graph1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph1040->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1040->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph1040->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1040->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1040->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1040);
   
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
   canvasBe9_2->Modified();
   canvasBe9->cd();
  
// ------------>Primitives in pad: canvasBe9_4
   TPad *canvasBe9_4 = new TPad("canvasBe9_4", "canvasBe9_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasBe9_4->Draw();
   canvasBe9_4->cd();
   canvasBe9_4->Range(-2.94,-3.39794,86.94,3.69897);
   canvasBe9_4->SetFillColor(0);
   canvasBe9_4->SetBorderMode(0);
   canvasBe9_4->SetBorderSize(2);
   canvasBe9_4->SetLogy();
   canvasBe9_4->SetLeftMargin(0);
   canvasBe9_4->SetRightMargin(0);
   canvasBe9_4->SetTopMargin(0);
   canvasBe9_4->SetBottomMargin(0);
   canvasBe9_4->SetFrameBorderMode(0);
   canvasBe9_4->SetFrameBorderMode(0);
   
   TH1F *h1Be9_7dO6__121 = new TH1F("h1Be9_7dO6__121","",1,-2.94,86.94);
   h1Be9_7dO6__121->SetMinimum(0.0004);
   h1Be9_7dO6__121->SetMaximum(5000);
   h1Be9_7dO6__121->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_7dO6__121->SetLineColor(ci);
   h1Be9_7dO6__121->GetXaxis()->SetRange(1,1);
   h1Be9_7dO6__121->GetXaxis()->SetLabelFont(42);
   h1Be9_7dO6__121->GetXaxis()->SetLabelSize(0.07);
   h1Be9_7dO6__121->GetXaxis()->SetTitleSize(0.07);
   h1Be9_7dO6__121->GetXaxis()->SetTitleFont(42);
   h1Be9_7dO6__121->GetYaxis()->SetLabelFont(42);
   h1Be9_7dO6__121->GetYaxis()->SetLabelSize(0.07);
   h1Be9_7dO6__121->GetYaxis()->SetTitleSize(0.07);
   h1Be9_7dO6__121->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_7dO6__121->GetYaxis()->SetTitleFont(42);
   h1Be9_7dO6__121->GetZaxis()->SetLabelFont(42);
   h1Be9_7dO6__121->GetZaxis()->SetLabelSize(0.035);
   h1Be9_7dO6__121->GetZaxis()->SetTitleSize(0.035);
   h1Be9_7dO6__121->GetZaxis()->SetTitleFont(42);
   h1Be9_7dO6__121->Draw("");
   
   TH1F *hbicBe9_7dO6__122 = new TH1F("hbicBe9_7dO6__122","BIC",17,8,76);
   hbicBe9_7dO6__122->SetBinContent(0,0.0967139);
   hbicBe9_7dO6__122->SetBinContent(1,0.03022309);
   hbicBe9_7dO6__122->SetBinContent(2,0.07858004);
   hbicBe9_7dO6__122->SetBinContent(3,0.01813386);
   hbicBe9_7dO6__122->SetBinContent(4,0.01208924);
   hbicBe9_7dO6__122->SetBinContent(11,0.08462466);
   hbicBe9_7dO6__122->SetBinContent(12,1.710627);
   hbicBe9_7dO6__122->SetBinContent(13,5.276952);
   hbicBe9_7dO6__122->SetBinContent(14,2.871194);
   hbicBe9_7dO6__122->SetBinContent(15,0.1994724);
   hbicBe9_7dO6__122->SetEntries(1717);
   hbicBe9_7dO6__122->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe9_7dO6__122->SetLineColor(ci);
   hbicBe9_7dO6__122->SetLineWidth(2);
   hbicBe9_7dO6__122->GetXaxis()->SetRange(0,18);
   hbicBe9_7dO6__122->GetXaxis()->SetLabelFont(42);
   hbicBe9_7dO6__122->GetXaxis()->SetLabelSize(0.035);
   hbicBe9_7dO6__122->GetXaxis()->SetTitleSize(0.035);
   hbicBe9_7dO6__122->GetXaxis()->SetTitleFont(42);
   hbicBe9_7dO6__122->GetYaxis()->SetLabelFont(42);
   hbicBe9_7dO6__122->GetYaxis()->SetLabelSize(0.035);
   hbicBe9_7dO6__122->GetYaxis()->SetTitleSize(0.035);
   hbicBe9_7dO6__122->GetYaxis()->SetTitleFont(42);
   hbicBe9_7dO6__122->GetZaxis()->SetLabelFont(42);
   hbicBe9_7dO6__122->GetZaxis()->SetLabelSize(0.035);
   hbicBe9_7dO6__122->GetZaxis()->SetTitleSize(0.035);
   hbicBe9_7dO6__122->GetZaxis()->SetTitleFont(42);
   hbicBe9_7dO6__122->Draw("histCsame");
   
   TH1F *hinclBe9_7dO6__123 = new TH1F("hinclBe9_7dO6__123","INCL",17,8,76);
   hinclBe9_7dO6__123->SetBinContent(0,0.1027585);
   hinclBe9_7dO6__123->SetBinContent(1,0.04231233);
   hinclBe9_7dO6__123->SetBinContent(2,0.1632047);
   hinclBe9_7dO6__123->SetBinContent(3,0.5621495);
   hinclBe9_7dO6__123->SetBinContent(4,0.8341574);
   hinclBe9_7dO6__123->SetBinContent(5,1.317727);
   hinclBe9_7dO6__123->SetBinContent(6,1.517199);
   hinclBe9_7dO6__123->SetBinContent(7,1.523244);
   hinclBe9_7dO6__123->SetBinContent(8,1.456753);
   hinclBe9_7dO6__123->SetBinContent(9,1.341905);
   hinclBe9_7dO6__123->SetBinContent(10,0.9248267);
   hinclBe9_7dO6__123->SetBinContent(11,0.5621495);
   hinclBe9_7dO6__123->SetBinContent(12,0.2357401);
   hinclBe9_7dO6__123->SetBinContent(13,0.07253543);
   hinclBe9_7dO6__123->SetEntries(1763);
   hinclBe9_7dO6__123->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_7dO6__123->SetLineColor(ci);
   hinclBe9_7dO6__123->SetLineWidth(2);
   hinclBe9_7dO6__123->GetXaxis()->SetRange(0,18);
   hinclBe9_7dO6__123->GetXaxis()->SetLabelFont(42);
   hinclBe9_7dO6__123->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_7dO6__123->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_7dO6__123->GetXaxis()->SetTitleFont(42);
   hinclBe9_7dO6__123->GetYaxis()->SetLabelFont(42);
   hinclBe9_7dO6__123->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_7dO6__123->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_7dO6__123->GetYaxis()->SetTitleFont(42);
   hinclBe9_7dO6__123->GetZaxis()->SetLabelFont(42);
   hinclBe9_7dO6__123->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_7dO6__123->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_7dO6__123->GetZaxis()->SetTitleFont(42);
   hinclBe9_7dO6__123->Draw("histCsame");
   
   Double_t Graph0_fx1041[17] = {
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
   Double_t Graph0_fy1041[17] = {
   0.06,
   0.06,
   0.1,
   0.06,
   0.07,
   0.08,
   0.16,
   0.18,
   0.34,
   0.39,
   0.68,
   0.7,
   0.63,
   0.35,
   0.16,
   0.06,
   0.011};
   Double_t Graph0_fex1041[17] = {
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
   Double_t Graph0_fey1041[17] = {
   0.02,
   0.02,
   0.03,
   0.02,
   0.02,
   0.02,
   0.03,
   0.03,
   0.05,
   0.06,
   0.09,
   0.09,
   0.09,
   0.05,
   0.03,
   0.02,
   0.007};
   gre = new TGraphErrors(17,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,1.2,82.8);
   Graph_Graph1041->SetMinimum(0.0036);
   Graph_Graph1041->SetMaximum(0.8686);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1041->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
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
   canvasBe9_4->Modified();
   canvasBe9->cd();
  
// ------------>Primitives in pad: canvasBe9_6
   TPad *canvasBe9_6 = new TPad("canvasBe9_6", "canvasBe9_6",0.5209121,0,0.9504264,0.3632613);
   canvasBe9_6->Draw();
   canvasBe9_6->cd();
   canvasBe9_6->Range(-2.94,-4.985407,86.94,3.69897);
   canvasBe9_6->SetFillColor(0);
   canvasBe9_6->SetBorderMode(0);
   canvasBe9_6->SetBorderSize(2);
   canvasBe9_6->SetLogy();
   canvasBe9_6->SetLeftMargin(0);
   canvasBe9_6->SetRightMargin(0);
   canvasBe9_6->SetTopMargin(0);
   canvasBe9_6->SetBottomMargin(0.1827957);
   canvasBe9_6->SetFrameBorderMode(0);
   canvasBe9_6->SetFrameBorderMode(0);
   
   TH1F *h1Be9_14dO4__124 = new TH1F("h1Be9_14dO4__124","",1,-2.94,86.94);
   h1Be9_14dO4__124->SetMinimum(0.0004);
   h1Be9_14dO4__124->SetMaximum(5000);
   h1Be9_14dO4__124->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_14dO4__124->SetLineColor(ci);
   h1Be9_14dO4__124->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Be9_14dO4__124->GetXaxis()->SetRange(1,1);
   h1Be9_14dO4__124->GetXaxis()->SetLabelFont(42);
   h1Be9_14dO4__124->GetXaxis()->SetLabelSize(0.07);
   h1Be9_14dO4__124->GetXaxis()->SetTitleSize(0.07);
   h1Be9_14dO4__124->GetXaxis()->SetTitleFont(42);
   h1Be9_14dO4__124->GetYaxis()->SetLabelFont(42);
   h1Be9_14dO4__124->GetYaxis()->SetLabelSize(0.07);
   h1Be9_14dO4__124->GetYaxis()->SetTitleSize(0.07);
   h1Be9_14dO4__124->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_14dO4__124->GetYaxis()->SetTitleFont(42);
   h1Be9_14dO4__124->GetZaxis()->SetLabelFont(42);
   h1Be9_14dO4__124->GetZaxis()->SetLabelSize(0.035);
   h1Be9_14dO4__124->GetZaxis()->SetTitleSize(0.035);
   h1Be9_14dO4__124->GetZaxis()->SetTitleFont(42);
   h1Be9_14dO4__124->Draw("");
   
   TH1F *hbicBe9_14dO4__125 = new TH1F("hbicBe9_14dO4__125","BIC",17,8,76);
   hbicBe9_14dO4__125->SetBinContent(0,0.1060819);
   hbicBe9_14dO4__125->SetBinContent(1,0.04821906);
   hbicBe9_14dO4__125->SetBinContent(2,0.09643812);
   hbicBe9_14dO4__125->SetBinContent(3,0.01928762);
   hbicBe9_14dO4__125->SetBinContent(4,0.009643812);
   hbicBe9_14dO4__125->SetBinContent(10,0.02893144);
   hbicBe9_14dO4__125->SetBinContent(11,0.7039983);
   hbicBe9_14dO4__125->SetBinContent(12,1.877329);
   hbicBe9_14dO4__125->SetBinContent(13,1.202262);
   hbicBe9_14dO4__125->SetBinContent(14,0.1510864);
   hbicBe9_14dO4__125->SetEntries(1320);
   hbicBe9_14dO4__125->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe9_14dO4__125->SetLineColor(ci);
   hbicBe9_14dO4__125->SetLineWidth(2);
   hbicBe9_14dO4__125->GetXaxis()->SetRange(0,18);
   hbicBe9_14dO4__125->GetXaxis()->SetLabelFont(42);
   hbicBe9_14dO4__125->GetXaxis()->SetLabelSize(0.035);
   hbicBe9_14dO4__125->GetXaxis()->SetTitleSize(0.035);
   hbicBe9_14dO4__125->GetXaxis()->SetTitleFont(42);
   hbicBe9_14dO4__125->GetYaxis()->SetLabelFont(42);
   hbicBe9_14dO4__125->GetYaxis()->SetLabelSize(0.035);
   hbicBe9_14dO4__125->GetYaxis()->SetTitleSize(0.035);
   hbicBe9_14dO4__125->GetYaxis()->SetTitleFont(42);
   hbicBe9_14dO4__125->GetZaxis()->SetLabelFont(42);
   hbicBe9_14dO4__125->GetZaxis()->SetLabelSize(0.035);
   hbicBe9_14dO4__125->GetZaxis()->SetTitleSize(0.035);
   hbicBe9_14dO4__125->GetZaxis()->SetTitleFont(42);
   hbicBe9_14dO4__125->Draw("histCsame");
   
   TH1F *hinclBe9_14dO4__126 = new TH1F("hinclBe9_14dO4__126","INCL",17,8,76);
   hinclBe9_14dO4__126->SetBinContent(0,0.0867943);
   hinclBe9_14dO4__126->SetBinContent(1,0.01928762);
   hinclBe9_14dO4__126->SetBinContent(2,0.07393589);
   hinclBe9_14dO4__126->SetBinContent(3,0.09965272);
   hinclBe9_14dO4__126->SetBinContent(4,0.1607302);
   hinclBe9_14dO4__126->SetBinContent(5,0.2282369);
   hinclBe9_14dO4__126->SetBinContent(6,0.1510864);
   hinclBe9_14dO4__126->SetBinContent(7,0.07072128);
   hinclBe9_14dO4__126->SetBinContent(8,0.03857525);
   hinclBe9_14dO4__126->SetBinContent(9,0.01285842);
   hinclBe9_14dO4__126->SetBinContent(11,0.003214604);
   hinclBe9_14dO4__126->SetEntries(294);
   hinclBe9_14dO4__126->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_14dO4__126->SetLineColor(ci);
   hinclBe9_14dO4__126->SetLineWidth(2);
   hinclBe9_14dO4__126->GetXaxis()->SetRange(0,18);
   hinclBe9_14dO4__126->GetXaxis()->SetLabelFont(42);
   hinclBe9_14dO4__126->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_14dO4__126->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_14dO4__126->GetXaxis()->SetTitleFont(42);
   hinclBe9_14dO4__126->GetYaxis()->SetLabelFont(42);
   hinclBe9_14dO4__126->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_14dO4__126->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_14dO4__126->GetYaxis()->SetTitleFont(42);
   hinclBe9_14dO4__126->GetZaxis()->SetLabelFont(42);
   hinclBe9_14dO4__126->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_14dO4__126->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_14dO4__126->GetZaxis()->SetTitleFont(42);
   hinclBe9_14dO4__126->Draw("histCsame");
   
   Double_t Graph0_fx1042[17] = {
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
   Double_t Graph0_fy1042[17] = {
   0.013,
   0.016,
   0.018,
   0.016,
   0.021,
   0.016,
   0.018,
   0.023,
   0.03,
   0.027,
   0.023,
   0.022,
   0.014,
   0.011,
   0.008,
   0.0007,
   0.0003};
   Double_t Graph0_fex1042[17] = {
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
   Double_t Graph0_fey1042[17] = {
   0.005,
   0.004,
   0.005,
   0.005,
   0.006,
   0.005,
   0.005,
   0.007,
   0.008,
   0.007,
   0.007,
   0.008,
   0.005,
   0.005,
   0.004,
   0.0003,
   0.0002};
   gre = new TGraphErrors(17,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1042 = new TH1F("Graph_Graph1042","",100,1.2,82.8);
   Graph_Graph1042->SetMinimum(9e-05);
   Graph_Graph1042->SetMaximum(0.04179);
   Graph_Graph1042->SetDirectory(0);
   Graph_Graph1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1042->SetLineColor(ci);
   Graph_Graph1042->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph1042->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1042->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph1042->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1042->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1042->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1042);
   
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
   canvasBe9_6->Modified();
   canvasBe9->cd();
   canvasBe9->Modified();
   canvasBe9->cd();
   canvasBe9->SetSelected(canvasBe9);
}
