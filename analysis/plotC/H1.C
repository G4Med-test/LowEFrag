void H1()
{
//=========Macro generated from canvas: canvasH1/canvasH1
//=========  (Tue Dec 18 00:02:12 2018) by ROOT version6.06/06
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
   canvasH1_1->Range(-58.61842,-3.39794,207.9,3.69897);
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
   h1H1_11dO4__1->SetMaximum(5000);
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
   
   TH1F *hbicH1_11dO4__2 = new TH1F("hbicH1_11dO4__2","BIC",18,0,180);
   hbicH1_11dO4__2->SetBinContent(1,24.58938);
   hbicH1_11dO4__2->SetBinContent(2,38.54963);
   hbicH1_11dO4__2->SetBinContent(3,23.77076);
   hbicH1_11dO4__2->SetBinContent(4,15.85149);
   hbicH1_11dO4__2->SetBinContent(5,14.09776);
   hbicH1_11dO4__2->SetBinContent(6,15.23348);
   hbicH1_11dO4__2->SetBinContent(7,13.83567);
   hbicH1_11dO4__2->SetBinContent(8,11.40408);
   hbicH1_11dO4__2->SetBinContent(9,7.632917);
   hbicH1_11dO4__2->SetBinContent(10,5.003945);
   hbicH1_11dO4__2->SetBinContent(11,3.093289);
   hbicH1_11dO4__2->SetBinContent(12,1.782848);
   hbicH1_11dO4__2->SetBinContent(13,0.9901114);
   hbicH1_11dO4__2->SetBinContent(14,0.5662402);
   hbicH1_11dO4__2->SetBinContent(15,0.4044573);
   hbicH1_11dO4__2->SetBinContent(16,0.236203);
   hbicH1_11dO4__2->SetBinContent(17,0.1763434);
   hbicH1_11dO4__2->SetBinContent(18,0.1261907);
   hbicH1_11dO4__2->SetBinContent(19,0.4028394);
   hbicH1_11dO4__2->SetEntries(109868);
   hbicH1_11dO4__2->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH1_11dO4__2->SetLineColor(ci);
   hbicH1_11dO4__2->SetLineWidth(2);
   hbicH1_11dO4__2->GetXaxis()->SetRange(0,19);
   hbicH1_11dO4__2->GetXaxis()->SetLabelFont(42);
   hbicH1_11dO4__2->GetXaxis()->SetLabelSize(0.035);
   hbicH1_11dO4__2->GetXaxis()->SetTitleSize(0.035);
   hbicH1_11dO4__2->GetXaxis()->SetTitleFont(42);
   hbicH1_11dO4__2->GetYaxis()->SetLabelFont(42);
   hbicH1_11dO4__2->GetYaxis()->SetLabelSize(0.035);
   hbicH1_11dO4__2->GetYaxis()->SetTitleSize(0.035);
   hbicH1_11dO4__2->GetYaxis()->SetTitleFont(42);
   hbicH1_11dO4__2->GetZaxis()->SetLabelFont(42);
   hbicH1_11dO4__2->GetZaxis()->SetLabelSize(0.035);
   hbicH1_11dO4__2->GetZaxis()->SetTitleSize(0.035);
   hbicH1_11dO4__2->GetZaxis()->SetTitleFont(42);
   hbicH1_11dO4__2->Draw("histCsame");
   
   TH1F *hqmdH1_11dO4__3 = new TH1F("hqmdH1_11dO4__3","QMD",18,0,180);
   hqmdH1_11dO4__3->SetBinContent(1,24.58938);
   hqmdH1_11dO4__3->SetBinContent(2,38.54963);
   hqmdH1_11dO4__3->SetBinContent(3,23.77076);
   hqmdH1_11dO4__3->SetBinContent(4,15.85149);
   hqmdH1_11dO4__3->SetBinContent(5,14.09776);
   hqmdH1_11dO4__3->SetBinContent(6,15.23348);
   hqmdH1_11dO4__3->SetBinContent(7,13.83567);
   hqmdH1_11dO4__3->SetBinContent(8,11.40408);
   hqmdH1_11dO4__3->SetBinContent(9,7.632917);
   hqmdH1_11dO4__3->SetBinContent(10,5.003945);
   hqmdH1_11dO4__3->SetBinContent(11,3.093289);
   hqmdH1_11dO4__3->SetBinContent(12,1.782848);
   hqmdH1_11dO4__3->SetBinContent(13,0.9901114);
   hqmdH1_11dO4__3->SetBinContent(14,0.5662402);
   hqmdH1_11dO4__3->SetBinContent(15,0.4044573);
   hqmdH1_11dO4__3->SetBinContent(16,0.236203);
   hqmdH1_11dO4__3->SetBinContent(17,0.1763434);
   hqmdH1_11dO4__3->SetBinContent(18,0.1261907);
   hqmdH1_11dO4__3->SetBinContent(19,0.4028394);
   hqmdH1_11dO4__3->SetEntries(109868);
   hqmdH1_11dO4__3->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hqmdH1_11dO4__3->SetLineColor(ci);
   hqmdH1_11dO4__3->SetLineWidth(2);
   hqmdH1_11dO4__3->GetXaxis()->SetRange(0,19);
   hqmdH1_11dO4__3->GetXaxis()->SetLabelFont(42);
   hqmdH1_11dO4__3->GetXaxis()->SetLabelSize(0.035);
   hqmdH1_11dO4__3->GetXaxis()->SetTitleSize(0.035);
   hqmdH1_11dO4__3->GetXaxis()->SetTitleFont(42);
   hqmdH1_11dO4__3->GetYaxis()->SetLabelFont(42);
   hqmdH1_11dO4__3->GetYaxis()->SetLabelSize(0.035);
   hqmdH1_11dO4__3->GetYaxis()->SetTitleSize(0.035);
   hqmdH1_11dO4__3->GetYaxis()->SetTitleFont(42);
   hqmdH1_11dO4__3->GetZaxis()->SetLabelFont(42);
   hqmdH1_11dO4__3->GetZaxis()->SetLabelSize(0.035);
   hqmdH1_11dO4__3->GetZaxis()->SetTitleSize(0.035);
   hqmdH1_11dO4__3->GetZaxis()->SetTitleFont(42);
   hqmdH1_11dO4__3->Draw("histCsame");
   
   TH1F *hinclH1_11dO4__4 = new TH1F("hinclH1_11dO4__4","INCL",18,0,180);
   hinclH1_11dO4__4->SetBinContent(1,6.472934);
   hinclH1_11dO4__4->SetBinContent(2,12.50582);
   hinclH1_11dO4__4->SetBinContent(3,19.32011);
   hinclH1_11dO4__4->SetBinContent(4,25.93218);
   hinclH1_11dO4__4->SetBinContent(5,27.61958);
   hinclH1_11dO4__4->SetBinContent(6,24.2367);
   hinclH1_11dO4__4->SetBinContent(7,17.61007);
   hinclH1_11dO4__4->SetBinContent(8,11.57395);
   hinclH1_11dO4__4->SetBinContent(9,7.128155);
   hinclH1_11dO4__4->SetBinContent(10,3.992802);
   hinclH1_11dO4__4->SetBinContent(11,2.266578);
   hinclH1_11dO4__4->SetBinContent(12,1.231168);
   hinclH1_11dO4__4->SetBinContent(13,0.7183161);
   hinclH1_11dO4__4->SetBinContent(14,0.388279);
   hinclH1_11dO4__4->SetBinContent(15,0.2329674);
   hinclH1_11dO4__4->SetBinContent(16,0.1181015);
   hinclH1_11dO4__4->SetBinContent(17,0.06309533);
   hinclH1_11dO4__4->SetBinContent(18,0.03235658);
   hinclH1_11dO4__4->SetBinContent(19,0.03397441);
   hinclH1_11dO4__4->SetEntries(99811);
   hinclH1_11dO4__4->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_11dO4__4->SetLineColor(ci);
   hinclH1_11dO4__4->SetLineWidth(2);
   hinclH1_11dO4__4->GetXaxis()->SetRange(0,19);
   hinclH1_11dO4__4->GetXaxis()->SetLabelFont(42);
   hinclH1_11dO4__4->GetXaxis()->SetLabelSize(0.035);
   hinclH1_11dO4__4->GetXaxis()->SetTitleSize(0.035);
   hinclH1_11dO4__4->GetXaxis()->SetTitleFont(42);
   hinclH1_11dO4__4->GetYaxis()->SetLabelFont(42);
   hinclH1_11dO4__4->GetYaxis()->SetLabelSize(0.035);
   hinclH1_11dO4__4->GetYaxis()->SetTitleSize(0.035);
   hinclH1_11dO4__4->GetYaxis()->SetTitleFont(42);
   hinclH1_11dO4__4->GetZaxis()->SetLabelFont(42);
   hinclH1_11dO4__4->GetZaxis()->SetLabelSize(0.035);
   hinclH1_11dO4__4->GetZaxis()->SetTitleSize(0.035);
   hinclH1_11dO4__4->GetZaxis()->SetTitleFont(42);
   hinclH1_11dO4__4->Draw("histCsame");
   
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
   canvasH1_3->Range(-58.61842,-4.985407,207.9,3.69897);
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
   
   TH1F *h1H1_17dO2__5 = new TH1F("h1H1_17dO2__5","",1,-9.9,207.9);
   h1H1_17dO2__5->SetMinimum(0.0004);
   h1H1_17dO2__5->SetMaximum(5000);
   h1H1_17dO2__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H1_17dO2__5->SetLineColor(ci);
   h1H1_17dO2__5->GetXaxis()->SetRange(1,1);
   h1H1_17dO2__5->GetXaxis()->SetLabelFont(42);
   h1H1_17dO2__5->GetXaxis()->SetLabelSize(0.07);
   h1H1_17dO2__5->GetXaxis()->SetTitleSize(0.07);
   h1H1_17dO2__5->GetXaxis()->SetTitleFont(42);
   h1H1_17dO2__5->GetYaxis()->SetLabelFont(42);
   h1H1_17dO2__5->GetYaxis()->SetLabelSize(0.07);
   h1H1_17dO2__5->GetYaxis()->SetTitleSize(0.07);
   h1H1_17dO2__5->GetYaxis()->SetTitleOffset(1.1);
   h1H1_17dO2__5->GetYaxis()->SetTitleFont(42);
   h1H1_17dO2__5->GetZaxis()->SetLabelFont(42);
   h1H1_17dO2__5->GetZaxis()->SetLabelSize(0.035);
   h1H1_17dO2__5->GetZaxis()->SetTitleSize(0.035);
   h1H1_17dO2__5->GetZaxis()->SetTitleFont(42);
   h1H1_17dO2__5->Draw("");
   
   TH1F *hbicH1_17dO2__6 = new TH1F("hbicH1_17dO2__6","BIC",16,0,160);
   hbicH1_17dO2__6->SetBinContent(1,20.18847);
   hbicH1_17dO2__6->SetBinContent(2,31.20243);
   hbicH1_17dO2__6->SetBinContent(3,19.78944);
   hbicH1_17dO2__6->SetBinContent(4,12.56575);
   hbicH1_17dO2__6->SetBinContent(5,9.984476);
   hbicH1_17dO2__6->SetBinContent(6,9.888232);
   hbicH1_17dO2__6->SetBinContent(7,8.992841);
   hbicH1_17dO2__6->SetBinContent(8,7.191245);
   hbicH1_17dO2__6->SetBinContent(9,4.790558);
   hbicH1_17dO2__6->SetBinContent(10,3.242008);
   hbicH1_17dO2__6->SetBinContent(11,2.063293);
   hbicH1_17dO2__6->SetBinContent(12,1.245762);
   hbicH1_17dO2__6->SetBinContent(13,0.7807637);
   hbicH1_17dO2__6->SetBinContent(14,0.5179859);
   hbicH1_17dO2__6->SetBinContent(15,0.3265798);
   hbicH1_17dO2__6->SetBinContent(16,0.2422314);
   hbicH1_17dO2__6->SetBinContent(17,0.5828693);
   hbicH1_17dO2__6->SetEntries(123540);
   hbicH1_17dO2__6->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH1_17dO2__6->SetLineColor(ci);
   hbicH1_17dO2__6->SetLineWidth(2);
   hbicH1_17dO2__6->GetXaxis()->SetRange(0,17);
   hbicH1_17dO2__6->GetXaxis()->SetLabelFont(42);
   hbicH1_17dO2__6->GetXaxis()->SetLabelSize(0.035);
   hbicH1_17dO2__6->GetXaxis()->SetTitleSize(0.035);
   hbicH1_17dO2__6->GetXaxis()->SetTitleFont(42);
   hbicH1_17dO2__6->GetYaxis()->SetLabelFont(42);
   hbicH1_17dO2__6->GetYaxis()->SetLabelSize(0.035);
   hbicH1_17dO2__6->GetYaxis()->SetTitleSize(0.035);
   hbicH1_17dO2__6->GetYaxis()->SetTitleFont(42);
   hbicH1_17dO2__6->GetZaxis()->SetLabelFont(42);
   hbicH1_17dO2__6->GetZaxis()->SetLabelSize(0.035);
   hbicH1_17dO2__6->GetZaxis()->SetTitleSize(0.035);
   hbicH1_17dO2__6->GetZaxis()->SetTitleFont(42);
   hbicH1_17dO2__6->Draw("histCsame");
   
   TH1F *hqmdH1_17dO2__7 = new TH1F("hqmdH1_17dO2__7","QMD",16,0,160);
   hqmdH1_17dO2__7->SetBinContent(1,20.18847);
   hqmdH1_17dO2__7->SetBinContent(2,31.20243);
   hqmdH1_17dO2__7->SetBinContent(3,19.78944);
   hqmdH1_17dO2__7->SetBinContent(4,12.56575);
   hqmdH1_17dO2__7->SetBinContent(5,9.984476);
   hqmdH1_17dO2__7->SetBinContent(6,9.888232);
   hqmdH1_17dO2__7->SetBinContent(7,8.992841);
   hqmdH1_17dO2__7->SetBinContent(8,7.191245);
   hqmdH1_17dO2__7->SetBinContent(9,4.790558);
   hqmdH1_17dO2__7->SetBinContent(10,3.242008);
   hqmdH1_17dO2__7->SetBinContent(11,2.063293);
   hqmdH1_17dO2__7->SetBinContent(12,1.245762);
   hqmdH1_17dO2__7->SetBinContent(13,0.7807637);
   hqmdH1_17dO2__7->SetBinContent(14,0.5179859);
   hqmdH1_17dO2__7->SetBinContent(15,0.3265798);
   hqmdH1_17dO2__7->SetBinContent(16,0.2422314);
   hqmdH1_17dO2__7->SetBinContent(17,0.5828693);
   hqmdH1_17dO2__7->SetEntries(123540);
   hqmdH1_17dO2__7->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hqmdH1_17dO2__7->SetLineColor(ci);
   hqmdH1_17dO2__7->SetLineWidth(2);
   hqmdH1_17dO2__7->GetXaxis()->SetRange(0,17);
   hqmdH1_17dO2__7->GetXaxis()->SetLabelFont(42);
   hqmdH1_17dO2__7->GetXaxis()->SetLabelSize(0.035);
   hqmdH1_17dO2__7->GetXaxis()->SetTitleSize(0.035);
   hqmdH1_17dO2__7->GetXaxis()->SetTitleFont(42);
   hqmdH1_17dO2__7->GetYaxis()->SetLabelFont(42);
   hqmdH1_17dO2__7->GetYaxis()->SetLabelSize(0.035);
   hqmdH1_17dO2__7->GetYaxis()->SetTitleSize(0.035);
   hqmdH1_17dO2__7->GetYaxis()->SetTitleFont(42);
   hqmdH1_17dO2__7->GetZaxis()->SetLabelFont(42);
   hqmdH1_17dO2__7->GetZaxis()->SetLabelSize(0.035);
   hqmdH1_17dO2__7->GetZaxis()->SetTitleSize(0.035);
   hqmdH1_17dO2__7->GetZaxis()->SetTitleFont(42);
   hqmdH1_17dO2__7->Draw("histCsame");
   
   TH1F *hinclH1_17dO2__8 = new TH1F("hinclH1_17dO2__8","INCL",16,0,160);
   hinclH1_17dO2__8->SetBinContent(1,6.486178);
   hinclH1_17dO2__8->SetBinContent(2,12.08454);
   hinclH1_17dO2__8->SetBinContent(3,17.83861);
   hinclH1_17dO2__8->SetBinContent(4,21.60293);
   hinclH1_17dO2__8->SetBinContent(5,20.86218);
   hinclH1_17dO2__8->SetBinContent(6,16.33115);
   hinclH1_17dO2__8->SetBinContent(7,11.64441);
   hinclH1_17dO2__8->SetBinContent(8,7.432395);
   hinclH1_17dO2__8->SetBinContent(9,4.724594);
   hinclH1_17dO2__8->SetBinContent(10,2.713208);
   hinclH1_17dO2__8->SetBinContent(11,1.574504);
   hinclH1_17dO2__8->SetBinContent(12,0.900798);
   hinclH1_17dO2__8->SetBinContent(13,0.507172);
   hinclH1_17dO2__8->SetBinContent(14,0.2714289);
   hinclH1_17dO2__8->SetBinContent(15,0.1632899);
   hinclH1_17dO2__8->SetBinContent(16,0.08002287);
   hinclH1_17dO2__8->SetBinContent(17,0.108139);
   hinclH1_17dO2__8->SetEntries(115893);
   hinclH1_17dO2__8->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_17dO2__8->SetLineColor(ci);
   hinclH1_17dO2__8->SetLineWidth(2);
   hinclH1_17dO2__8->GetXaxis()->SetRange(0,17);
   hinclH1_17dO2__8->GetXaxis()->SetLabelFont(42);
   hinclH1_17dO2__8->GetXaxis()->SetLabelSize(0.035);
   hinclH1_17dO2__8->GetXaxis()->SetTitleSize(0.035);
   hinclH1_17dO2__8->GetXaxis()->SetTitleFont(42);
   hinclH1_17dO2__8->GetYaxis()->SetLabelFont(42);
   hinclH1_17dO2__8->GetYaxis()->SetLabelSize(0.035);
   hinclH1_17dO2__8->GetYaxis()->SetTitleSize(0.035);
   hinclH1_17dO2__8->GetYaxis()->SetTitleFont(42);
   hinclH1_17dO2__8->GetZaxis()->SetLabelFont(42);
   hinclH1_17dO2__8->GetZaxis()->SetLabelSize(0.035);
   hinclH1_17dO2__8->GetZaxis()->SetTitleSize(0.035);
   hinclH1_17dO2__8->GetZaxis()->SetTitleFont(42);
   hinclH1_17dO2__8->Draw("histCsame");
   
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
   entry=leg->AddEntry("hbicH1_17.2","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hqmdH1_17.2","QMD","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   canvasH1_2->Range(-9.9,-3.39794,207.9,3.69897);
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
   
   TH1F *h1H1_14dO4__9 = new TH1F("h1H1_14dO4__9","",1,-9.9,207.9);
   h1H1_14dO4__9->SetMinimum(0.0004);
   h1H1_14dO4__9->SetMaximum(5000);
   h1H1_14dO4__9->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H1_14dO4__9->SetLineColor(ci);
   h1H1_14dO4__9->GetXaxis()->SetRange(1,1);
   h1H1_14dO4__9->GetXaxis()->SetLabelFont(42);
   h1H1_14dO4__9->GetXaxis()->SetLabelSize(0.07);
   h1H1_14dO4__9->GetXaxis()->SetTitleSize(0.07);
   h1H1_14dO4__9->GetXaxis()->SetTitleFont(42);
   h1H1_14dO4__9->GetYaxis()->SetLabelFont(42);
   h1H1_14dO4__9->GetYaxis()->SetLabelSize(0.07);
   h1H1_14dO4__9->GetYaxis()->SetTitleSize(0.07);
   h1H1_14dO4__9->GetYaxis()->SetTitleOffset(1.1);
   h1H1_14dO4__9->GetYaxis()->SetTitleFont(42);
   h1H1_14dO4__9->GetZaxis()->SetLabelFont(42);
   h1H1_14dO4__9->GetZaxis()->SetLabelSize(0.035);
   h1H1_14dO4__9->GetZaxis()->SetTitleSize(0.035);
   h1H1_14dO4__9->GetZaxis()->SetTitleFont(42);
   h1H1_14dO4__9->Draw("");
   
   TH1F *hbicH1_14dO4__10 = new TH1F("hbicH1_14dO4__10","BIC",18,0,180);
   hbicH1_14dO4__10->SetBinContent(1,22.54852);
   hbicH1_14dO4__10->SetBinContent(2,34.27797);
   hbicH1_14dO4__10->SetBinContent(3,21.89788);
   hbicH1_14dO4__10->SetBinContent(4,14.25613);
   hbicH1_14dO4__10->SetBinContent(5,12.06891);
   hbicH1_14dO4__10->SetBinContent(6,12.26178);
   hbicH1_14dO4__10->SetBinContent(7,11.11867);
   hbicH1_14dO4__10->SetBinContent(8,8.980317);
   hbicH1_14dO4__10->SetBinContent(9,6.110319);
   hbicH1_14dO4__10->SetBinContent(10,3.97325);
   hbicH1_14dO4__10->SetBinContent(11,2.51382);
   hbicH1_14dO4__10->SetBinContent(12,1.517293);
   hbicH1_14dO4__10->SetBinContent(13,0.9373785);
   hbicH1_14dO4__10->SetBinContent(14,0.5657703);
   hbicH1_14dO4__10->SetBinContent(15,0.3523206);
   hbicH1_14dO4__10->SetBinContent(16,0.2340232);
   hbicH1_14dO4__10->SetBinContent(17,0.154301);
   hbicH1_14dO4__10->SetBinContent(18,0.1067249);
   hbicH1_14dO4__10->SetBinContent(19,0.3664648);
   hbicH1_14dO4__10->SetEntries(119954);
   hbicH1_14dO4__10->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH1_14dO4__10->SetLineColor(ci);
   hbicH1_14dO4__10->SetLineWidth(2);
   hbicH1_14dO4__10->GetXaxis()->SetRange(0,19);
   hbicH1_14dO4__10->GetXaxis()->SetLabelFont(42);
   hbicH1_14dO4__10->GetXaxis()->SetLabelSize(0.035);
   hbicH1_14dO4__10->GetXaxis()->SetTitleSize(0.035);
   hbicH1_14dO4__10->GetXaxis()->SetTitleFont(42);
   hbicH1_14dO4__10->GetYaxis()->SetLabelFont(42);
   hbicH1_14dO4__10->GetYaxis()->SetLabelSize(0.035);
   hbicH1_14dO4__10->GetYaxis()->SetTitleSize(0.035);
   hbicH1_14dO4__10->GetYaxis()->SetTitleFont(42);
   hbicH1_14dO4__10->GetZaxis()->SetLabelFont(42);
   hbicH1_14dO4__10->GetZaxis()->SetLabelSize(0.035);
   hbicH1_14dO4__10->GetZaxis()->SetTitleSize(0.035);
   hbicH1_14dO4__10->GetZaxis()->SetTitleFont(42);
   hbicH1_14dO4__10->Draw("histCsame");
   
   TH1F *hqmdH1_14dO4__11 = new TH1F("hqmdH1_14dO4__11","QMD",18,0,180);
   hqmdH1_14dO4__11->SetBinContent(1,22.54852);
   hqmdH1_14dO4__11->SetBinContent(2,34.27797);
   hqmdH1_14dO4__11->SetBinContent(3,21.89788);
   hqmdH1_14dO4__11->SetBinContent(4,14.25613);
   hqmdH1_14dO4__11->SetBinContent(5,12.06891);
   hqmdH1_14dO4__11->SetBinContent(6,12.26178);
   hqmdH1_14dO4__11->SetBinContent(7,11.11867);
   hqmdH1_14dO4__11->SetBinContent(8,8.980317);
   hqmdH1_14dO4__11->SetBinContent(9,6.110319);
   hqmdH1_14dO4__11->SetBinContent(10,3.97325);
   hqmdH1_14dO4__11->SetBinContent(11,2.51382);
   hqmdH1_14dO4__11->SetBinContent(12,1.517293);
   hqmdH1_14dO4__11->SetBinContent(13,0.9373785);
   hqmdH1_14dO4__11->SetBinContent(14,0.5657703);
   hqmdH1_14dO4__11->SetBinContent(15,0.3523206);
   hqmdH1_14dO4__11->SetBinContent(16,0.2340232);
   hqmdH1_14dO4__11->SetBinContent(17,0.154301);
   hqmdH1_14dO4__11->SetBinContent(18,0.1067249);
   hqmdH1_14dO4__11->SetBinContent(19,0.3664648);
   hqmdH1_14dO4__11->SetEntries(119954);
   hqmdH1_14dO4__11->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hqmdH1_14dO4__11->SetLineColor(ci);
   hqmdH1_14dO4__11->SetLineWidth(2);
   hqmdH1_14dO4__11->GetXaxis()->SetRange(0,19);
   hqmdH1_14dO4__11->GetXaxis()->SetLabelFont(42);
   hqmdH1_14dO4__11->GetXaxis()->SetLabelSize(0.035);
   hqmdH1_14dO4__11->GetXaxis()->SetTitleSize(0.035);
   hqmdH1_14dO4__11->GetXaxis()->SetTitleFont(42);
   hqmdH1_14dO4__11->GetYaxis()->SetLabelFont(42);
   hqmdH1_14dO4__11->GetYaxis()->SetLabelSize(0.035);
   hqmdH1_14dO4__11->GetYaxis()->SetTitleSize(0.035);
   hqmdH1_14dO4__11->GetYaxis()->SetTitleFont(42);
   hqmdH1_14dO4__11->GetZaxis()->SetLabelFont(42);
   hqmdH1_14dO4__11->GetZaxis()->SetLabelSize(0.035);
   hqmdH1_14dO4__11->GetZaxis()->SetTitleSize(0.035);
   hqmdH1_14dO4__11->GetZaxis()->SetTitleFont(42);
   hqmdH1_14dO4__11->Draw("histCsame");
   
   TH1F *hinclH1_14dO4__12 = new TH1F("hinclH1_14dO4__12","INCL",18,0,180);
   hinclH1_14dO4__12->SetBinContent(1,6.436923);
   hinclH1_14dO4__12->SetBinContent(2,12.2875);
   hinclH1_14dO4__12->SetBinContent(3,18.75657);
   hinclH1_14dO4__12->SetBinContent(4,23.68006);
   hinclH1_14dO4__12->SetBinContent(5,24.11982);
   hinclH1_14dO4__12->SetBinContent(6,20.40888);
   hinclH1_14dO4__12->SetBinContent(7,14.60716);
   hinclH1_14dO4__12->SetBinContent(8,9.414931);
   hinclH1_14dO4__12->SetBinContent(9,5.770857);
   hinclH1_14dO4__12->SetBinContent(10,3.176028);
   hinclH1_14dO4__12->SetBinContent(11,1.877329);
   hinclH1_14dO4__12->SetBinContent(12,1.118682);
   hinclH1_14dO4__12->SetBinContent(13,0.617204);
   hinclH1_14dO4__12->SetBinContent(14,0.3446055);
   hinclH1_14dO4__12->SetBinContent(15,0.2095922);
   hinclH1_14dO4__12->SetBinContent(16,0.09258059);
   hinclH1_14dO4__12->SetBinContent(17,0.06172039);
   hinclH1_14dO4__12->SetBinContent(18,0.0308602);
   hinclH1_14dO4__12->SetBinContent(19,0.03986109);
   hinclH1_14dO4__12->SetEntries(111251);
   hinclH1_14dO4__12->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_14dO4__12->SetLineColor(ci);
   hinclH1_14dO4__12->SetLineWidth(2);
   hinclH1_14dO4__12->GetXaxis()->SetRange(0,19);
   hinclH1_14dO4__12->GetXaxis()->SetLabelFont(42);
   hinclH1_14dO4__12->GetXaxis()->SetLabelSize(0.035);
   hinclH1_14dO4__12->GetXaxis()->SetTitleSize(0.035);
   hinclH1_14dO4__12->GetXaxis()->SetTitleFont(42);
   hinclH1_14dO4__12->GetYaxis()->SetLabelFont(42);
   hinclH1_14dO4__12->GetYaxis()->SetLabelSize(0.035);
   hinclH1_14dO4__12->GetYaxis()->SetTitleSize(0.035);
   hinclH1_14dO4__12->GetYaxis()->SetTitleFont(42);
   hinclH1_14dO4__12->GetZaxis()->SetLabelFont(42);
   hinclH1_14dO4__12->GetZaxis()->SetLabelSize(0.035);
   hinclH1_14dO4__12->GetZaxis()->SetTitleSize(0.035);
   hinclH1_14dO4__12->GetZaxis()->SetTitleFont(42);
   hinclH1_14dO4__12->Draw("histCsame");
   
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
   canvasH1_4->Range(-9.9,-4.985407,207.9,3.69897);
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
   
   TH1F *h1H1_19dO4__13 = new TH1F("h1H1_19dO4__13","",1,-9.9,207.9);
   h1H1_19dO4__13->SetMinimum(0.0004);
   h1H1_19dO4__13->SetMaximum(5000);
   h1H1_19dO4__13->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H1_19dO4__13->SetLineColor(ci);
   h1H1_19dO4__13->GetXaxis()->SetTitle("E  [MeV/n]");
   h1H1_19dO4__13->GetXaxis()->SetRange(1,1);
   h1H1_19dO4__13->GetXaxis()->SetLabelFont(42);
   h1H1_19dO4__13->GetXaxis()->SetLabelSize(0.07);
   h1H1_19dO4__13->GetXaxis()->SetTitleSize(0.07);
   h1H1_19dO4__13->GetXaxis()->SetTitleFont(42);
   h1H1_19dO4__13->GetYaxis()->SetLabelFont(42);
   h1H1_19dO4__13->GetYaxis()->SetLabelSize(0.07);
   h1H1_19dO4__13->GetYaxis()->SetTitleSize(0.07);
   h1H1_19dO4__13->GetYaxis()->SetTitleOffset(1.1);
   h1H1_19dO4__13->GetYaxis()->SetTitleFont(42);
   h1H1_19dO4__13->GetZaxis()->SetLabelFont(42);
   h1H1_19dO4__13->GetZaxis()->SetLabelSize(0.035);
   h1H1_19dO4__13->GetZaxis()->SetTitleSize(0.035);
   h1H1_19dO4__13->GetZaxis()->SetTitleFont(42);
   h1H1_19dO4__13->Draw("");
   
   TH1F *hbicH1_19dO4__14 = new TH1F("hbicH1_19dO4__14","BIC",15,0,150);
   hbicH1_19dO4__14->SetBinContent(1,19.02898);
   hbicH1_19dO4__14->SetBinContent(2,28.70713);
   hbicH1_19dO4__14->SetBinContent(3,18.0682);
   hbicH1_19dO4__14->SetBinContent(4,11.27144);
   hbicH1_19dO4__14->SetBinContent(5,8.858884);
   hbicH1_19dO4__14->SetBinContent(6,8.366938);
   hbicH1_19dO4__14->SetBinContent(7,7.284848);
   hbicH1_19dO4__14->SetBinContent(8,5.772426);
   hbicH1_19dO4__14->SetBinContent(9,3.87877);
   hbicH1_19dO4__14->SetBinContent(10,2.707149);
   hbicH1_19dO4__14->SetBinContent(11,1.762727);
   hbicH1_19dO4__14->SetBinContent(12,1.041655);
   hbicH1_19dO4__14->SetBinContent(13,0.7027804);
   hbicH1_19dO4__14->SetBinContent(14,0.4351462);
   hbicH1_19dO4__14->SetBinContent(15,0.2791867);
   hbicH1_19dO4__14->SetBinContent(16,0.7364753);
   hbicH1_19dO4__14->SetEntries(123508);
   hbicH1_19dO4__14->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH1_19dO4__14->SetLineColor(ci);
   hbicH1_19dO4__14->SetLineWidth(2);
   hbicH1_19dO4__14->GetXaxis()->SetRange(0,16);
   hbicH1_19dO4__14->GetXaxis()->SetLabelFont(42);
   hbicH1_19dO4__14->GetXaxis()->SetLabelSize(0.035);
   hbicH1_19dO4__14->GetXaxis()->SetTitleSize(0.035);
   hbicH1_19dO4__14->GetXaxis()->SetTitleFont(42);
   hbicH1_19dO4__14->GetYaxis()->SetLabelFont(42);
   hbicH1_19dO4__14->GetYaxis()->SetLabelSize(0.035);
   hbicH1_19dO4__14->GetYaxis()->SetTitleSize(0.035);
   hbicH1_19dO4__14->GetYaxis()->SetTitleFont(42);
   hbicH1_19dO4__14->GetZaxis()->SetLabelFont(42);
   hbicH1_19dO4__14->GetZaxis()->SetLabelSize(0.035);
   hbicH1_19dO4__14->GetZaxis()->SetTitleSize(0.035);
   hbicH1_19dO4__14->GetZaxis()->SetTitleFont(42);
   hbicH1_19dO4__14->Draw("histCsame");
   
   TH1F *hqmdH1_19dO4__15 = new TH1F("hqmdH1_19dO4__15","QMD",15,0,150);
   hqmdH1_19dO4__15->SetBinContent(1,19.02898);
   hqmdH1_19dO4__15->SetBinContent(2,28.70713);
   hqmdH1_19dO4__15->SetBinContent(3,18.0682);
   hqmdH1_19dO4__15->SetBinContent(4,11.27144);
   hqmdH1_19dO4__15->SetBinContent(5,8.858884);
   hqmdH1_19dO4__15->SetBinContent(6,8.366938);
   hqmdH1_19dO4__15->SetBinContent(7,7.284848);
   hqmdH1_19dO4__15->SetBinContent(8,5.772426);
   hqmdH1_19dO4__15->SetBinContent(9,3.87877);
   hqmdH1_19dO4__15->SetBinContent(10,2.707149);
   hqmdH1_19dO4__15->SetBinContent(11,1.762727);
   hqmdH1_19dO4__15->SetBinContent(12,1.041655);
   hqmdH1_19dO4__15->SetBinContent(13,0.7027804);
   hqmdH1_19dO4__15->SetBinContent(14,0.4351462);
   hqmdH1_19dO4__15->SetBinContent(15,0.2791867);
   hqmdH1_19dO4__15->SetBinContent(16,0.7364753);
   hqmdH1_19dO4__15->SetEntries(123508);
   hqmdH1_19dO4__15->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hqmdH1_19dO4__15->SetLineColor(ci);
   hqmdH1_19dO4__15->SetLineWidth(2);
   hqmdH1_19dO4__15->GetXaxis()->SetRange(0,16);
   hqmdH1_19dO4__15->GetXaxis()->SetLabelFont(42);
   hqmdH1_19dO4__15->GetXaxis()->SetLabelSize(0.035);
   hqmdH1_19dO4__15->GetXaxis()->SetTitleSize(0.035);
   hqmdH1_19dO4__15->GetXaxis()->SetTitleFont(42);
   hqmdH1_19dO4__15->GetYaxis()->SetLabelFont(42);
   hqmdH1_19dO4__15->GetYaxis()->SetLabelSize(0.035);
   hqmdH1_19dO4__15->GetYaxis()->SetTitleSize(0.035);
   hqmdH1_19dO4__15->GetYaxis()->SetTitleFont(42);
   hqmdH1_19dO4__15->GetZaxis()->SetLabelFont(42);
   hqmdH1_19dO4__15->GetZaxis()->SetLabelSize(0.035);
   hqmdH1_19dO4__15->GetZaxis()->SetTitleSize(0.035);
   hqmdH1_19dO4__15->GetZaxis()->SetTitleFont(42);
   hqmdH1_19dO4__15->Draw("histCsame");
   
   TH1F *hinclH1_19dO4__16 = new TH1F("hinclH1_19dO4__16","INCL",15,0,150);
   hinclH1_19dO4__16->SetBinContent(1,6.428997);
   hinclH1_19dO4__16->SetBinContent(2,11.56411);
   hinclH1_19dO4__16->SetBinContent(3,17.0044);
   hinclH1_19dO4__16->SetBinContent(4,19.98977);
   hinclH1_19dO4__16->SetBinContent(5,18.14425);
   hinclH1_19dO4__16->SetBinContent(6,14.27607);
   hinclH1_19dO4__16->SetBinContent(7,10.0719);
   hinclH1_19dO4__16->SetBinContent(8,6.426108);
   hinclH1_19dO4__16->SetBinContent(9,3.841224);
   hinclH1_19dO4__16->SetBinContent(10,2.366348);
   hinclH1_19dO4__16->SetBinContent(11,1.317954);
   hinclH1_19dO4__16->SetBinContent(12,0.7932754);
   hinclH1_19dO4__16->SetBinContent(13,0.4197428);
   hinclH1_19dO4__16->SetBinContent(14,0.2291256);
   hinclH1_19dO4__16->SetBinContent(15,0.1367052);
   hinclH1_19dO4__16->SetBinContent(16,0.1684747);
   hinclH1_19dO4__16->SetEntries(117562);
   hinclH1_19dO4__16->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH1_19dO4__16->SetLineColor(ci);
   hinclH1_19dO4__16->SetLineWidth(2);
   hinclH1_19dO4__16->GetXaxis()->SetRange(0,16);
   hinclH1_19dO4__16->GetXaxis()->SetLabelFont(42);
   hinclH1_19dO4__16->GetXaxis()->SetLabelSize(0.035);
   hinclH1_19dO4__16->GetXaxis()->SetTitleSize(0.035);
   hinclH1_19dO4__16->GetXaxis()->SetTitleFont(42);
   hinclH1_19dO4__16->GetYaxis()->SetLabelFont(42);
   hinclH1_19dO4__16->GetYaxis()->SetLabelSize(0.035);
   hinclH1_19dO4__16->GetYaxis()->SetTitleSize(0.035);
   hinclH1_19dO4__16->GetYaxis()->SetTitleFont(42);
   hinclH1_19dO4__16->GetZaxis()->SetLabelFont(42);
   hinclH1_19dO4__16->GetZaxis()->SetLabelSize(0.035);
   hinclH1_19dO4__16->GetZaxis()->SetTitleSize(0.035);
   hinclH1_19dO4__16->GetZaxis()->SetTitleFont(42);
   hinclH1_19dO4__16->Draw("histCsame");
   
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
