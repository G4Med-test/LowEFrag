void H3()
{
//=========Macro generated from canvas: canvasH3/canvasH3
//=========  (Sat Dec 15 20:23:15 2018) by ROOT version6.06/06
   TCanvas *canvasH3 = new TCanvas("canvasH3", "canvasH3",0,0,800,600);
   gStyle->SetOptStat(0);
   canvasH3->Range(0,0,1,1);
   canvasH3->SetFillColor(0);
   canvasH3->SetBorderMode(0);
   canvasH3->SetBorderSize(2);
   canvasH3->SetRightMargin(0.04957356);
   canvasH3->SetTopMargin(0.04957356);
   canvasH3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasH3_1
   TPad *canvasH3_1 = new TPad("canvasH3_1", "canvasH3_1",0,0.5209121,0.5209121,0.9504264);
   canvasH3_1->Draw();
   canvasH3_1->cd();
   canvasH3_1->Range(-41.25,-3.39794,146.3,3.69897);
   canvasH3_1->SetFillColor(0);
   canvasH3_1->SetBorderMode(0);
   canvasH3_1->SetBorderSize(2);
   canvasH3_1->SetLogy();
   canvasH3_1->SetLeftMargin(0.1827957);
   canvasH3_1->SetRightMargin(0);
   canvasH3_1->SetTopMargin(0);
   canvasH3_1->SetBottomMargin(0);
   canvasH3_1->SetFrameBorderMode(0);
   canvasH3_1->SetFrameBorderMode(0);
   
   TH1F *h1H3_11dO4__25 = new TH1F("h1H3_11dO4__25","^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n",1,-6.966667,146.3);
   h1H3_11dO4__25->SetMinimum(0.0004);
   h1H3_11dO4__25->SetMaximum(5000);
   h1H3_11dO4__25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1H3_11dO4__25->SetLineColor(ci);
   h1H3_11dO4__25->GetXaxis()->SetRange(1,1);
   h1H3_11dO4__25->GetXaxis()->SetLabelFont(42);
   h1H3_11dO4__25->GetXaxis()->SetLabelSize(0.07);
   h1H3_11dO4__25->GetXaxis()->SetTitleSize(0.07);
   h1H3_11dO4__25->GetXaxis()->SetTitleFont(42);
   h1H3_11dO4__25->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1H3_11dO4__25->GetYaxis()->SetLabelFont(42);
   h1H3_11dO4__25->GetYaxis()->SetLabelSize(0.08);
   h1H3_11dO4__25->GetYaxis()->SetTitleSize(0.07);
   h1H3_11dO4__25->GetYaxis()->SetTitleOffset(1.1);
   h1H3_11dO4__25->GetYaxis()->SetTitleFont(42);
   h1H3_11dO4__25->GetZaxis()->SetLabelFont(42);
   h1H3_11dO4__25->GetZaxis()->SetLabelSize(0.035);
   h1H3_11dO4__25->GetZaxis()->SetTitleSize(0.035);
   h1H3_11dO4__25->GetZaxis()->SetTitleFont(42);
   h1H3_11dO4__25->Draw("");
   
   TPaveText *pt = new TPaveText(0.2838,0.9315033,0.7162,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicH3_11dO4__26 = new TH1F("hbicH3_11dO4__26","BIC",18,0,126.6667);
   hbicH3_11dO4__26->SetBinContent(1,0.6483237);
   hbicH3_11dO4__26->SetBinContent(2,0.6000443);
   hbicH3_11dO4__26->SetBinContent(3,0.3724413);
   hbicH3_11dO4__26->SetBinContent(4,0.4873923);
   hbicH3_11dO4__26->SetBinContent(5,1.006971);
   hbicH3_11dO4__26->SetBinContent(6,2.1128);
   hbicH3_11dO4__26->SetBinContent(7,4.066967);
   hbicH3_11dO4__26->SetBinContent(8,5.798129);
   hbicH3_11dO4__26->SetBinContent(9,5.91308);
   hbicH3_11dO4__26->SetBinContent(10,4.598041);
   hbicH3_11dO4__26->SetBinContent(11,2.680658);
   hbicH3_11dO4__26->SetBinContent(12,1.349525);
   hbicH3_11dO4__26->SetBinContent(13,0.6460247);
   hbicH3_11dO4__26->SetBinContent(14,0.3655442);
   hbicH3_11dO4__26->SetBinContent(15,0.1862206);
   hbicH3_11dO4__26->SetBinContent(16,0.1287451);
   hbicH3_11dO4__26->SetBinContent(17,0.05747551);
   hbicH3_11dO4__26->SetBinContent(18,0.03678432);
   hbicH3_11dO4__26->SetBinContent(19,0.0114951);
   hbicH3_11dO4__26->SetEntries(13513);
   hbicH3_11dO4__26->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH3_11dO4__26->SetLineColor(ci);
   hbicH3_11dO4__26->SetLineWidth(2);
   hbicH3_11dO4__26->GetXaxis()->SetRange(0,19);
   hbicH3_11dO4__26->GetXaxis()->SetLabelFont(42);
   hbicH3_11dO4__26->GetXaxis()->SetLabelSize(0.035);
   hbicH3_11dO4__26->GetXaxis()->SetTitleSize(0.035);
   hbicH3_11dO4__26->GetXaxis()->SetTitleFont(42);
   hbicH3_11dO4__26->GetYaxis()->SetLabelFont(42);
   hbicH3_11dO4__26->GetYaxis()->SetLabelSize(0.035);
   hbicH3_11dO4__26->GetYaxis()->SetTitleSize(0.035);
   hbicH3_11dO4__26->GetYaxis()->SetTitleFont(42);
   hbicH3_11dO4__26->GetZaxis()->SetLabelFont(42);
   hbicH3_11dO4__26->GetZaxis()->SetLabelSize(0.035);
   hbicH3_11dO4__26->GetZaxis()->SetTitleSize(0.035);
   hbicH3_11dO4__26->GetZaxis()->SetTitleFont(42);
   hbicH3_11dO4__26->Draw("histCsame");
   
   TH1F *hinclH3_11dO4__27 = new TH1F("hinclH3_11dO4__27","INCL",18,0,126.6667);
   hinclH3_11dO4__27->SetBinContent(1,3.02781);
   hinclH3_11dO4__27->SetBinContent(2,6.421164);
   hinclH3_11dO4__27->SetBinContent(3,10.29271);
   hinclH3_11dO4__27->SetBinContent(4,13.3757);
   hinclH3_11dO4__27->SetBinContent(5,14.59188);
   hinclH3_11dO4__27->SetBinContent(6,12.79635);
   hinclH3_11dO4__27->SetBinContent(7,9.271949);
   hinclH3_11dO4__27->SetBinContent(8,5.775139);
   hinclH3_11dO4__27->SetBinContent(9,3.099079);
   hinclH3_11dO4__27->SetBinContent(10,1.340329);
   hinclH3_11dO4__27->SetBinContent(11,0.5770541);
   hinclH3_11dO4__27->SetBinContent(12,0.1678285);
   hinclH3_11dO4__27->SetBinContent(13,0.07816669);
   hinclH3_11dO4__27->SetBinContent(14,0.02069118);
   hinclH3_11dO4__27->SetBinContent(15,0.006897061);
   hinclH3_11dO4__27->SetBinContent(17,0.00229902);
   hinclH3_11dO4__27->SetEntries(35165);
   hinclH3_11dO4__27->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_11dO4__27->SetLineColor(ci);
   hinclH3_11dO4__27->SetLineWidth(2);
   hinclH3_11dO4__27->GetXaxis()->SetRange(0,19);
   hinclH3_11dO4__27->GetXaxis()->SetLabelFont(42);
   hinclH3_11dO4__27->GetXaxis()->SetLabelSize(0.035);
   hinclH3_11dO4__27->GetXaxis()->SetTitleSize(0.035);
   hinclH3_11dO4__27->GetXaxis()->SetTitleFont(42);
   hinclH3_11dO4__27->GetYaxis()->SetLabelFont(42);
   hinclH3_11dO4__27->GetYaxis()->SetLabelSize(0.035);
   hinclH3_11dO4__27->GetYaxis()->SetTitleSize(0.035);
   hinclH3_11dO4__27->GetYaxis()->SetTitleFont(42);
   hinclH3_11dO4__27->GetZaxis()->SetLabelFont(42);
   hinclH3_11dO4__27->GetZaxis()->SetLabelSize(0.035);
   hinclH3_11dO4__27->GetZaxis()->SetTitleSize(0.035);
   hinclH3_11dO4__27->GetZaxis()->SetTitleFont(42);
   hinclH3_11dO4__27->Draw("histCsame");
   
   Double_t Graph0_fx1009[19] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667,
   103.3333,
   110,
   116.6667,
   123.3333};
   Double_t Graph0_fy1009[19] = {
   0.64,
   1.3,
   1.6,
   2,
   2.1,
   2.4,
   2.5,
   2.3,
   2,
   1.6,
   1.4,
   0.9,
   0.7,
   0.47,
   0.37,
   0.15,
   0.05,
   0.04,
   0.013};
   Double_t Graph0_fex1009[19] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1009[19] = {
   0.08,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.1,
   0.1,
   0.08,
   0.07,
   0.04,
   0.02,
   0.02,
   0.012};
   TGraphErrors *gre = new TGraphErrors(19,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","^{12}C + ^{nat}C #rightarrow ^{3}H at 62 MeV/n",100,0,139.3333);
   Graph_Graph1009->SetMinimum(0.0009);
   Graph_Graph1009->SetMaximum(2.9699);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
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
   canvasH3_1->Modified();
   canvasH3->cd();
  
// ------------>Primitives in pad: canvasH3_3
   TPad *canvasH3_3 = new TPad("canvasH3_3", "canvasH3_3",0,0,0.5209121,0.5209121);
   canvasH3_3->Draw();
   canvasH3_3->cd();
   canvasH3_3->Range(-41.25,-4.985407,146.3,3.69897);
   canvasH3_3->SetFillColor(0);
   canvasH3_3->SetBorderMode(0);
   canvasH3_3->SetBorderSize(2);
   canvasH3_3->SetLogy();
   canvasH3_3->SetLeftMargin(0.1827957);
   canvasH3_3->SetRightMargin(0);
   canvasH3_3->SetTopMargin(0);
   canvasH3_3->SetBottomMargin(0.1827957);
   canvasH3_3->SetFrameBorderMode(0);
   canvasH3_3->SetFrameBorderMode(0);
   
   TH1F *h1H3_17dO2__28 = new TH1F("h1H3_17dO2__28","",1,-6.966667,146.3);
   h1H3_17dO2__28->SetMinimum(0.0004);
   h1H3_17dO2__28->SetMaximum(5000);
   h1H3_17dO2__28->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H3_17dO2__28->SetLineColor(ci);
   h1H3_17dO2__28->GetXaxis()->SetRange(1,1);
   h1H3_17dO2__28->GetXaxis()->SetLabelFont(42);
   h1H3_17dO2__28->GetXaxis()->SetLabelSize(0.07);
   h1H3_17dO2__28->GetXaxis()->SetTitleSize(0.07);
   h1H3_17dO2__28->GetXaxis()->SetTitleFont(42);
   h1H3_17dO2__28->GetYaxis()->SetLabelFont(42);
   h1H3_17dO2__28->GetYaxis()->SetLabelSize(0.07);
   h1H3_17dO2__28->GetYaxis()->SetTitleSize(0.07);
   h1H3_17dO2__28->GetYaxis()->SetTitleOffset(1.1);
   h1H3_17dO2__28->GetYaxis()->SetTitleFont(42);
   h1H3_17dO2__28->GetZaxis()->SetLabelFont(42);
   h1H3_17dO2__28->GetZaxis()->SetLabelSize(0.035);
   h1H3_17dO2__28->GetZaxis()->SetTitleSize(0.035);
   h1H3_17dO2__28->GetZaxis()->SetTitleFont(42);
   h1H3_17dO2__28->Draw("");
   
   TH1F *hbicH3_17dO2__29 = new TH1F("hbicH3_17dO2__29","BIC",15,0,100);
   hbicH3_17dO2__29->SetBinContent(1,0.6423458);
   hbicH3_17dO2__29->SetBinContent(2,0.6050378);
   hbicH3_17dO2__29->SetBinContent(3,0.3455042);
   hbicH3_17dO2__29->SetBinContent(4,0.399033);
   hbicH3_17dO2__29->SetBinContent(5,0.7120954);
   hbicH3_17dO2__29->SetBinContent(6,1.339842);
   hbicH3_17dO2__29->SetBinContent(7,2.377977);
   hbicH3_17dO2__29->SetBinContent(8,3.161444);
   hbicH3_17dO2__29->SetBinContent(9,3.385292);
   hbicH3_17dO2__29->SetBinContent(10,2.960306);
   hbicH3_17dO2__29->SetBinContent(11,2.01463);
   hbicH3_17dO2__29->SetBinContent(12,1.227919);
   hbicH3_17dO2__29->SetBinContent(13,0.7786009);
   hbicH3_17dO2__29->SetBinContent(14,0.5060906);
   hbicH3_17dO2__29->SetBinContent(15,0.2984637);
   hbicH3_17dO2__29->SetBinContent(16,0.399033);
   hbicH3_17dO2__29->SetEntries(13041);
   hbicH3_17dO2__29->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH3_17dO2__29->SetLineColor(ci);
   hbicH3_17dO2__29->SetLineWidth(2);
   hbicH3_17dO2__29->GetXaxis()->SetRange(0,16);
   hbicH3_17dO2__29->GetXaxis()->SetLabelFont(42);
   hbicH3_17dO2__29->GetXaxis()->SetLabelSize(0.035);
   hbicH3_17dO2__29->GetXaxis()->SetTitleSize(0.035);
   hbicH3_17dO2__29->GetXaxis()->SetTitleFont(42);
   hbicH3_17dO2__29->GetYaxis()->SetLabelFont(42);
   hbicH3_17dO2__29->GetYaxis()->SetLabelSize(0.035);
   hbicH3_17dO2__29->GetYaxis()->SetTitleSize(0.035);
   hbicH3_17dO2__29->GetYaxis()->SetTitleFont(42);
   hbicH3_17dO2__29->GetZaxis()->SetLabelFont(42);
   hbicH3_17dO2__29->GetZaxis()->SetLabelSize(0.035);
   hbicH3_17dO2__29->GetZaxis()->SetTitleSize(0.035);
   hbicH3_17dO2__29->GetZaxis()->SetTitleFont(42);
   hbicH3_17dO2__29->Draw("histCsame");
   
   TH1F *hinclH3_17dO2__30 = new TH1F("hinclH3_17dO2__30","INCL",15,0,100);
   hinclH3_17dO2__30->SetBinContent(1,2.837027);
   hinclH3_17dO2__30->SetBinContent(2,5.636746);
   hinclH3_17dO2__30->SetBinContent(3,8.707354);
   hinclH3_17dO2__30->SetBinContent(4,10.36026);
   hinclH3_17dO2__30->SetBinContent(5,10.12343);
   hinclH3_17dO2__30->SetBinContent(6,8.118537);
   hinclH3_17dO2__30->SetBinContent(7,5.58484);
   hinclH3_17dO2__30->SetBinContent(8,3.195508);
   hinclH3_17dO2__30->SetBinContent(9,1.696701);
   hinclH3_17dO2__30->SetBinContent(10,0.7153396);
   hinclH3_17dO2__30->SetBinContent(11,0.3260391);
   hinclH3_17dO2__30->SetBinContent(12,0.1573423);
   hinclH3_17dO2__30->SetBinContent(13,0.0437963);
   hinclH3_17dO2__30->SetBinContent(14,0.01946502);
   hinclH3_17dO2__30->SetBinContent(15,0.004866256);
   hinclH3_17dO2__30->SetBinContent(16,0.001622085);
   hinclH3_17dO2__30->SetEntries(35466);
   hinclH3_17dO2__30->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_17dO2__30->SetLineColor(ci);
   hinclH3_17dO2__30->SetLineWidth(2);
   hinclH3_17dO2__30->GetXaxis()->SetRange(0,16);
   hinclH3_17dO2__30->GetXaxis()->SetLabelFont(42);
   hinclH3_17dO2__30->GetXaxis()->SetLabelSize(0.035);
   hinclH3_17dO2__30->GetXaxis()->SetTitleSize(0.035);
   hinclH3_17dO2__30->GetXaxis()->SetTitleFont(42);
   hinclH3_17dO2__30->GetYaxis()->SetLabelFont(42);
   hinclH3_17dO2__30->GetYaxis()->SetLabelSize(0.035);
   hinclH3_17dO2__30->GetYaxis()->SetTitleSize(0.035);
   hinclH3_17dO2__30->GetYaxis()->SetTitleFont(42);
   hinclH3_17dO2__30->GetZaxis()->SetLabelFont(42);
   hinclH3_17dO2__30->GetZaxis()->SetLabelSize(0.035);
   hinclH3_17dO2__30->GetZaxis()->SetTitleSize(0.035);
   hinclH3_17dO2__30->GetZaxis()->SetTitleFont(42);
   hinclH3_17dO2__30->Draw("histCsame");
   
   Double_t Graph0_fx1010[15] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667};
   Double_t Graph0_fy1010[15] = {
   0.3,
   0.9,
   0.89,
   0.8,
   0.9,
   0.9,
   0.7,
   0.56,
   0.46,
   0.41,
   0.27,
   0.18,
   0.07,
   0.04,
   0.015};
   Double_t Graph0_fex1010[15] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1010[15] = {
   0.04,
   0.1,
   0.09,
   0.1,
   0.1,
   0.1,
   0.1,
   0.09,
   0.08,
   0.07,
   0.06,
   0.04,
   0.02,
   0.02,
   0.012};
   gre = new TGraphErrors(15,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,0,110);
   Graph_Graph1010->SetMinimum(0.0027);
   Graph_Graph1010->SetMaximum(1.0997);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
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
   entry=leg->AddEntry("hbicH3_17.2","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hinclH3_17.2","INCL","l");

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
   canvasH3_3->Modified();
   canvasH3->cd();
  
// ------------>Primitives in pad: canvasH3_2
   TPad *canvasH3_2 = new TPad("canvasH3_2", "canvasH3_2",0.5209121,0.5209121,0.9504264,0.9504264);
   canvasH3_2->Draw();
   canvasH3_2->cd();
   canvasH3_2->Range(-6.966667,-3.39794,146.3,3.69897);
   canvasH3_2->SetFillColor(0);
   canvasH3_2->SetBorderMode(0);
   canvasH3_2->SetBorderSize(2);
   canvasH3_2->SetLogy();
   canvasH3_2->SetLeftMargin(0);
   canvasH3_2->SetRightMargin(0);
   canvasH3_2->SetTopMargin(0);
   canvasH3_2->SetBottomMargin(0);
   canvasH3_2->SetFrameBorderMode(0);
   canvasH3_2->SetFrameBorderMode(0);
   
   TH1F *h1H3_14dO4__31 = new TH1F("h1H3_14dO4__31","",1,-6.966667,146.3);
   h1H3_14dO4__31->SetMinimum(0.0004);
   h1H3_14dO4__31->SetMaximum(5000);
   h1H3_14dO4__31->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H3_14dO4__31->SetLineColor(ci);
   h1H3_14dO4__31->GetXaxis()->SetRange(1,1);
   h1H3_14dO4__31->GetXaxis()->SetLabelFont(42);
   h1H3_14dO4__31->GetXaxis()->SetLabelSize(0.07);
   h1H3_14dO4__31->GetXaxis()->SetTitleSize(0.07);
   h1H3_14dO4__31->GetXaxis()->SetTitleFont(42);
   h1H3_14dO4__31->GetYaxis()->SetLabelFont(42);
   h1H3_14dO4__31->GetYaxis()->SetLabelSize(0.07);
   h1H3_14dO4__31->GetYaxis()->SetTitleSize(0.07);
   h1H3_14dO4__31->GetYaxis()->SetTitleOffset(1.1);
   h1H3_14dO4__31->GetYaxis()->SetTitleFont(42);
   h1H3_14dO4__31->GetZaxis()->SetLabelFont(42);
   h1H3_14dO4__31->GetZaxis()->SetLabelSize(0.035);
   h1H3_14dO4__31->GetZaxis()->SetTitleSize(0.035);
   h1H3_14dO4__31->GetZaxis()->SetTitleFont(42);
   h1H3_14dO4__31->Draw("");
   
   TH1F *hbicH3_14dO4__32 = new TH1F("hbicH3_14dO4__32","BIC",17,0,113.3333);
   hbicH3_14dO4__32->SetBinContent(1,0.5747712);
   hbicH3_14dO4__32->SetBinContent(2,0.5419822);
   hbicH3_14dO4__32->SetBinContent(3,0.3953963);
   hbicH3_14dO4__32->SetBinContent(4,0.4262565);
   hbicH3_14dO4__32->SetBinContent(5,0.7637899);
   hbicH3_14dO4__32->SetBinContent(6,1.570013);
   hbicH3_14dO4__32->SetBinContent(7,2.707982);
   hbicH3_14dO4__32->SetBinContent(8,4.081261);
   hbicH3_14dO4__32->SetBinContent(9,4.511375);
   hbicH3_14dO4__32->SetBinContent(10,3.982894);
   hbicH3_14dO4__32->SetBinContent(11,2.655906);
   hbicH3_14dO4__32->SetBinContent(12,1.519865);
   hbicH3_14dO4__32->SetBinContent(13,0.8968745);
   hbicH3_14dO4__32->SetBinContent(14,0.5091932);
   hbicH3_14dO4__32->SetBinContent(15,0.3105307);
   hbicH3_14dO4__32->SetBinContent(16,0.1928762);
   hbicH3_14dO4__32->SetBinContent(17,0.09450936);
   hbicH3_14dO4__32->SetBinContent(18,0.1311558);
   hbicH3_14dO4__32->SetEntries(13411);
   hbicH3_14dO4__32->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH3_14dO4__32->SetLineColor(ci);
   hbicH3_14dO4__32->SetLineWidth(2);
   hbicH3_14dO4__32->GetXaxis()->SetRange(0,18);
   hbicH3_14dO4__32->GetXaxis()->SetLabelFont(42);
   hbicH3_14dO4__32->GetXaxis()->SetLabelSize(0.035);
   hbicH3_14dO4__32->GetXaxis()->SetTitleSize(0.035);
   hbicH3_14dO4__32->GetXaxis()->SetTitleFont(42);
   hbicH3_14dO4__32->GetYaxis()->SetLabelFont(42);
   hbicH3_14dO4__32->GetYaxis()->SetLabelSize(0.035);
   hbicH3_14dO4__32->GetYaxis()->SetTitleSize(0.035);
   hbicH3_14dO4__32->GetYaxis()->SetTitleFont(42);
   hbicH3_14dO4__32->GetZaxis()->SetLabelFont(42);
   hbicH3_14dO4__32->GetZaxis()->SetLabelSize(0.035);
   hbicH3_14dO4__32->GetZaxis()->SetTitleSize(0.035);
   hbicH3_14dO4__32->GetZaxis()->SetTitleFont(42);
   hbicH3_14dO4__32->Draw("histCsame");
   
   TH1F *hinclH3_14dO4__33 = new TH1F("hinclH3_14dO4__33","INCL",17,0,113.3333);
   hinclH3_14dO4__33->SetBinContent(1,2.952935);
   hinclH3_14dO4__33->SetBinContent(2,6.048599);
   hinclH3_14dO4__33->SetBinContent(3,9.196339);
   hinclH3_14dO4__33->SetBinContent(4,11.73652);
   hinclH3_14dO4__33->SetBinContent(5,12.49838);
   hinclH3_14dO4__33->SetBinContent(6,10.5754);
   hinclH3_14dO4__33->SetBinContent(7,7.749767);
   hinclH3_14dO4__33->SetBinContent(8,4.769829);
   hinclH3_14dO4__33->SetBinContent(9,2.605758);
   hinclH3_14dO4__33->SetBinContent(10,1.236337);
   hinclH3_14dO4__33->SetBinContent(11,0.5323384);
   hinclH3_14dO4__33->SetBinContent(12,0.2333802);
   hinclH3_14dO4__33->SetBinContent(13,0.05593411);
   hinclH3_14dO4__33->SetBinContent(14,0.01928762);
   hinclH3_14dO4__33->SetBinContent(15,0.01350134);
   hinclH3_14dO4__33->SetBinContent(16,0.001928762);
   hinclH3_14dO4__33->SetEntries(36410);
   hinclH3_14dO4__33->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_14dO4__33->SetLineColor(ci);
   hinclH3_14dO4__33->SetLineWidth(2);
   hinclH3_14dO4__33->GetXaxis()->SetRange(0,18);
   hinclH3_14dO4__33->GetXaxis()->SetLabelFont(42);
   hinclH3_14dO4__33->GetXaxis()->SetLabelSize(0.035);
   hinclH3_14dO4__33->GetXaxis()->SetTitleSize(0.035);
   hinclH3_14dO4__33->GetXaxis()->SetTitleFont(42);
   hinclH3_14dO4__33->GetYaxis()->SetLabelFont(42);
   hinclH3_14dO4__33->GetYaxis()->SetLabelSize(0.035);
   hinclH3_14dO4__33->GetYaxis()->SetTitleSize(0.035);
   hinclH3_14dO4__33->GetYaxis()->SetTitleFont(42);
   hinclH3_14dO4__33->GetZaxis()->SetLabelFont(42);
   hinclH3_14dO4__33->GetZaxis()->SetLabelSize(0.035);
   hinclH3_14dO4__33->GetZaxis()->SetTitleSize(0.035);
   hinclH3_14dO4__33->GetZaxis()->SetTitleFont(42);
   hinclH3_14dO4__33->Draw("histCsame");
   
   Double_t Graph0_fx1011[17] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90,
   96.66667,
   103.3333,
   110};
   Double_t Graph0_fy1011[17] = {
   0.49,
   1.1,
   1,
   1.2,
   1.5,
   1.7,
   1.7,
   1.6,
   1.6,
   1.1,
   0.67,
   0.4,
   0.21,
   0.11,
   0.04,
   0.03,
   0.015};
   Double_t Graph0_fex1011[17] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1011[17] = {
   0.06,
   0.1,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.08,
   0.06,
   0.04,
   0.03,
   0.02,
   0.02,
   0.012};
   gre = new TGraphErrors(17,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,0,124.6667);
   Graph_Graph1011->SetMinimum(0.0027);
   Graph_Graph1011->SetMaximum(2.0897);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
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
   canvasH3_2->Modified();
   canvasH3->cd();
  
