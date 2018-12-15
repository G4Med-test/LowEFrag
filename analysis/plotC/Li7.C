void Li7()
{
//=========Macro generated from canvas: canvasLi7/canvasLi7
//=========  (Sat Dec 15 20:25:12 2018) by ROOT version6.06/06
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
   canvasLi7_1->Range(-26.33684,-3.39794,99.36,3.69897);
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
   
   TH1F *h1Li7_2dO2__73 = new TH1F("h1Li7_2dO2__73","^{12}C + ^{nat}C #rightarrow ^{7}Li at 62 MeV/n",1,-3.36,99.36);
   h1Li7_2dO2__73->SetMinimum(0.0004);
   h1Li7_2dO2__73->SetMaximum(5000);
   h1Li7_2dO2__73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Li7_2dO2__73->SetLineColor(ci);
   h1Li7_2dO2__73->GetXaxis()->SetRange(1,1);
   h1Li7_2dO2__73->GetXaxis()->SetLabelFont(42);
   h1Li7_2dO2__73->GetXaxis()->SetLabelSize(0.07);
   h1Li7_2dO2__73->GetXaxis()->SetTitleSize(0.07);
   h1Li7_2dO2__73->GetXaxis()->SetTitleFont(42);
   h1Li7_2dO2__73->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Li7_2dO2__73->GetYaxis()->SetLabelFont(42);
   h1Li7_2dO2__73->GetYaxis()->SetLabelSize(0.07);
   h1Li7_2dO2__73->GetYaxis()->SetTitleSize(0.07);
   h1Li7_2dO2__73->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_2dO2__73->GetYaxis()->SetTitleFont(42);
   h1Li7_2dO2__73->GetZaxis()->SetLabelFont(42);
   h1Li7_2dO2__73->GetZaxis()->SetLabelSize(0.035);
   h1Li7_2dO2__73->GetZaxis()->SetTitleSize(0.035);
   h1Li7_2dO2__73->GetZaxis()->SetTitleFont(42);
   h1Li7_2dO2__73->Draw("");
   
   TPaveText *pt = new TPaveText(0.2657123,0.9312746,0.7342877,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{7}Li at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicLi7_2dO2__74 = new TH1F("hbicLi7_2dO2__74","BIC",17,9.142857,86.85714);
   hbicLi7_2dO2__74->SetBinContent(0,1.093215);
   hbicLi7_2dO2__74->SetBinContent(1,0.1366518);
   hbicLi7_2dO2__74->SetBinContent(2,0.1366518);
   hbicLi7_2dO2__74->SetBinContent(9,0.2733037);
   hbicLi7_2dO2__74->SetBinContent(10,10.31721);
   hbicLi7_2dO2__74->SetBinContent(11,61.08337);
   hbicLi7_2dO2__74->SetBinContent(12,108.1599);
   hbicLi7_2dO2__74->SetBinContent(13,52.74761);
   hbicLi7_2dO2__74->SetBinContent(14,6.900918);
   hbicLi7_2dO2__74->SetBinContent(15,0.3416296);
   hbicLi7_2dO2__74->SetEntries(3530);
   hbicLi7_2dO2__74->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi7_2dO2__74->SetLineColor(ci);
   hbicLi7_2dO2__74->SetLineWidth(2);
   hbicLi7_2dO2__74->GetXaxis()->SetRange(0,18);
   hbicLi7_2dO2__74->GetXaxis()->SetLabelFont(42);
   hbicLi7_2dO2__74->GetXaxis()->SetLabelSize(0.035);
   hbicLi7_2dO2__74->GetXaxis()->SetTitleSize(0.035);
   hbicLi7_2dO2__74->GetXaxis()->SetTitleFont(42);
   hbicLi7_2dO2__74->GetYaxis()->SetLabelFont(42);
   hbicLi7_2dO2__74->GetYaxis()->SetLabelSize(0.035);
   hbicLi7_2dO2__74->GetYaxis()->SetTitleSize(0.035);
   hbicLi7_2dO2__74->GetYaxis()->SetTitleFont(42);
   hbicLi7_2dO2__74->GetZaxis()->SetLabelFont(42);
   hbicLi7_2dO2__74->GetZaxis()->SetLabelSize(0.035);
   hbicLi7_2dO2__74->GetZaxis()->SetTitleSize(0.035);
   hbicLi7_2dO2__74->GetZaxis()->SetTitleFont(42);
   hbicLi7_2dO2__74->Draw("histCsame");
   
   TH1F *hinclLi7_2dO2__75 = new TH1F("hinclLi7_2dO2__75","INCL",17,9.142857,86.85714);
   hinclLi7_2dO2__75->SetBinContent(0,0.6832592);
   hinclLi7_2dO2__75->SetBinContent(1,0.7515851);
   hinclLi7_2dO2__75->SetBinContent(2,2.938015);
   hinclLi7_2dO2__75->SetBinContent(3,5.944355);
   hinclLi7_2dO2__75->SetBinContent(4,10.18056);
   hinclLi7_2dO2__75->SetBinContent(5,11.82038);
   hinclLi7_2dO2__75->SetBinContent(6,17.83307);
   hinclLi7_2dO2__75->SetBinContent(7,18.85795);
   hinclLi7_2dO2__75->SetBinContent(8,21.11271);
   hinclLi7_2dO2__75->SetBinContent(9,26.30548);
   hinclLi7_2dO2__75->SetBinContent(10,21.86429);
   hinclLi7_2dO2__75->SetBinContent(11,11.54708);
   hinclLi7_2dO2__75->SetBinContent(12,3.074667);
   hinclLi7_2dO2__75->SetBinContent(13,0.4782814);
   hinclLi7_2dO2__75->SetBinContent(14,0.06832592);
   hinclLi7_2dO2__75->SetEntries(2246);
   hinclLi7_2dO2__75->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_2dO2__75->SetLineColor(ci);
   hinclLi7_2dO2__75->SetLineWidth(2);
   hinclLi7_2dO2__75->GetXaxis()->SetRange(0,18);
   hinclLi7_2dO2__75->GetXaxis()->SetLabelFont(42);
   hinclLi7_2dO2__75->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_2dO2__75->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_2dO2__75->GetXaxis()->SetTitleFont(42);
   hinclLi7_2dO2__75->GetYaxis()->SetLabelFont(42);
   hinclLi7_2dO2__75->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_2dO2__75->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_2dO2__75->GetYaxis()->SetTitleFont(42);
   hinclLi7_2dO2__75->GetZaxis()->SetLabelFont(42);
   hinclLi7_2dO2__75->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_2dO2__75->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_2dO2__75->GetZaxis()->SetTitleFont(42);
   hinclLi7_2dO2__75->Draw("histCsame");
   
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
   canvasLi7_3->Range(-26.33684,-3.39794,99.36,3.69897);
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
   
   TH1F *h1Li7_7dO6__76 = new TH1F("h1Li7_7dO6__76","",1,-3.36,99.36);
   h1Li7_7dO6__76->SetMinimum(0.0004);
   h1Li7_7dO6__76->SetMaximum(5000);
   h1Li7_7dO6__76->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_7dO6__76->SetLineColor(ci);
   h1Li7_7dO6__76->GetXaxis()->SetRange(1,1);
   h1Li7_7dO6__76->GetXaxis()->SetLabelFont(42);
   h1Li7_7dO6__76->GetXaxis()->SetLabelSize(0.07);
   h1Li7_7dO6__76->GetXaxis()->SetTitleSize(0.07);
   h1Li7_7dO6__76->GetXaxis()->SetTitleFont(42);
   h1Li7_7dO6__76->GetYaxis()->SetLabelFont(42);
   h1Li7_7dO6__76->GetYaxis()->SetLabelSize(0.07);
   h1Li7_7dO6__76->GetYaxis()->SetTitleSize(0.07);
   h1Li7_7dO6__76->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_7dO6__76->GetYaxis()->SetTitleFont(42);
   h1Li7_7dO6__76->GetZaxis()->SetLabelFont(42);
   h1Li7_7dO6__76->GetZaxis()->SetLabelSize(0.035);
   h1Li7_7dO6__76->GetZaxis()->SetTitleSize(0.035);
   h1Li7_7dO6__76->GetZaxis()->SetTitleFont(42);
   h1Li7_7dO6__76->Draw("");
   
   TH1F *hbicLi7_7dO6__77 = new TH1F("hbicLi7_7dO6__77","BIC",17,9.142857,86.85714);
   hbicLi7_7dO6__77->SetBinContent(0,0.7140206);
   hbicLi7_7dO6__77->SetBinContent(1,0.2327178);
   hbicLi7_7dO6__77->SetBinContent(2,0.04231233);
   hbicLi7_7dO6__77->SetBinContent(3,0.02644521);
   hbicLi7_7dO6__77->SetBinContent(7,0.01057808);
   hbicLi7_7dO6__77->SetBinContent(8,0.04231233);
   hbicLi7_7dO6__77->SetBinContent(9,0.9943398);
   hbicLi7_7dO6__77->SetBinContent(10,8.515357);
   hbicLi7_7dO6__77->SetBinContent(11,21.02394);
   hbicLi7_7dO6__77->SetBinContent(12,18.14141);
   hbicLi7_7dO6__77->SetBinContent(13,5.52176);
   hbicLi7_7dO6__77->SetBinContent(14,0.5289041);
   hbicLi7_7dO6__77->SetBinContent(15,0.01586713);
   hbicLi7_7dO6__77->SetEntries(10552);
   hbicLi7_7dO6__77->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi7_7dO6__77->SetLineColor(ci);
   hbicLi7_7dO6__77->SetLineWidth(2);
   hbicLi7_7dO6__77->GetXaxis()->SetRange(0,18);
   hbicLi7_7dO6__77->GetXaxis()->SetLabelFont(42);
   hbicLi7_7dO6__77->GetXaxis()->SetLabelSize(0.035);
   hbicLi7_7dO6__77->GetXaxis()->SetTitleSize(0.035);
   hbicLi7_7dO6__77->GetXaxis()->SetTitleFont(42);
   hbicLi7_7dO6__77->GetYaxis()->SetLabelFont(42);
   hbicLi7_7dO6__77->GetYaxis()->SetLabelSize(0.035);
   hbicLi7_7dO6__77->GetYaxis()->SetTitleSize(0.035);
   hbicLi7_7dO6__77->GetYaxis()->SetTitleFont(42);
   hbicLi7_7dO6__77->GetZaxis()->SetLabelFont(42);
   hbicLi7_7dO6__77->GetZaxis()->SetLabelSize(0.035);
   hbicLi7_7dO6__77->GetZaxis()->SetTitleSize(0.035);
   hbicLi7_7dO6__77->GetZaxis()->SetTitleFont(42);
   hbicLi7_7dO6__77->Draw("histCsame");
   
   TH1F *hinclLi7_7dO6__78 = new TH1F("hinclLi7_7dO6__78","INCL",17,9.142857,86.85714);
   hinclLi7_7dO6__78->SetBinContent(0,0.4442795);
   hinclLi7_7dO6__78->SetBinContent(1,0.6135288);
   hinclLi7_7dO6__78->SetBinContent(2,1.87761);
   hinclLi7_7dO6__78->SetBinContent(3,4.024961);
   hinclLi7_7dO6__78->SetBinContent(4,5.458291);
   hinclLi7_7dO6__78->SetBinContent(5,6.537255);
   hinclLi7_7dO6__78->SetBinContent(6,7.092605);
   hinclLi7_7dO6__78->SetBinContent(7,6.521388);
   hinclLi7_7dO6__78->SetBinContent(8,5.225573);
   hinclLi7_7dO6__78->SetBinContent(9,3.898024);
   hinclLi7_7dO6__78->SetBinContent(10,2.015125);
   hinclLi7_7dO6__78->SetBinContent(11,0.7933562);
   hinclLi7_7dO6__78->SetBinContent(12,0.1480932);
   hinclLi7_7dO6__78->SetBinContent(13,0.03702329);
   hinclLi7_7dO6__78->SetBinContent(14,0.005289041);
   hinclLi7_7dO6__78->SetEntries(8450);
   hinclLi7_7dO6__78->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_7dO6__78->SetLineColor(ci);
   hinclLi7_7dO6__78->SetLineWidth(2);
   hinclLi7_7dO6__78->GetXaxis()->SetRange(0,18);
   hinclLi7_7dO6__78->GetXaxis()->SetLabelFont(42);
   hinclLi7_7dO6__78->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_7dO6__78->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_7dO6__78->GetXaxis()->SetTitleFont(42);
   hinclLi7_7dO6__78->GetYaxis()->SetLabelFont(42);
   hinclLi7_7dO6__78->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_7dO6__78->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_7dO6__78->GetYaxis()->SetTitleFont(42);
   hinclLi7_7dO6__78->GetZaxis()->SetLabelFont(42);
   hinclLi7_7dO6__78->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_7dO6__78->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_7dO6__78->GetZaxis()->SetTitleFont(42);
   hinclLi7_7dO6__78->Draw("histCsame");
   
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
   canvasLi7_5->Range(-26.33684,-4.985407,99.36,3.69897);
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
   
   TH1F *h1Li7_18__79 = new TH1F("h1Li7_18__79","",1,-3.36,99.36);
   h1Li7_18__79->SetMinimum(0.0004);
   h1Li7_18__79->SetMaximum(5000);
   h1Li7_18__79->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_18__79->SetLineColor(ci);
   h1Li7_18__79->GetXaxis()->SetRange(1,1);
   h1Li7_18__79->GetXaxis()->SetLabelFont(42);
   h1Li7_18__79->GetXaxis()->SetLabelSize(0.07);
   h1Li7_18__79->GetXaxis()->SetTitleSize(0.07);
   h1Li7_18__79->GetXaxis()->SetTitleFont(42);
   h1Li7_18__79->GetYaxis()->SetLabelFont(42);
   h1Li7_18__79->GetYaxis()->SetLabelSize(0.07);
   h1Li7_18__79->GetYaxis()->SetTitleSize(0.07);
   h1Li7_18__79->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_18__79->GetYaxis()->SetTitleFont(42);
   h1Li7_18__79->GetZaxis()->SetLabelFont(42);
   h1Li7_18__79->GetZaxis()->SetLabelSize(0.035);
   h1Li7_18__79->GetZaxis()->SetTitleSize(0.035);
   h1Li7_18__79->GetZaxis()->SetTitleFont(42);
   h1Li7_18__79->Draw("");
   
   TH1F *hbicLi7_18__80 = new TH1F("hbicLi7_18__80","BIC",15,9.142857,77.71429);
   hbicLi7_18__80->SetBinContent(0,0.9371554);
   hbicLi7_18__80->SetBinContent(1,0.2625846);
   hbicLi7_18__80->SetBinContent(2,0.133556);
   hbicLi7_18__80->SetBinContent(3,0.0226366);
   hbicLi7_18__80->SetBinContent(4,0.00226366);
   hbicLi7_18__80->SetBinContent(7,0.01810928);
   hbicLi7_18__80->SetBinContent(8,0.2580573);
   hbicLi7_18__80->SetBinContent(9,1.58909);
   hbicLi7_18__80->SetBinContent(10,3.207607);
   hbicLi7_18__80->SetBinContent(11,2.551145);
   hbicLi7_18__80->SetBinContent(12,0.7492716);
   hbicLi7_18__80->SetBinContent(13,0.1086557);
   hbicLi7_18__80->SetBinContent(14,0.0113183);
   hbicLi7_18__80->SetEntries(4352);
   hbicLi7_18__80->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi7_18__80->SetLineColor(ci);
   hbicLi7_18__80->SetLineWidth(2);
   hbicLi7_18__80->GetXaxis()->SetRange(0,16);
   hbicLi7_18__80->GetXaxis()->SetLabelFont(42);
   hbicLi7_18__80->GetXaxis()->SetLabelSize(0.035);
   hbicLi7_18__80->GetXaxis()->SetTitleSize(0.035);
   hbicLi7_18__80->GetXaxis()->SetTitleFont(42);
   hbicLi7_18__80->GetYaxis()->SetLabelFont(42);
   hbicLi7_18__80->GetYaxis()->SetLabelSize(0.035);
   hbicLi7_18__80->GetYaxis()->SetTitleSize(0.035);
   hbicLi7_18__80->GetYaxis()->SetTitleFont(42);
   hbicLi7_18__80->GetZaxis()->SetLabelFont(42);
   hbicLi7_18__80->GetZaxis()->SetLabelSize(0.035);
   hbicLi7_18__80->GetZaxis()->SetTitleSize(0.035);
   hbicLi7_18__80->GetZaxis()->SetTitleFont(42);
   hbicLi7_18__80->Draw("histCsame");
   
   TH1F *hinclLi7_18__81 = new TH1F("hinclLi7_18__81","INCL",15,9.142857,77.71429);
   hinclLi7_18__81->SetBinContent(0,0.4051952);
   hinclLi7_18__81->SetBinContent(1,0.2422117);
   hinclLi7_18__81->SetBinContent(2,0.4572594);
   hinclLi7_18__81->SetBinContent(3,0.5636514);
   hinclLi7_18__81->SetBinContent(4,0.5047963);
   hinclLi7_18__81->SetBinContent(5,0.3893496);
   hinclLi7_18__81->SetBinContent(6,0.1946748);
   hinclLi7_18__81->SetBinContent(7,0.1245013);
   hinclLi7_18__81->SetBinContent(8,0.06111883);
   hinclLi7_18__81->SetBinContent(9,0.01584562);
   hinclLi7_18__81->SetBinContent(10,0.01358196);
   hinclLi7_18__81->SetBinContent(11,0.00226366);
   hinclLi7_18__81->SetEntries(1314);
   hinclLi7_18__81->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_18__81->SetLineColor(ci);
   hinclLi7_18__81->SetLineWidth(2);
   hinclLi7_18__81->GetXaxis()->SetRange(0,16);
   hinclLi7_18__81->GetXaxis()->SetLabelFont(42);
   hinclLi7_18__81->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_18__81->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_18__81->GetXaxis()->SetTitleFont(42);
   hinclLi7_18__81->GetYaxis()->SetLabelFont(42);
   hinclLi7_18__81->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_18__81->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_18__81->GetYaxis()->SetTitleFont(42);
   hinclLi7_18__81->GetZaxis()->SetLabelFont(42);
   hinclLi7_18__81->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_18__81->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_18__81->GetZaxis()->SetTitleFont(42);
   hinclLi7_18__81->Draw("histCsame");
   
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
   entry=leg->AddEntry("hbicLi7_18","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   canvasLi7_2->Range(-3.36,-3.39794,99.36,3.69897);
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
   
   TH1F *h1Li7_4dO9__82 = new TH1F("h1Li7_4dO9__82","",1,-3.36,99.36);
   h1Li7_4dO9__82->SetMinimum(0.0004);
   h1Li7_4dO9__82->SetMaximum(5000);
   h1Li7_4dO9__82->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_4dO9__82->SetLineColor(ci);
   h1Li7_4dO9__82->GetXaxis()->SetRange(1,1);
   h1Li7_4dO9__82->GetXaxis()->SetLabelFont(42);
   h1Li7_4dO9__82->GetXaxis()->SetLabelSize(0.07);
   h1Li7_4dO9__82->GetXaxis()->SetTitleSize(0.07);
   h1Li7_4dO9__82->GetXaxis()->SetTitleFont(42);
   h1Li7_4dO9__82->GetYaxis()->SetLabelFont(42);
   h1Li7_4dO9__82->GetYaxis()->SetLabelSize(0.07);
   h1Li7_4dO9__82->GetYaxis()->SetTitleSize(0.07);
   h1Li7_4dO9__82->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_4dO9__82->GetYaxis()->SetTitleFont(42);
   h1Li7_4dO9__82->GetZaxis()->SetLabelFont(42);
   h1Li7_4dO9__82->GetZaxis()->SetLabelSize(0.035);
   h1Li7_4dO9__82->GetZaxis()->SetTitleSize(0.035);
   h1Li7_4dO9__82->GetZaxis()->SetTitleFont(42);
   h1Li7_4dO9__82->Draw("");
   
   TH1F *hbicLi7_4dO9__83 = new TH1F("hbicLi7_4dO9__83","BIC",17,9.142857,86.85714);
   hbicLi7_4dO9__83->SetBinContent(0,0.8290842);
   hbicLi7_4dO9__83->SetBinContent(1,0.2149478);
   hbicLi7_4dO9__83->SetBinContent(2,0.06141365);
   hbicLi7_4dO9__83->SetBinContent(8,0.03070682);
   hbicLi7_4dO9__83->SetBinContent(9,0.3377751);
   hbicLi7_4dO9__83->SetBinContent(10,7.860947);
   hbicLi7_4dO9__83->SetBinContent(11,33.83892);
   hbicLi7_4dO9__83->SetBinContent(12,39.24332);
   hbicLi7_4dO9__83->SetBinContent(13,15.69119);
   hbicLi7_4dO9__83->SetBinContent(14,1.688875);
   hbicLi7_4dO9__83->SetEntries(3250);
   hbicLi7_4dO9__83->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi7_4dO9__83->SetLineColor(ci);
   hbicLi7_4dO9__83->SetLineWidth(2);
   hbicLi7_4dO9__83->GetXaxis()->SetRange(0,18);
   hbicLi7_4dO9__83->GetXaxis()->SetLabelFont(42);
   hbicLi7_4dO9__83->GetXaxis()->SetLabelSize(0.035);
   hbicLi7_4dO9__83->GetXaxis()->SetTitleSize(0.035);
   hbicLi7_4dO9__83->GetXaxis()->SetTitleFont(42);
   hbicLi7_4dO9__83->GetYaxis()->SetLabelFont(42);
   hbicLi7_4dO9__83->GetYaxis()->SetLabelSize(0.035);
   hbicLi7_4dO9__83->GetYaxis()->SetTitleSize(0.035);
   hbicLi7_4dO9__83->GetYaxis()->SetTitleFont(42);
   hbicLi7_4dO9__83->GetZaxis()->SetLabelFont(42);
   hbicLi7_4dO9__83->GetZaxis()->SetLabelSize(0.035);
   hbicLi7_4dO9__83->GetZaxis()->SetTitleSize(0.035);
   hbicLi7_4dO9__83->GetZaxis()->SetTitleFont(42);
   hbicLi7_4dO9__83->Draw("histCsame");
   
   TH1F *hinclLi7_4dO9__84 = new TH1F("hinclLi7_4dO9__84","INCL",17,9.142857,86.85714);
   hinclLi7_4dO9__84->SetBinContent(0,0.4298955);
   hinclLi7_4dO9__84->SetBinContent(1,0.7062569);
   hinclLi7_4dO9__84->SetBinContent(2,2.272305);
   hinclLi7_4dO9__84->SetBinContent(3,4.882385);
   hinclLi7_4dO9__84->SetBinContent(4,7.277517);
   hinclLi7_4dO9__84->SetBinContent(5,9.795477);
   hinclLi7_4dO9__84->SetBinContent(6,12.52838);
   hinclLi7_4dO9__84->SetBinContent(7,12.83545);
   hinclLi7_4dO9__84->SetBinContent(8,12.83545);
   hinclLi7_4dO9__84->SetBinContent(9,11.73001);
   hinclLi7_4dO9__84->SetBinContent(10,7.799533);
   hinclLi7_4dO9__84->SetBinContent(11,3.86906);
   hinclLi7_4dO9__84->SetBinContent(12,0.9826184);
   hinclLi7_4dO9__84->SetBinContent(13,0.09212047);
   hinclLi7_4dO9__84->SetEntries(2867);
   hinclLi7_4dO9__84->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_4dO9__84->SetLineColor(ci);
   hinclLi7_4dO9__84->SetLineWidth(2);
   hinclLi7_4dO9__84->GetXaxis()->SetRange(0,18);
   hinclLi7_4dO9__84->GetXaxis()->SetLabelFont(42);
   hinclLi7_4dO9__84->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_4dO9__84->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_4dO9__84->GetXaxis()->SetTitleFont(42);
   hinclLi7_4dO9__84->GetYaxis()->SetLabelFont(42);
   hinclLi7_4dO9__84->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_4dO9__84->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_4dO9__84->GetYaxis()->SetTitleFont(42);
   hinclLi7_4dO9__84->GetZaxis()->SetLabelFont(42);
   hinclLi7_4dO9__84->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_4dO9__84->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_4dO9__84->GetZaxis()->SetTitleFont(42);
   hinclLi7_4dO9__84->Draw("histCsame");
   
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
   canvasLi7_4->Range(-3.36,-3.39794,99.36,3.69897);
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
   
   TH1F *h1Li7_14dO4__85 = new TH1F("h1Li7_14dO4__85","",1,-3.36,99.36);
   h1Li7_14dO4__85->SetMinimum(0.0004);
   h1Li7_14dO4__85->SetMaximum(5000);
   h1Li7_14dO4__85->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_14dO4__85->SetLineColor(ci);
   h1Li7_14dO4__85->GetXaxis()->SetRange(1,1);
   h1Li7_14dO4__85->GetXaxis()->SetLabelFont(42);
   h1Li7_14dO4__85->GetXaxis()->SetLabelSize(0.07);
   h1Li7_14dO4__85->GetXaxis()->SetTitleSize(0.07);
   h1Li7_14dO4__85->GetXaxis()->SetTitleFont(42);
   h1Li7_14dO4__85->GetYaxis()->SetLabelFont(42);
   h1Li7_14dO4__85->GetYaxis()->SetLabelSize(0.07);
   h1Li7_14dO4__85->GetYaxis()->SetTitleSize(0.07);
   h1Li7_14dO4__85->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_14dO4__85->GetYaxis()->SetTitleFont(42);
   h1Li7_14dO4__85->GetZaxis()->SetLabelFont(42);
   h1Li7_14dO4__85->GetZaxis()->SetLabelSize(0.035);
   h1Li7_14dO4__85->GetZaxis()->SetTitleSize(0.035);
   h1Li7_14dO4__85->GetZaxis()->SetTitleFont(42);
   h1Li7_14dO4__85->Draw("");
   
   TH1F *hbicLi7_14dO4__86 = new TH1F("hbicLi7_14dO4__86","BIC",17,9.142857,86.85714);
   hbicLi7_14dO4__86->SetBinContent(0,0.8663357);
   hbicLi7_14dO4__86->SetBinContent(1,0.2447117);
   hbicLi7_14dO4__86->SetBinContent(2,0.1378261);
   hbicLi7_14dO4__86->SetBinContent(3,0.01687667);
   hbicLi7_14dO4__86->SetBinContent(4,0.002812778);
   hbicLi7_14dO4__86->SetBinContent(7,0.01968945);
   hbicLi7_14dO4__86->SetBinContent(8,0.2109584);
   hbicLi7_14dO4__86->SetBinContent(9,2.216469);
   hbicLi7_14dO4__86->SetBinContent(10,6.16561);
   hbicLi7_14dO4__86->SetBinContent(11,6.193738);
   hbicLi7_14dO4__86->SetBinContent(12,2.44993);
   hbicLi7_14dO4__86->SetBinContent(13,0.2756523);
   hbicLi7_14dO4__86->SetBinContent(14,0.01125111);
   hbicLi7_14dO4__86->SetEntries(6688);
   hbicLi7_14dO4__86->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi7_14dO4__86->SetLineColor(ci);
   hbicLi7_14dO4__86->SetLineWidth(2);
   hbicLi7_14dO4__86->GetXaxis()->SetRange(0,18);
   hbicLi7_14dO4__86->GetXaxis()->SetLabelFont(42);
   hbicLi7_14dO4__86->GetXaxis()->SetLabelSize(0.035);
   hbicLi7_14dO4__86->GetXaxis()->SetTitleSize(0.035);
   hbicLi7_14dO4__86->GetXaxis()->SetTitleFont(42);
   hbicLi7_14dO4__86->GetYaxis()->SetLabelFont(42);
   hbicLi7_14dO4__86->GetYaxis()->SetLabelSize(0.035);
   hbicLi7_14dO4__86->GetYaxis()->SetTitleSize(0.035);
   hbicLi7_14dO4__86->GetYaxis()->SetTitleFont(42);
   hbicLi7_14dO4__86->GetZaxis()->SetLabelFont(42);
   hbicLi7_14dO4__86->GetZaxis()->SetLabelSize(0.035);
   hbicLi7_14dO4__86->GetZaxis()->SetTitleSize(0.035);
   hbicLi7_14dO4__86->GetZaxis()->SetTitleFont(42);
   hbicLi7_14dO4__86->Draw("histCsame");
   
   TH1F *hinclLi7_14dO4__87 = new TH1F("hinclLi7_14dO4__87","INCL",17,9.142857,86.85714);
   hinclLi7_14dO4__87->SetBinContent(0,0.3544101);
   hinclLi7_14dO4__87->SetBinContent(1,0.3487845);
   hinclLi7_14dO4__87->SetBinContent(2,0.8635229);
   hinclLi7_14dO4__87->SetBinContent(3,1.313568);
   hinclLi7_14dO4__87->SetBinContent(4,1.355759);
   hinclLi7_14dO4__87->SetBinContent(5,1.212307);
   hinclLi7_14dO4__87->SetBinContent(6,0.7988291);
   hinclLi7_14dO4__87->SetBinContent(7,0.570994);
   hinclLi7_14dO4__87->SetBinContent(8,0.3262823);
   hinclLi7_14dO4__87->SetBinContent(9,0.1406389);
   hinclLi7_14dO4__87->SetBinContent(10,0.06188112);
   hinclLi7_14dO4__87->SetBinContent(11,0.01125111);
   hinclLi7_14dO4__87->SetBinContent(12,0.002812778);
   hinclLi7_14dO4__87->SetBinContent(13,0.002812778);
   hinclLi7_14dO4__87->SetEntries(2618);
   hinclLi7_14dO4__87->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_14dO4__87->SetLineColor(ci);
   hinclLi7_14dO4__87->SetLineWidth(2);
   hinclLi7_14dO4__87->GetXaxis()->SetRange(0,18);
   hinclLi7_14dO4__87->GetXaxis()->SetLabelFont(42);
   hinclLi7_14dO4__87->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_14dO4__87->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_14dO4__87->GetXaxis()->SetTitleFont(42);
   hinclLi7_14dO4__87->GetYaxis()->SetLabelFont(42);
   hinclLi7_14dO4__87->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_14dO4__87->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_14dO4__87->GetYaxis()->SetTitleFont(42);
   hinclLi7_14dO4__87->GetZaxis()->SetLabelFont(42);
   hinclLi7_14dO4__87->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_14dO4__87->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_14dO4__87->GetZaxis()->SetTitleFont(42);
   hinclLi7_14dO4__87->Draw("histCsame");
   
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
   canvasLi7_6->Range(-3.36,-4.985407,99.36,3.69897);
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
   
   TH1F *h1Li7_21dO8__88 = new TH1F("h1Li7_21dO8__88","",1,-3.36,99.36);
   h1Li7_21dO8__88->SetMinimum(0.0004);
   h1Li7_21dO8__88->SetMaximum(5000);
   h1Li7_21dO8__88->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li7_21dO8__88->SetLineColor(ci);
   h1Li7_21dO8__88->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Li7_21dO8__88->GetXaxis()->SetRange(1,1);
   h1Li7_21dO8__88->GetXaxis()->SetLabelFont(42);
   h1Li7_21dO8__88->GetXaxis()->SetLabelSize(0.07);
   h1Li7_21dO8__88->GetXaxis()->SetTitleSize(0.07);
   h1Li7_21dO8__88->GetXaxis()->SetTitleFont(42);
   h1Li7_21dO8__88->GetYaxis()->SetLabelFont(42);
   h1Li7_21dO8__88->GetYaxis()->SetLabelSize(0.07);
   h1Li7_21dO8__88->GetYaxis()->SetTitleSize(0.07);
   h1Li7_21dO8__88->GetYaxis()->SetTitleOffset(1.1);
   h1Li7_21dO8__88->GetYaxis()->SetTitleFont(42);
   h1Li7_21dO8__88->GetZaxis()->SetLabelFont(42);
   h1Li7_21dO8__88->GetZaxis()->SetLabelSize(0.035);
   h1Li7_21dO8__88->GetZaxis()->SetTitleSize(0.035);
   h1Li7_21dO8__88->GetZaxis()->SetTitleFont(42);
   h1Li7_21dO8__88->Draw("");
   
   TH1F *hbicLi7_21dO8__89 = new TH1F("hbicLi7_21dO8__89","BIC",13,9.142857,68.57143);
   hbicLi7_21dO8__89->SetBinContent(0,1.009611);
   hbicLi7_21dO8__89->SetBinContent(1,0.3428157);
   hbicLi7_21dO8__89->SetBinContent(2,0.1337358);
   hbicLi7_21dO8__89->SetBinContent(3,0.02448684);
   hbicLi7_21dO8__89->SetBinContent(4,0.001883603);
   hbicLi7_21dO8__89->SetBinContent(6,0.001883603);
   hbicLi7_21dO8__89->SetBinContent(7,0.01318522);
   hbicLi7_21dO8__89->SetBinContent(8,0.1525718);
   hbicLi7_21dO8__89->SetBinContent(9,0.7308379);
   hbicLi7_21dO8__89->SetBinContent(10,1.26013);
   hbicLi7_21dO8__89->SetBinContent(11,0.7534412);
   hbicLi7_21dO8__89->SetBinContent(12,0.1940111);
   hbicLi7_21dO8__89->SetBinContent(13,0.03013765);
   hbicLi7_21dO8__89->SetBinContent(14,0.001883603);
   hbicLi7_21dO8__89->SetEntries(2469);
   hbicLi7_21dO8__89->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi7_21dO8__89->SetLineColor(ci);
   hbicLi7_21dO8__89->SetLineWidth(2);
   hbicLi7_21dO8__89->GetXaxis()->SetRange(0,14);
   hbicLi7_21dO8__89->GetXaxis()->SetLabelFont(42);
   hbicLi7_21dO8__89->GetXaxis()->SetLabelSize(0.035);
   hbicLi7_21dO8__89->GetXaxis()->SetTitleSize(0.035);
   hbicLi7_21dO8__89->GetXaxis()->SetTitleFont(42);
   hbicLi7_21dO8__89->GetYaxis()->SetLabelFont(42);
   hbicLi7_21dO8__89->GetYaxis()->SetLabelSize(0.035);
   hbicLi7_21dO8__89->GetYaxis()->SetTitleSize(0.035);
   hbicLi7_21dO8__89->GetYaxis()->SetTitleFont(42);
   hbicLi7_21dO8__89->GetZaxis()->SetLabelFont(42);
   hbicLi7_21dO8__89->GetZaxis()->SetLabelSize(0.035);
   hbicLi7_21dO8__89->GetZaxis()->SetTitleSize(0.035);
   hbicLi7_21dO8__89->GetZaxis()->SetTitleFont(42);
   hbicLi7_21dO8__89->Draw("histCsame");
   
   TH1F *hinclLi7_21dO8__90 = new TH1F("hinclLi7_21dO8__90","INCL",13,9.142857,68.57143);
   hinclLi7_21dO8__90->SetBinContent(0,0.3804878);
   hinclLi7_21dO8__90->SetBinContent(1,0.1167834);
   hinclLi7_21dO8__90->SetBinContent(2,0.275006);
   hinclLi7_21dO8__90->SetBinContent(3,0.2147307);
   hinclLi7_21dO8__90->SetBinContent(4,0.1751751);
   hinclLi7_21dO8__90->SetBinContent(5,0.09983096);
   hinclLi7_21dO8__90->SetBinContent(6,0.04897368);
   hinclLi7_21dO8__90->SetBinContent(7,0.01506882);
   hinclLi7_21dO8__90->SetBinContent(8,0.007534412);
   hinclLi7_21dO8__90->SetBinContent(9,0.001883603);
   hinclLi7_21dO8__90->SetBinContent(11,0.001883603);
   hinclLi7_21dO8__90->SetEntries(710);
   hinclLi7_21dO8__90->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi7_21dO8__90->SetLineColor(ci);
   hinclLi7_21dO8__90->SetLineWidth(2);
   hinclLi7_21dO8__90->GetXaxis()->SetRange(0,14);
   hinclLi7_21dO8__90->GetXaxis()->SetLabelFont(42);
   hinclLi7_21dO8__90->GetXaxis()->SetLabelSize(0.035);
   hinclLi7_21dO8__90->GetXaxis()->SetTitleSize(0.035);
   hinclLi7_21dO8__90->GetXaxis()->SetTitleFont(42);
   hinclLi7_21dO8__90->GetYaxis()->SetLabelFont(42);
   hinclLi7_21dO8__90->GetYaxis()->SetLabelSize(0.035);
   hinclLi7_21dO8__90->GetYaxis()->SetTitleSize(0.035);
   hinclLi7_21dO8__90->GetYaxis()->SetTitleFont(42);
   hinclLi7_21dO8__90->GetZaxis()->SetLabelFont(42);
   hinclLi7_21dO8__90->GetZaxis()->SetLabelSize(0.035);
   hinclLi7_21dO8__90->GetZaxis()->SetTitleSize(0.035);
   hinclLi7_21dO8__90->GetZaxis()->SetTitleFont(42);
   hinclLi7_21dO8__90->Draw("histCsame");
   
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
