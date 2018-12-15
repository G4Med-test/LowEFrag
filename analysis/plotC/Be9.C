void Be9()
{
//=========Macro generated from canvas: canvasBe9/canvasBe9
//=========  (Sat Dec 15 18:51:47 2018) by ROOT version6.06/06
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
   canvasBe9_1->Range(-23.04474,-3.39794,86.94,2.69897);
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
   
   TH1F *h1Be9_2dO2__73 = new TH1F("h1Be9_2dO2__73","^{12}C + ^{nat}C #rightarrow ^{9}Be at 62 MeV/n",1,-2.94,86.94);
   h1Be9_2dO2__73->SetMinimum(0.0004);
   h1Be9_2dO2__73->SetMaximum(500);
   h1Be9_2dO2__73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Be9_2dO2__73->SetLineColor(ci);
   h1Be9_2dO2__73->GetXaxis()->SetRange(1,1);
   h1Be9_2dO2__73->GetXaxis()->SetLabelFont(42);
   h1Be9_2dO2__73->GetXaxis()->SetLabelSize(0.07);
   h1Be9_2dO2__73->GetXaxis()->SetTitleSize(0.07);
   h1Be9_2dO2__73->GetXaxis()->SetTitleFont(42);
   h1Be9_2dO2__73->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Be9_2dO2__73->GetYaxis()->SetLabelFont(42);
   h1Be9_2dO2__73->GetYaxis()->SetLabelSize(0.07);
   h1Be9_2dO2__73->GetYaxis()->SetTitleSize(0.07);
   h1Be9_2dO2__73->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_2dO2__73->GetYaxis()->SetTitleFont(42);
   h1Be9_2dO2__73->GetZaxis()->SetLabelFont(42);
   h1Be9_2dO2__73->GetZaxis()->SetLabelSize(0.035);
   h1Be9_2dO2__73->GetZaxis()->SetTitleSize(0.035);
   h1Be9_2dO2__73->GetZaxis()->SetTitleFont(42);
   h1Be9_2dO2__73->Draw("");
   
   TPaveText *pt = new TPaveText(0.2596831,0.9312746,0.7403169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{9}Be at 62 MeV/n");
   pt->Draw();
   
   TH1F *hinclBe9_2dO2__74 = new TH1F("hinclBe9_2dO2__74","INCL",17,8,76);
   hinclBe9_2dO2__74->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_2dO2__74->SetLineColor(ci);
   hinclBe9_2dO2__74->SetLineWidth(2);
   hinclBe9_2dO2__74->GetXaxis()->SetRange(0,18);
   hinclBe9_2dO2__74->GetXaxis()->SetLabelFont(42);
   hinclBe9_2dO2__74->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_2dO2__74->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_2dO2__74->GetXaxis()->SetTitleFont(42);
   hinclBe9_2dO2__74->GetYaxis()->SetLabelFont(42);
   hinclBe9_2dO2__74->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_2dO2__74->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_2dO2__74->GetYaxis()->SetTitleFont(42);
   hinclBe9_2dO2__74->GetZaxis()->SetLabelFont(42);
   hinclBe9_2dO2__74->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_2dO2__74->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_2dO2__74->GetZaxis()->SetTitleFont(42);
   hinclBe9_2dO2__74->Draw("histCsame");
   
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
   canvasBe9_3->Range(-23.04474,-3.39794,86.94,2.69897);
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
   
   TH1F *h1Be9_4dO9__75 = new TH1F("h1Be9_4dO9__75","",1,-2.94,86.94);
   h1Be9_4dO9__75->SetMinimum(0.0004);
   h1Be9_4dO9__75->SetMaximum(500);
   h1Be9_4dO9__75->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_4dO9__75->SetLineColor(ci);
   h1Be9_4dO9__75->GetXaxis()->SetRange(1,1);
   h1Be9_4dO9__75->GetXaxis()->SetLabelFont(42);
   h1Be9_4dO9__75->GetXaxis()->SetLabelSize(0.07);
   h1Be9_4dO9__75->GetXaxis()->SetTitleSize(0.07);
   h1Be9_4dO9__75->GetXaxis()->SetTitleFont(42);
   h1Be9_4dO9__75->GetYaxis()->SetLabelFont(42);
   h1Be9_4dO9__75->GetYaxis()->SetLabelSize(0.07);
   h1Be9_4dO9__75->GetYaxis()->SetTitleSize(0.07);
   h1Be9_4dO9__75->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_4dO9__75->GetYaxis()->SetTitleFont(42);
   h1Be9_4dO9__75->GetZaxis()->SetLabelFont(42);
   h1Be9_4dO9__75->GetZaxis()->SetLabelSize(0.035);
   h1Be9_4dO9__75->GetZaxis()->SetTitleSize(0.035);
   h1Be9_4dO9__75->GetZaxis()->SetTitleFont(42);
   h1Be9_4dO9__75->Draw("");
   
   TH1F *hinclBe9_4dO9__76 = new TH1F("hinclBe9_4dO9__76","INCL",17,8,76);
   hinclBe9_4dO9__76->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_4dO9__76->SetLineColor(ci);
   hinclBe9_4dO9__76->SetLineWidth(2);
   hinclBe9_4dO9__76->GetXaxis()->SetRange(0,18);
   hinclBe9_4dO9__76->GetXaxis()->SetLabelFont(42);
   hinclBe9_4dO9__76->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_4dO9__76->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_4dO9__76->GetXaxis()->SetTitleFont(42);
   hinclBe9_4dO9__76->GetYaxis()->SetLabelFont(42);
   hinclBe9_4dO9__76->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_4dO9__76->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_4dO9__76->GetYaxis()->SetTitleFont(42);
   hinclBe9_4dO9__76->GetZaxis()->SetLabelFont(42);
   hinclBe9_4dO9__76->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_4dO9__76->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_4dO9__76->GetZaxis()->SetTitleFont(42);
   hinclBe9_4dO9__76->Draw("histCsame");
   
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
   canvasBe9_5->Range(-23.04474,-4.761723,86.94,2.69897);
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
   
   TH1F *h1Be9_11dO1__77 = new TH1F("h1Be9_11dO1__77","",1,-2.94,86.94);
   h1Be9_11dO1__77->SetMinimum(0.0004);
   h1Be9_11dO1__77->SetMaximum(500);
   h1Be9_11dO1__77->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_11dO1__77->SetLineColor(ci);
   h1Be9_11dO1__77->GetXaxis()->SetRange(1,1);
   h1Be9_11dO1__77->GetXaxis()->SetLabelFont(42);
   h1Be9_11dO1__77->GetXaxis()->SetLabelSize(0.07);
   h1Be9_11dO1__77->GetXaxis()->SetTitleSize(0.07);
   h1Be9_11dO1__77->GetXaxis()->SetTitleFont(42);
   h1Be9_11dO1__77->GetYaxis()->SetLabelFont(42);
   h1Be9_11dO1__77->GetYaxis()->SetLabelSize(0.07);
   h1Be9_11dO1__77->GetYaxis()->SetTitleSize(0.07);
   h1Be9_11dO1__77->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_11dO1__77->GetYaxis()->SetTitleFont(42);
   h1Be9_11dO1__77->GetZaxis()->SetLabelFont(42);
   h1Be9_11dO1__77->GetZaxis()->SetLabelSize(0.035);
   h1Be9_11dO1__77->GetZaxis()->SetTitleSize(0.035);
   h1Be9_11dO1__77->GetZaxis()->SetTitleFont(42);
   h1Be9_11dO1__77->Draw("");
   
   TH1F *hinclBe9_11dO1__78 = new TH1F("hinclBe9_11dO1__78","INCL",17,8,76);
   hinclBe9_11dO1__78->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_11dO1__78->SetLineColor(ci);
   hinclBe9_11dO1__78->SetLineWidth(2);
   hinclBe9_11dO1__78->GetXaxis()->SetRange(0,18);
   hinclBe9_11dO1__78->GetXaxis()->SetLabelFont(42);
   hinclBe9_11dO1__78->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_11dO1__78->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_11dO1__78->GetXaxis()->SetTitleFont(42);
   hinclBe9_11dO1__78->GetYaxis()->SetLabelFont(42);
   hinclBe9_11dO1__78->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_11dO1__78->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_11dO1__78->GetYaxis()->SetTitleFont(42);
   hinclBe9_11dO1__78->GetZaxis()->SetLabelFont(42);
   hinclBe9_11dO1__78->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_11dO1__78->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_11dO1__78->GetZaxis()->SetTitleFont(42);
   hinclBe9_11dO1__78->Draw("histCsame");
   
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
   canvasBe9_2->Range(-2.94,-3.39794,86.94,2.69897);
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
   
   TH1F *h1Be9_3dO5__79 = new TH1F("h1Be9_3dO5__79","",1,-2.94,86.94);
   h1Be9_3dO5__79->SetMinimum(0.0004);
   h1Be9_3dO5__79->SetMaximum(500);
   h1Be9_3dO5__79->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_3dO5__79->SetLineColor(ci);
   h1Be9_3dO5__79->GetXaxis()->SetRange(1,1);
   h1Be9_3dO5__79->GetXaxis()->SetLabelFont(42);
   h1Be9_3dO5__79->GetXaxis()->SetLabelSize(0.07);
   h1Be9_3dO5__79->GetXaxis()->SetTitleSize(0.07);
   h1Be9_3dO5__79->GetXaxis()->SetTitleFont(42);
   h1Be9_3dO5__79->GetYaxis()->SetLabelFont(42);
   h1Be9_3dO5__79->GetYaxis()->SetLabelSize(0.07);
   h1Be9_3dO5__79->GetYaxis()->SetTitleSize(0.07);
   h1Be9_3dO5__79->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_3dO5__79->GetYaxis()->SetTitleFont(42);
   h1Be9_3dO5__79->GetZaxis()->SetLabelFont(42);
   h1Be9_3dO5__79->GetZaxis()->SetLabelSize(0.035);
   h1Be9_3dO5__79->GetZaxis()->SetTitleSize(0.035);
   h1Be9_3dO5__79->GetZaxis()->SetTitleFont(42);
   h1Be9_3dO5__79->Draw("");
   
   TH1F *hinclBe9_3dO5__80 = new TH1F("hinclBe9_3dO5__80","INCL",17,8,76);
   hinclBe9_3dO5__80->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_3dO5__80->SetLineColor(ci);
   hinclBe9_3dO5__80->SetLineWidth(2);
   hinclBe9_3dO5__80->GetXaxis()->SetRange(0,18);
   hinclBe9_3dO5__80->GetXaxis()->SetLabelFont(42);
   hinclBe9_3dO5__80->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_3dO5__80->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_3dO5__80->GetXaxis()->SetTitleFont(42);
   hinclBe9_3dO5__80->GetYaxis()->SetLabelFont(42);
   hinclBe9_3dO5__80->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_3dO5__80->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_3dO5__80->GetYaxis()->SetTitleFont(42);
   hinclBe9_3dO5__80->GetZaxis()->SetLabelFont(42);
   hinclBe9_3dO5__80->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_3dO5__80->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_3dO5__80->GetZaxis()->SetTitleFont(42);
   hinclBe9_3dO5__80->Draw("histCsame");
   
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
   canvasBe9_4->Range(-2.94,-3.39794,86.94,2.69897);
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
   
   TH1F *h1Be9_7dO6__81 = new TH1F("h1Be9_7dO6__81","",1,-2.94,86.94);
   h1Be9_7dO6__81->SetMinimum(0.0004);
   h1Be9_7dO6__81->SetMaximum(500);
   h1Be9_7dO6__81->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_7dO6__81->SetLineColor(ci);
   h1Be9_7dO6__81->GetXaxis()->SetRange(1,1);
   h1Be9_7dO6__81->GetXaxis()->SetLabelFont(42);
   h1Be9_7dO6__81->GetXaxis()->SetLabelSize(0.07);
   h1Be9_7dO6__81->GetXaxis()->SetTitleSize(0.07);
   h1Be9_7dO6__81->GetXaxis()->SetTitleFont(42);
   h1Be9_7dO6__81->GetYaxis()->SetLabelFont(42);
   h1Be9_7dO6__81->GetYaxis()->SetLabelSize(0.07);
   h1Be9_7dO6__81->GetYaxis()->SetTitleSize(0.07);
   h1Be9_7dO6__81->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_7dO6__81->GetYaxis()->SetTitleFont(42);
   h1Be9_7dO6__81->GetZaxis()->SetLabelFont(42);
   h1Be9_7dO6__81->GetZaxis()->SetLabelSize(0.035);
   h1Be9_7dO6__81->GetZaxis()->SetTitleSize(0.035);
   h1Be9_7dO6__81->GetZaxis()->SetTitleFont(42);
   h1Be9_7dO6__81->Draw("");
   
   TH1F *hinclBe9_7dO6__82 = new TH1F("hinclBe9_7dO6__82","INCL",17,8,76);
   hinclBe9_7dO6__82->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_7dO6__82->SetLineColor(ci);
   hinclBe9_7dO6__82->SetLineWidth(2);
   hinclBe9_7dO6__82->GetXaxis()->SetRange(0,18);
   hinclBe9_7dO6__82->GetXaxis()->SetLabelFont(42);
   hinclBe9_7dO6__82->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_7dO6__82->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_7dO6__82->GetXaxis()->SetTitleFont(42);
   hinclBe9_7dO6__82->GetYaxis()->SetLabelFont(42);
   hinclBe9_7dO6__82->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_7dO6__82->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_7dO6__82->GetYaxis()->SetTitleFont(42);
   hinclBe9_7dO6__82->GetZaxis()->SetLabelFont(42);
   hinclBe9_7dO6__82->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_7dO6__82->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_7dO6__82->GetZaxis()->SetTitleFont(42);
   hinclBe9_7dO6__82->Draw("histCsame");
   
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
   canvasBe9_6->Range(-2.94,-4.761723,86.94,2.69897);
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
   
   TH1F *h1Be9_14dO4__83 = new TH1F("h1Be9_14dO4__83","",1,-2.94,86.94);
   h1Be9_14dO4__83->SetMinimum(0.0004);
   h1Be9_14dO4__83->SetMaximum(500);
   h1Be9_14dO4__83->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Be9_14dO4__83->SetLineColor(ci);
   h1Be9_14dO4__83->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Be9_14dO4__83->GetXaxis()->SetRange(1,1);
   h1Be9_14dO4__83->GetXaxis()->SetLabelFont(42);
   h1Be9_14dO4__83->GetXaxis()->SetLabelSize(0.07);
   h1Be9_14dO4__83->GetXaxis()->SetTitleSize(0.07);
   h1Be9_14dO4__83->GetXaxis()->SetTitleFont(42);
   h1Be9_14dO4__83->GetYaxis()->SetLabelFont(42);
   h1Be9_14dO4__83->GetYaxis()->SetLabelSize(0.07);
   h1Be9_14dO4__83->GetYaxis()->SetTitleSize(0.07);
   h1Be9_14dO4__83->GetYaxis()->SetTitleOffset(1.1);
   h1Be9_14dO4__83->GetYaxis()->SetTitleFont(42);
   h1Be9_14dO4__83->GetZaxis()->SetLabelFont(42);
   h1Be9_14dO4__83->GetZaxis()->SetLabelSize(0.035);
   h1Be9_14dO4__83->GetZaxis()->SetTitleSize(0.035);
   h1Be9_14dO4__83->GetZaxis()->SetTitleFont(42);
   h1Be9_14dO4__83->Draw("");
   
   TH1F *hinclBe9_14dO4__84 = new TH1F("hinclBe9_14dO4__84","INCL",17,8,76);
   hinclBe9_14dO4__84->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclBe9_14dO4__84->SetLineColor(ci);
   hinclBe9_14dO4__84->SetLineWidth(2);
   hinclBe9_14dO4__84->GetXaxis()->SetRange(0,18);
   hinclBe9_14dO4__84->GetXaxis()->SetLabelFont(42);
   hinclBe9_14dO4__84->GetXaxis()->SetLabelSize(0.035);
   hinclBe9_14dO4__84->GetXaxis()->SetTitleSize(0.035);
   hinclBe9_14dO4__84->GetXaxis()->SetTitleFont(42);
   hinclBe9_14dO4__84->GetYaxis()->SetLabelFont(42);
   hinclBe9_14dO4__84->GetYaxis()->SetLabelSize(0.035);
   hinclBe9_14dO4__84->GetYaxis()->SetTitleSize(0.035);
   hinclBe9_14dO4__84->GetYaxis()->SetTitleFont(42);
   hinclBe9_14dO4__84->GetZaxis()->SetLabelFont(42);
   hinclBe9_14dO4__84->GetZaxis()->SetLabelSize(0.035);
   hinclBe9_14dO4__84->GetZaxis()->SetTitleSize(0.035);
   hinclBe9_14dO4__84->GetZaxis()->SetTitleFont(42);
   hinclBe9_14dO4__84->Draw("histCsame");
   
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
