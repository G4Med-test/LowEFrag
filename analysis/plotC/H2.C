void H2()
{
//=========Macro generated from canvas: canvasH2/canvasH2
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
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
   canvasH2_1->Range(-45.38487,-3.39794,160.965,2.69897);
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
   
   TH1F *h1H2_11dO4__9 = new TH1F("h1H2_11dO4__9","^{12}C + ^{nat}C #rightarrow ^{2}H at 62 MeV/n",1,-7.665,160.965);
   h1H2_11dO4__9->SetMinimum(0.0004);
   h1H2_11dO4__9->SetMaximum(500);
   h1H2_11dO4__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1H2_11dO4__9->SetLineColor(ci);
   h1H2_11dO4__9->GetXaxis()->SetRange(1,1);
   h1H2_11dO4__9->GetXaxis()->SetLabelFont(42);
   h1H2_11dO4__9->GetXaxis()->SetLabelSize(0.07);
   h1H2_11dO4__9->GetXaxis()->SetTitleSize(0.07);
   h1H2_11dO4__9->GetXaxis()->SetTitleFont(42);
   h1H2_11dO4__9->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1H2_11dO4__9->GetYaxis()->SetLabelFont(42);
   h1H2_11dO4__9->GetYaxis()->SetLabelSize(0.08);
   h1H2_11dO4__9->GetYaxis()->SetTitleSize(0.07);
   h1H2_11dO4__9->GetYaxis()->SetTitleOffset(1.1);
   h1H2_11dO4__9->GetYaxis()->SetTitleFont(42);
   h1H2_11dO4__9->GetZaxis()->SetLabelFont(42);
   h1H2_11dO4__9->GetZaxis()->SetLabelSize(0.035);
   h1H2_11dO4__9->GetZaxis()->SetTitleSize(0.035);
   h1H2_11dO4__9->GetZaxis()->SetTitleFont(42);
   h1H2_11dO4__9->Draw("");
   
   TPaveText *pt = new TPaveText(0.2838,0.9315033,0.7162,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{2}H at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclH2_11dO4__10 = new TH1F("hinclH2_11dO4__10","INCL",19,7,140);
   hinclH2_11dO4__10->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_11dO4__10->SetLineColor(ci);
   hinclH2_11dO4__10->SetLineWidth(2);
   hinclH2_11dO4__10->GetXaxis()->SetRange(0,20);
   hinclH2_11dO4__10->GetXaxis()->SetLabelFont(42);
   hinclH2_11dO4__10->GetXaxis()->SetLabelSize(0.035);
   hinclH2_11dO4__10->GetXaxis()->SetTitleSize(0.035);
   hinclH2_11dO4__10->GetXaxis()->SetTitleFont(42);
   hinclH2_11dO4__10->GetYaxis()->SetLabelFont(42);
   hinclH2_11dO4__10->GetYaxis()->SetLabelSize(0.035);
   hinclH2_11dO4__10->GetYaxis()->SetTitleSize(0.035);
   hinclH2_11dO4__10->GetYaxis()->SetTitleFont(42);
   hinclH2_11dO4__10->GetZaxis()->SetLabelFont(42);
   hinclH2_11dO4__10->GetZaxis()->SetLabelSize(0.035);
   hinclH2_11dO4__10->GetZaxis()->SetTitleSize(0.035);
   hinclH2_11dO4__10->GetZaxis()->SetTitleFont(42);
   hinclH2_11dO4__10->Draw("histCsame");
   
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
   canvasH2_3->Range(-45.38487,-4.761723,160.965,2.69897);
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
   
   TH1F *h1H2_17dO2__11 = new TH1F("h1H2_17dO2__11","",1,-7.665,160.965);
   h1H2_17dO2__11->SetMinimum(0.0004);
   h1H2_17dO2__11->SetMaximum(500);
   h1H2_17dO2__11->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H2_17dO2__11->SetLineColor(ci);
   h1H2_17dO2__11->GetXaxis()->SetRange(1,1);
   h1H2_17dO2__11->GetXaxis()->SetLabelFont(42);
   h1H2_17dO2__11->GetXaxis()->SetLabelSize(0.07);
   h1H2_17dO2__11->GetXaxis()->SetTitleSize(0.07);
   h1H2_17dO2__11->GetXaxis()->SetTitleFont(42);
   h1H2_17dO2__11->GetYaxis()->SetLabelFont(42);
   h1H2_17dO2__11->GetYaxis()->SetLabelSize(0.07);
   h1H2_17dO2__11->GetYaxis()->SetTitleSize(0.07);
   h1H2_17dO2__11->GetYaxis()->SetTitleOffset(1.1);
   h1H2_17dO2__11->GetYaxis()->SetTitleFont(42);
   h1H2_17dO2__11->GetZaxis()->SetLabelFont(42);
   h1H2_17dO2__11->GetZaxis()->SetLabelSize(0.035);
   h1H2_17dO2__11->GetZaxis()->SetTitleSize(0.035);
   h1H2_17dO2__11->GetZaxis()->SetTitleFont(42);
   h1H2_17dO2__11->Draw("");
   
   TH1F *hinclH2_17dO2__12 = new TH1F("hinclH2_17dO2__12","INCL",18,0,126);
   hinclH2_17dO2__12->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_17dO2__12->SetLineColor(ci);
   hinclH2_17dO2__12->SetLineWidth(2);
   hinclH2_17dO2__12->GetXaxis()->SetRange(0,19);
   hinclH2_17dO2__12->GetXaxis()->SetLabelFont(42);
   hinclH2_17dO2__12->GetXaxis()->SetLabelSize(0.035);
   hinclH2_17dO2__12->GetXaxis()->SetTitleSize(0.035);
   hinclH2_17dO2__12->GetXaxis()->SetTitleFont(42);
   hinclH2_17dO2__12->GetYaxis()->SetLabelFont(42);
   hinclH2_17dO2__12->GetYaxis()->SetLabelSize(0.035);
   hinclH2_17dO2__12->GetYaxis()->SetTitleSize(0.035);
   hinclH2_17dO2__12->GetYaxis()->SetTitleFont(42);
   hinclH2_17dO2__12->GetZaxis()->SetLabelFont(42);
   hinclH2_17dO2__12->GetZaxis()->SetLabelSize(0.035);
   hinclH2_17dO2__12->GetZaxis()->SetTitleSize(0.035);
   hinclH2_17dO2__12->GetZaxis()->SetTitleFont(42);
   hinclH2_17dO2__12->Draw("histCsame");
   
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
   canvasH2_2->Range(-7.665,-3.39794,160.965,2.69897);
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
   
   TH1F *h1H2_14dO4__13 = new TH1F("h1H2_14dO4__13","",1,-7.665,160.965);
   h1H2_14dO4__13->SetMinimum(0.0004);
   h1H2_14dO4__13->SetMaximum(500);
   h1H2_14dO4__13->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H2_14dO4__13->SetLineColor(ci);
   h1H2_14dO4__13->GetXaxis()->SetRange(1,1);
   h1H2_14dO4__13->GetXaxis()->SetLabelFont(42);
   h1H2_14dO4__13->GetXaxis()->SetLabelSize(0.07);
   h1H2_14dO4__13->GetXaxis()->SetTitleSize(0.07);
   h1H2_14dO4__13->GetXaxis()->SetTitleFont(42);
   h1H2_14dO4__13->GetYaxis()->SetLabelFont(42);
   h1H2_14dO4__13->GetYaxis()->SetLabelSize(0.07);
   h1H2_14dO4__13->GetYaxis()->SetTitleSize(0.07);
   h1H2_14dO4__13->GetYaxis()->SetTitleOffset(1.1);
   h1H2_14dO4__13->GetYaxis()->SetTitleFont(42);
   h1H2_14dO4__13->GetZaxis()->SetLabelFont(42);
   h1H2_14dO4__13->GetZaxis()->SetLabelSize(0.035);
   h1H2_14dO4__13->GetZaxis()->SetTitleSize(0.035);
   h1H2_14dO4__13->GetZaxis()->SetTitleFont(42);
   h1H2_14dO4__13->Draw("");
   
   TH1F *hinclH2_14dO4__14 = new TH1F("hinclH2_14dO4__14","INCL",18,7,133);
   hinclH2_14dO4__14->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_14dO4__14->SetLineColor(ci);
   hinclH2_14dO4__14->SetLineWidth(2);
   hinclH2_14dO4__14->GetXaxis()->SetRange(0,19);
   hinclH2_14dO4__14->GetXaxis()->SetLabelFont(42);
   hinclH2_14dO4__14->GetXaxis()->SetLabelSize(0.035);
   hinclH2_14dO4__14->GetXaxis()->SetTitleSize(0.035);
   hinclH2_14dO4__14->GetXaxis()->SetTitleFont(42);
   hinclH2_14dO4__14->GetYaxis()->SetLabelFont(42);
   hinclH2_14dO4__14->GetYaxis()->SetLabelSize(0.035);
   hinclH2_14dO4__14->GetYaxis()->SetTitleSize(0.035);
   hinclH2_14dO4__14->GetYaxis()->SetTitleFont(42);
   hinclH2_14dO4__14->GetZaxis()->SetLabelFont(42);
   hinclH2_14dO4__14->GetZaxis()->SetLabelSize(0.035);
   hinclH2_14dO4__14->GetZaxis()->SetTitleSize(0.035);
   hinclH2_14dO4__14->GetZaxis()->SetTitleFont(42);
   hinclH2_14dO4__14->Draw("histCsame");
   
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
   canvasH2_4->Range(-7.665,-4.761723,160.965,2.69897);
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
   
   TH1F *h1H2_19dO4__15 = new TH1F("h1H2_19dO4__15","",1,-7.665,160.965);
   h1H2_19dO4__15->SetMinimum(0.0004);
   h1H2_19dO4__15->SetMaximum(500);
   h1H2_19dO4__15->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H2_19dO4__15->SetLineColor(ci);
   h1H2_19dO4__15->GetXaxis()->SetTitle("E  [MeV/n]");
   h1H2_19dO4__15->GetXaxis()->SetRange(1,1);
   h1H2_19dO4__15->GetXaxis()->SetLabelFont(42);
   h1H2_19dO4__15->GetXaxis()->SetLabelSize(0.07);
   h1H2_19dO4__15->GetXaxis()->SetTitleSize(0.07);
   h1H2_19dO4__15->GetXaxis()->SetTitleFont(42);
   h1H2_19dO4__15->GetYaxis()->SetLabelFont(42);
   h1H2_19dO4__15->GetYaxis()->SetLabelSize(0.07);
   h1H2_19dO4__15->GetYaxis()->SetTitleSize(0.07);
   h1H2_19dO4__15->GetYaxis()->SetTitleOffset(1.1);
   h1H2_19dO4__15->GetYaxis()->SetTitleFont(42);
   h1H2_19dO4__15->GetZaxis()->SetLabelFont(42);
   h1H2_19dO4__15->GetZaxis()->SetLabelSize(0.035);
   h1H2_19dO4__15->GetZaxis()->SetTitleSize(0.035);
   h1H2_19dO4__15->GetZaxis()->SetTitleFont(42);
   h1H2_19dO4__15->Draw("");
   
   TH1F *hinclH2_19dO4__16 = new TH1F("hinclH2_19dO4__16","INCL",18,0,126);
   hinclH2_19dO4__16->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH2_19dO4__16->SetLineColor(ci);
   hinclH2_19dO4__16->SetLineWidth(2);
   hinclH2_19dO4__16->GetXaxis()->SetRange(0,19);
   hinclH2_19dO4__16->GetXaxis()->SetLabelFont(42);
   hinclH2_19dO4__16->GetXaxis()->SetLabelSize(0.035);
   hinclH2_19dO4__16->GetXaxis()->SetTitleSize(0.035);
   hinclH2_19dO4__16->GetXaxis()->SetTitleFont(42);
   hinclH2_19dO4__16->GetYaxis()->SetLabelFont(42);
   hinclH2_19dO4__16->GetYaxis()->SetLabelSize(0.035);
   hinclH2_19dO4__16->GetYaxis()->SetTitleSize(0.035);
   hinclH2_19dO4__16->GetYaxis()->SetTitleFont(42);
   hinclH2_19dO4__16->GetZaxis()->SetLabelFont(42);
   hinclH2_19dO4__16->GetZaxis()->SetLabelSize(0.035);
   hinclH2_19dO4__16->GetZaxis()->SetTitleSize(0.035);
   hinclH2_19dO4__16->GetZaxis()->SetTitleFont(42);
   hinclH2_19dO4__16->Draw("histCsame");
   
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
