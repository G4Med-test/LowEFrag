void He4()
{
//=========Macro generated from canvas: canvasHe4/canvasHe4
//=========  (Sat Dec 15 20:23:56 2018) by ROOT version6.06/06
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
   canvasHe4_1->Range(-32.41776,-3.39794,114.975,3.69897);
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
   
   TH1F *h1He4_2dO2__37 = new TH1F("h1He4_2dO2__37","^{12}C + ^{nat}C #rightarrow ^{4}He at 62 MeV/n",1,-5.475,114.975);
   h1He4_2dO2__37->SetMinimum(0.0004);
   h1He4_2dO2__37->SetMaximum(5000);
   h1He4_2dO2__37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1He4_2dO2__37->SetLineColor(ci);
   h1He4_2dO2__37->GetXaxis()->SetRange(1,1);
   h1He4_2dO2__37->GetXaxis()->SetLabelFont(42);
   h1He4_2dO2__37->GetXaxis()->SetLabelSize(0.07);
   h1He4_2dO2__37->GetXaxis()->SetTitleSize(0.07);
   h1He4_2dO2__37->GetXaxis()->SetTitleFont(42);
   h1He4_2dO2__37->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1He4_2dO2__37->GetYaxis()->SetLabelFont(42);
   h1He4_2dO2__37->GetYaxis()->SetLabelSize(0.07);
   h1He4_2dO2__37->GetYaxis()->SetTitleSize(0.07);
   h1He4_2dO2__37->GetYaxis()->SetTitleOffset(1.1);
   h1He4_2dO2__37->GetYaxis()->SetTitleFont(42);
   h1He4_2dO2__37->GetZaxis()->SetLabelFont(42);
   h1He4_2dO2__37->GetZaxis()->SetLabelSize(0.035);
   h1He4_2dO2__37->GetZaxis()->SetTitleSize(0.035);
   h1He4_2dO2__37->GetZaxis()->SetTitleFont(42);
   h1He4_2dO2__37->Draw("");
   
   TPaveText *pt = new TPaveText(0.2596831,0.9312746,0.7403169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{4}He at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicHe4_2dO2__38 = new TH1F("hbicHe4_2dO2__38","BIC",19,5,100);
   hbicHe4_2dO2__38->SetBinContent(0,16.61686);
   hbicHe4_2dO2__38->SetBinContent(1,4.747675);
   hbicHe4_2dO2__38->SetBinContent(2,5.559778);
   hbicHe4_2dO2__38->SetBinContent(3,2.061491);
   hbicHe4_2dO2__38->SetBinContent(4,1.124449);
   hbicHe4_2dO2__38->SetBinContent(5,1.06198);
   hbicHe4_2dO2__38->SetBinContent(6,3.810634);
   hbicHe4_2dO2__38->SetBinContent(7,12.49388);
   hbicHe4_2dO2__38->SetBinContent(8,32.79644);
   hbicHe4_2dO2__38->SetBinContent(9,69.40352);
   hbicHe4_2dO2__38->SetBinContent(10,173.8524);
   hbicHe4_2dO2__38->SetBinContent(11,337.3348);
   hbicHe4_2dO2__38->SetBinContent(12,382.2503);
   hbicHe4_2dO2__38->SetBinContent(13,226.4516);
   hbicHe4_2dO2__38->SetBinContent(14,105.261);
   hbicHe4_2dO2__38->SetBinContent(15,41.10487);
   hbicHe4_2dO2__38->SetBinContent(16,15.9297);
   hbicHe4_2dO2__38->SetBinContent(17,7.621268);
   hbicHe4_2dO2__38->SetBinContent(18,2.561246);
   hbicHe4_2dO2__38->SetBinContent(19,1.249388);
   hbicHe4_2dO2__38->SetBinContent(20,0.1874082);
   hbicHe4_2dO2__38->SetEntries(23107);
   hbicHe4_2dO2__38->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicHe4_2dO2__38->SetLineColor(ci);
   hbicHe4_2dO2__38->SetLineWidth(2);
   hbicHe4_2dO2__38->GetXaxis()->SetRange(0,20);
   hbicHe4_2dO2__38->GetXaxis()->SetLabelFont(42);
   hbicHe4_2dO2__38->GetXaxis()->SetLabelSize(0.035);
   hbicHe4_2dO2__38->GetXaxis()->SetTitleSize(0.035);
   hbicHe4_2dO2__38->GetXaxis()->SetTitleFont(42);
   hbicHe4_2dO2__38->GetYaxis()->SetLabelFont(42);
   hbicHe4_2dO2__38->GetYaxis()->SetLabelSize(0.035);
   hbicHe4_2dO2__38->GetYaxis()->SetTitleSize(0.035);
   hbicHe4_2dO2__38->GetYaxis()->SetTitleFont(42);
   hbicHe4_2dO2__38->GetZaxis()->SetLabelFont(42);
   hbicHe4_2dO2__38->GetZaxis()->SetLabelSize(0.035);
   hbicHe4_2dO2__38->GetZaxis()->SetTitleSize(0.035);
   hbicHe4_2dO2__38->GetZaxis()->SetTitleFont(42);
   hbicHe4_2dO2__38->Draw("histCsame");
   
   TH1F *hinclHe4_2dO2__39 = new TH1F("hinclHe4_2dO2__39","INCL",19,5,100);
   hinclHe4_2dO2__39->SetBinContent(0,13.86821);
   hinclHe4_2dO2__39->SetBinContent(1,15.67982);
   hinclHe4_2dO2__39->SetBinContent(2,37.60659);
   hinclHe4_2dO2__39->SetBinContent(3,78.71146);
   hinclHe4_2dO2__39->SetBinContent(4,134.4342);
   hinclHe4_2dO2__39->SetBinContent(5,195.4668);
   hinclHe4_2dO2__39->SetBinContent(6,274.0533);
   hinclHe4_2dO2__39->SetBinContent(7,367.7574);
   hinclHe4_2dO2__39->SetBinContent(8,484.6377);
   hinclHe4_2dO2__39->SetBinContent(9,584.4014);
   hinclHe4_2dO2__39->SetBinContent(10,600.0812);
   hinclHe4_2dO2__39->SetBinContent(11,366.633);
   hinclHe4_2dO2__39->SetBinContent(12,153.175);
   hinclHe4_2dO2__39->SetBinContent(13,62.9067);
   hinclHe4_2dO2__39->SetBinContent(14,20.61491);
   hinclHe4_2dO2__39->SetBinContent(15,7.371391);
   hinclHe4_2dO2__39->SetBinContent(16,2.12396);
   hinclHe4_2dO2__39->SetBinContent(17,0.9995106);
   hinclHe4_2dO2__39->SetBinContent(18,0.1874082);
   hinclHe4_2dO2__39->SetBinContent(19,0.1249388);
   hinclHe4_2dO2__39->SetBinContent(20,0.06246942);
   hinclHe4_2dO2__39->SetEntries(54441);
   hinclHe4_2dO2__39->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_2dO2__39->SetLineColor(ci);
   hinclHe4_2dO2__39->SetLineWidth(2);
   hinclHe4_2dO2__39->GetXaxis()->SetRange(0,20);
   hinclHe4_2dO2__39->GetXaxis()->SetLabelFont(42);
   hinclHe4_2dO2__39->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_2dO2__39->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_2dO2__39->GetXaxis()->SetTitleFont(42);
   hinclHe4_2dO2__39->GetYaxis()->SetLabelFont(42);
   hinclHe4_2dO2__39->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_2dO2__39->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_2dO2__39->GetYaxis()->SetTitleFont(42);
   hinclHe4_2dO2__39->GetZaxis()->SetLabelFont(42);
   hinclHe4_2dO2__39->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_2dO2__39->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_2dO2__39->GetZaxis()->SetTitleFont(42);
   hinclHe4_2dO2__39->Draw("histCsame");
   
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
   canvasHe4_3->Range(-32.41776,-3.39794,114.975,3.69897);
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
   
   TH1F *h1He4_7dO6__40 = new TH1F("h1He4_7dO6__40","",1,-5.475,114.975);
   h1He4_7dO6__40->SetMinimum(0.0004);
   h1He4_7dO6__40->SetMaximum(5000);
   h1He4_7dO6__40->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_7dO6__40->SetLineColor(ci);
   h1He4_7dO6__40->GetXaxis()->SetRange(1,1);
   h1He4_7dO6__40->GetXaxis()->SetLabelFont(42);
   h1He4_7dO6__40->GetXaxis()->SetLabelSize(0.07);
   h1He4_7dO6__40->GetXaxis()->SetTitleSize(0.07);
   h1He4_7dO6__40->GetXaxis()->SetTitleFont(42);
   h1He4_7dO6__40->GetYaxis()->SetLabelFont(42);
   h1He4_7dO6__40->GetYaxis()->SetLabelSize(0.07);
   h1He4_7dO6__40->GetYaxis()->SetTitleSize(0.07);
   h1He4_7dO6__40->GetYaxis()->SetTitleOffset(1.1);
   h1He4_7dO6__40->GetYaxis()->SetTitleFont(42);
   h1He4_7dO6__40->GetZaxis()->SetLabelFont(42);
   h1He4_7dO6__40->GetZaxis()->SetLabelSize(0.035);
   h1He4_7dO6__40->GetZaxis()->SetTitleSize(0.035);
   h1He4_7dO6__40->GetZaxis()->SetTitleFont(42);
   h1He4_7dO6__40->Draw("");
   
   TH1F *hbicHe4_7dO6__41 = new TH1F("hbicHe4_7dO6__41","BIC",19,5,100);
   hbicHe4_7dO6__41->SetBinContent(0,18.27409);
   hbicHe4_7dO6__41->SetBinContent(1,4.738981);
   hbicHe4_7dO6__41->SetBinContent(2,5.512692);
   hbicHe4_7dO6__41->SetBinContent(3,2.524233);
   hbicHe4_7dO6__41->SetBinContent(4,1.034839);
   hbicHe4_7dO6__41->SetBinContent(5,1.581272);
   hbicHe4_7dO6__41->SetBinContent(6,4.477854);
   hbicHe4_7dO6__41->SetBinContent(7,11.91032);
   hbicHe4_7dO6__41->SetBinContent(8,27.16693);
   hbicHe4_7dO6__41->SetBinContent(9,57.93163);
   hbicHe4_7dO6__41->SetBinContent(10,111.1339);
   hbicHe4_7dO6__41->SetBinContent(11,163.224);
   hbicHe4_7dO6__41->SetBinContent(12,140.2835);
   hbicHe4_7dO6__41->SetBinContent(13,85.1179);
   hbicHe4_7dO6__41->SetBinContent(14,43.91778);
   hbicHe4_7dO6__41->SetBinContent(15,21.29156);
   hbicHe4_7dO6__41->SetBinContent(16,9.758432);
   hbicHe4_7dO6__41->SetBinContent(17,4.767995);
   hbicHe4_7dO6__41->SetBinContent(18,1.997142);
   hbicHe4_7dO6__41->SetBinContent(19,0.6866687);
   hbicHe4_7dO6__41->SetBinContent(20,0.4158698);
   hbicHe4_7dO6__41->SetEntries(148427);
   hbicHe4_7dO6__41->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicHe4_7dO6__41->SetLineColor(ci);
   hbicHe4_7dO6__41->SetLineWidth(2);
   hbicHe4_7dO6__41->GetXaxis()->SetRange(0,20);
   hbicHe4_7dO6__41->GetXaxis()->SetLabelFont(42);
   hbicHe4_7dO6__41->GetXaxis()->SetLabelSize(0.035);
   hbicHe4_7dO6__41->GetXaxis()->SetTitleSize(0.035);
   hbicHe4_7dO6__41->GetXaxis()->SetTitleFont(42);
   hbicHe4_7dO6__41->GetYaxis()->SetLabelFont(42);
   hbicHe4_7dO6__41->GetYaxis()->SetLabelSize(0.035);
   hbicHe4_7dO6__41->GetYaxis()->SetTitleSize(0.035);
   hbicHe4_7dO6__41->GetYaxis()->SetTitleFont(42);
   hbicHe4_7dO6__41->GetZaxis()->SetLabelFont(42);
   hbicHe4_7dO6__41->GetZaxis()->SetLabelSize(0.035);
   hbicHe4_7dO6__41->GetZaxis()->SetTitleSize(0.035);
   hbicHe4_7dO6__41->GetZaxis()->SetTitleFont(42);
   hbicHe4_7dO6__41->Draw("histCsame");
   
   TH1F *hinclHe4_7dO6__42 = new TH1F("hinclHe4_7dO6__42","INCL",19,5,100);
   hinclHe4_7dO6__42->SetBinContent(0,13.63666);
   hinclHe4_7dO6__42->SetBinContent(1,14.17342);
   hinclHe4_7dO6__42->SetBinContent(2,32.78601);
   hinclHe4_7dO6__42->SetBinContent(3,63.10099);
   hinclHe4_7dO6__42->SetBinContent(4,98.88029);
   hinclHe4_7dO6__42->SetBinContent(5,135.2544);
   hinclHe4_7dO6__42->SetBinContent(6,162.726);
   hinclHe4_7dO6__42->SetBinContent(7,179.1577);
   hinclHe4_7dO6__42->SetBinContent(8,184.9363);
   hinclHe4_7dO6__42->SetBinContent(9,172.8809);
   hinclHe4_7dO6__42->SetBinContent(10,134.6693);
   hinclHe4_7dO6__42->SetBinContent(11,86.64115);
   hinclHe4_7dO6__42->SetBinContent(12,43.62281);
   hinclHe4_7dO6__42->SetBinContent(13,18.9801);
   hinclHe4_7dO6__42->SetBinContent(14,7.461477);
   hinclHe4_7dO6__42->SetBinContent(15,2.930431);
   hinclHe4_7dO6__42->SetBinContent(16,1.015496);
   hinclHe4_7dO6__42->SetBinContent(17,0.3191559);
   hinclHe4_7dO6__42->SetBinContent(18,0.1160567);
   hinclHe4_7dO6__42->SetBinContent(19,0.03868556);
   hinclHe4_7dO6__42->SetBinContent(20,0.004835695);
   hinclHe4_7dO6__42->SetEntries(279863);
   hinclHe4_7dO6__42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_7dO6__42->SetLineColor(ci);
   hinclHe4_7dO6__42->SetLineWidth(2);
   hinclHe4_7dO6__42->GetXaxis()->SetRange(0,20);
   hinclHe4_7dO6__42->GetXaxis()->SetLabelFont(42);
   hinclHe4_7dO6__42->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_7dO6__42->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_7dO6__42->GetXaxis()->SetTitleFont(42);
   hinclHe4_7dO6__42->GetYaxis()->SetLabelFont(42);
   hinclHe4_7dO6__42->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_7dO6__42->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_7dO6__42->GetYaxis()->SetTitleFont(42);
   hinclHe4_7dO6__42->GetZaxis()->SetLabelFont(42);
   hinclHe4_7dO6__42->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_7dO6__42->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_7dO6__42->GetZaxis()->SetTitleFont(42);
   hinclHe4_7dO6__42->Draw("histCsame");
   
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
   canvasHe4_5->Range(-32.41776,-4.985407,114.975,3.69897);
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
   
   TH1F *h1He4_18__43 = new TH1F("h1He4_18__43","",1,-5.475,114.975);
   h1He4_18__43->SetMinimum(0.0004);
   h1He4_18__43->SetMaximum(5000);
   h1He4_18__43->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_18__43->SetLineColor(ci);
   h1He4_18__43->GetXaxis()->SetRange(1,1);
   h1He4_18__43->GetXaxis()->SetLabelFont(42);
   h1He4_18__43->GetXaxis()->SetLabelSize(0.07);
   h1He4_18__43->GetXaxis()->SetTitleSize(0.07);
   h1He4_18__43->GetXaxis()->SetTitleFont(42);
   h1He4_18__43->GetYaxis()->SetLabelFont(42);
   h1He4_18__43->GetYaxis()->SetLabelSize(0.07);
   h1He4_18__43->GetYaxis()->SetTitleSize(0.07);
   h1He4_18__43->GetYaxis()->SetTitleOffset(1.1);
   h1He4_18__43->GetYaxis()->SetTitleFont(42);
   h1He4_18__43->GetZaxis()->SetLabelFont(42);
   h1He4_18__43->GetZaxis()->SetLabelSize(0.035);
   h1He4_18__43->GetZaxis()->SetTitleSize(0.035);
   h1He4_18__43->GetZaxis()->SetTitleFont(42);
   h1He4_18__43->Draw("");
   
   TH1F *hbicHe4_18__44 = new TH1F("hbicHe4_18__44","BIC",19,5,100);
   hbicHe4_18__44->SetBinContent(0,18.36178);
   hbicHe4_18__44->SetBinContent(1,6.511064);
   hbicHe4_18__44->SetBinContent(2,7.394796);
   hbicHe4_18__44->SetBinContent(3,3.272089);
   hbicHe4_18__44->SetBinContent(4,1.276963);
   hbicHe4_18__44->SetBinContent(5,1.485996);
   hbicHe4_18__44->SetBinContent(6,3.847447);
   hbicHe4_18__44->SetBinContent(7,8.889071);
   hbicHe4_18__44->SetBinContent(8,16.80334);
   hbicHe4_18__44->SetBinContent(9,29.41154);
   hbicHe4_18__44->SetBinContent(10,41.57684);
   hbicHe4_18__44->SetBinContent(11,38.31717);
   hbicHe4_18__44->SetBinContent(12,26.82037);
   hbicHe4_18__44->SetBinContent(13,17.31248);
   hbicHe4_18__44->SetBinContent(14,10.91731);
   hbicHe4_18__44->SetBinContent(15,6.595918);
   hbicHe4_18__44->SetBinContent(16,3.750174);
   hbicHe4_18__44->SetBinContent(17,1.817137);
   hbicHe4_18__44->SetBinContent(18,0.9085686);
   hbicHe4_18__44->SetBinContent(19,0.4387621);
   hbicHe4_18__44->SetBinContent(20,0.3663249);
   hbicHe4_18__44->SetEntries(118898);
   hbicHe4_18__44->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicHe4_18__44->SetLineColor(ci);
   hbicHe4_18__44->SetLineWidth(2);
   hbicHe4_18__44->GetXaxis()->SetRange(0,20);
   hbicHe4_18__44->GetXaxis()->SetLabelFont(42);
   hbicHe4_18__44->GetXaxis()->SetLabelSize(0.035);
   hbicHe4_18__44->GetXaxis()->SetTitleSize(0.035);
   hbicHe4_18__44->GetXaxis()->SetTitleFont(42);
   hbicHe4_18__44->GetYaxis()->SetLabelFont(42);
   hbicHe4_18__44->GetYaxis()->SetLabelSize(0.035);
   hbicHe4_18__44->GetYaxis()->SetTitleSize(0.035);
   hbicHe4_18__44->GetYaxis()->SetTitleFont(42);
   hbicHe4_18__44->GetZaxis()->SetLabelFont(42);
   hbicHe4_18__44->GetZaxis()->SetLabelSize(0.035);
   hbicHe4_18__44->GetZaxis()->SetTitleSize(0.035);
   hbicHe4_18__44->GetZaxis()->SetTitleFont(42);
   hbicHe4_18__44->Draw("histCsame");
   
   TH1F *hinclHe4_18__45 = new TH1F("hinclHe4_18__45","INCL",19,5,100);
   hinclHe4_18__45->SetBinContent(0,13.70718);
   hinclHe4_18__45->SetBinContent(1,10.73725);
   hinclHe4_18__45->SetBinContent(2,19.3966);
   hinclHe4_18__45->SetBinContent(3,29.49433);
   hinclHe4_18__45->SetBinContent(4,34.76361);
   hinclHe4_18__45->SetBinContent(5,34.54424);
   hinclHe4_18__45->SetBinContent(6,29.40327);
   hinclHe4_18__45->SetBinContent(7,22.64385);
   hinclHe4_18__45->SetBinContent(8,14.8848);
   hinclHe4_18__45->SetBinContent(9,9.249187);
   hinclHe4_18__45->SetBinContent(10,4.973327);
   hinclHe4_18__45->SetBinContent(11,2.738124);
   hinclHe4_18__45->SetBinContent(12,1.235571);
   hinclHe4_18__45->SetBinContent(13,0.5960541);
   hinclHe4_18__45->SetBinContent(14,0.2173114);
   hinclHe4_18__45->SetBinContent(15,0.09727272);
   hinclHe4_18__45->SetBinContent(16,0.03104449);
   hinclHe4_18__45->SetBinContent(17,0.006208897);
   hinclHe4_18__45->SetBinContent(18,0.004139265);
   hinclHe4_18__45->SetEntries(110514);
   hinclHe4_18__45->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_18__45->SetLineColor(ci);
   hinclHe4_18__45->SetLineWidth(2);
   hinclHe4_18__45->GetXaxis()->SetRange(0,20);
   hinclHe4_18__45->GetXaxis()->SetLabelFont(42);
   hinclHe4_18__45->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_18__45->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_18__45->GetXaxis()->SetTitleFont(42);
   hinclHe4_18__45->GetYaxis()->SetLabelFont(42);
   hinclHe4_18__45->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_18__45->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_18__45->GetYaxis()->SetTitleFont(42);
   hinclHe4_18__45->GetZaxis()->SetLabelFont(42);
   hinclHe4_18__45->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_18__45->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_18__45->GetZaxis()->SetTitleFont(42);
   hinclHe4_18__45->Draw("histCsame");
   
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
   entry=leg->AddEntry("hbicHe4_18","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   canvasHe4_2->Range(-5.475,-3.39794,114.975,3.69897);
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
   
   TH1F *h1He4_4dO9__46 = new TH1F("h1He4_4dO9__46","",1,-5.475,114.975);
   h1He4_4dO9__46->SetMinimum(0.0004);
   h1He4_4dO9__46->SetMaximum(5000);
   h1He4_4dO9__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_4dO9__46->SetLineColor(ci);
   h1He4_4dO9__46->GetXaxis()->SetRange(1,1);
   h1He4_4dO9__46->GetXaxis()->SetLabelFont(42);
   h1He4_4dO9__46->GetXaxis()->SetLabelSize(0.07);
   h1He4_4dO9__46->GetXaxis()->SetTitleSize(0.07);
   h1He4_4dO9__46->GetXaxis()->SetTitleFont(42);
   h1He4_4dO9__46->GetYaxis()->SetLabelFont(42);
   h1He4_4dO9__46->GetYaxis()->SetLabelSize(0.07);
   h1He4_4dO9__46->GetYaxis()->SetTitleSize(0.07);
   h1He4_4dO9__46->GetYaxis()->SetTitleOffset(1.1);
   h1He4_4dO9__46->GetYaxis()->SetTitleFont(42);
   h1He4_4dO9__46->GetZaxis()->SetLabelFont(42);
   h1He4_4dO9__46->GetZaxis()->SetLabelSize(0.035);
   h1He4_4dO9__46->GetZaxis()->SetTitleSize(0.035);
   h1He4_4dO9__46->GetZaxis()->SetTitleFont(42);
   h1He4_4dO9__46->Draw("");
   
   TH1F *hbicHe4_4dO9__47 = new TH1F("hbicHe4_4dO9__47","BIC",19,5,100);
   hbicHe4_4dO9__47->SetBinContent(0,17.37831);
   hbicHe4_4dO9__47->SetBinContent(1,4.126997);
   hbicHe4_4dO9__47->SetBinContent(2,4.716568);
   hbicHe4_4dO9__47->SetBinContent(3,2.21791);
   hbicHe4_4dO9__47->SetBinContent(4,1.010693);
   hbicHe4_4dO9__47->SetBinContent(5,1.852937);
   hbicHe4_4dO9__47->SetBinContent(6,4.323521);
   hbicHe4_4dO9__47->SetBinContent(7,11.258);
   hbicHe4_4dO9__47->SetBinContent(8,27.65369);
   hbicHe4_4dO9__47->SetBinContent(9,64.01057);
   hbicHe4_4dO9__47->SetBinContent(10,136.6963);
   hbicHe4_4dO9__47->SetBinContent(11,231.7014);
   hbicHe4_4dO9__47->SetBinContent(12,235.0704);
   hbicHe4_4dO9__47->SetBinContent(13,145.1187);
   hbicHe4_4dO9__47->SetBinContent(14,68.39024);
   hbicHe4_4dO9__47->SetBinContent(15,30.40502);
   hbicHe4_4dO9__47->SetBinContent(16,12.52137);
   hbicHe4_4dO9__47->SetBinContent(17,5.923785);
   hbicHe4_4dO9__47->SetBinContent(18,2.582883);
   hbicHe4_4dO9__47->SetBinContent(19,0.7299451);
   hbicHe4_4dO9__47->SetBinContent(20,0.3088229);
   hbicHe4_4dO9__47->SetEntries(35904);
   hbicHe4_4dO9__47->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicHe4_4dO9__47->SetLineColor(ci);
   hbicHe4_4dO9__47->SetLineWidth(2);
   hbicHe4_4dO9__47->GetXaxis()->SetRange(0,20);
   hbicHe4_4dO9__47->GetXaxis()->SetLabelFont(42);
   hbicHe4_4dO9__47->GetXaxis()->SetLabelSize(0.035);
   hbicHe4_4dO9__47->GetXaxis()->SetTitleSize(0.035);
   hbicHe4_4dO9__47->GetXaxis()->SetTitleFont(42);
   hbicHe4_4dO9__47->GetYaxis()->SetLabelFont(42);
   hbicHe4_4dO9__47->GetYaxis()->SetLabelSize(0.035);
   hbicHe4_4dO9__47->GetYaxis()->SetTitleSize(0.035);
   hbicHe4_4dO9__47->GetYaxis()->SetTitleFont(42);
   hbicHe4_4dO9__47->GetZaxis()->SetLabelFont(42);
   hbicHe4_4dO9__47->GetZaxis()->SetLabelSize(0.035);
   hbicHe4_4dO9__47->GetZaxis()->SetTitleSize(0.035);
   hbicHe4_4dO9__47->GetZaxis()->SetTitleFont(42);
   hbicHe4_4dO9__47->Draw("histCsame");
   
   TH1F *hinclHe4_4dO9__48 = new TH1F("hinclHe4_4dO9__48","INCL",19,5,100);
   hinclHe4_4dO9__48->SetBinContent(0,14.09355);
   hinclHe4_4dO9__48->SetBinContent(1,14.51468);
   hinclHe4_4dO9__48->SetBinContent(2,34.84084);
   hinclHe4_4dO9__48->SetBinContent(3,68.92366);
   hinclHe4_4dO9__48->SetBinContent(4,116.0893);
   hinclHe4_4dO9__48->SetBinContent(5,171.2002);
   hinclHe4_4dO9__48->SetBinContent(6,220.8926);
   hinclHe4_4dO9__48->SetBinContent(7,273.7575);
   hinclHe4_4dO9__48->SetBinContent(8,325.8643);
   hinclHe4_4dO9__48->SetBinContent(9,339.3964);
   hinclHe4_4dO9__48->SetBinContent(10,304.3029);
   hinclHe4_4dO9__48->SetBinContent(11,196.1587);
   hinclHe4_4dO9__48->SetBinContent(12,96.04393);
   hinclHe4_4dO9__48->SetBinContent(13,39.97853);
   hinclHe4_4dO9__48->SetBinContent(14,14.68313);
   hinclHe4_4dO9__48->SetBinContent(15,4.885017);
   hinclHe4_4dO9__48->SetBinContent(16,1.431815);
   hinclHe4_4dO9__48->SetBinContent(17,0.3368977);
   hinclHe4_4dO9__48->SetBinContent(18,0.1684489);
   hinclHe4_4dO9__48->SetBinContent(19,0.08422443);
   hinclHe4_4dO9__48->SetEntries(79703);
   hinclHe4_4dO9__48->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_4dO9__48->SetLineColor(ci);
   hinclHe4_4dO9__48->SetLineWidth(2);
   hinclHe4_4dO9__48->GetXaxis()->SetRange(0,20);
   hinclHe4_4dO9__48->GetXaxis()->SetLabelFont(42);
   hinclHe4_4dO9__48->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_4dO9__48->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_4dO9__48->GetXaxis()->SetTitleFont(42);
   hinclHe4_4dO9__48->GetYaxis()->SetLabelFont(42);
   hinclHe4_4dO9__48->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_4dO9__48->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_4dO9__48->GetYaxis()->SetTitleFont(42);
   hinclHe4_4dO9__48->GetZaxis()->SetLabelFont(42);
   hinclHe4_4dO9__48->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_4dO9__48->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_4dO9__48->GetZaxis()->SetTitleFont(42);
   hinclHe4_4dO9__48->Draw("histCsame");
   
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
   canvasHe4_4->Range(-5.475,-3.39794,114.975,3.69897);
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
   
   TH1F *h1He4_14dO4__49 = new TH1F("h1He4_14dO4__49","",1,-5.475,114.975);
   h1He4_14dO4__49->SetMinimum(0.0004);
   h1He4_14dO4__49->SetMaximum(5000);
   h1He4_14dO4__49->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_14dO4__49->SetLineColor(ci);
   h1He4_14dO4__49->GetXaxis()->SetRange(1,1);
   h1He4_14dO4__49->GetXaxis()->SetLabelFont(42);
   h1He4_14dO4__49->GetXaxis()->SetLabelSize(0.07);
   h1He4_14dO4__49->GetXaxis()->SetTitleSize(0.07);
   h1He4_14dO4__49->GetXaxis()->SetTitleFont(42);
   h1He4_14dO4__49->GetYaxis()->SetLabelFont(42);
   h1He4_14dO4__49->GetYaxis()->SetLabelSize(0.07);
   h1He4_14dO4__49->GetYaxis()->SetTitleSize(0.07);
   h1He4_14dO4__49->GetYaxis()->SetTitleOffset(1.1);
   h1He4_14dO4__49->GetYaxis()->SetTitleFont(42);
   h1He4_14dO4__49->GetZaxis()->SetLabelFont(42);
   h1He4_14dO4__49->GetZaxis()->SetLabelSize(0.035);
   h1He4_14dO4__49->GetZaxis()->SetTitleSize(0.035);
   h1He4_14dO4__49->GetZaxis()->SetTitleFont(42);
   h1He4_14dO4__49->Draw("");
   
   TH1F *hbicHe4_14dO4__50 = new TH1F("hbicHe4_14dO4__50","BIC",19,5,100);
   hbicHe4_14dO4__50->SetBinContent(0,18.22295);
   hbicHe4_14dO4__50->SetBinContent(1,5.932873);
   hbicHe4_14dO4__50->SetBinContent(2,6.408634);
   hbicHe4_14dO4__50->SetBinContent(3,2.924004);
   hbicHe4_14dO4__50->SetBinContent(4,1.226693);
   hbicHe4_14dO4__50->SetBinContent(5,1.535295);
   hbicHe4_14dO4__50->SetBinContent(6,4.353859);
   hbicHe4_14dO4__50->SetBinContent(7,10.29702);
   hbicHe4_14dO4__50->SetBinContent(8,21.85159);
   hbicHe4_14dO4__50->SetBinContent(9,40.60173);
   hbicHe4_14dO4__50->SetBinContent(10,64.99672);
   hbicHe4_14dO4__50->SetBinContent(11,67.48868);
   hbicHe4_14dO4__50->SetBinContent(12,46.95379);
   hbicHe4_14dO4__50->SetBinContent(13,29.29404);
   hbicHe4_14dO4__50->SetBinContent(14,17.59288);
   hbicHe4_14dO4__50->SetBinContent(15,9.584662);
   hbicHe4_14dO4__50->SetBinContent(16,5.076502);
   hbicHe4_14dO4__50->SetBinContent(17,2.574255);
   hbicHe4_14dO4__50->SetBinContent(18,1.131541);
   hbicHe4_14dO4__50->SetBinContent(19,0.5066215);
   hbicHe4_14dO4__50->SetBinContent(20,0.4011826);
   hbicHe4_14dO4__50->SetEntries(139580);
   hbicHe4_14dO4__50->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicHe4_14dO4__50->SetLineColor(ci);
   hbicHe4_14dO4__50->SetLineWidth(2);
   hbicHe4_14dO4__50->GetXaxis()->SetRange(0,20);
   hbicHe4_14dO4__50->GetXaxis()->SetLabelFont(42);
   hbicHe4_14dO4__50->GetXaxis()->SetLabelSize(0.035);
   hbicHe4_14dO4__50->GetXaxis()->SetTitleSize(0.035);
   hbicHe4_14dO4__50->GetXaxis()->SetTitleFont(42);
   hbicHe4_14dO4__50->GetYaxis()->SetLabelFont(42);
   hbicHe4_14dO4__50->GetYaxis()->SetLabelSize(0.035);
   hbicHe4_14dO4__50->GetYaxis()->SetTitleSize(0.035);
   hbicHe4_14dO4__50->GetYaxis()->SetTitleFont(42);
   hbicHe4_14dO4__50->GetZaxis()->SetLabelFont(42);
   hbicHe4_14dO4__50->GetZaxis()->SetLabelSize(0.035);
   hbicHe4_14dO4__50->GetZaxis()->SetTitleSize(0.035);
   hbicHe4_14dO4__50->GetZaxis()->SetTitleFont(42);
   hbicHe4_14dO4__50->Draw("histCsame");
   
   TH1F *hinclHe4_14dO4__51 = new TH1F("hinclHe4_14dO4__51","INCL",19,5,100);
   hinclHe4_14dO4__51->SetBinContent(0,13.81508);
   hinclHe4_14dO4__51->SetBinContent(1,11.84774);
   hinclHe4_14dO4__51->SetBinContent(2,24.26897);
   hinclHe4_14dO4__51->SetBinContent(3,39.81223);
   hinclHe4_14dO4__51->SetBinContent(4,53.59902);
   hinclHe4_14dO4__51->SetBinContent(5,58.94812);
   hinclHe4_14dO4__51->SetBinContent(6,55.87496);
   hinclHe4_14dO4__51->SetBinContent(7,47.72015);
   hinclHe4_14dO4__51->SetBinContent(8,35.63839);
   hinclHe4_14dO4__51->SetBinContent(9,25.00447);
   hinclHe4_14dO4__51->SetBinContent(10,15.53554);
   hinclHe4_14dO4__51->SetBinContent(11,8.530272);
   hinclHe4_14dO4__51->SetBinContent(12,4.505589);
   hinclHe4_14dO4__51->SetBinContent(13,2.03163);
   hinclHe4_14dO4__51->SetBinContent(14,0.7637899);
   hinclHe4_14dO4__51->SetBinContent(15,0.3497489);
   hinclHe4_14dO4__51->SetBinContent(16,0.1105824);
   hinclHe4_14dO4__51->SetBinContent(17,0.05914871);
   hinclHe4_14dO4__51->SetBinContent(18,0.01800178);
   hinclHe4_14dO4__51->SetBinContent(20,0.002571683);
   hinclHe4_14dO4__51->SetEntries(154932);
   hinclHe4_14dO4__51->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_14dO4__51->SetLineColor(ci);
   hinclHe4_14dO4__51->SetLineWidth(2);
   hinclHe4_14dO4__51->GetXaxis()->SetRange(0,20);
   hinclHe4_14dO4__51->GetXaxis()->SetLabelFont(42);
   hinclHe4_14dO4__51->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_14dO4__51->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_14dO4__51->GetXaxis()->SetTitleFont(42);
   hinclHe4_14dO4__51->GetYaxis()->SetLabelFont(42);
   hinclHe4_14dO4__51->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_14dO4__51->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_14dO4__51->GetYaxis()->SetTitleFont(42);
   hinclHe4_14dO4__51->GetZaxis()->SetLabelFont(42);
   hinclHe4_14dO4__51->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_14dO4__51->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_14dO4__51->GetZaxis()->SetTitleFont(42);
   hinclHe4_14dO4__51->Draw("histCsame");
   
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
   canvasHe4_6->Range(-5.475,-4.985407,114.975,3.69897);
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
   
   TH1F *h1He4_21dO8__52 = new TH1F("h1He4_21dO8__52","",1,-5.475,114.975);
   h1He4_21dO8__52->SetMinimum(0.0004);
   h1He4_21dO8__52->SetMaximum(5000);
   h1He4_21dO8__52->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1He4_21dO8__52->SetLineColor(ci);
   h1He4_21dO8__52->GetXaxis()->SetTitle("E  [MeV/n]");
   h1He4_21dO8__52->GetXaxis()->SetRange(1,1);
   h1He4_21dO8__52->GetXaxis()->SetLabelFont(42);
   h1He4_21dO8__52->GetXaxis()->SetLabelSize(0.07);
   h1He4_21dO8__52->GetXaxis()->SetTitleSize(0.07);
   h1He4_21dO8__52->GetXaxis()->SetTitleFont(42);
   h1He4_21dO8__52->GetYaxis()->SetLabelFont(42);
   h1He4_21dO8__52->GetYaxis()->SetLabelSize(0.07);
   h1He4_21dO8__52->GetYaxis()->SetTitleSize(0.07);
   h1He4_21dO8__52->GetYaxis()->SetTitleOffset(1.1);
   h1He4_21dO8__52->GetYaxis()->SetTitleFont(42);
   h1He4_21dO8__52->GetZaxis()->SetLabelFont(42);
   h1He4_21dO8__52->GetZaxis()->SetLabelSize(0.035);
   h1He4_21dO8__52->GetZaxis()->SetTitleSize(0.035);
   h1He4_21dO8__52->GetZaxis()->SetTitleFont(42);
   h1He4_21dO8__52->Draw("");
   
   TH1F *hbicHe4_21dO8__53 = new TH1F("hbicHe4_21dO8__53","BIC",19,5,100);
   hbicHe4_21dO8__53->SetBinContent(0,18.861);
   hbicHe4_21dO8__53->SetBinContent(1,7.627408);
   hbicHe4_21dO8__53->SetBinContent(2,8.247382);
   hbicHe4_21dO8__53->SetBinContent(3,3.44258);
   hbicHe4_21dO8__53->SetBinContent(4,1.131453);
   hbicHe4_21dO8__53->SetBinContent(5,1.324334);
   hbicHe4_21dO8__53->SetBinContent(6,3.087817);
   hbicHe4_21dO8__53->SetBinContent(7,6.495955);
   hbicHe4_21dO8__53->SetBinContent(8,11.52291);
   hbicHe4_21dO8__53->SetBinContent(9,18.00337);
   hbicHe4_21dO8__53->SetBinContent(10,22.59462);
   hbicHe4_21dO8__53->SetBinContent(11,20.01312);
   hbicHe4_21dO8__53->SetBinContent(12,15.29787);
   hbicHe4_21dO8__53->SetBinContent(13,10.52923);
   hbicHe4_21dO8__53->SetBinContent(14,6.864495);
   hbicHe4_21dO8__53->SetBinContent(15,3.976447);
   hbicHe4_21dO8__53->SetBinContent(16,2.398957);
   hbicHe4_21dO8__53->SetBinContent(17,1.177951);
   hbicHe4_21dO8__53->SetBinContent(18,0.7198592);
   hbicHe4_21dO8__53->SetBinContent(19,0.3650961);
   hbicHe4_21dO8__53->SetBinContent(20,0.2875993);
   hbicHe4_21dO8__53->SetEntries(95212);
   hbicHe4_21dO8__53->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicHe4_21dO8__53->SetLineColor(ci);
   hbicHe4_21dO8__53->SetLineWidth(2);
   hbicHe4_21dO8__53->GetXaxis()->SetRange(0,20);
   hbicHe4_21dO8__53->GetXaxis()->SetLabelFont(42);
   hbicHe4_21dO8__53->GetXaxis()->SetLabelSize(0.035);
   hbicHe4_21dO8__53->GetXaxis()->SetTitleSize(0.035);
   hbicHe4_21dO8__53->GetXaxis()->SetTitleFont(42);
   hbicHe4_21dO8__53->GetYaxis()->SetLabelFont(42);
   hbicHe4_21dO8__53->GetYaxis()->SetLabelSize(0.035);
   hbicHe4_21dO8__53->GetYaxis()->SetTitleSize(0.035);
   hbicHe4_21dO8__53->GetYaxis()->SetTitleFont(42);
   hbicHe4_21dO8__53->GetZaxis()->SetLabelFont(42);
   hbicHe4_21dO8__53->GetZaxis()->SetLabelSize(0.035);
   hbicHe4_21dO8__53->GetZaxis()->SetTitleSize(0.035);
   hbicHe4_21dO8__53->GetZaxis()->SetTitleFont(42);
   hbicHe4_21dO8__53->Draw("histCsame");
   
   TH1F *hinclHe4_21dO8__54 = new TH1F("hinclHe4_21dO8__54","INCL",19,5,100);
   hinclHe4_21dO8__54->SetBinContent(0,13.52922);
   hinclHe4_21dO8__54->SetBinContent(1,9.235897);
   hinclHe4_21dO8__54->SetBinContent(2,14.62967);
   hinclHe4_21dO8__54->SetBinContent(3,20.06306);
   hinclHe4_21dO8__54->SetBinContent(4,21.49761);
   hinclHe4_21dO8__54->SetBinContent(5,19.04355);
   hinclHe4_21dO8__54->SetBinContent(6,14.4299);
   hinclHe4_21dO8__54->SetBinContent(7,10.05908);
   hinclHe4_21dO8__54->SetBinContent(8,5.986197);
   hinclHe4_21dO8__54->SetBinContent(9,3.246255);
   hinclHe4_21dO8__54->SetBinContent(10,1.722151);
   hinclHe4_21dO8__54->SetBinContent(11,0.785301);
   hinclHe4_21dO8__54->SetBinContent(12,0.340986);
   hinclHe4_21dO8__54->SetBinContent(13,0.1377721);
   hinclHe4_21dO8__54->SetBinContent(14,0.0671639);
   hinclHe4_21dO8__54->SetBinContent(15,0.01549936);
   hinclHe4_21dO8__54->SetBinContent(16,0.008610756);
   hinclHe4_21dO8__54->SetBinContent(17,0.001722151);
   hinclHe4_21dO8__54->SetBinContent(18,0.001722151);
   hinclHe4_21dO8__54->SetEntries(78275);
   hinclHe4_21dO8__54->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclHe4_21dO8__54->SetLineColor(ci);
   hinclHe4_21dO8__54->SetLineWidth(2);
   hinclHe4_21dO8__54->GetXaxis()->SetRange(0,20);
   hinclHe4_21dO8__54->GetXaxis()->SetLabelFont(42);
   hinclHe4_21dO8__54->GetXaxis()->SetLabelSize(0.035);
   hinclHe4_21dO8__54->GetXaxis()->SetTitleSize(0.035);
   hinclHe4_21dO8__54->GetXaxis()->SetTitleFont(42);
   hinclHe4_21dO8__54->GetYaxis()->SetLabelFont(42);
   hinclHe4_21dO8__54->GetYaxis()->SetLabelSize(0.035);
   hinclHe4_21dO8__54->GetYaxis()->SetTitleSize(0.035);
   hinclHe4_21dO8__54->GetYaxis()->SetTitleFont(42);
   hinclHe4_21dO8__54->GetZaxis()->SetLabelFont(42);
   hinclHe4_21dO8__54->GetZaxis()->SetLabelSize(0.035);
   hinclHe4_21dO8__54->GetZaxis()->SetTitleSize(0.035);
   hinclHe4_21dO8__54->GetZaxis()->SetTitleFont(42);
   hinclHe4_21dO8__54->Draw("histCsame");
   
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