// ------------>Primitives in pad: canvasH3_4
   TPad *canvasH3_4 = new TPad("canvasH3_4", "canvasH3_4",0.5209121,0,0.9504264,0.5209121);
   canvasH3_4->Draw();
   canvasH3_4->cd();
   canvasH3_4->Range(-6.966667,-4.985407,146.3,3.69897);
   canvasH3_4->SetFillColor(0);
   canvasH3_4->SetBorderMode(0);
   canvasH3_4->SetBorderSize(2);
   canvasH3_4->SetLogy();
   canvasH3_4->SetLeftMargin(0);
   canvasH3_4->SetRightMargin(0);
   canvasH3_4->SetTopMargin(0);
   canvasH3_4->SetBottomMargin(0.1827957);
   canvasH3_4->SetFrameBorderMode(0);
   canvasH3_4->SetFrameBorderMode(0);
   
   TH1F *h1H3_19dO4__34 = new TH1F("h1H3_19dO4__34","",1,-6.966667,146.3);
   h1H3_19dO4__34->SetMinimum(0.0004);
   h1H3_19dO4__34->SetMaximum(5000);
   h1H3_19dO4__34->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1H3_19dO4__34->SetLineColor(ci);
   h1H3_19dO4__34->GetXaxis()->SetTitle("E  [MeV/n]");
   h1H3_19dO4__34->GetXaxis()->SetRange(1,1);
   h1H3_19dO4__34->GetXaxis()->SetLabelFont(42);
   h1H3_19dO4__34->GetXaxis()->SetLabelSize(0.07);
   h1H3_19dO4__34->GetXaxis()->SetTitleSize(0.07);
   h1H3_19dO4__34->GetXaxis()->SetTitleFont(42);
   h1H3_19dO4__34->GetYaxis()->SetLabelFont(42);
   h1H3_19dO4__34->GetYaxis()->SetLabelSize(0.07);
   h1H3_19dO4__34->GetYaxis()->SetTitleSize(0.07);
   h1H3_19dO4__34->GetYaxis()->SetTitleOffset(1.1);
   h1H3_19dO4__34->GetYaxis()->SetTitleFont(42);
   h1H3_19dO4__34->GetZaxis()->SetLabelFont(42);
   h1H3_19dO4__34->GetZaxis()->SetLabelSize(0.035);
   h1H3_19dO4__34->GetZaxis()->SetTitleSize(0.035);
   h1H3_19dO4__34->GetZaxis()->SetTitleFont(42);
   h1H3_19dO4__34->Draw("");
   
   TH1F *hbicH3_19dO4__35 = new TH1F("hbicH3_19dO4__35","BIC",13,0,93.33333);
   hbicH3_19dO4__35->SetBinContent(1,0.6168239);
   hbicH3_19dO4__35->SetBinContent(2,0.6007328);
   hbicH3_19dO4__35->SetBinContent(3,0.3379122);
   hbicH3_19dO4__35->SetBinContent(4,0.4237312);
   hbicH3_19dO4__35->SetBinContent(5,0.8300304);
   hbicH3_19dO4__35->SetBinContent(6,1.525969);
   hbicH3_19dO4__35->SetBinContent(7,2.366726);
   hbicH3_19dO4__35->SetBinContent(8,2.672457);
   hbicH3_19dO4__35->SetBinContent(9,2.45925);
   hbicH3_19dO4__35->SetBinContent(10,1.80488);
   hbicH3_19dO4__35->SetBinContent(11,1.185375);
   hbicH3_19dO4__35->SetBinContent(12,0.7013019);
   hbicH3_19dO4__35->SetBinContent(13,0.4451859);
   hbicH3_19dO4__35->SetBinContent(14,0.6409605);
   hbicH3_19dO4__35->SetEntries(12388);
   hbicH3_19dO4__35->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicH3_19dO4__35->SetLineColor(ci);
   hbicH3_19dO4__35->SetLineWidth(2);
   hbicH3_19dO4__35->GetXaxis()->SetRange(0,14);
   hbicH3_19dO4__35->GetXaxis()->SetLabelFont(42);
   hbicH3_19dO4__35->GetXaxis()->SetLabelSize(0.035);
   hbicH3_19dO4__35->GetXaxis()->SetTitleSize(0.035);
   hbicH3_19dO4__35->GetXaxis()->SetTitleFont(42);
   hbicH3_19dO4__35->GetYaxis()->SetLabelFont(42);
   hbicH3_19dO4__35->GetYaxis()->SetLabelSize(0.035);
   hbicH3_19dO4__35->GetYaxis()->SetTitleSize(0.035);
   hbicH3_19dO4__35->GetYaxis()->SetTitleFont(42);
   hbicH3_19dO4__35->GetZaxis()->SetLabelFont(42);
   hbicH3_19dO4__35->GetZaxis()->SetLabelSize(0.035);
   hbicH3_19dO4__35->GetZaxis()->SetTitleSize(0.035);
   hbicH3_19dO4__35->GetZaxis()->SetTitleFont(42);
   hbicH3_19dO4__35->Draw("histCsame");
   
   TH1F *hinclH3_19dO4__36 = new TH1F("hinclH3_19dO4__36","INCL",13,0,93.33333);
   hinclH3_19dO4__36->SetBinContent(1,2.791798);
   hinclH3_19dO4__36->SetBinContent(2,5.568847);
   hinclH3_19dO4__36->SetBinContent(3,8.335168);
   hinclH3_19dO4__36->SetBinContent(4,9.196039);
   hinclH3_19dO4__36->SetBinContent(5,7.979824);
   hinclH3_19dO4__36->SetBinContent(6,5.61712);
   hinclH3_19dO4__36->SetBinContent(7,3.118983);
   hinclH3_19dO4__36->SetBinContent(8,1.623856);
   hinclH3_19dO4__36->SetBinContent(9,0.7361659);
   hinclH3_19dO4__36->SetBinContent(10,0.2695252);
   hinclH3_19dO4__36->SetBinContent(11,0.1166602);
   hinclH3_19dO4__36->SetBinContent(12,0.03620488);
   hinclH3_19dO4__36->SetBinContent(13,0.01340921);
   hinclH3_19dO4__36->SetBinContent(14,0.005363686);
   hinclH3_19dO4__36->SetEntries(33864);
   hinclH3_19dO4__36->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclH3_19dO4__36->SetLineColor(ci);
   hinclH3_19dO4__36->SetLineWidth(2);
   hinclH3_19dO4__36->GetXaxis()->SetRange(0,14);
   hinclH3_19dO4__36->GetXaxis()->SetLabelFont(42);
   hinclH3_19dO4__36->GetXaxis()->SetLabelSize(0.035);
   hinclH3_19dO4__36->GetXaxis()->SetTitleSize(0.035);
   hinclH3_19dO4__36->GetXaxis()->SetTitleFont(42);
   hinclH3_19dO4__36->GetYaxis()->SetLabelFont(42);
   hinclH3_19dO4__36->GetYaxis()->SetLabelSize(0.035);
   hinclH3_19dO4__36->GetYaxis()->SetTitleSize(0.035);
   hinclH3_19dO4__36->GetYaxis()->SetTitleFont(42);
   hinclH3_19dO4__36->GetZaxis()->SetLabelFont(42);
   hinclH3_19dO4__36->GetZaxis()->SetLabelSize(0.035);
   hinclH3_19dO4__36->GetZaxis()->SetTitleSize(0.035);
   hinclH3_19dO4__36->GetZaxis()->SetTitleFont(42);
   hinclH3_19dO4__36->Draw("histCsame");
   
   Double_t Graph0_fx1012[14] = {
   3.333333,
   10,
   16.66667,
   23.33333,
   30,
   36.66667,
   43.33333,
   50,
   56.66667,
   63.33333,
   70,
   76.66667,
   83.33333,
   90};
   Double_t Graph0_fy1012[14] = {
   0.26,
   0.7,
   0.7,
   0.66,
   0.8,
   0.8,
   0.61,
   0.48,
   0.36,
   0.23,
   0.17,
   0.1,
   0.023,
   0.02};
   Double_t Graph0_fex1012[14] = {
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333,
   3.333333};
   Double_t Graph0_fey1012[14] = {
   0.04,
   0.1,
   0.1,
   0.09,
   0.1,
   0.1,
   0.09,
   0.09,
   0.07,
   0.06,
   0.05,
   0.04,
   0.017,
   0.017};
   gre = new TGraphErrors(14,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,0,102.6667);
   Graph_Graph1012->SetMinimum(0.0027);
   Graph_Graph1012->SetMaximum(0.9897);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
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
   canvasH3_4->Modified();
   canvasH3->cd();
   canvasH3->Modified();
   canvasH3->cd();
   canvasH3->SetSelected(canvasH3);
}
