void Be7()
{
//=========Macro generated from canvas: canvasBe7/canvasBe7
//=========  (Sat Dec 15 20:25:47 2018) by ROOT version6.06/06
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
   canvasBe7_1->Range(-28.38496,-3.39794,104.64,3.69897);
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
   
   TH1F *h1Be7_2dO2__91 = new TH1F("h1Be7_2dO2__91","^{12}C + ^{nat}C #rightarrow ^{7}Be at 62 MeV/n",1,-4.068571,104.64);
   h1Be7_2dO2__91->SetMinimum(0.0004);
   h1Be7_2dO2__91->SetMaximum(5000);
   h1Be7_2dO2__91->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Be7_2dO2__91->SetLineColor(ci);
   h1Be7_2dO2__91->GetXaxis()->SetRange(1,1);
   h1Be7_2dO2__91->GetXaxis()->SetLabelFont(42);
   h1Be7_2dO2__91->GetXaxis()->SetLabelSize(0.07);
   h1Be7_2dO2__91->GetXaxis()->SetTitleSize(0.07);
   h1Be7_2dO2__91->GetXaxis()->SetTitleFont(42);
   h1Be7_2dO2__91->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Be7_2dO2__91->GetYaxis()->SetLabelFont(42);
   h1Be7_2dO2__91->GetYaxis()->SetLabelSize(0.07);
   h1Be7_2dO2__91->GetYaxis()->SetTitleSize(0.07);
   h1Be7_2dO2__91->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_2dO2__91->GetYaxis()->SetTitleFont(42);
   h1Be7_2dO2__91->GetZaxis()->SetLabelFont(42);
   h1Be7_2dO2__91->GetZaxis()->SetLabelSize(0.035);
   h1Be7_2dO2__91->GetZaxis()->SetTitleSize(0.035);
   h1Be7_2dO2__91->GetZaxis()->SetTitleFont(42);
   h1Be7_2dO2__91->Draw("");
   
   TPaveText *pt = new TPaveText(0.2596831,0.9312746,0.7403169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{7}Be at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicBe7_2dO2__92 = new TH1F("hbicBe7_2dO2__92","BIC",18,9.142857,91.42857);
   hbicBe7_2dO2__92->SetBinContent(0,0.6832592);
   hbicBe7_2dO2__92->SetBinContent(2,0.1366518);
   hbicBe7_2dO2__92->SetBinContent(3,0.1366518);
   hbicBe7_2dO2__92->SetBinContent(9,0.3416296);
   hbicBe7_2dO2__92->SetBinContent(10,7.03757);
   hbicBe7_2dO2__92->SetBinContent(11,41.13221);
   hbicBe7_2dO2__92->SetBinContent(12,65.18293);
   hbicBe7_2dO2__92->SetBinContent(13,37.57926);
   hbicBe7_2dO2__92->SetBinContent(14,6.012681);
   hbicBe7_2dO2__92->SetBinContent(15,0.2733037);
   hbicBe7_2dO2__92->SetEntries(2320);
   hbicBe7_2dO2__92->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe7_2dO2__92->SetLineColor(ci);
   hbicBe7_2dO2__92->SetLineWidth(2);
   hbicBe7_2dO2__92->GetXaxis()->SetRange(0,19);
   hbicBe7_2dO2__92->GetXaxis()->SetLabelFont(42);
   hbicBe7_2dO2__92->GetXaxis()->SetLabelSize(0.035);
   hbicBe7_2dO2__92->GetXaxis()->SetTitleSize(0.035);
   hbicBe7_2dO2__92->GetXaxis()->SetTitleFont(42);
   hbicBe7_2dO2__92->GetYaxis()->SetLabelFont(42);
   hbicBe7_2dO2__92->GetYaxis()->SetLabelSize(0.035);
   hbicBe7_2dO2__92->GetYaxis()->SetTitleSize(0.035);
   hbicBe7_2dO2__92->GetYaxis()->SetTitleFont(42);
   hbicBe7_2dO2__92->GetZaxis()->SetLabelFont(42);
   hbicBe7_2dO2__92->GetZaxis()->SetLabelSize(0.035);
   hbicBe7_2dO2__92->GetZaxis()->SetTitleSize(0.035);
   hbicBe7_2dO2__92->GetZaxis()->SetTitleFont(42);
   hbicBe7_2dO2__92->Draw("histCsame");
   
   TH1F *hinclBe7_2dO2__93 = new TH1F("hinclBe7_2dO2__93","INCL",18,9.142857,91.42857);
   hinclBe7_2dO2__93->SetBinContent(0,0.2733037);
   hinclBe7_2dO2__93->SetBinContent(1,0.4099555);
   hinclBe7_2dO2__93->SetBinContent(2,1.093215);
   hinclBe7_2dO2__93->SetBinContent(3,3.074667);
   hinclBe7_2dO2__93->SetBinContent(4,4.85114);
   hinclBe7_2dO2__93->SetBinContent(5,6.490963);
   hinclBe7_2dO2__93->SetBinContent(6,8.130785);
   hinclBe7_2dO2__93->SetBinContent(7,10.24889);
   hinclBe7_2dO2__93->SetBinContent(8,9.087348);
   hinclBe7_2dO2__93->SetBinContent(9,10.7955);
   hinclBe7_2dO2__93->SetBinContent(10,8.677392);
   hinclBe7_2dO2__93->SetBinContent(11,5.056118);
   hinclBe7_2dO2__93->SetBinContent(12,2.049778);
   hinclBe7_2dO2__93->SetBinContent(13,0.06832592);
   hinclBe7_2dO2__93->SetBinContent(14,0.1366518);
   hinclBe7_2dO2__93->SetEntries(1031);
   hinclBe7_2dO2__93->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_2dO2__93->SetLineColor(ci);
   hinclBe7_2dO2__93->SetLineWidth(2);
   hinclBe7_2dO2__93->GetXaxis()->SetRange(0,19);
   hinclBe7_2dO2__93->GetXaxis()->SetLabelFont(42);
   hinclBe7_2dO2__93->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_2dO2__93->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_2dO2__93->GetXaxis()->SetTitleFont(42);
   hinclBe7_2dO2__93->GetYaxis()->SetLabelFont(42);
   hinclBe7_2dO2__93->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_2dO2__93->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_2dO2__93->GetYaxis()->SetTitleFont(42);
   hinclBe7_2dO2__93->GetZaxis()->SetLabelFont(42);
   hinclBe7_2dO2__93->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_2dO2__93->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_2dO2__93->GetZaxis()->SetTitleFont(42);
   hinclBe7_2dO2__93->Draw("histCsame");
   
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
   canvasBe7_3->Range(-28.38496,-3.39794,104.64,3.69897);
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
   
   TH1F *h1Be7_7dO6__94 = new TH1F("h1Be7_7dO6__94","",1,-4.068571,104.64);
   h1Be7_7dO6__94->SetMinimum(0.0004);
   h1Be7_7dO6__94->SetMaximum(5000);
   h1Be7_7dO6__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_7dO6__94->SetLineColor(ci);
   h1Be7_7dO6__94->GetXaxis()->SetRange(1,1);
   h1Be7_7dO6__94->GetXaxis()->SetLabelFont(42);
   h1Be7_7dO6__94->GetXaxis()->SetLabelSize(0.07);
   h1Be7_7dO6__94->GetXaxis()->SetTitleSize(0.07);
   h1Be7_7dO6__94->GetXaxis()->SetTitleFont(42);
   h1Be7_7dO6__94->GetYaxis()->SetLabelFont(42);
   h1Be7_7dO6__94->GetYaxis()->SetLabelSize(0.07);
   h1Be7_7dO6__94->GetYaxis()->SetTitleSize(0.07);
   h1Be7_7dO6__94->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_7dO6__94->GetYaxis()->SetTitleFont(42);
   h1Be7_7dO6__94->GetZaxis()->SetLabelFont(42);
   h1Be7_7dO6__94->GetZaxis()->SetLabelSize(0.035);
   h1Be7_7dO6__94->GetZaxis()->SetTitleSize(0.035);
   h1Be7_7dO6__94->GetZaxis()->SetTitleFont(42);
   h1Be7_7dO6__94->Draw("");
   
   TH1F *hbicBe7_7dO6__95 = new TH1F("hbicBe7_7dO6__95","BIC",16,9.142857,82.28571);
   hbicBe7_7dO6__95->SetBinContent(0,0.4971699);
   hbicBe7_7dO6__95->SetBinContent(1,0.1798274);
   hbicBe7_7dO6__95->SetBinContent(2,0.07933562);
   hbicBe7_7dO6__95->SetBinContent(3,0.005289041);
   hbicBe7_7dO6__95->SetBinContent(4,0.005289041);
   hbicBe7_7dO6__95->SetBinContent(6,0.005289041);
   hbicBe7_7dO6__95->SetBinContent(8,0.02644521);
   hbicBe7_7dO6__95->SetBinContent(9,0.7722);
   hbicBe7_7dO6__95->SetBinContent(10,4.992855);
   hbicBe7_7dO6__95->SetBinContent(11,13.00046);
   hbicBe7_7dO6__95->SetBinContent(12,12.28115);
   hbicBe7_7dO6__95->SetBinContent(13,3.861);
   hbicBe7_7dO6__95->SetBinContent(14,0.4654357);
   hbicBe7_7dO6__95->SetBinContent(15,0.005289041);
   hbicBe7_7dO6__95->SetEntries(6840);
   hbicBe7_7dO6__95->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe7_7dO6__95->SetLineColor(ci);
   hbicBe7_7dO6__95->SetLineWidth(2);
   hbicBe7_7dO6__95->GetXaxis()->SetRange(0,17);
   hbicBe7_7dO6__95->GetXaxis()->SetLabelFont(42);
   hbicBe7_7dO6__95->GetXaxis()->SetLabelSize(0.035);
   hbicBe7_7dO6__95->GetXaxis()->SetTitleSize(0.035);
   hbicBe7_7dO6__95->GetXaxis()->SetTitleFont(42);
   hbicBe7_7dO6__95->GetYaxis()->SetLabelFont(42);
   hbicBe7_7dO6__95->GetYaxis()->SetLabelSize(0.035);
   hbicBe7_7dO6__95->GetYaxis()->SetTitleSize(0.035);
   hbicBe7_7dO6__95->GetYaxis()->SetTitleFont(42);
   hbicBe7_7dO6__95->GetZaxis()->SetLabelFont(42);
   hbicBe7_7dO6__95->GetZaxis()->SetLabelSize(0.035);
   hbicBe7_7dO6__95->GetZaxis()->SetTitleSize(0.035);
   hbicBe7_7dO6__95->GetZaxis()->SetTitleFont(42);
   hbicBe7_7dO6__95->Draw("histCsame");
   
   TH1F *hinclBe7_7dO6__96 = new TH1F("hinclBe7_7dO6__96","INCL",16,9.142857,82.28571);
   hinclBe7_7dO6__96->SetBinContent(0,0.2644521);
   hinclBe7_7dO6__96->SetBinContent(1,0.3649439);
   hinclBe7_7dO6__96->SetBinContent(2,1.142433);
   hinclBe7_7dO6__96->SetBinContent(3,2.020414);
   hinclBe7_7dO6__96->SetBinContent(4,3.0888);
   hinclBe7_7dO6__96->SetBinContent(5,3.691751);
   hinclBe7_7dO6__96->SetBinContent(6,4.061984);
   hinclBe7_7dO6__96->SetBinContent(7,3.940336);
   hinclBe7_7dO6__96->SetBinContent(8,3.384987);
   hinclBe7_7dO6__96->SetBinContent(9,2.380069);
   hinclBe7_7dO6__96->SetBinContent(10,1.375151);
   hinclBe7_7dO6__96->SetBinContent(11,0.5659274);
   hinclBe7_7dO6__96->SetBinContent(12,0.1586712);
   hinclBe7_7dO6__96->SetBinContent(13,0.02115617);
   hinclBe7_7dO6__96->SetEntries(5003);
   hinclBe7_7dO6__96->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_7dO6__96->SetLineColor(ci);
   hinclBe7_7dO6__96->SetLineWidth(2);
   hinclBe7_7dO6__96->GetXaxis()->SetRange(0,17);
   hinclBe7_7dO6__96->GetXaxis()->SetLabelFont(42);
   hinclBe7_7dO6__96->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_7dO6__96->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_7dO6__96->GetXaxis()->SetTitleFont(42);
   hinclBe7_7dO6__96->GetYaxis()->SetLabelFont(42);
   hinclBe7_7dO6__96->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_7dO6__96->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_7dO6__96->GetYaxis()->SetTitleFont(42);
   hinclBe7_7dO6__96->GetZaxis()->SetLabelFont(42);
   hinclBe7_7dO6__96->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_7dO6__96->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_7dO6__96->GetZaxis()->SetTitleFont(42);
   hinclBe7_7dO6__96->Draw("histCsame");
   
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
   canvasBe7_5->Range(-28.38496,-4.985407,104.64,3.69897);
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
   
   TH1F *h1Be7_18__97 = new TH1F("h1Be7_18__97","",1,-4.068571,104.64);
   h1Be7_18__97->SetMinimum(0.0004);
   h1Be7_18__97->SetMaximum(5000);
   h1Be7_18__97->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_18__97->SetLineColor(ci);
   h1Be7_18__97->GetXaxis()->SetRange(1,1);
   h1Be7_18__97->GetXaxis()->SetLabelFont(42);
   h1Be7_18__97->GetXaxis()->SetLabelSize(0.07);
   h1Be7_18__97->GetXaxis()->SetTitleSize(0.07);
   h1Be7_18__97->GetXaxis()->SetTitleFont(42);
   h1Be7_18__97->GetYaxis()->SetLabelFont(42);
   h1Be7_18__97->GetYaxis()->SetLabelSize(0.07);
   h1Be7_18__97->GetYaxis()->SetTitleSize(0.07);
   h1Be7_18__97->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_18__97->GetYaxis()->SetTitleFont(42);
   h1Be7_18__97->GetZaxis()->SetLabelFont(42);
   h1Be7_18__97->GetZaxis()->SetLabelSize(0.035);
   h1Be7_18__97->GetZaxis()->SetTitleSize(0.035);
   h1Be7_18__97->GetZaxis()->SetTitleFont(42);
   h1Be7_18__97->Draw("");
   
   TH1F *hbicBe7_18__98 = new TH1F("hbicBe7_18__98","BIC",16,9.142857,82.28571);
   hbicBe7_18__98->SetBinContent(0,0.5976064);
   hbicBe7_18__98->SetBinContent(1,0.2671119);
   hbicBe7_18__98->SetBinContent(2,0.1403469);
   hbicBe7_18__98->SetBinContent(3,0.0226366);
   hbicBe7_18__98->SetBinContent(4,0.004527321);
   hbicBe7_18__98->SetBinContent(7,0.0113183);
   hbicBe7_18__98->SetBinContent(8,0.1652472);
   hbicBe7_18__98->SetBinContent(9,0.9077278);
   hbicBe7_18__98->SetBinContent(10,2.039558);
   hbicBe7_18__98->SetBinContent(11,1.659263);
   hbicBe7_18__98->SetBinContent(12,0.5319602);
   hbicBe7_18__98->SetBinContent(13,0.06564615);
   hbicBe7_18__98->SetBinContent(14,0.004527321);
   hbicBe7_18__98->SetEntries(2835);
   hbicBe7_18__98->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe7_18__98->SetLineColor(ci);
   hbicBe7_18__98->SetLineWidth(2);
   hbicBe7_18__98->GetXaxis()->SetRange(0,17);
   hbicBe7_18__98->GetXaxis()->SetLabelFont(42);
   hbicBe7_18__98->GetXaxis()->SetLabelSize(0.035);
   hbicBe7_18__98->GetXaxis()->SetTitleSize(0.035);
   hbicBe7_18__98->GetXaxis()->SetTitleFont(42);
   hbicBe7_18__98->GetYaxis()->SetLabelFont(42);
   hbicBe7_18__98->GetYaxis()->SetLabelSize(0.035);
   hbicBe7_18__98->GetYaxis()->SetTitleSize(0.035);
   hbicBe7_18__98->GetYaxis()->SetTitleFont(42);
   hbicBe7_18__98->GetZaxis()->SetLabelFont(42);
   hbicBe7_18__98->GetZaxis()->SetLabelSize(0.035);
   hbicBe7_18__98->GetZaxis()->SetTitleSize(0.035);
   hbicBe7_18__98->GetZaxis()->SetTitleFont(42);
   hbicBe7_18__98->Draw("histCsame");
   
   TH1F *hinclBe7_18__99 = new TH1F("hinclBe7_18__99","INCL",16,9.142857,82.28571);
   hinclBe7_18__99->SetBinContent(0,0.226366);
   hinclBe7_18__99->SetBinContent(1,0.1539289);
   hinclBe7_18__99->SetBinContent(2,0.2806939);
   hinclBe7_18__99->SetBinContent(3,0.3689767);
   hinclBe7_18__99->SetBinContent(4,0.4233045);
   hinclBe7_18__99->SetBinContent(5,0.2580573);
   hinclBe7_18__99->SetBinContent(6,0.2127841);
   hinclBe7_18__99->SetBinContent(7,0.07922811);
   hinclBe7_18__99->SetBinContent(8,0.04300955);
   hinclBe7_18__99->SetBinContent(9,0.02037294);
   hinclBe7_18__99->SetBinContent(10,0.009054641);
   hinclBe7_18__99->SetEntries(917);
   hinclBe7_18__99->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_18__99->SetLineColor(ci);
   hinclBe7_18__99->SetLineWidth(2);
   hinclBe7_18__99->GetXaxis()->SetRange(0,17);
   hinclBe7_18__99->GetXaxis()->SetLabelFont(42);
   hinclBe7_18__99->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_18__99->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_18__99->GetXaxis()->SetTitleFont(42);
   hinclBe7_18__99->GetYaxis()->SetLabelFont(42);
   hinclBe7_18__99->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_18__99->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_18__99->GetYaxis()->SetTitleFont(42);
   hinclBe7_18__99->GetZaxis()->SetLabelFont(42);
   hinclBe7_18__99->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_18__99->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_18__99->GetZaxis()->SetTitleFont(42);
   hinclBe7_18__99->Draw("histCsame");
   
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
   entry=leg->AddEntry("hbicBe7_18","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   canvasBe7_2->Range(-4.068571,-3.39794,104.64,3.69897);
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
   
   TH1F *h1Be7_4dO9__100 = new TH1F("h1Be7_4dO9__100","",1,-4.068571,104.64);
   h1Be7_4dO9__100->SetMinimum(0.0004);
   h1Be7_4dO9__100->SetMaximum(5000);
   h1Be7_4dO9__100->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_4dO9__100->SetLineColor(ci);
   h1Be7_4dO9__100->GetXaxis()->SetRange(1,1);
   h1Be7_4dO9__100->GetXaxis()->SetLabelFont(42);
   h1Be7_4dO9__100->GetXaxis()->SetLabelSize(0.07);
   h1Be7_4dO9__100->GetXaxis()->SetTitleSize(0.07);
   h1Be7_4dO9__100->GetXaxis()->SetTitleFont(42);
   h1Be7_4dO9__100->GetYaxis()->SetLabelFont(42);
   h1Be7_4dO9__100->GetYaxis()->SetLabelSize(0.07);
   h1Be7_4dO9__100->GetYaxis()->SetTitleSize(0.07);
   h1Be7_4dO9__100->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_4dO9__100->GetYaxis()->SetTitleFont(42);
   h1Be7_4dO9__100->GetZaxis()->SetLabelFont(42);
   h1Be7_4dO9__100->GetZaxis()->SetLabelSize(0.035);
   h1Be7_4dO9__100->GetZaxis()->SetTitleSize(0.035);
   h1Be7_4dO9__100->GetZaxis()->SetTitleFont(42);
   h1Be7_4dO9__100->Draw("");
   
   TH1F *hbicBe7_4dO9__101 = new TH1F("hbicBe7_4dO9__101","BIC",17,9.142857,86.85714);
   hbicBe7_4dO9__101->SetBinContent(0,0.3684819);
   hbicBe7_4dO9__101->SetBinContent(1,0.06141365);
   hbicBe7_4dO9__101->SetBinContent(2,0.09212047);
   hbicBe7_4dO9__101->SetBinContent(8,0.03070682);
   hbicBe7_4dO9__101->SetBinContent(9,0.3070682);
   hbicBe7_4dO9__101->SetBinContent(10,4.913092);
   hbicBe7_4dO9__101->SetBinContent(11,21.03417);
   hbicBe7_4dO9__101->SetBinContent(12,26.13151);
   hbicBe7_4dO9__101->SetBinContent(13,12.06778);
   hbicBe7_4dO9__101->SetBinContent(14,2.057357);
   hbicBe7_4dO9__101->SetBinContent(15,0.03070682);
   hbicBe7_4dO9__101->SetEntries(2185);
   hbicBe7_4dO9__101->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe7_4dO9__101->SetLineColor(ci);
   hbicBe7_4dO9__101->SetLineWidth(2);
   hbicBe7_4dO9__101->GetXaxis()->SetRange(0,18);
   hbicBe7_4dO9__101->GetXaxis()->SetLabelFont(42);
   hbicBe7_4dO9__101->GetXaxis()->SetLabelSize(0.035);
   hbicBe7_4dO9__101->GetXaxis()->SetTitleSize(0.035);
   hbicBe7_4dO9__101->GetXaxis()->SetTitleFont(42);
   hbicBe7_4dO9__101->GetYaxis()->SetLabelFont(42);
   hbicBe7_4dO9__101->GetYaxis()->SetLabelSize(0.035);
   hbicBe7_4dO9__101->GetYaxis()->SetTitleSize(0.035);
   hbicBe7_4dO9__101->GetYaxis()->SetTitleFont(42);
   hbicBe7_4dO9__101->GetZaxis()->SetLabelFont(42);
   hbicBe7_4dO9__101->GetZaxis()->SetLabelSize(0.035);
   hbicBe7_4dO9__101->GetZaxis()->SetTitleSize(0.035);
   hbicBe7_4dO9__101->GetZaxis()->SetTitleFont(42);
   hbicBe7_4dO9__101->Draw("histCsame");
   
   TH1F *hinclBe7_4dO9__102 = new TH1F("hinclBe7_4dO9__102","INCL",17,9.142857,86.85714);
   hinclBe7_4dO9__102->SetBinContent(0,0.2149478);
   hinclBe7_4dO9__102->SetBinContent(1,0.3991887);
   hinclBe7_4dO9__102->SetBinContent(2,1.197566);
   hinclBe7_4dO9__102->SetBinContent(3,2.395132);
   hinclBe7_4dO9__102->SetBinContent(4,4.206835);
   hinclBe7_4dO9__102->SetBinContent(5,5.957124);
   hinclBe7_4dO9__102->SetBinContent(6,6.816915);
   hinclBe7_4dO9__102->SetBinContent(7,6.387019);
   hinclBe7_4dO9__102->SetBinContent(8,6.018538);
   hinclBe7_4dO9__102->SetBinContent(9,5.89571);
   hinclBe7_4dO9__102->SetBinContent(10,3.86906);
   hinclBe7_4dO9__102->SetBinContent(11,1.381807);
   hinclBe7_4dO9__102->SetBinContent(12,0.5834296);
   hinclBe7_4dO9__102->SetBinContent(13,0.09212047);
   hinclBe7_4dO9__102->SetEntries(1479);
   hinclBe7_4dO9__102->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_4dO9__102->SetLineColor(ci);
   hinclBe7_4dO9__102->SetLineWidth(2);
   hinclBe7_4dO9__102->GetXaxis()->SetRange(0,18);
   hinclBe7_4dO9__102->GetXaxis()->SetLabelFont(42);
   hinclBe7_4dO9__102->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_4dO9__102->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_4dO9__102->GetXaxis()->SetTitleFont(42);
   hinclBe7_4dO9__102->GetYaxis()->SetLabelFont(42);
   hinclBe7_4dO9__102->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_4dO9__102->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_4dO9__102->GetYaxis()->SetTitleFont(42);
   hinclBe7_4dO9__102->GetZaxis()->SetLabelFont(42);
   hinclBe7_4dO9__102->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_4dO9__102->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_4dO9__102->GetZaxis()->SetTitleFont(42);
   hinclBe7_4dO9__102->Draw("histCsame");
   
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
   canvasBe7_4->Range(-4.068571,-3.39794,104.64,3.69897);
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
   
   TH1F *h1Be7_14dO4__103 = new TH1F("h1Be7_14dO4__103","",1,-4.068571,104.64);
   h1Be7_14dO4__103->SetMinimum(0.0004);
   h1Be7_14dO4__103->SetMaximum(5000);
   h1Be7_14dO4__103->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_14dO4__103->SetLineColor(ci);
   h1Be7_14dO4__103->GetXaxis()->SetRange(1,1);
   h1Be7_14dO4__103->GetXaxis()->SetLabelFont(42);
   h1Be7_14dO4__103->GetXaxis()->SetLabelSize(0.07);
   h1Be7_14dO4__103->GetXaxis()->SetTitleSize(0.07);
   h1Be7_14dO4__103->GetXaxis()->SetTitleFont(42);
   h1Be7_14dO4__103->GetYaxis()->SetLabelFont(42);
   h1Be7_14dO4__103->GetYaxis()->SetLabelSize(0.07);
   h1Be7_14dO4__103->GetYaxis()->SetTitleSize(0.07);
   h1Be7_14dO4__103->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_14dO4__103->GetYaxis()->SetTitleFont(42);
   h1Be7_14dO4__103->GetZaxis()->SetLabelFont(42);
   h1Be7_14dO4__103->GetZaxis()->SetLabelSize(0.035);
   h1Be7_14dO4__103->GetZaxis()->SetTitleSize(0.035);
   h1Be7_14dO4__103->GetZaxis()->SetTitleFont(42);
   h1Be7_14dO4__103->Draw("");
   
   TH1F *hbicBe7_14dO4__104 = new TH1F("hbicBe7_14dO4__104","BIC",16,9.142857,82.28571);
   hbicBe7_14dO4__104->SetBinContent(0,0.5288023);
   hbicBe7_14dO4__104->SetBinContent(1,0.177205);
   hbicBe7_14dO4__104->SetBinContent(2,0.1153239);
   hbicBe7_14dO4__104->SetBinContent(3,0.02250223);
   hbicBe7_14dO4__104->SetBinContent(4,0.008438335);
   hbicBe7_14dO4__104->SetBinContent(7,0.008438335);
   hbicBe7_14dO4__104->SetBinContent(8,0.1659539);
   hbicBe7_14dO4__104->SetBinContent(9,1.400764);
   hbicBe7_14dO4__104->SetBinContent(10,3.690365);
   hbicBe7_14dO4__104->SetBinContent(11,4.174163);
   hbicBe7_14dO4__104->SetBinContent(12,1.724233);
   hbicBe7_14dO4__104->SetBinContent(13,0.3656612);
   hbicBe7_14dO4__104->SetBinContent(14,0.0393789);
   hbicBe7_14dO4__104->SetEntries(4416);
   hbicBe7_14dO4__104->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe7_14dO4__104->SetLineColor(ci);
   hbicBe7_14dO4__104->SetLineWidth(2);
   hbicBe7_14dO4__104->GetXaxis()->SetRange(0,17);
   hbicBe7_14dO4__104->GetXaxis()->SetLabelFont(42);
   hbicBe7_14dO4__104->GetXaxis()->SetLabelSize(0.035);
   hbicBe7_14dO4__104->GetXaxis()->SetTitleSize(0.035);
   hbicBe7_14dO4__104->GetXaxis()->SetTitleFont(42);
   hbicBe7_14dO4__104->GetYaxis()->SetLabelFont(42);
   hbicBe7_14dO4__104->GetYaxis()->SetLabelSize(0.035);
   hbicBe7_14dO4__104->GetYaxis()->SetTitleSize(0.035);
   hbicBe7_14dO4__104->GetYaxis()->SetTitleFont(42);
   hbicBe7_14dO4__104->GetZaxis()->SetLabelFont(42);
   hbicBe7_14dO4__104->GetZaxis()->SetLabelSize(0.035);
   hbicBe7_14dO4__104->GetZaxis()->SetTitleSize(0.035);
   hbicBe7_14dO4__104->GetZaxis()->SetTitleFont(42);
   hbicBe7_14dO4__104->Draw("histCsame");
   
   TH1F *hinclBe7_14dO4__105 = new TH1F("hinclBe7_14dO4__105","INCL",16,9.142857,82.28571);
   hinclBe7_14dO4__105->SetBinContent(0,0.2306478);
   hinclBe7_14dO4__105->SetBinContent(1,0.2109584);
   hinclBe7_14dO4__105->SetBinContent(2,0.4866107);
   hinclBe7_14dO4__105->SetBinContent(3,0.7819524);
   hinclBe7_14dO4__105->SetBinContent(4,0.8944635);
   hinclBe7_14dO4__105->SetBinContent(5,0.838208);
   hinclBe7_14dO4__105->SetBinContent(6,0.621624);
   hinclBe7_14dO4__105->SetBinContent(7,0.3769123);
   hinclBe7_14dO4__105->SetBinContent(8,0.2081456);
   hinclBe7_14dO4__105->SetBinContent(9,0.1350134);
   hinclBe7_14dO4__105->SetBinContent(10,0.02531501);
   hinclBe7_14dO4__105->SetBinContent(11,0.01406389);
   hinclBe7_14dO4__105->SetEntries(1715);
   hinclBe7_14dO4__105->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_14dO4__105->SetLineColor(ci);
   hinclBe7_14dO4__105->SetLineWidth(2);
   hinclBe7_14dO4__105->GetXaxis()->SetRange(0,17);
   hinclBe7_14dO4__105->GetXaxis()->SetLabelFont(42);
   hinclBe7_14dO4__105->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_14dO4__105->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_14dO4__105->GetXaxis()->SetTitleFont(42);
   hinclBe7_14dO4__105->GetYaxis()->SetLabelFont(42);
   hinclBe7_14dO4__105->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_14dO4__105->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_14dO4__105->GetYaxis()->SetTitleFont(42);
   hinclBe7_14dO4__105->GetZaxis()->SetLabelFont(42);
   hinclBe7_14dO4__105->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_14dO4__105->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_14dO4__105->GetZaxis()->SetTitleFont(42);
   hinclBe7_14dO4__105->Draw("histCsame");
   
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
   canvasBe7_6->Range(-4.068571,-4.985407,104.64,3.69897);
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
   
   TH1F *h1Be7_21dO8__106 = new TH1F("h1Be7_21dO8__106","",1,-4.068571,104.64);
   h1Be7_21dO8__106->SetMinimum(0.0004);
   h1Be7_21dO8__106->SetMaximum(5000);
   h1Be7_21dO8__106->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be7_21dO8__106->SetLineColor(ci);
   h1Be7_21dO8__106->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Be7_21dO8__106->GetXaxis()->SetRange(1,1);
   h1Be7_21dO8__106->GetXaxis()->SetLabelFont(42);
   h1Be7_21dO8__106->GetXaxis()->SetLabelSize(0.07);
   h1Be7_21dO8__106->GetXaxis()->SetTitleSize(0.07);
   h1Be7_21dO8__106->GetXaxis()->SetTitleFont(42);
   h1Be7_21dO8__106->GetYaxis()->SetLabelFont(42);
   h1Be7_21dO8__106->GetYaxis()->SetLabelSize(0.07);
   h1Be7_21dO8__106->GetYaxis()->SetTitleSize(0.07);
   h1Be7_21dO8__106->GetYaxis()->SetTitleOffset(1.1);
   h1Be7_21dO8__106->GetYaxis()->SetTitleFont(42);
   h1Be7_21dO8__106->GetZaxis()->SetLabelFont(42);
   h1Be7_21dO8__106->GetZaxis()->SetLabelSize(0.035);
   h1Be7_21dO8__106->GetZaxis()->SetTitleSize(0.035);
   h1Be7_21dO8__106->GetZaxis()->SetTitleFont(42);
   h1Be7_21dO8__106->Draw("");
   
   TH1F *hbicBe7_21dO8__107 = new TH1F("hbicBe7_21dO8__107","BIC",13,9.142857,68.57143);
   hbicBe7_21dO8__107->SetBinContent(0,0.649843);
   hbicBe7_21dO8__107->SetBinContent(1,0.3409321);
   hbicBe7_21dO8__107->SetBinContent(2,0.1864767);
   hbicBe7_21dO8__107->SetBinContent(3,0.02260323);
   hbicBe7_21dO8__107->SetBinContent(7,0.005650809);
   hbicBe7_21dO8__107->SetBinContent(8,0.118667);
   hbicBe7_21dO8__107->SetBinContent(9,0.4294614);
   hbicBe7_21dO8__107->SetBinContent(10,0.7327215);
   hbicBe7_21dO8__107->SetBinContent(11,0.4991548);
   hbicBe7_21dO8__107->SetBinContent(12,0.1393866);
   hbicBe7_21dO8__107->SetBinContent(13,0.03767206);
   hbicBe7_21dO8__107->SetEntries(1679);
   hbicBe7_21dO8__107->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicBe7_21dO8__107->SetLineColor(ci);
   hbicBe7_21dO8__107->SetLineWidth(2);
   hbicBe7_21dO8__107->GetXaxis()->SetRange(0,14);
   hbicBe7_21dO8__107->GetXaxis()->SetLabelFont(42);
   hbicBe7_21dO8__107->GetXaxis()->SetLabelSize(0.035);
   hbicBe7_21dO8__107->GetXaxis()->SetTitleSize(0.035);
   hbicBe7_21dO8__107->GetXaxis()->SetTitleFont(42);
   hbicBe7_21dO8__107->GetYaxis()->SetLabelFont(42);
   hbicBe7_21dO8__107->GetYaxis()->SetLabelSize(0.035);
   hbicBe7_21dO8__107->GetYaxis()->SetTitleSize(0.035);
   hbicBe7_21dO8__107->GetYaxis()->SetTitleFont(42);
   hbicBe7_21dO8__107->GetZaxis()->SetLabelFont(42);
   hbicBe7_21dO8__107->GetZaxis()->SetLabelSize(0.035);
   hbicBe7_21dO8__107->GetZaxis()->SetTitleSize(0.035);
   hbicBe7_21dO8__107->GetZaxis()->SetTitleFont(42);
   hbicBe7_21dO8__107->Draw("histCsame");
   
   TH1F *hinclBe7_21dO8__108 = new TH1F("hinclBe7_21dO8__108","INCL",13,9.142857,68.57143);
   hinclBe7_21dO8__108->SetBinContent(0,0.2222651);
   hinclBe7_21dO8__108->SetBinContent(1,0.07346051);
   hinclBe7_21dO8__108->SetBinContent(2,0.08852933);
   hinclBe7_21dO8__108->SetBinContent(3,0.1883603);
   hinclBe7_21dO8__108->SetBinContent(4,0.156339);
   hinclBe7_21dO8__108->SetBinContent(5,0.07911132);
   hinclBe7_21dO8__108->SetBinContent(6,0.05085728);
   hinclBe7_21dO8__108->SetBinContent(7,0.007534412);
   hinclBe7_21dO8__108->SetBinContent(8,0.005650809);
   hinclBe7_21dO8__108->SetBinContent(9,0.001883603);
   hinclBe7_21dO8__108->SetBinContent(10,0.001883603);
   hinclBe7_21dO8__108->SetEntries(465);
   hinclBe7_21dO8__108->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe7_21dO8__108->SetLineColor(ci);
   hinclBe7_21dO8__108->SetLineWidth(2);
   hinclBe7_21dO8__108->GetXaxis()->SetRange(0,14);
   hinclBe7_21dO8__108->GetXaxis()->SetLabelFont(42);
   hinclBe7_21dO8__108->GetXaxis()->SetLabelSize(0.035);
   hinclBe7_21dO8__108->GetXaxis()->SetTitleSize(0.035);
   hinclBe7_21dO8__108->GetXaxis()->SetTitleFont(42);
   hinclBe7_21dO8__108->GetYaxis()->SetLabelFont(42);
   hinclBe7_21dO8__108->GetYaxis()->SetLabelSize(0.035);
   hinclBe7_21dO8__108->GetYaxis()->SetTitleSize(0.035);
   hinclBe7_21dO8__108->GetYaxis()->SetTitleFont(42);
   hinclBe7_21dO8__108->GetZaxis()->SetLabelFont(42);
   hinclBe7_21dO8__108->GetZaxis()->SetLabelSize(0.035);
   hinclBe7_21dO8__108->GetZaxis()->SetTitleSize(0.035);
   hinclBe7_21dO8__108->GetZaxis()->SetTitleFont(42);
   hinclBe7_21dO8__108->Draw("histCsame");
   
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
