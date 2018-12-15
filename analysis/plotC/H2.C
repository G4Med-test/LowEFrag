void H2()
{
//=========Macro generated from canvas: canvasH2/canvasH2
//=========  (Sat Dec 15 20:22:48 2018) by ROOT version6.06/06
   TCanvas *canvasH2 = new TCanvas("canvasH2", "canvasH2",0,0,800,600);
   gStyle->SetOptStat(0);
   canvasH2->Range(0,0,1,1);
   canvasH2->SetFillColor(0);
   canvasH2->SetBorderMode(0);
   canvasH2->SetBorderSize(2);
   canvasH2->SetRightMargin(0.04957356);
   canvasH2->SetTopMargin(0.04957356);
   canvasH2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasH2_1
   TPad *canvasH2_1 = new TPad("canvasH2_1", "canvasH2_1",0,0.5209121,0.5209121,0.9504264);
   canvasH2_1->Draw();
   canvasH2_1->cd();
   canvasH2_1->Range(-45.38487,-3.39794,160.965,3.69897);
   canvasH2_1->SetFillColor(0);
   canvasH2_1->SetBorderMode(0);
   canvasH2_1->SetBorderSize(2);
   canvasH2_1->SetLogy();
   canvasH2_1->SetLeftMargin(0.1827957);
   canvasH2_1->SetRightMargin(0);
   canvasH2_1->SetTopMargin(0);
   canvasH2_1->SetBottomMargin(0);
   canvasH2_1->SetFrameBorderMode(0);
   canvasH2_1->SetFrameBorderMode(0);
   
   TH1F *h1H2_11dO4__13 = new TH1F("h1H2_11dO4__13","^{12}C + ^{nat}C #rightarrow ^{2}H at 62 MeV/n",1,-7.665,160.965);
   h1H2_11dO4__13->SetMinimum(0.0004);
   h1H2_11dO4__13->SetMaximum(5000);
   h1H2_11dO4__13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1H2_11dO4__13->SetLineColor(ci);
   h1H2_11dO4__13->GetXaxis()->SetRange(1,1);
   h1H2_11dO4__13->GetXaxis()->SetLabelFont(42);
   h1H2_11dO4__13->GetXaxis()->SetLabelSize(0.07);
   h1H2_11dO4__13->GetXaxis()->SetTitleSize(0.07);
   h1H2_11dO4__13->GetXaxis()->SetTitleFont(42);
   h1H2_11dO4__13->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1H2_11dO4__13->GetYaxis()->SetLabelFont(42);
   h1H2_11dO4__13->GetYaxis()->SetLabelSize(0.08);
   h1H2_11dO4__13->GetYaxis()->SetTitleSize(0.07);
   h1H2_11dO4__13->GetYaxis()->SetTitleOffset(1.1);
   h1H2_11dO4__13->GetYaxis()->SetTitleFont(42);
   h1H2_11dO4__13->GetZaxis()->SetLabelFont(42);
   h1H2_11dO4__13->GetZaxis()->SetLabelSize(0.035);
   h1H2_11dO4__13->GetZaxis()->SetTitleSize(0.035);
   h1H2_11dO4__13->GetZaxis()->SetTitleFont(42);
   h1H2_11dO4__13->Draw("");
   
   TPaveText *pt = new TPaveText(0.2838,0.9315033,0.7162,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{2}H at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicH2_11dO4__14 = new TH1F("hbicH2_11dO4__14","BIC",19,7,140);
   hbicH2_11dO4__14->SetBinContent(0,2.089311);
   hbicH2_11dO4__14->SetBinContent(1,1.934461);
   hbicH2_11dO4__14->SetBinContent(2,1.17177);
   hbicH2_11dO4__14->SetBinContent(3,1.527693);
   hbicH2_11dO4__14->SetBinContent(4,3.018407);
   hbicH2_11dO4__14->SetBinContent(5,5.805695);
   hbicH2_11dO4__14->SetBinContent(6,9.605282);
   hbicH2_11dO4__14->SetBinContent(7,13.58052);
   hbicH2_11dO4__14->SetBinContent(8,14.27156);
   hbicH2_11dO4__14->SetBinContent(9,11.861);
   hbicH2_11dO4__14->SetBinContent(10,8.227817);
   hbicH2_11dO4__14->SetBinContent(11,5.223277);
   hbicH2_11dO4__14->SetBinContent(12,3.029963);
   hbicH2_11dO4__14->SetBinContent(13,1.707965);
   hbicH2_11dO4__14->SetBinContent(14,1.000743);
   hbicH2_11dO4__14->SetBinContent(15,0.6332645);
   hbicH2_11dO4__14->SetBinContent(16,0.4345027);
   hbicH2_11dO4__14->SetBinContent(17,0.2588527);
   hbicH2_11dO4__14->SetBinContent(18,0.1548494);
   hbicH2_11dO4__14->SetBinContent(19,0.1617829);
   hbicH2_11dO4__14->SetBinContent(20,0.300454);
   hbicH2_11dO4__14->SetEntries(37210);
   hbicH2_11dO4__14->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH2_11dO4__14->SetLineColor(ci);
   hbicH2_11dO4__14->SetLineWidth(2);
   hbicH2_11dO4__14->GetXaxis()->SetRange(0,20);
   hbicH2_11dO4__14->GetXaxis()->SetLabelFont(42);
   hbicH2_11dO4__14->GetXaxis()->SetLabelSize(0.035);
   hbicH2_11dO4__14->GetXaxis()->SetTitleSize(0.035);
   hbicH2_11dO4__14->GetXaxis()->SetTitleFont(42);
   hbicH2_11dO4__14->GetYaxis()->SetLabelFont(42);
   hbicH2_11dO4__14->GetYaxis()->SetLabelSize(0.035);
   hbicH2_11dO4__14->GetYaxis()->SetTitleSize(0.035);
   hbicH2_11dO4__14->GetYaxis()->SetTitleFont(42);
   hbicH2_11dO4__14->GetZaxis()->SetLabelFont(42);
   hbicH2_11dO4__14->GetZaxis()->SetLabelSize(0.035);
   hbicH2_11dO4__14->GetZaxis()->SetTitleSize(0.035);
   hbicH2_11dO4__14->GetZaxis()->SetTitleFont(42);
   hbicH2_11dO4__14->Draw("histCsame");
   
   TH1F *hinclH2_11dO4__15 = new TH1F("hinclH2_11dO4__15","INCL",19,7,140);
   hinclH2_11dO4__15->SetBinContent(0,8.02212);
   hinclH2_11dO4__15->SetBinContent(1,14.67371);
   hinclH2_11dO4__15->SetBinContent(2,21.42237);
   hinclH2_11dO4__15->SetBinContent(3,29.08857);
   hinclH2_11dO4__15->SetBinContent(4,34.60767);
   hinclH2_11dO4__15->SetBinContent(5,34.89426);
   hinclH2_11dO4__15->SetBinContent(6,29.55774);
   hinclH2_11dO4__15->SetBinContent(7,22.38382);
   hinclH2_11dO4__15->SetBinContent(8,15.1267);
   hinclH2_11dO4__15->SetBinContent(9,9.512835);
   hinclH2_11dO4__15->SetBinContent(10,5.391993);
   hinclH2_11dO4__15->SetBinContent(11,2.789599);
   hinclH2_11dO4__15->SetBinContent(12,1.504581);
   hinclH2_11dO4__15->SetBinContent(13,0.765002);
   hinclH2_11dO4__15->SetBinContent(14,0.3166323);
   hinclH2_11dO4__15->SetBinContent(15,0.1733388);
   hinclH2_11dO4__15->SetBinContent(16,0.0739579);
   hinclH2_11dO4__15->SetBinContent(17,0.02542303);
   hinclH2_11dO4__15->SetBinContent(18,0.01386711);
   hinclH2_11dO4__15->SetBinContent(19,0.004622369);
   hinclH2_11dO4__15->SetBinContent(20,0.004622369);
   hinclH2_11dO4__15->SetEntries(99669);
   hinclH2_11dO4__15->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_11dO4__15->SetLineColor(ci);
   hinclH2_11dO4__15->SetLineWidth(2);
   hinclH2_11dO4__15->GetXaxis()->SetRange(0,20);
   hinclH2_11dO4__15->GetXaxis()->SetLabelFont(42);
   hinclH2_11dO4__15->GetXaxis()->SetLabelSize(0.035);
   hinclH2_11dO4__15->GetXaxis()->SetTitleSize(0.035);
   hinclH2_11dO4__15->GetXaxis()->SetTitleFont(42);
   hinclH2_11dO4__15->GetYaxis()->SetLabelFont(42);
   hinclH2_11dO4__15->GetYaxis()->SetLabelSize(0.035);
   hinclH2_11dO4__15->GetYaxis()->SetTitleSize(0.035);
   hinclH2_11dO4__15->GetYaxis()->SetTitleFont(42);
   hinclH2_11dO4__15->GetZaxis()->SetLabelFont(42);
   hinclH2_11dO4__15->GetZaxis()->SetLabelSize(0.035);
   hinclH2_11dO4__15->GetZaxis()->SetTitleSize(0.035);
   hinclH2_11dO4__15->GetZaxis()->SetTitleFont(42);
   hinclH2_11dO4__15->Draw("histCsame");
   
   Double_t Graph0_fx1005[19] = {
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5,
   129.5,
   136.5};
   Double_t Graph0_fy1005[19] = {
   1.3,
   2.5,
   2.5,
   2.9,
   4.2,
   5.3,
   5.2,
   5.1,
   3.9,
   3.1,
   2.5,
   1.9,
   1.5,
   1.2,
   0.8,
   0.7,
   0.45,
   0.32,
   0.13};
   Double_t Graph0_fex1005[19] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph0_fey1005[19] = {
   0.1,
   0.2,
   0.2,
   0.3,
   0.4,
   0.5,
   0.5,
   0.5,
   0.4,
   0.4,
   0.3,
   0.2,
   0.2,
   0.2,
   0.1,
   0.1,
   0.09,
   0.07,
   0.04};
   TGraphErrors *gre = new TGraphErrors(19,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{2}H at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","^{12}C + ^{nat}C #rightarrow ^{2}H at 62 MeV/n",100,0,153.3);
   Graph_Graph1005->SetMinimum(0.081);
   Graph_Graph1005->SetMaximum(6.371);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
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
   canvasH2_1->Modified();
   canvasH2->cd();
  
// ------------>Primitives in pad: canvasH2_3
   TPad *canvasH2_3 = new TPad("canvasH2_3", "canvasH2_3",0,0,0.5209121,0.5209121);
   canvasH2_3->Draw();
   canvasH2_3->cd();
   canvasH2_3->Range(-45.38487,-4.985407,160.965,3.69897);
   canvasH2_3->SetFillColor(0);
   canvasH2_3->SetBorderMode(0);
   canvasH2_3->SetBorderSize(2);
   canvasH2_3->SetLogy();
   canvasH2_3->SetLeftMargin(0.1827957);
   canvasH2_3->SetRightMargin(0);
   canvasH2_3->SetTopMargin(0);
   canvasH2_3->SetBottomMargin(0.1827957);
   canvasH2_3->SetFrameBorderMode(0);
   canvasH2_3->SetFrameBorderMode(0);
   
   TH1F *h1H2_17dO2__16 = new TH1F("h1H2_17dO2__16","",1,-7.665,160.965);
   h1H2_17dO2__16->SetMinimum(0.0004);
   h1H2_17dO2__16->SetMaximum(5000);
   h1H2_17dO2__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H2_17dO2__16->SetLineColor(ci);
   h1H2_17dO2__16->GetXaxis()->SetRange(1,1);
   h1H2_17dO2__16->GetXaxis()->SetLabelFont(42);
   h1H2_17dO2__16->GetXaxis()->SetLabelSize(0.07);
   h1H2_17dO2__16->GetXaxis()->SetTitleSize(0.07);
   h1H2_17dO2__16->GetXaxis()->SetTitleFont(42);
   h1H2_17dO2__16->GetYaxis()->SetLabelFont(42);
   h1H2_17dO2__16->GetYaxis()->SetLabelSize(0.07);
   h1H2_17dO2__16->GetYaxis()->SetTitleSize(0.07);
   h1H2_17dO2__16->GetYaxis()->SetTitleOffset(1.1);
   h1H2_17dO2__16->GetYaxis()->SetTitleFont(42);
   h1H2_17dO2__16->GetZaxis()->SetLabelFont(42);
   h1H2_17dO2__16->GetZaxis()->SetLabelSize(0.035);
   h1H2_17dO2__16->GetZaxis()->SetTitleSize(0.035);
   h1H2_17dO2__16->GetZaxis()->SetTitleFont(42);
   h1H2_17dO2__16->Draw("");
   
   TH1F *hbicH2_17dO2__17 = new TH1F("hbicH2_17dO2__17","BIC",18,0,126);
   hbicH2_17dO2__17->SetBinContent(1,2.011386);
   hbicH2_17dO2__17->SetBinContent(2,1.833729);
   hbicH2_17dO2__17->SetBinContent(3,1.18644);
   hbicH2_17dO2__17->SetBinContent(4,1.297668);
   hbicH2_17dO2__17->SetBinContent(5,2.400686);
   hbicH2_17dO2__17->SetBinContent(6,4.269947);
   hbicH2_17dO2__17->SetBinContent(7,6.828207);
   hbicH2_17dO2__17->SetBinContent(8,8.371505);
   hbicH2_17dO2__17->SetBinContent(9,8.275724);
   hbicH2_17dO2__17->SetBinContent(10,6.664454);
   hbicH2_17dO2__17->SetBinContent(11,4.816821);
   hbicH2_17dO2__17->SetBinContent(12,3.30133);
   hbicH2_17dO2__17->SetBinContent(13,2.124159);
   hbicH2_17dO2__17->SetBinContent(14,1.23124);
   hbicH2_17dO2__17->SetBinContent(15,0.7569731);
   hbicH2_17dO2__17->SetBinContent(16,0.4958946);
   hbicH2_17dO2__17->SetBinContent(17,0.3228722);
   hbicH2_17dO2__17->SetBinContent(18,0.2240023);
   hbicH2_17dO2__17->SetBinContent(19,0.5731368);
   hbicH2_17dO2__17->SetEntries(36888);
   hbicH2_17dO2__17->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH2_17dO2__17->SetLineColor(ci);
   hbicH2_17dO2__17->SetLineWidth(2);
   hbicH2_17dO2__17->GetXaxis()->SetRange(0,19);
   hbicH2_17dO2__17->GetXaxis()->SetLabelFont(42);
   hbicH2_17dO2__17->GetXaxis()->SetLabelSize(0.035);
   hbicH2_17dO2__17->GetXaxis()->SetTitleSize(0.035);
   hbicH2_17dO2__17->GetXaxis()->SetTitleFont(42);
   hbicH2_17dO2__17->GetYaxis()->SetLabelFont(42);
   hbicH2_17dO2__17->GetYaxis()->SetLabelSize(0.035);
   hbicH2_17dO2__17->GetYaxis()->SetTitleSize(0.035);
   hbicH2_17dO2__17->GetYaxis()->SetTitleFont(42);
   hbicH2_17dO2__17->GetZaxis()->SetLabelFont(42);
   hbicH2_17dO2__17->GetZaxis()->SetLabelSize(0.035);
   hbicH2_17dO2__17->GetZaxis()->SetTitleSize(0.035);
   hbicH2_17dO2__17->GetZaxis()->SetTitleFont(42);
   hbicH2_17dO2__17->Draw("histCsame");
   
   TH1F *hinclH2_17dO2__18 = new TH1F("hinclH2_17dO2__18","INCL",18,0,126);
   hinclH2_17dO2__18->SetBinContent(1,7.642339);
   hinclH2_17dO2__18->SetBinContent(2,14.2311);
   hinclH2_17dO2__18->SetBinContent(3,20.26525);
   hinclH2_17dO2__18->SetBinContent(4,25.66448);
   hinclH2_17dO2__18->SetBinContent(5,27.68204);
   hinclH2_17dO2__18->SetBinContent(6,24.83181);
   hinclH2_17dO2__18->SetBinContent(7,19.58707);
   hinclH2_17dO2__18->SetBinContent(8,13.83716);
   hinclH2_17dO2__18->SetBinContent(9,8.930738);
   hinclH2_17dO2__18->SetBinContent(10,5.474924);
   hinclH2_17dO2__18->SetBinContent(11,2.853325);
   hinclH2_17dO2__18->SetBinContent(12,1.537119);
   hinclH2_17dO2__18->SetBinContent(13,0.7832355);
   hinclH2_17dO2__18->SetBinContent(14,0.3753969);
   hinclH2_17dO2__18->SetBinContent(15,0.186926);
   hinclH2_17dO2__18->SetBinContent(16,0.09269059);
   hinclH2_17dO2__18->SetBinContent(17,0.04016592);
   hinclH2_17dO2__18->SetBinContent(18,0.02008296);
   hinclH2_17dO2__18->SetBinContent(19,0.01390359);
   hinclH2_17dO2__18->SetEntries(112665);
   hinclH2_17dO2__18->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_17dO2__18->SetLineColor(ci);
   hinclH2_17dO2__18->SetLineWidth(2);
   hinclH2_17dO2__18->GetXaxis()->SetRange(0,19);
   hinclH2_17dO2__18->GetXaxis()->SetLabelFont(42);
   hinclH2_17dO2__18->GetXaxis()->SetLabelSize(0.035);
   hinclH2_17dO2__18->GetXaxis()->SetTitleSize(0.035);
   hinclH2_17dO2__18->GetXaxis()->SetTitleFont(42);
   hinclH2_17dO2__18->GetYaxis()->SetLabelFont(42);
   hinclH2_17dO2__18->GetYaxis()->SetLabelSize(0.035);
   hinclH2_17dO2__18->GetYaxis()->SetTitleSize(0.035);
   hinclH2_17dO2__18->GetYaxis()->SetTitleFont(42);
   hinclH2_17dO2__18->GetZaxis()->SetLabelFont(42);
   hinclH2_17dO2__18->GetZaxis()->SetLabelSize(0.035);
   hinclH2_17dO2__18->GetZaxis()->SetTitleSize(0.035);
   hinclH2_17dO2__18->GetZaxis()->SetTitleFont(42);
   hinclH2_17dO2__18->Draw("histCsame");
   
   Double_t Graph0_fx1006[18] = {
   3.5,
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5};
   Double_t Graph0_fy1006[18] = {
   0.42,
   1.8,
   2.4,
   2.6,
   3,
   3.3,
   3,
   2.8,
   2.6,
   2.2,
   1.3,
   0.9,
   0.6,
   0.31,
   0.26,
   0.11,
   0.04,
   0.03};
   Double_t Graph0_fex1006[18] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph0_fey1006[18] = {
   0.06,
   0.2,
   0.3,
   0.3,
   0.4,
   0.4,
   0.4,
   0.3,
   0.3,
   0.3,
   0.2,
   0.1,
   0.1,
   0.06,
   0.06,
   0.04,
   0.02,
   0.02};
   gre = new TGraphErrors(18,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,0,138.6);
   Graph_Graph1006->SetMinimum(0.009);
   Graph_Graph1006->SetMaximum(4.069);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
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
   entry=leg->AddEntry("hbicH2_17.2","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hinclH2_17.2","INCL","l");

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
   canvasH2_3->Modified();
   canvasH2->cd();
  
// ------------>Primitives in pad: canvasH2_2
   TPad *canvasH2_2 = new TPad("canvasH2_2", "canvasH2_2",0.5209121,0.5209121,0.9504264,0.9504264);
   canvasH2_2->Draw();
   canvasH2_2->cd();
   canvasH2_2->Range(-7.665,-3.39794,160.965,3.69897);
   canvasH2_2->SetFillColor(0);
   canvasH2_2->SetBorderMode(0);
   canvasH2_2->SetBorderSize(2);
   canvasH2_2->SetLogy();
   canvasH2_2->SetLeftMargin(0);
   canvasH2_2->SetRightMargin(0);
   canvasH2_2->SetTopMargin(0);
   canvasH2_2->SetBottomMargin(0);
   canvasH2_2->SetFrameBorderMode(0);
   canvasH2_2->SetFrameBorderMode(0);
   
   TH1F *h1H2_14dO4__19 = new TH1F("h1H2_14dO4__19","",1,-7.665,160.965);
   h1H2_14dO4__19->SetMinimum(0.0004);
   h1H2_14dO4__19->SetMaximum(5000);
   h1H2_14dO4__19->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H2_14dO4__19->SetLineColor(ci);
   h1H2_14dO4__19->GetXaxis()->SetRange(1,1);
   h1H2_14dO4__19->GetXaxis()->SetLabelFont(42);
   h1H2_14dO4__19->GetXaxis()->SetLabelSize(0.07);
   h1H2_14dO4__19->GetXaxis()->SetTitleSize(0.07);
   h1H2_14dO4__19->GetXaxis()->SetTitleFont(42);
   h1H2_14dO4__19->GetYaxis()->SetLabelFont(42);
   h1H2_14dO4__19->GetYaxis()->SetLabelSize(0.07);
   h1H2_14dO4__19->GetYaxis()->SetTitleSize(0.07);
   h1H2_14dO4__19->GetYaxis()->SetTitleOffset(1.1);
   h1H2_14dO4__19->GetYaxis()->SetTitleFont(42);
   h1H2_14dO4__19->GetZaxis()->SetLabelFont(42);
   h1H2_14dO4__19->GetZaxis()->SetLabelSize(0.035);
   h1H2_14dO4__19->GetZaxis()->SetTitleSize(0.035);
   h1H2_14dO4__19->GetZaxis()->SetTitleFont(42);
   h1H2_14dO4__19->Draw("");
   
   TH1F *hbicH2_14dO4__20 = new TH1F("hbicH2_14dO4__20","BIC",18,7,133);
   hbicH2_14dO4__20->SetBinContent(0,1.886513);
   hbicH2_14dO4__20->SetBinContent(1,1.914067);
   hbicH2_14dO4__20->SetBinContent(2,1.258288);
   hbicH2_14dO4__20->SetBinContent(3,1.280331);
   hbicH2_14dO4__20->SetBinContent(4,2.646997);
   hbicH2_14dO4__20->SetBinContent(5,5.009271);
   hbicH2_14dO4__20->SetBinContent(6,7.968544);
   hbicH2_14dO4__20->SetBinContent(7,10.70188);
   hbicH2_14dO4__20->SetBinContent(8,10.81393);
   hbicH2_14dO4__20->SetBinContent(9,9.050488);
   hbicH2_14dO4__20->SetBinContent(10,6.19592);
   hbicH2_14dO4__20->SetBinContent(11,3.99713);
   hbicH2_14dO4__20->SetBinContent(12,2.476163);
   hbicH2_14dO4__20->SetBinContent(13,1.51913);
   hbicH2_14dO4__20->SetBinContent(14,0.8302863);
   hbicH2_14dO4__20->SetBinContent(15,0.5198474);
   hbicH2_14dO4__20->SetBinContent(16,0.4114693);
   hbicH2_14dO4__20->SetBinContent(17,0.2479837);
   hbicH2_14dO4__20->SetBinContent(18,0.1304211);
   hbicH2_14dO4__20->SetBinContent(19,0.4739245);
   hbicH2_14dO4__20->SetEntries(37744);
   hbicH2_14dO4__20->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH2_14dO4__20->SetLineColor(ci);
   hbicH2_14dO4__20->SetLineWidth(2);
   hbicH2_14dO4__20->GetXaxis()->SetRange(0,19);
   hbicH2_14dO4__20->GetXaxis()->SetLabelFont(42);
   hbicH2_14dO4__20->GetXaxis()->SetLabelSize(0.035);
   hbicH2_14dO4__20->GetXaxis()->SetTitleSize(0.035);
   hbicH2_14dO4__20->GetXaxis()->SetTitleFont(42);
   hbicH2_14dO4__20->GetYaxis()->SetLabelFont(42);
   hbicH2_14dO4__20->GetYaxis()->SetLabelSize(0.035);
   hbicH2_14dO4__20->GetYaxis()->SetTitleSize(0.035);
   hbicH2_14dO4__20->GetYaxis()->SetTitleFont(42);
   hbicH2_14dO4__20->GetZaxis()->SetLabelFont(42);
   hbicH2_14dO4__20->GetZaxis()->SetLabelSize(0.035);
   hbicH2_14dO4__20->GetZaxis()->SetTitleSize(0.035);
   hbicH2_14dO4__20->GetZaxis()->SetTitleFont(42);
   hbicH2_14dO4__20->Draw("histCsame");
   
   TH1F *hinclH2_14dO4__21 = new TH1F("hinclH2_14dO4__21","INCL",18,7,133);
   hinclH2_14dO4__21->SetBinContent(0,7.847307);
   hinclH2_14dO4__21->SetBinContent(1,14.41428);
   hinclH2_14dO4__21->SetBinContent(2,21.01983);
   hinclH2_14dO4__21->SetBinContent(3,27.80908);
   hinclH2_14dO4__21->SetBinContent(4,31.12104);
   hinclH2_14dO4__21->SetBinContent(5,29.56884);
   hinclH2_14dO4__21->SetBinContent(6,24.52283);
   hinclH2_14dO4__21->SetBinContent(7,17.81625);
   hinclH2_14dO4__21->SetBinContent(8,11.66626);
   hinclH2_14dO4__21->SetBinContent(9,7.224593);
   hinclH2_14dO4__21->SetBinContent(10,4.050401);
   hinclH2_14dO4__21->SetBinContent(11,2.112454);
   hinclH2_14dO4__21->SetBinContent(12,1.03051);
   hinclH2_14dO4__21->SetBinContent(13,0.5253581);
   hinclH2_14dO4__21->SetBinContent(14,0.2718636);
   hinclH2_14dO4__21->SetBinContent(15,0.09000891);
   hinclH2_14dO4__21->SetBinContent(16,0.07715049);
   hinclH2_14dO4__21->SetBinContent(17,0.022043);
   hinclH2_14dO4__21->SetBinContent(18,0.01285842);
   hinclH2_14dO4__21->SetBinContent(19,0.009184582);
   hinclH2_14dO4__21->SetEntries(109538);
   hinclH2_14dO4__21->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_14dO4__21->SetLineColor(ci);
   hinclH2_14dO4__21->SetLineWidth(2);
   hinclH2_14dO4__21->GetXaxis()->SetRange(0,19);
   hinclH2_14dO4__21->GetXaxis()->SetLabelFont(42);
   hinclH2_14dO4__21->GetXaxis()->SetLabelSize(0.035);
   hinclH2_14dO4__21->GetXaxis()->SetTitleSize(0.035);
   hinclH2_14dO4__21->GetXaxis()->SetTitleFont(42);
   hinclH2_14dO4__21->GetYaxis()->SetLabelFont(42);
   hinclH2_14dO4__21->GetYaxis()->SetLabelSize(0.035);
   hinclH2_14dO4__21->GetYaxis()->SetTitleSize(0.035);
   hinclH2_14dO4__21->GetYaxis()->SetTitleFont(42);
   hinclH2_14dO4__21->GetZaxis()->SetLabelFont(42);
   hinclH2_14dO4__21->GetZaxis()->SetLabelSize(0.035);
   hinclH2_14dO4__21->GetZaxis()->SetTitleSize(0.035);
   hinclH2_14dO4__21->GetZaxis()->SetTitleFont(42);
   hinclH2_14dO4__21->Draw("histCsame");
   
   Double_t Graph0_fx1007[18] = {
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5,
   129.5};
   Double_t Graph0_fy1007[18] = {
   1.4,
   2.2,
   2.6,
   3.1,
   3.6,
   4.3,
   4.6,
   4.1,
   3.5,
   2.6,
   1.8,
   1.2,
   0.9,
   0.6,
   0.39,
   0.25,
   0.07,
   0.05};
   Double_t Graph0_fex1007[18] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph0_fey1007[18] = {
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.4,
   0.4,
   0.4,
   0.3,
   0.3,
   0.2,
   0.2,
   0.1,
   0.1,
   0.07,
   0.06,
   0.03,
   0.03};
   gre = new TGraphErrors(18,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,0,145.6);
   Graph_Graph1007->SetMinimum(0.018);
   Graph_Graph1007->SetMaximum(5.498);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
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
   canvasH2_2->Modified();
   canvasH2->cd();
  
// ------------>Primitives in pad: canvasH2_4
   TPad *canvasH2_4 = new TPad("canvasH2_4", "canvasH2_4",0.5209121,0,0.9504264,0.5209121);
   canvasH2_4->Draw();
   canvasH2_4->cd();
   canvasH2_4->Range(-7.665,-4.985407,160.965,3.69897);
   canvasH2_4->SetFillColor(0);
   canvasH2_4->SetBorderMode(0);
   canvasH2_4->SetBorderSize(2);
   canvasH2_4->SetLogy();
   canvasH2_4->SetLeftMargin(0);
   canvasH2_4->SetRightMargin(0);
   canvasH2_4->SetTopMargin(0);
   canvasH2_4->SetBottomMargin(0.1827957);
   canvasH2_4->SetFrameBorderMode(0);
   canvasH2_4->SetFrameBorderMode(0);
   
   TH1F *h1H2_19dO4__22 = new TH1F("h1H2_19dO4__22","",1,-7.665,160.965);
   h1H2_19dO4__22->SetMinimum(0.0004);
   h1H2_19dO4__22->SetMaximum(5000);
   h1H2_19dO4__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H2_19dO4__22->SetLineColor(ci);
   h1H2_19dO4__22->GetXaxis()->SetTitle("E  [MeV/n]");
   h1H2_19dO4__22->GetXaxis()->SetRange(1,1);
   h1H2_19dO4__22->GetXaxis()->SetLabelFont(42);
   h1H2_19dO4__22->GetXaxis()->SetLabelSize(0.07);
   h1H2_19dO4__22->GetXaxis()->SetTitleSize(0.07);
   h1H2_19dO4__22->GetXaxis()->SetTitleFont(42);
   h1H2_19dO4__22->GetYaxis()->SetLabelFont(42);
   h1H2_19dO4__22->GetYaxis()->SetLabelSize(0.07);
   h1H2_19dO4__22->GetYaxis()->SetTitleSize(0.07);
   h1H2_19dO4__22->GetYaxis()->SetTitleOffset(1.1);
   h1H2_19dO4__22->GetYaxis()->SetTitleFont(42);
   h1H2_19dO4__22->GetZaxis()->SetLabelFont(42);
   h1H2_19dO4__22->GetZaxis()->SetLabelSize(0.035);
   h1H2_19dO4__22->GetZaxis()->SetTitleSize(0.035);
   h1H2_19dO4__22->GetZaxis()->SetTitleFont(42);
   h1H2_19dO4__22->Draw("");
   
   TH1F *hbicH2_19dO4__23 = new TH1F("hbicH2_19dO4__23","BIC",18,0,126);
   hbicH2_19dO4__23->SetBinContent(1,1.976312);
   hbicH2_19dO4__23->SetBinContent(2,1.99144);
   hbicH2_19dO4__23->SetBinContent(3,1.108495);
   hbicH2_19dO4__23->SetBinContent(4,1.155255);
   hbicH2_19dO4__23->SetBinContent(5,2.115218);
   hbicH2_19dO4__23->SetBinContent(6,3.717447);
   hbicH2_19dO4__23->SetBinContent(7,5.67863);
   hbicH2_19dO4__23->SetBinContent(8,6.732113);
   hbicH2_19dO4__23->SetBinContent(9,6.58358);
   hbicH2_19dO4__23->SetBinContent(10,5.373313);
   hbicH2_19dO4__23->SetBinContent(11,4.010386);
   hbicH2_19dO4__23->SetBinContent(12,2.877136);
   hbicH2_19dO4__23->SetBinContent(13,1.728757);
   hbicH2_19dO4__23->SetBinContent(14,1.087865);
   hbicH2_19dO4__23->SetBinContent(15,0.6670225);
   hbicH2_19dO4__23->SetBinContent(16,0.4112159);
   hbicH2_19dO4__23->SetBinContent(17,0.2681843);
   hbicH2_19dO4__23->SetBinContent(18,0.1980438);
   hbicH2_19dO4__23->SetBinContent(19,0.5102378);
   hbicH2_19dO4__23->SetEntries(35040);
   hbicH2_19dO4__23->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH2_19dO4__23->SetLineColor(ci);
   hbicH2_19dO4__23->SetLineWidth(2);
   hbicH2_19dO4__23->GetXaxis()->SetRange(0,19);
   hbicH2_19dO4__23->GetXaxis()->SetLabelFont(42);
   hbicH2_19dO4__23->GetXaxis()->SetLabelSize(0.035);
   hbicH2_19dO4__23->GetXaxis()->SetTitleSize(0.035);
   hbicH2_19dO4__23->GetXaxis()->SetTitleFont(42);
   hbicH2_19dO4__23->GetYaxis()->SetLabelFont(42);
   hbicH2_19dO4__23->GetYaxis()->SetLabelSize(0.035);
   hbicH2_19dO4__23->GetYaxis()->SetTitleSize(0.035);
   hbicH2_19dO4__23->GetYaxis()->SetTitleFont(42);
   hbicH2_19dO4__23->GetZaxis()->SetLabelFont(42);
   hbicH2_19dO4__23->GetZaxis()->SetLabelSize(0.035);
   hbicH2_19dO4__23->GetZaxis()->SetTitleSize(0.035);
   hbicH2_19dO4__23->GetZaxis()->SetTitleFont(42);
   hbicH2_19dO4__23->Draw("histCsame");
   
   TH1F *hinclH2_19dO4__24 = new TH1F("hinclH2_19dO4__24","INCL",18,0,126);
   hinclH2_19dO4__24->SetBinContent(1,7.531165);
   hinclH2_19dO4__24->SetBinContent(2,13.59626);
   hinclH2_19dO4__24->SetBinContent(3,19.55957);
   hinclH2_19dO4__24->SetBinContent(4,24.25761);
   hinclH2_19dO4__24->SetBinContent(5,24.44053);
   hinclH2_19dO4__24->SetBinContent(6,21.32409);
   hinclH2_19dO4__24->SetBinContent(7,16.65493);
   hinclH2_19dO4__24->SetBinContent(8,11.15509);
   hinclH2_19dO4__24->SetBinContent(9,7.026428);
   hinclH2_19dO4__24->SetBinContent(10,4.178174);
   hinclH2_19dO4__24->SetBinContent(11,2.144099);
   hinclH2_19dO4__24->SetBinContent(12,1.152505);
   hinclH2_19dO4__24->SetBinContent(13,0.6023832);
   hinclH2_19dO4__24->SetBinContent(14,0.2791867);
   hinclH2_19dO4__24->SetBinContent(15,0.140281);
   hinclH2_19dO4__24->SetBinContent(16,0.05226155);
   hinclH2_19dO4__24->SetBinContent(17,0.02062956);
   hinclH2_19dO4__24->SetBinContent(18,0.009627128);
   hinclH2_19dO4__24->SetBinContent(19,0.01237774);
   hinclH2_19dO4__24->SetEntries(112075);
   hinclH2_19dO4__24->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_19dO4__24->SetLineColor(ci);
   hinclH2_19dO4__24->SetLineWidth(2);
   hinclH2_19dO4__24->GetXaxis()->SetRange(0,19);
   hinclH2_19dO4__24->GetXaxis()->SetLabelFont(42);
   hinclH2_19dO4__24->GetXaxis()->SetLabelSize(0.035);
   hinclH2_19dO4__24->GetXaxis()->SetTitleSize(0.035);
   hinclH2_19dO4__24->GetXaxis()->SetTitleFont(42);
   hinclH2_19dO4__24->GetYaxis()->SetLabelFont(42);
   hinclH2_19dO4__24->GetYaxis()->SetLabelSize(0.035);
   hinclH2_19dO4__24->GetYaxis()->SetTitleSize(0.035);
   hinclH2_19dO4__24->GetYaxis()->SetTitleFont(42);
   hinclH2_19dO4__24->GetZaxis()->SetLabelFont(42);
   hinclH2_19dO4__24->GetZaxis()->SetLabelSize(0.035);
   hinclH2_19dO4__24->GetZaxis()->SetTitleSize(0.035);
   hinclH2_19dO4__24->GetZaxis()->SetTitleFont(42);
   hinclH2_19dO4__24->Draw("histCsame");
   
   Double_t Graph0_fx1008[18] = {
   3.5,
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5};
   Double_t Graph0_fy1008[18] = {
   0.57,
   2.1,
   2.2,
   2.3,
   2.7,
   2.6,
   2.5,
   2.1,
   1.7,
   1.2,
   0.9,
   0.6,
   0.46,
   0.24,
   0.08,
   0.04,
   0.021,
   0.02};
   Double_t Graph0_fex1008[18] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph0_fey1008[18] = {
   0.08,
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.3,
   0.3,
   0.2,
   0.2,
   0.1,
   0.1,
   0.09,
   0.06,
   0.03,
   0.02,
   0.017,
   0.017};
   gre = new TGraphErrors(18,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,0,138.6);
   Graph_Graph1008->SetMinimum(0.0027);
   Graph_Graph1008->SetMaximum(3.2997);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
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
   canvasH2_4->Modified();
   canvasH2->cd();
   canvasH2->Modified();
   canvasH2->cd();
   canvasH2->SetSelected(canvasH2);
}
