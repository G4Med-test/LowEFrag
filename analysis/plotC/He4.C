void He4()
{
//=========Macro generated from canvas: canvasHe4/canvasHe4
//=========  (Sat Dec 15 18:51:46 2018) by ROOT version6.06/06
   TCanvas *canvasHe4 = new TCanvas("canvasHe4", "canvasHe4",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasHe4->Range(0,0,1,1);
   canvasHe4->SetFillColor(0);
   canvasHe4->SetBorderMode(0);
   canvasHe4->SetBorderSize(2);
   canvasHe4->SetRightMargin(0.04957356);
   canvasHe4->SetTopMargin(0.03208003);
   canvasHe4->SetBottomMargin(0.0609319);
   canvasHe4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasHe4_1
   TPad *canvasHe4_1 = new TPad("canvasHe4_1", "canvasHe4_1",0,0.6655906,0.5209121,0.96792);
   canvasHe4_1->Draw();
   canvasHe4_1->cd();
   canvasHe4_1->Range(-32.41776,-3.39794,114.975,2.69897);
   canvasHe4_1->SetFillColor(0);
   canvasHe4_1->SetBorderMode(0);
   canvasHe4_1->SetBorderSize(2);
   canvasHe4_1->SetLogy();
   canvasHe4_1->SetLeftMargin(0.1827957);
   canvasHe4_1->SetRightMargin(0);
   canvasHe4_1->SetTopMargin(0);
   canvasHe4_1->SetBottomMargin(0);
   canvasHe4_1->SetFrameBorderMode(0);
   canvasHe4_1->SetFrameBorderMode(0);
   
   TH1F *h1He4_2dO2__25 = new TH1F("h1He4_2dO2__25","^{12}C + ^{nat}C #rightarrow ^{4}He at 62 MeV/n",1,-5.475,114.975);
   h1He4_2dO2__25->SetMinimum(0.0004);
   h1He4_2dO2__25->SetMaximum(500);
   h1He4_2dO2__25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1He4_2dO2__25->SetLineColor(ci);
   h1He4_2dO2__25->GetXaxis()->SetRange(1,1);
   h1He4_2dO2__25->GetXaxis()->SetLabelFont(42);
   h1He4_2dO2__25->GetXaxis()->SetLabelSize(0.07);
   h1He4_2dO2__25->GetXaxis()->SetTitleSize(0.07);
   h1He4_2dO2__25->GetXaxis()->SetTitleFont(42);
   h1He4_2dO2__25->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1He4_2dO2__25->GetYaxis()->SetLabelFont(42);
   h1He4_2dO2__25->GetYaxis()->SetLabelSize(0.07);
   h1He4_2dO2__25->GetYaxis()->SetTitleSize(0.07);
   h1He4_2dO2__25->GetYaxis()->SetTitleOffset(1.1);
   h1He4_2dO2__25->GetYaxis()->SetTitleFont(42);
   h1He4_2dO2__25->GetZaxis()->SetLabelFont(42);
   h1He4_2dO2__25->GetZaxis()->SetLabelSize(0.035);
   h1He4_2dO2__25->GetZaxis()->SetTitleSize(0.035);
   h1He4_2dO2__25->GetZaxis()->SetTitleFont(42);
   h1He4_2dO2__25->Draw("");
   
   TPaveText *pt = new TPaveText(0.2596831,0.9312746,0.7403169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{4}He at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclHe4_2dO2__26 = new TH1F("hinclHe4_2dO2__26","INCL",19,5,100);
   hinclHe4_2dO2__26->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_2dO2__26->SetLineColor(ci);
   hinclHe4_2dO2__26->SetLineWidth(2);
   hinclHe4_2dO2__26->GetXaxis()->SetRange(0,20);
   hinclHe4_2dO2__26->GetXaxis()->SetLabelFont(42);
   hinclHe4_2dO2__26->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_2dO2__26->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_2dO2__26->GetXaxis()->SetTitleFont(42);
   hinclHe4_2dO2__26->GetYaxis()->SetLabelFont(42);
   hinclHe4_2dO2__26->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_2dO2__26->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_2dO2__26->GetYaxis()->SetTitleFont(42);
   hinclHe4_2dO2__26->GetZaxis()->SetLabelFont(42);
   hinclHe4_2dO2__26->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_2dO2__26->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_2dO2__26->GetZaxis()->SetTitleFont(42);
   hinclHe4_2dO2__26->Draw("histCsame");
   
   Double_t Graph0_fx1013[19] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t Graph0_fy1013[19] = {
   5,
   5.2,
   6.5,
   9,
   11,
   15,
   24,
   32,
   53,
   72,
   93,
   107,
   66,
   32,
   17,
   8,
   4.4,
   1.5,
   0.8};
   Double_t Graph0_fex1013[19] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1013[19] = {
   0.9,
   0.9,
   0.9,
   1,
   1,
   2,
   3,
   3,
   5,
   7,
   9,
   10,
   6,
   3,
   2,
   1,
   0.8,
   0.4,
   0.3};
   TGraphErrors *gre = new TGraphErrors(19,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{4}He at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","^{12}C + ^{nat}C #rightarrow ^{4}He at 62 MeV/n",100,0,109.5);
   Graph_Graph1013->SetMinimum(0.45);
   Graph_Graph1013->SetMaximum(128.65);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
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
   canvasHe4_1->Modified();
   canvasHe4->cd();
  
// ------------>Primitives in pad: canvasHe4_3
   TPad *canvasHe4_3 = new TPad("canvasHe4_3", "canvasHe4_3",0,0.3632613,0.5209121,0.6655906);
   canvasHe4_3->Draw();
   canvasHe4_3->cd();
   canvasHe4_3->Range(-32.41776,-3.39794,114.975,2.69897);
   canvasHe4_3->SetFillColor(0);
   canvasHe4_3->SetBorderMode(0);
   canvasHe4_3->SetBorderSize(2);
   canvasHe4_3->SetLogy();
   canvasHe4_3->SetLeftMargin(0.1827957);
   canvasHe4_3->SetRightMargin(0);
   canvasHe4_3->SetTopMargin(0);
   canvasHe4_3->SetBottomMargin(0);
   canvasHe4_3->SetFrameBorderMode(0);
   canvasHe4_3->SetFrameBorderMode(0);
   
   TH1F *h1He4_7dO6__27 = new TH1F("h1He4_7dO6__27","",1,-5.475,114.975);
   h1He4_7dO6__27->SetMinimum(0.0004);
   h1He4_7dO6__27->SetMaximum(500);
   h1He4_7dO6__27->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_7dO6__27->SetLineColor(ci);
   h1He4_7dO6__27->GetXaxis()->SetRange(1,1);
   h1He4_7dO6__27->GetXaxis()->SetLabelFont(42);
   h1He4_7dO6__27->GetXaxis()->SetLabelSize(0.07);
   h1He4_7dO6__27->GetXaxis()->SetTitleSize(0.07);
   h1He4_7dO6__27->GetXaxis()->SetTitleFont(42);
   h1He4_7dO6__27->GetYaxis()->SetLabelFont(42);
   h1He4_7dO6__27->GetYaxis()->SetLabelSize(0.07);
   h1He4_7dO6__27->GetYaxis()->SetTitleSize(0.07);
   h1He4_7dO6__27->GetYaxis()->SetTitleOffset(1.1);
   h1He4_7dO6__27->GetYaxis()->SetTitleFont(42);
   h1He4_7dO6__27->GetZaxis()->SetLabelFont(42);
   h1He4_7dO6__27->GetZaxis()->SetLabelSize(0.035);
   h1He4_7dO6__27->GetZaxis()->SetTitleSize(0.035);
   h1He4_7dO6__27->GetZaxis()->SetTitleFont(42);
   h1He4_7dO6__27->Draw("");
   
   TH1F *hinclHe4_7dO6__28 = new TH1F("hinclHe4_7dO6__28","INCL",19,5,100);
   hinclHe4_7dO6__28->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_7dO6__28->SetLineColor(ci);
   hinclHe4_7dO6__28->SetLineWidth(2);
   hinclHe4_7dO6__28->GetXaxis()->SetRange(0,20);
   hinclHe4_7dO6__28->GetXaxis()->SetLabelFont(42);
   hinclHe4_7dO6__28->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_7dO6__28->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_7dO6__28->GetXaxis()->SetTitleFont(42);
   hinclHe4_7dO6__28->GetYaxis()->SetLabelFont(42);
   hinclHe4_7dO6__28->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_7dO6__28->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_7dO6__28->GetYaxis()->SetTitleFont(42);
   hinclHe4_7dO6__28->GetZaxis()->SetLabelFont(42);
   hinclHe4_7dO6__28->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_7dO6__28->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_7dO6__28->GetZaxis()->SetTitleFont(42);
   hinclHe4_7dO6__28->Draw("histCsame");
   
   Double_t Graph0_fx1014[19] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t Graph0_fy1014[19] = {
   3.2,
   3.7,
   5,
   5.7,
   7.2,
   10.3,
   14,
   20,
   27,
   33,
   35,
   27,
   16,
   7.8,
   3.3,
   1.2,
   0.43,
   0.21,
   0.11};
   Double_t Graph0_fex1014[19] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1014[19] = {
   0.3,
   0.3,
   0.4,
   0.5,
   0.6,
   0.9,
   1,
   2,
   2,
   3,
   3,
   2,
   1,
   0.7,
   0.3,
   0.1,
   0.06,
   0.04,
   0.03};
   gre = new TGraphErrors(19,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,0,109.5);
   Graph_Graph1014->SetMinimum(0.072);
   Graph_Graph1014->SetMaximum(41.792);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
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
   canvasHe4_3->Modified();
   canvasHe4->cd();
  
// ------------>Primitives in pad: canvasHe4_5
   TPad *canvasHe4_5 = new TPad("canvasHe4_5", "canvasHe4_5",0,0,0.5209121,0.3632613);
   canvasHe4_5->Draw();
   canvasHe4_5->cd();
   canvasHe4_5->Range(-32.41776,-4.761723,114.975,2.69897);
   canvasHe4_5->SetFillColor(0);
   canvasHe4_5->SetBorderMode(0);
   canvasHe4_5->SetBorderSize(2);
   canvasHe4_5->SetLogy();
   canvasHe4_5->SetLeftMargin(0.1827957);
   canvasHe4_5->SetRightMargin(0);
   canvasHe4_5->SetTopMargin(0);
   canvasHe4_5->SetBottomMargin(0.1827957);
   canvasHe4_5->SetFrameBorderMode(0);
   canvasHe4_5->SetFrameBorderMode(0);
   
   TH1F *h1He4_18__29 = new TH1F("h1He4_18__29","",1,-5.475,114.975);
   h1He4_18__29->SetMinimum(0.0004);
   h1He4_18__29->SetMaximum(500);
   h1He4_18__29->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_18__29->SetLineColor(ci);
   h1He4_18__29->GetXaxis()->SetRange(1,1);
   h1He4_18__29->GetXaxis()->SetLabelFont(42);
   h1He4_18__29->GetXaxis()->SetLabelSize(0.07);
   h1He4_18__29->GetXaxis()->SetTitleSize(0.07);
   h1He4_18__29->GetXaxis()->SetTitleFont(42);
   h1He4_18__29->GetYaxis()->SetLabelFont(42);
   h1He4_18__29->GetYaxis()->SetLabelSize(0.07);
   h1He4_18__29->GetYaxis()->SetTitleSize(0.07);
   h1He4_18__29->GetYaxis()->SetTitleOffset(1.1);
   h1He4_18__29->GetYaxis()->SetTitleFont(42);
   h1He4_18__29->GetZaxis()->SetLabelFont(42);
   h1He4_18__29->GetZaxis()->SetLabelSize(0.035);
   h1He4_18__29->GetZaxis()->SetTitleSize(0.035);
   h1He4_18__29->GetZaxis()->SetTitleFont(42);
   h1He4_18__29->Draw("");
   
   TH1F *hinclHe4_18__30 = new TH1F("hinclHe4_18__30","INCL",19,5,100);
   hinclHe4_18__30->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_18__30->SetLineColor(ci);
   hinclHe4_18__30->SetLineWidth(2);
   hinclHe4_18__30->GetXaxis()->SetRange(0,20);
   hinclHe4_18__30->GetXaxis()->SetLabelFont(42);
   hinclHe4_18__30->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_18__30->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_18__30->GetXaxis()->SetTitleFont(42);
   hinclHe4_18__30->GetYaxis()->SetLabelFont(42);
   hinclHe4_18__30->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_18__30->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_18__30->GetYaxis()->SetTitleFont(42);
   hinclHe4_18__30->GetZaxis()->SetLabelFont(42);
   hinclHe4_18__30->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_18__30->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_18__30->GetZaxis()->SetTitleFont(42);
   hinclHe4_18__30->Draw("histCsame");
   
   Double_t Graph0_fx1015[19] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t Graph0_fy1015[19] = {
   1.8,
   2.8,
   2.6,
   2.4,
   2.5,
   2.8,
   2.9,
   3,
   3.2,
   3.1,
   2.8,
   2.2,
   1.7,
   1.1,
   0.63,
   0.37,
   0.2,
   0.08,
   0.034};
   Double_t Graph0_fex1015[19] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1015[19] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.3,
   0.3,
   0.2,
   0.2,
   0.2,
   0.1,
   0.06,
   0.04,
   0.03,
   0.01,
   0.005};
   gre = new TGraphErrors(19,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,0,109.5);
   Graph_Graph1015->SetMinimum(0.0261);
   Graph_Graph1015->SetMaximum(3.8471);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
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
   entry=leg->AddEntry("hinclHe4_18","INCL","l");

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
   canvasHe4_5->Modified();
   canvasHe4->cd();
  
// ------------>Primitives in pad: canvasHe4_2
   TPad *canvasHe4_2 = new TPad("canvasHe4_2", "canvasHe4_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasHe4_2->Draw();
   canvasHe4_2->cd();
   canvasHe4_2->Range(-5.475,-3.39794,114.975,2.69897);
   canvasHe4_2->SetFillColor(0);
   canvasHe4_2->SetBorderMode(0);
   canvasHe4_2->SetBorderSize(2);
   canvasHe4_2->SetLogy();
   canvasHe4_2->SetLeftMargin(0);
   canvasHe4_2->SetRightMargin(0);
   canvasHe4_2->SetTopMargin(0);
   canvasHe4_2->SetBottomMargin(0);
   canvasHe4_2->SetFrameBorderMode(0);
   canvasHe4_2->SetFrameBorderMode(0);
   
   TH1F *h1He4_4dO9__31 = new TH1F("h1He4_4dO9__31","",1,-5.475,114.975);
   h1He4_4dO9__31->SetMinimum(0.0004);
   h1He4_4dO9__31->SetMaximum(500);
   h1He4_4dO9__31->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_4dO9__31->SetLineColor(ci);
   h1He4_4dO9__31->GetXaxis()->SetRange(1,1);
   h1He4_4dO9__31->GetXaxis()->SetLabelFont(42);
   h1He4_4dO9__31->GetXaxis()->SetLabelSize(0.07);
   h1He4_4dO9__31->GetXaxis()->SetTitleSize(0.07);
   h1He4_4dO9__31->GetXaxis()->SetTitleFont(42);
   h1He4_4dO9__31->GetYaxis()->SetLabelFont(42);
   h1He4_4dO9__31->GetYaxis()->SetLabelSize(0.07);
   h1He4_4dO9__31->GetYaxis()->SetTitleSize(0.07);
   h1He4_4dO9__31->GetYaxis()->SetTitleOffset(1.1);
   h1He4_4dO9__31->GetYaxis()->SetTitleFont(42);
   h1He4_4dO9__31->GetZaxis()->SetLabelFont(42);
   h1He4_4dO9__31->GetZaxis()->SetLabelSize(0.035);
   h1He4_4dO9__31->GetZaxis()->SetTitleSize(0.035);
   h1He4_4dO9__31->GetZaxis()->SetTitleFont(42);
   h1He4_4dO9__31->Draw("");
   
   TH1F *hinclHe4_4dO9__32 = new TH1F("hinclHe4_4dO9__32","INCL",19,5,100);
   hinclHe4_4dO9__32->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_4dO9__32->SetLineColor(ci);
   hinclHe4_4dO9__32->SetLineWidth(2);
   hinclHe4_4dO9__32->GetXaxis()->SetRange(0,20);
   hinclHe4_4dO9__32->GetXaxis()->SetLabelFont(42);
   hinclHe4_4dO9__32->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_4dO9__32->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_4dO9__32->GetXaxis()->SetTitleFont(42);
   hinclHe4_4dO9__32->GetYaxis()->SetLabelFont(42);
   hinclHe4_4dO9__32->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_4dO9__32->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_4dO9__32->GetYaxis()->SetTitleFont(42);
   hinclHe4_4dO9__32->GetZaxis()->SetLabelFont(42);
   hinclHe4_4dO9__32->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_4dO9__32->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_4dO9__32->GetZaxis()->SetTitleFont(42);
   hinclHe4_4dO9__32->Draw("histCsame");
   
   Double_t Graph0_fx1016[19] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t Graph0_fy1016[19] = {
   3.8,
   4.4,
   7,
   6.4,
   8,
   12,
   16,
   24,
   33,
   42,
   51,
   49,
   34,
   27,
   15,
   5.2,
   2.6,
   1.1,
   0.5};
   Double_t Graph0_fex1016[19] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1016[19] = {
   0.7,
   0.7,
   1,
   0.8,
   1,
   1,
   2,
   3,
   3,
   4,
   5,
   5,
   3,
   3,
   2,
   0.9,
   0.5,
   0.3,
   0.3};
   gre = new TGraphErrors(19,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,0,109.5);
   Graph_Graph1016->SetMinimum(0.18);
   Graph_Graph1016->SetMaximum(61.58);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
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
   canvasHe4_2->Modified();
   canvasHe4->cd();
  
// ------------>Primitives in pad: canvasHe4_4
   TPad *canvasHe4_4 = new TPad("canvasHe4_4", "canvasHe4_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasHe4_4->Draw();
   canvasHe4_4->cd();
   canvasHe4_4->Range(-5.475,-3.39794,114.975,2.69897);
   canvasHe4_4->SetFillColor(0);
   canvasHe4_4->SetBorderMode(0);
   canvasHe4_4->SetBorderSize(2);
   canvasHe4_4->SetLogy();
   canvasHe4_4->SetLeftMargin(0);
   canvasHe4_4->SetRightMargin(0);
   canvasHe4_4->SetTopMargin(0);
   canvasHe4_4->SetBottomMargin(0);
   canvasHe4_4->SetFrameBorderMode(0);
   canvasHe4_4->SetFrameBorderMode(0);
   
   TH1F *h1He4_14dO4__33 = new TH1F("h1He4_14dO4__33","",1,-5.475,114.975);
   h1He4_14dO4__33->SetMinimum(0.0004);
   h1He4_14dO4__33->SetMaximum(500);
   h1He4_14dO4__33->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_14dO4__33->SetLineColor(ci);
   h1He4_14dO4__33->GetXaxis()->SetRange(1,1);
   h1He4_14dO4__33->GetXaxis()->SetLabelFont(42);
   h1He4_14dO4__33->GetXaxis()->SetLabelSize(0.07);
   h1He4_14dO4__33->GetXaxis()->SetTitleSize(0.07);
   h1He4_14dO4__33->GetXaxis()->SetTitleFont(42);
   h1He4_14dO4__33->GetYaxis()->SetLabelFont(42);
   h1He4_14dO4__33->GetYaxis()->SetLabelSize(0.07);
   h1He4_14dO4__33->GetYaxis()->SetTitleSize(0.07);
   h1He4_14dO4__33->GetYaxis()->SetTitleOffset(1.1);
   h1He4_14dO4__33->GetYaxis()->SetTitleFont(42);
   h1He4_14dO4__33->GetZaxis()->SetLabelFont(42);
   h1He4_14dO4__33->GetZaxis()->SetLabelSize(0.035);
   h1He4_14dO4__33->GetZaxis()->SetTitleSize(0.035);
   h1He4_14dO4__33->GetZaxis()->SetTitleFont(42);
   h1He4_14dO4__33->Draw("");
   
   TH1F *hinclHe4_14dO4__34 = new TH1F("hinclHe4_14dO4__34","INCL",19,5,100);
   hinclHe4_14dO4__34->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_14dO4__34->SetLineColor(ci);
   hinclHe4_14dO4__34->SetLineWidth(2);
   hinclHe4_14dO4__34->GetXaxis()->SetRange(0,20);
   hinclHe4_14dO4__34->GetXaxis()->SetLabelFont(42);
   hinclHe4_14dO4__34->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_14dO4__34->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_14dO4__34->GetXaxis()->SetTitleFont(42);
   hinclHe4_14dO4__34->GetYaxis()->SetLabelFont(42);
   hinclHe4_14dO4__34->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_14dO4__34->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_14dO4__34->GetYaxis()->SetTitleFont(42);
   hinclHe4_14dO4__34->GetZaxis()->SetLabelFont(42);
   hinclHe4_14dO4__34->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_14dO4__34->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_14dO4__34->GetZaxis()->SetTitleFont(42);
   hinclHe4_14dO4__34->Draw("histCsame");
   
   Double_t Graph0_fx1017[19] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t Graph0_fy1017[19] = {
   2.8,
   3.6,
   3.6,
   4,
   4.6,
   5.9,
   6.5,
   7.2,
   7,
   6.1,
   4.5,
   2.7,
   1.5,
   0.73,
   0.33,
   0.12,
   0.05,
   0.017,
   0.0022};
   Double_t Graph0_fex1017[19] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1017[19] = {
   0.2,
   0.3,
   0.3,
   0.3,
   0.4,
   0.5,
   0.5,
   0.6,
   0.6,
   0.5,
   0.4,
   0.2,
   0.1,
   0.07,
   0.04,
   0.02,
   0.01,
   0.005,
   0.0007};
   gre = new TGraphErrors(19,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,0,109.5);
   Graph_Graph1017->SetMinimum(0.00135);
   Graph_Graph1017->SetMaximum(8.57985);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
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
   canvasHe4_4->Modified();
   canvasHe4->cd();
  
// ------------>Primitives in pad: canvasHe4_6
   TPad *canvasHe4_6 = new TPad("canvasHe4_6", "canvasHe4_6",0.5209121,0,0.9504264,0.3632613);
   canvasHe4_6->Draw();
   canvasHe4_6->cd();
   canvasHe4_6->Range(-5.475,-4.761723,114.975,2.69897);
   canvasHe4_6->SetFillColor(0);
   canvasHe4_6->SetBorderMode(0);
   canvasHe4_6->SetBorderSize(2);
   canvasHe4_6->SetLogy();
   canvasHe4_6->SetLeftMargin(0);
   canvasHe4_6->SetRightMargin(0);
   canvasHe4_6->SetTopMargin(0);
   canvasHe4_6->SetBottomMargin(0.1827957);
   canvasHe4_6->SetFrameBorderMode(0);
   canvasHe4_6->SetFrameBorderMode(0);
   
   TH1F *h1He4_21dO8__35 = new TH1F("h1He4_21dO8__35","",1,-5.475,114.975);
   h1He4_21dO8__35->SetMinimum(0.0004);
   h1He4_21dO8__35->SetMaximum(500);
   h1He4_21dO8__35->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_21dO8__35->SetLineColor(ci);
   h1He4_21dO8__35->GetXaxis()->SetTitle("E  [MeV/n]");
   h1He4_21dO8__35->GetXaxis()->SetRange(1,1);
   h1He4_21dO8__35->GetXaxis()->SetLabelFont(42);
   h1He4_21dO8__35->GetXaxis()->SetLabelSize(0.07);
   h1He4_21dO8__35->GetXaxis()->SetTitleSize(0.07);
   h1He4_21dO8__35->GetXaxis()->SetTitleFont(42);
   h1He4_21dO8__35->GetYaxis()->SetLabelFont(42);
   h1He4_21dO8__35->GetYaxis()->SetLabelSize(0.07);
   h1He4_21dO8__35->GetYaxis()->SetTitleSize(0.07);
   h1He4_21dO8__35->GetYaxis()->SetTitleOffset(1.1);
   h1He4_21dO8__35->GetYaxis()->SetTitleFont(42);
   h1He4_21dO8__35->GetZaxis()->SetLabelFont(42);
   h1He4_21dO8__35->GetZaxis()->SetLabelSize(0.035);
   h1He4_21dO8__35->GetZaxis()->SetTitleSize(0.035);
   h1He4_21dO8__35->GetZaxis()->SetTitleFont(42);
   h1He4_21dO8__35->Draw("");
   
   TH1F *hinclHe4_21dO8__36 = new TH1F("hinclHe4_21dO8__36","INCL",19,5,100);
   hinclHe4_21dO8__36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_21dO8__36->SetLineColor(ci);
   hinclHe4_21dO8__36->SetLineWidth(2);
   hinclHe4_21dO8__36->GetXaxis()->SetRange(0,20);
   hinclHe4_21dO8__36->GetXaxis()->SetLabelFont(42);
   hinclHe4_21dO8__36->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_21dO8__36->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_21dO8__36->GetXaxis()->SetTitleFont(42);
   hinclHe4_21dO8__36->GetYaxis()->SetLabelFont(42);
   hinclHe4_21dO8__36->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_21dO8__36->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_21dO8__36->GetYaxis()->SetTitleFont(42);
   hinclHe4_21dO8__36->GetZaxis()->SetLabelFont(42);
   hinclHe4_21dO8__36->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_21dO8__36->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_21dO8__36->GetZaxis()->SetTitleFont(42);
   hinclHe4_21dO8__36->Draw("histCsame");
   
   Double_t Graph0_fx1018[19] = {
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t Graph0_fy1018[19] = {
   2,
   2.4,
   2.1,
   1.9,
   1.9,
   1.9,
   1.7,
   1.5,
   1.4,
   1.2,
   0.86,
   0.58,
   0.34,
   0.15,
   0.11,
   0.044,
   0.024,
   0.0027,
   0.0015};
   Double_t Graph0_fex1018[19] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph0_fey1018[19] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.1,
   0.1,
   0.1,
   0.1,
   0.08,
   0.06,
   0.04,
   0.02,
   0.02,
   0.009,
   0.007,
   0.0008,
   0.0006};
   gre = new TGraphErrors(19,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,0,109.5);
   Graph_Graph1018->SetMinimum(0.00081);
   Graph_Graph1018->SetMaximum(2.85991);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
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
   canvasHe4_6->Modified();
   canvasHe4->cd();
   canvasHe4->Modified();
   canvasHe4->cd();
   canvasHe4->SetSelected(canvasHe4);
}
