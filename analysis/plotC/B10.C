void B10()
{
//=========Macro generated from canvas: canvasB10/canvasB10
//=========  (Sat Dec 15 20:26:57 2018) by ROOT version6.06/06
   TCanvas *canvasB10 = new TCanvas("canvasB10", "canvasB10",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasB10->Range(0,0,1,1);
   canvasB10->SetFillColor(0);
   canvasB10->SetBorderMode(0);
   canvasB10->SetBorderSize(2);
   canvasB10->SetRightMargin(0.04957356);
   canvasB10->SetTopMargin(0.03208003);
   canvasB10->SetBottomMargin(0.0609319);
   canvasB10->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasB10_1
   TPad *canvasB10_1 = new TPad("canvasB10_1", "canvasB10_1",0,0.6655906,0.5209121,0.96792);
   canvasB10_1->Draw();
   canvasB10_1->cd();
   canvasB10_1->Range(-23.04474,-3.39794,86.94,3.69897);
   canvasB10_1->SetFillColor(0);
   canvasB10_1->SetBorderMode(0);
   canvasB10_1->SetBorderSize(2);
   canvasB10_1->SetLogy();
   canvasB10_1->SetLeftMargin(0.1827957);
   canvasB10_1->SetRightMargin(0);
   canvasB10_1->SetTopMargin(0);
   canvasB10_1->SetBottomMargin(0);
   canvasB10_1->SetFrameBorderMode(0);
   canvasB10_1->SetFrameBorderMode(0);
   
   TH1F *h1B10_2dO2__127 = new TH1F("h1B10_2dO2__127","^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n",1,-2.94,86.94);
   h1B10_2dO2__127->SetMinimum(0.0004);
   h1B10_2dO2__127->SetMaximum(5000);
   h1B10_2dO2__127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1B10_2dO2__127->SetLineColor(ci);
   h1B10_2dO2__127->GetXaxis()->SetRange(1,1);
   h1B10_2dO2__127->GetXaxis()->SetLabelFont(42);
   h1B10_2dO2__127->GetXaxis()->SetLabelSize(0.07);
   h1B10_2dO2__127->GetXaxis()->SetTitleSize(0.07);
   h1B10_2dO2__127->GetXaxis()->SetTitleFont(42);
   h1B10_2dO2__127->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1B10_2dO2__127->GetYaxis()->SetLabelFont(42);
   h1B10_2dO2__127->GetYaxis()->SetLabelSize(0.07);
   h1B10_2dO2__127->GetYaxis()->SetTitleSize(0.07);
   h1B10_2dO2__127->GetYaxis()->SetTitleOffset(1.1);
   h1B10_2dO2__127->GetYaxis()->SetTitleFont(42);
   h1B10_2dO2__127->GetZaxis()->SetLabelFont(42);
   h1B10_2dO2__127->GetZaxis()->SetLabelSize(0.035);
   h1B10_2dO2__127->GetZaxis()->SetTitleSize(0.035);
   h1B10_2dO2__127->GetZaxis()->SetTitleFont(42);
   h1B10_2dO2__127->Draw("");
   
   TPaveText *pt = new TPaveText(0.2620948,0.9312746,0.7379052,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicB10_2dO2__128 = new TH1F("hbicB10_2dO2__128","BIC",17,8,76);
   hbicB10_2dO2__128->SetBinContent(0,0.7027809);
   hbicB10_2dO2__128->SetBinContent(2,0.07808676);
   hbicB10_2dO2__128->SetBinContent(12,1.795996);
   hbicB10_2dO2__128->SetBinContent(13,49.66319);
   hbicB10_2dO2__128->SetBinContent(14,129.7021);
   hbicB10_2dO2__128->SetBinContent(15,13.50901);
   hbicB10_2dO2__128->SetEntries(2503);
   hbicB10_2dO2__128->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB10_2dO2__128->SetLineColor(ci);
   hbicB10_2dO2__128->SetLineWidth(2);
   hbicB10_2dO2__128->GetXaxis()->SetRange(0,18);
   hbicB10_2dO2__128->GetXaxis()->SetLabelFont(42);
   hbicB10_2dO2__128->GetXaxis()->SetLabelSize(0.035);
   hbicB10_2dO2__128->GetXaxis()->SetTitleSize(0.035);
   hbicB10_2dO2__128->GetXaxis()->SetTitleFont(42);
   hbicB10_2dO2__128->GetYaxis()->SetLabelFont(42);
   hbicB10_2dO2__128->GetYaxis()->SetLabelSize(0.035);
   hbicB10_2dO2__128->GetYaxis()->SetTitleSize(0.035);
   hbicB10_2dO2__128->GetYaxis()->SetTitleFont(42);
   hbicB10_2dO2__128->GetZaxis()->SetLabelFont(42);
   hbicB10_2dO2__128->GetZaxis()->SetLabelSize(0.035);
   hbicB10_2dO2__128->GetZaxis()->SetTitleSize(0.035);
   hbicB10_2dO2__128->GetZaxis()->SetTitleFont(42);
   hbicB10_2dO2__128->Draw("histCsame");
   
   TH1F *hinclB10_2dO2__129 = new TH1F("hinclB10_2dO2__129","INCL",17,8,76);
   hinclB10_2dO2__129->SetBinContent(0,0.2342603);
   hinclB10_2dO2__129->SetBinContent(2,0.3123471);
   hinclB10_2dO2__129->SetBinContent(3,1.639822);
   hinclB10_2dO2__129->SetBinContent(4,4.138598);
   hinclB10_2dO2__129->SetBinContent(5,6.871635);
   hinclB10_2dO2__129->SetBinContent(6,10.38554);
   hinclB10_2dO2__129->SetBinContent(7,13.97753);
   hinclB10_2dO2__129->SetBinContent(8,19.99021);
   hinclB10_2dO2__129->SetBinContent(9,30.21958);
   hinclB10_2dO2__129->SetBinContent(10,34.98287);
   hinclB10_2dO2__129->SetBinContent(11,27.01802);
   hinclB10_2dO2__129->SetBinContent(12,15.30501);
   hinclB10_2dO2__129->SetBinContent(13,3.123471);
   hinclB10_2dO2__129->SetEntries(2154);
   hinclB10_2dO2__129->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_2dO2__129->SetLineColor(ci);
   hinclB10_2dO2__129->SetLineWidth(2);
   hinclB10_2dO2__129->GetXaxis()->SetRange(0,18);
   hinclB10_2dO2__129->GetXaxis()->SetLabelFont(42);
   hinclB10_2dO2__129->GetXaxis()->SetLabelSize(0.035);
   hinclB10_2dO2__129->GetXaxis()->SetTitleSize(0.035);
   hinclB10_2dO2__129->GetXaxis()->SetTitleFont(42);
   hinclB10_2dO2__129->GetYaxis()->SetLabelFont(42);
   hinclB10_2dO2__129->GetYaxis()->SetLabelSize(0.035);
   hinclB10_2dO2__129->GetYaxis()->SetTitleSize(0.035);
   hinclB10_2dO2__129->GetYaxis()->SetTitleFont(42);
   hinclB10_2dO2__129->GetZaxis()->SetLabelFont(42);
   hinclB10_2dO2__129->GetZaxis()->SetLabelSize(0.035);
   hinclB10_2dO2__129->GetZaxis()->SetTitleSize(0.035);
   hinclB10_2dO2__129->GetZaxis()->SetTitleFont(42);
   hinclB10_2dO2__129->Draw("histCsame");
   
   Double_t Graph0_fx1043[17] = {
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
   Double_t Graph0_fy1043[17] = {
   0.3,
   0.2,
   0.3,
   0.7,
   0.3,
   0.3,
   0.5,
   0.9,
   1.1,
   1.7,
   2.9,
   4.6,
   7,
   10,
   7,
   1.5,
   0.9};
   Double_t Graph0_fex1043[17] = {
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
   Double_t Graph0_fey1043[17] = {
   0.2,
   0.1,
   0.1,
   0.3,
   0.2,
   0.2,
   0.2,
   0.3,
   0.3,
   0.4,
   0.6,
   0.8,
   1,
   1,
   1,
   0.4,
   0.1};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","^{12}C + ^{nat}C #rightarrow ^{10}B at 62 MeV/n",100,1.2,82.8);
   Graph_Graph1043->SetMinimum(0.09);
   Graph_Graph1043->SetMaximum(12.09);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
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
   canvasB10_1->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_3
   TPad *canvasB10_3 = new TPad("canvasB10_3", "canvasB10_3",0,0.3632613,0.5209121,0.6655906);
   canvasB10_3->Draw();
   canvasB10_3->cd();
   canvasB10_3->Range(-23.04474,-3.39794,86.94,3.69897);
   canvasB10_3->SetFillColor(0);
   canvasB10_3->SetBorderMode(0);
   canvasB10_3->SetBorderSize(2);
   canvasB10_3->SetLogy();
   canvasB10_3->SetLeftMargin(0.1827957);
   canvasB10_3->SetRightMargin(0);
   canvasB10_3->SetTopMargin(0);
   canvasB10_3->SetBottomMargin(0);
   canvasB10_3->SetFrameBorderMode(0);
   canvasB10_3->SetFrameBorderMode(0);
   
   TH1F *h1B10_4dO9__130 = new TH1F("h1B10_4dO9__130","",1,-2.94,86.94);
   h1B10_4dO9__130->SetMinimum(0.0004);
   h1B10_4dO9__130->SetMaximum(5000);
   h1B10_4dO9__130->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_4dO9__130->SetLineColor(ci);
   h1B10_4dO9__130->GetXaxis()->SetRange(1,1);
   h1B10_4dO9__130->GetXaxis()->SetLabelFont(42);
   h1B10_4dO9__130->GetXaxis()->SetLabelSize(0.07);
   h1B10_4dO9__130->GetXaxis()->SetTitleSize(0.07);
   h1B10_4dO9__130->GetXaxis()->SetTitleFont(42);
   h1B10_4dO9__130->GetYaxis()->SetLabelFont(42);
   h1B10_4dO9__130->GetYaxis()->SetLabelSize(0.07);
   h1B10_4dO9__130->GetYaxis()->SetTitleSize(0.07);
   h1B10_4dO9__130->GetYaxis()->SetTitleOffset(1.1);
   h1B10_4dO9__130->GetYaxis()->SetTitleFont(42);
   h1B10_4dO9__130->GetZaxis()->SetLabelFont(42);
   h1B10_4dO9__130->GetZaxis()->SetLabelSize(0.035);
   h1B10_4dO9__130->GetZaxis()->SetTitleSize(0.035);
   h1B10_4dO9__130->GetZaxis()->SetTitleFont(42);
   h1B10_4dO9__130->Draw("");
   
   TH1F *hbicB10_4dO9__131 = new TH1F("hbicB10_4dO9__131","BIC",17,8,76);
   hbicB10_4dO9__131->SetBinContent(0,0.5264027);
   hbicB10_4dO9__131->SetBinContent(1,0.07018702);
   hbicB10_4dO9__131->SetBinContent(2,0.03509351);
   hbicB10_4dO9__131->SetBinContent(11,0.03509351);
   hbicB10_4dO9__131->SetBinContent(12,1.965237);
   hbicB10_4dO9__131->SetBinContent(13,32.18075);
   hbicB10_4dO9__131->SetBinContent(14,39.30473);
   hbicB10_4dO9__131->SetBinContent(15,2.316172);
   hbicB10_4dO9__131->SetEntries(2178);
   hbicB10_4dO9__131->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB10_4dO9__131->SetLineColor(ci);
   hbicB10_4dO9__131->SetLineWidth(2);
   hbicB10_4dO9__131->GetXaxis()->SetRange(0,18);
   hbicB10_4dO9__131->GetXaxis()->SetLabelFont(42);
   hbicB10_4dO9__131->GetXaxis()->SetLabelSize(0.035);
   hbicB10_4dO9__131->GetXaxis()->SetTitleSize(0.035);
   hbicB10_4dO9__131->GetXaxis()->SetTitleFont(42);
   hbicB10_4dO9__131->GetYaxis()->SetLabelFont(42);
   hbicB10_4dO9__131->GetYaxis()->SetLabelSize(0.035);
   hbicB10_4dO9__131->GetYaxis()->SetTitleSize(0.035);
   hbicB10_4dO9__131->GetYaxis()->SetTitleFont(42);
   hbicB10_4dO9__131->GetZaxis()->SetLabelFont(42);
   hbicB10_4dO9__131->GetZaxis()->SetLabelSize(0.035);
   hbicB10_4dO9__131->GetZaxis()->SetTitleSize(0.035);
   hbicB10_4dO9__131->GetZaxis()->SetTitleFont(42);
   hbicB10_4dO9__131->Draw("histCsame");
   
   TH1F *hinclB10_4dO9__132 = new TH1F("hinclB10_4dO9__132","INCL",17,8,76);
   hinclB10_4dO9__132->SetBinContent(0,0.2456546);
   hinclB10_4dO9__132->SetBinContent(1,0.140374);
   hinclB10_4dO9__132->SetBinContent(2,0.4913092);
   hinclB10_4dO9__132->SetBinContent(3,1.228273);
   hinclB10_4dO9__132->SetBinContent(4,2.632014);
   hinclB10_4dO9__132->SetBinContent(5,4.49197);
   hinclB10_4dO9__132->SetBinContent(6,5.685149);
   hinclB10_4dO9__132->SetBinContent(7,8.141695);
   hinclB10_4dO9__132->SetBinContent(8,8.983939);
   hinclB10_4dO9__132->SetBinContent(9,11.79142);
   hinclB10_4dO9__132->SetBinContent(10,11.22992);
   hinclB10_4dO9__132->SetBinContent(11,6.667768);
   hinclB10_4dO9__132->SetBinContent(12,2.351265);
   hinclB10_4dO9__132->SetBinContent(13,0.3509351);
   hinclB10_4dO9__132->SetBinContent(14,0.07018702);
   hinclB10_4dO9__132->SetEntries(1838);
   hinclB10_4dO9__132->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_4dO9__132->SetLineColor(ci);
   hinclB10_4dO9__132->SetLineWidth(2);
   hinclB10_4dO9__132->GetXaxis()->SetRange(0,18);
   hinclB10_4dO9__132->GetXaxis()->SetLabelFont(42);
   hinclB10_4dO9__132->GetXaxis()->SetLabelSize(0.035);
   hinclB10_4dO9__132->GetXaxis()->SetTitleSize(0.035);
   hinclB10_4dO9__132->GetXaxis()->SetTitleFont(42);
   hinclB10_4dO9__132->GetYaxis()->SetLabelFont(42);
   hinclB10_4dO9__132->GetYaxis()->SetLabelSize(0.035);
   hinclB10_4dO9__132->GetYaxis()->SetTitleSize(0.035);
   hinclB10_4dO9__132->GetYaxis()->SetTitleFont(42);
   hinclB10_4dO9__132->GetZaxis()->SetLabelFont(42);
   hinclB10_4dO9__132->GetZaxis()->SetLabelSize(0.035);
   hinclB10_4dO9__132->GetZaxis()->SetTitleSize(0.035);
   hinclB10_4dO9__132->GetZaxis()->SetTitleFont(42);
   hinclB10_4dO9__132->Draw("histCsame");
   
   Double_t Graph0_fx1044[17] = {
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
   Double_t Graph0_fy1044[17] = {
   0.3,
   0.2,
   0.3,
   0.2,
   0.2,
   0.2,
   0.2,
   0.5,
   0.3,
   0.7,
   1.3,
   1.4,
   2.6,
   1.6,
   2.4,
   0.9,
   0.3};
   Double_t Graph0_fex1044[17] = {
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
   Double_t Graph0_fey1044[17] = {
   0.2,
   0.1,
   0.2,
   0.1,
   0.1,
   0.1,
   0.1,
   0.2,
   0.1,
   0.2,
   0.4,
   0.4,
   0.5,
   0.4,
   0.5,
   0.5,
   0.2};
   gre = new TGraphErrors(17,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1044 = new TH1F("Graph_Graph1044","",100,1.2,82.8);
   Graph_Graph1044->SetMinimum(0.09);
   Graph_Graph1044->SetMaximum(3.4);
   Graph_Graph1044->SetDirectory(0);
   Graph_Graph1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1044->SetLineColor(ci);
   Graph_Graph1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph1044->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1044->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph1044->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1044->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1044->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1044);
   
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
   canvasB10_3->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_5
   TPad *canvasB10_5 = new TPad("canvasB10_5", "canvasB10_5",0,0,0.5209121,0.3632613);
   canvasB10_5->Draw();
   canvasB10_5->cd();
   canvasB10_5->Range(-23.04474,-4.985407,86.94,3.69897);
   canvasB10_5->SetFillColor(0);
   canvasB10_5->SetBorderMode(0);
   canvasB10_5->SetBorderSize(2);
   canvasB10_5->SetLogy();
   canvasB10_5->SetLeftMargin(0.1827957);
   canvasB10_5->SetRightMargin(0);
   canvasB10_5->SetTopMargin(0);
   canvasB10_5->SetBottomMargin(0.1827957);
   canvasB10_5->SetFrameBorderMode(0);
   canvasB10_5->SetFrameBorderMode(0);
   
   TH1F *h1B10_11dO1__133 = new TH1F("h1B10_11dO1__133","",1,-2.94,86.94);
   h1B10_11dO1__133->SetMinimum(0.0004);
   h1B10_11dO1__133->SetMaximum(5000);
   h1B10_11dO1__133->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_11dO1__133->SetLineColor(ci);
   h1B10_11dO1__133->GetXaxis()->SetRange(1,1);
   h1B10_11dO1__133->GetXaxis()->SetLabelFont(42);
   h1B10_11dO1__133->GetXaxis()->SetLabelSize(0.07);
   h1B10_11dO1__133->GetXaxis()->SetTitleSize(0.07);
   h1B10_11dO1__133->GetXaxis()->SetTitleFont(42);
   h1B10_11dO1__133->GetYaxis()->SetLabelFont(42);
   h1B10_11dO1__133->GetYaxis()->SetLabelSize(0.07);
   h1B10_11dO1__133->GetYaxis()->SetTitleSize(0.07);
   h1B10_11dO1__133->GetYaxis()->SetTitleOffset(1.1);
   h1B10_11dO1__133->GetYaxis()->SetTitleFont(42);
   h1B10_11dO1__133->GetZaxis()->SetLabelFont(42);
   h1B10_11dO1__133->GetZaxis()->SetLabelSize(0.035);
   h1B10_11dO1__133->GetZaxis()->SetTitleSize(0.035);
   h1B10_11dO1__133->GetZaxis()->SetTitleFont(42);
   h1B10_11dO1__133->Draw("");
   
   TH1F *hbicB10_11dO1__134 = new TH1F("hbicB10_11dO1__134","BIC",17,8,76);
   hbicB10_11dO1__134->SetBinContent(0,0.552277);
   hbicB10_11dO1__134->SetBinContent(1,0.07474425);
   hbicB10_11dO1__134->SetBinContent(2,0.08720163);
   hbicB10_11dO1__134->SetBinContent(3,0.09135409);
   hbicB10_11dO1__134->SetBinContent(4,0.01245738);
   hbicB10_11dO1__134->SetBinContent(10,0.004152459);
   hbicB10_11dO1__134->SetBinContent(11,0.8471015);
   hbicB10_11dO1__134->SetBinContent(12,8.508388);
   hbicB10_11dO1__134->SetBinContent(13,12.37433);
   hbicB10_11dO1__134->SetBinContent(14,1.822929);
   hbicB10_11dO1__134->SetBinContent(15,0.01245738);
   hbicB10_11dO1__134->SetEntries(5873);
   hbicB10_11dO1__134->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB10_11dO1__134->SetLineColor(ci);
   hbicB10_11dO1__134->SetLineWidth(2);
   hbicB10_11dO1__134->GetXaxis()->SetRange(0,18);
   hbicB10_11dO1__134->GetXaxis()->SetLabelFont(42);
   hbicB10_11dO1__134->GetXaxis()->SetLabelSize(0.035);
   hbicB10_11dO1__134->GetXaxis()->SetTitleSize(0.035);
   hbicB10_11dO1__134->GetXaxis()->SetTitleFont(42);
   hbicB10_11dO1__134->GetYaxis()->SetLabelFont(42);
   hbicB10_11dO1__134->GetYaxis()->SetLabelSize(0.035);
   hbicB10_11dO1__134->GetYaxis()->SetTitleSize(0.035);
   hbicB10_11dO1__134->GetYaxis()->SetTitleFont(42);
   hbicB10_11dO1__134->GetZaxis()->SetLabelFont(42);
   hbicB10_11dO1__134->GetZaxis()->SetLabelSize(0.035);
   hbicB10_11dO1__134->GetZaxis()->SetTitleSize(0.035);
   hbicB10_11dO1__134->GetZaxis()->SetTitleFont(42);
   hbicB10_11dO1__134->Draw("histCsame");
   
   TH1F *hinclB10_11dO1__135 = new TH1F("hinclB10_11dO1__135","INCL",17,8,76);
   hinclB10_11dO1__135->SetBinContent(0,0.2283852);
   hinclB10_11dO1__135->SetBinContent(1,0.05398196);
   hinclB10_11dO1__135->SetBinContent(2,0.2408426);
   hinclB10_11dO1__135->SetBinContent(3,0.4858376);
   hinclB10_11dO1__135->SetBinContent(4,0.8014245);
   hinclB10_11dO1__135->SetBinContent(5,0.9882851);
   hinclB10_11dO1__135->SetBinContent(6,0.9467605);
   hinclB10_11dO1__135->SetBinContent(7,0.6851556);
   hinclB10_11dO1__135->SetBinContent(8,0.4692278);
   hinclB10_11dO1__135->SetBinContent(9,0.2159278);
   hinclB10_11dO1__135->SetBinContent(10,0.07474425);
   hinclB10_11dO1__135->SetBinContent(11,0.02076229);
   hinclB10_11dO1__135->SetBinContent(13,0.004152459);
   hinclB10_11dO1__135->SetEntries(1256);
   hinclB10_11dO1__135->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_11dO1__135->SetLineColor(ci);
   hinclB10_11dO1__135->SetLineWidth(2);
   hinclB10_11dO1__135->GetXaxis()->SetRange(0,18);
   hinclB10_11dO1__135->GetXaxis()->SetLabelFont(42);
   hinclB10_11dO1__135->GetXaxis()->SetLabelSize(0.035);
   hinclB10_11dO1__135->GetXaxis()->SetTitleSize(0.035);
   hinclB10_11dO1__135->GetXaxis()->SetTitleFont(42);
   hinclB10_11dO1__135->GetYaxis()->SetLabelFont(42);
   hinclB10_11dO1__135->GetYaxis()->SetLabelSize(0.035);
   hinclB10_11dO1__135->GetYaxis()->SetTitleSize(0.035);
   hinclB10_11dO1__135->GetYaxis()->SetTitleFont(42);
   hinclB10_11dO1__135->GetZaxis()->SetLabelFont(42);
   hinclB10_11dO1__135->GetZaxis()->SetLabelSize(0.035);
   hinclB10_11dO1__135->GetZaxis()->SetTitleSize(0.035);
   hinclB10_11dO1__135->GetZaxis()->SetTitleFont(42);
   hinclB10_11dO1__135->Draw("histCsame");
   
   Double_t Graph0_fx1045[17] = {
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
   Double_t Graph0_fy1045[17] = {
   0.02,
   0.03,
   0.04,
   0.04,
   0.04,
   0.08,
   0.07,
   0.17,
   0.13,
   0.26,
   0.21,
   0.26,
   0.29,
   0.21,
   0.12,
   0.06,
   0.013};
   Double_t Graph0_fex1045[17] = {
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
   Double_t Graph0_fey1045[17] = {
   0.01,
   0.01,
   0.01,
   0.02,
   0.01,
   0.02,
   0.02,
   0.03,
   0.03,
   0.05,
   0.04,
   0.05,
   0.05,
   0.04,
   0.03,
   0.02,
   0.008};
   gre = new TGraphErrors(17,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,1.2,82.8);
   Graph_Graph1045->SetMinimum(0.0045);
   Graph_Graph1045->SetMaximum(0.3735);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
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
   entry=leg->AddEntry("hbicB10_11.1","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hinclB10_11.1","INCL","l");

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
   canvasB10_5->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_2
   TPad *canvasB10_2 = new TPad("canvasB10_2", "canvasB10_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasB10_2->Draw();
   canvasB10_2->cd();
   canvasB10_2->Range(-2.94,-3.39794,86.94,3.69897);
   canvasB10_2->SetFillColor(0);
   canvasB10_2->SetBorderMode(0);
   canvasB10_2->SetBorderSize(2);
   canvasB10_2->SetLogy();
   canvasB10_2->SetLeftMargin(0);
   canvasB10_2->SetRightMargin(0);
   canvasB10_2->SetTopMargin(0);
   canvasB10_2->SetBottomMargin(0);
   canvasB10_2->SetFrameBorderMode(0);
   canvasB10_2->SetFrameBorderMode(0);
   
   TH1F *h1B10_3dO5__136 = new TH1F("h1B10_3dO5__136","",1,-2.94,86.94);
   h1B10_3dO5__136->SetMinimum(0.0004);
   h1B10_3dO5__136->SetMaximum(5000);
   h1B10_3dO5__136->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_3dO5__136->SetLineColor(ci);
   h1B10_3dO5__136->GetXaxis()->SetRange(1,1);
   h1B10_3dO5__136->GetXaxis()->SetLabelFont(42);
   h1B10_3dO5__136->GetXaxis()->SetLabelSize(0.07);
   h1B10_3dO5__136->GetXaxis()->SetTitleSize(0.07);
   h1B10_3dO5__136->GetXaxis()->SetTitleFont(42);
   h1B10_3dO5__136->GetYaxis()->SetLabelFont(42);
   h1B10_3dO5__136->GetYaxis()->SetLabelSize(0.07);
   h1B10_3dO5__136->GetYaxis()->SetTitleSize(0.07);
   h1B10_3dO5__136->GetYaxis()->SetTitleOffset(1.1);
   h1B10_3dO5__136->GetYaxis()->SetTitleFont(42);
   h1B10_3dO5__136->GetZaxis()->SetLabelFont(42);
   h1B10_3dO5__136->GetZaxis()->SetLabelSize(0.035);
   h1B10_3dO5__136->GetZaxis()->SetTitleSize(0.035);
   h1B10_3dO5__136->GetZaxis()->SetTitleFont(42);
   h1B10_3dO5__136->Draw("");
   
   TH1F *hbicB10_3dO5__137 = new TH1F("hbicB10_3dO5__137","BIC",17,8,76);
   hbicB10_3dO5__137->SetBinContent(0,0.7365237);
   hbicB10_3dO5__137->SetBinContent(1,0.09820317);
   hbicB10_3dO5__137->SetBinContent(12,1.423946);
   hbicB10_3dO5__137->SetBinContent(13,34.2238);
   hbicB10_3dO5__137->SetBinContent(14,67.22007);
   hbicB10_3dO5__137->SetBinContent(15,5.548479);
   hbicB10_3dO5__137->SetEntries(2225);
   hbicB10_3dO5__137->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB10_3dO5__137->SetLineColor(ci);
   hbicB10_3dO5__137->SetLineWidth(2);
   hbicB10_3dO5__137->GetXaxis()->SetRange(0,18);
   hbicB10_3dO5__137->GetXaxis()->SetLabelFont(42);
   hbicB10_3dO5__137->GetXaxis()->SetLabelSize(0.035);
   hbicB10_3dO5__137->GetXaxis()->SetTitleSize(0.035);
   hbicB10_3dO5__137->GetXaxis()->SetTitleFont(42);
   hbicB10_3dO5__137->GetYaxis()->SetLabelFont(42);
   hbicB10_3dO5__137->GetYaxis()->SetLabelSize(0.035);
   hbicB10_3dO5__137->GetYaxis()->SetTitleSize(0.035);
   hbicB10_3dO5__137->GetYaxis()->SetTitleFont(42);
   hbicB10_3dO5__137->GetZaxis()->SetLabelFont(42);
   hbicB10_3dO5__137->GetZaxis()->SetLabelSize(0.035);
   hbicB10_3dO5__137->GetZaxis()->SetTitleSize(0.035);
   hbicB10_3dO5__137->GetZaxis()->SetTitleFont(42);
   hbicB10_3dO5__137->Draw("histCsame");
   
   TH1F *hinclB10_3dO5__138 = new TH1F("hinclB10_3dO5__138","INCL",17,8,76);
   hinclB10_3dO5__138->SetBinContent(0,0.2455079);
   hinclB10_3dO5__138->SetBinContent(1,0.09820317);
   hinclB10_3dO5__138->SetBinContent(2,0.2455079);
   hinclB10_3dO5__138->SetBinContent(3,1.276641);
   hinclB10_3dO5__138->SetBinContent(4,3.388009);
   hinclB10_3dO5__138->SetBinContent(5,5.057463);
   hinclB10_3dO5__138->SetBinContent(6,8.543675);
   hinclB10_3dO5__138->SetBinContent(7,11.53887);
   hinclB10_3dO5__138->SetBinContent(8,13.15922);
   hinclB10_3dO5__138->SetBinContent(9,21.01548);
   hinclB10_3dO5__138->SetBinContent(10,21.99751);
   hinclB10_3dO5__138->SetBinContent(11,16.00712);
   hinclB10_3dO5__138->SetBinContent(12,6.334104);
   hinclB10_3dO5__138->SetBinContent(13,1.325743);
   hinclB10_3dO5__138->SetBinContent(14,0.1473047);
   hinclB10_3dO5__138->SetEntries(2248);
   hinclB10_3dO5__138->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_3dO5__138->SetLineColor(ci);
   hinclB10_3dO5__138->SetLineWidth(2);
   hinclB10_3dO5__138->GetXaxis()->SetRange(0,18);
   hinclB10_3dO5__138->GetXaxis()->SetLabelFont(42);
   hinclB10_3dO5__138->GetXaxis()->SetLabelSize(0.035);
   hinclB10_3dO5__138->GetXaxis()->SetTitleSize(0.035);
   hinclB10_3dO5__138->GetXaxis()->SetTitleFont(42);
   hinclB10_3dO5__138->GetYaxis()->SetLabelFont(42);
   hinclB10_3dO5__138->GetYaxis()->SetLabelSize(0.035);
   hinclB10_3dO5__138->GetYaxis()->SetTitleSize(0.035);
   hinclB10_3dO5__138->GetYaxis()->SetTitleFont(42);
   hinclB10_3dO5__138->GetZaxis()->SetLabelFont(42);
   hinclB10_3dO5__138->GetZaxis()->SetLabelSize(0.035);
   hinclB10_3dO5__138->GetZaxis()->SetTitleSize(0.035);
   hinclB10_3dO5__138->GetZaxis()->SetTitleFont(42);
   hinclB10_3dO5__138->Draw("histCsame");
   
   Double_t Graph0_fx1046[17] = {
   10,
   14,
   14,
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
   Double_t Graph0_fy1046[17] = {
   0.3,
   0.8,
   0.2,
   1.1,
   0.7,
   0.4,
   1.1,
   0.6,
   0.6,
   1.2,
   1.6,
   2.5,
   4.4,
   4.8,
   3.1,
   2.1,
   0.3};
   Double_t Graph0_fex1046[17] = {
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
   Double_t Graph0_fey1046[17] = {
   0.2,
   0.3,
   0.1,
   0.3,
   0.3,
   0.2,
   0.3,
   0.2,
   0.2,
   0.3,
   0.4,
   0.5,
   0.8,
   0.8,
   0.6,
   0.5,
   0.2};
   gre = new TGraphErrors(17,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1046 = new TH1F("Graph_Graph1046","",100,1.2,82.8);
   Graph_Graph1046->SetMinimum(0.09);
   Graph_Graph1046->SetMaximum(6.15);
   Graph_Graph1046->SetDirectory(0);
   Graph_Graph1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1046->SetLineColor(ci);
   Graph_Graph1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph1046->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1046->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph1046->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1046->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1046->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1046);
   
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
   canvasB10_2->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_4
   TPad *canvasB10_4 = new TPad("canvasB10_4", "canvasB10_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasB10_4->Draw();
   canvasB10_4->cd();
   canvasB10_4->Range(-2.94,-3.39794,86.94,3.69897);
   canvasB10_4->SetFillColor(0);
   canvasB10_4->SetBorderMode(0);
   canvasB10_4->SetBorderSize(2);
   canvasB10_4->SetLogy();
   canvasB10_4->SetLeftMargin(0);
   canvasB10_4->SetRightMargin(0);
   canvasB10_4->SetTopMargin(0);
   canvasB10_4->SetBottomMargin(0);
   canvasB10_4->SetFrameBorderMode(0);
   canvasB10_4->SetFrameBorderMode(0);
   
   TH1F *h1B10_7dO6__139 = new TH1F("h1B10_7dO6__139","",1,-2.94,86.94);
   h1B10_7dO6__139->SetMinimum(0.0004);
   h1B10_7dO6__139->SetMaximum(5000);
   h1B10_7dO6__139->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_7dO6__139->SetLineColor(ci);
   h1B10_7dO6__139->GetXaxis()->SetRange(1,1);
   h1B10_7dO6__139->GetXaxis()->SetLabelFont(42);
   h1B10_7dO6__139->GetXaxis()->SetLabelSize(0.07);
   h1B10_7dO6__139->GetXaxis()->SetTitleSize(0.07);
   h1B10_7dO6__139->GetXaxis()->SetTitleFont(42);
   h1B10_7dO6__139->GetYaxis()->SetLabelFont(42);
   h1B10_7dO6__139->GetYaxis()->SetLabelSize(0.07);
   h1B10_7dO6__139->GetYaxis()->SetTitleSize(0.07);
   h1B10_7dO6__139->GetYaxis()->SetTitleOffset(1.1);
   h1B10_7dO6__139->GetYaxis()->SetTitleFont(42);
   h1B10_7dO6__139->GetZaxis()->SetLabelFont(42);
   h1B10_7dO6__139->GetZaxis()->SetLabelSize(0.035);
   h1B10_7dO6__139->GetZaxis()->SetTitleSize(0.035);
   h1B10_7dO6__139->GetZaxis()->SetTitleFont(42);
   h1B10_7dO6__139->Draw("");
   
   TH1F *hbicB10_7dO6__140 = new TH1F("hbicB10_7dO6__140","BIC",17,8,76);
   hbicB10_7dO6__140->SetBinContent(0,0.3989449);
   hbicB10_7dO6__140->SetBinContent(1,0.06044619);
   hbicB10_7dO6__140->SetBinContent(2,0.0967139);
   hbicB10_7dO6__140->SetBinContent(3,0.02417848);
   hbicB10_7dO6__140->SetBinContent(11,0.1208924);
   hbicB10_7dO6__140->SetBinContent(12,5.3918);
   hbicB10_7dO6__140->SetBinContent(13,24.63182);
   hbicB10_7dO6__140->SetBinContent(14,12.25849);
   hbicB10_7dO6__140->SetBinContent(15,0.302231);
   hbicB10_7dO6__140->SetEntries(7161);
   hbicB10_7dO6__140->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB10_7dO6__140->SetLineColor(ci);
   hbicB10_7dO6__140->SetLineWidth(2);
   hbicB10_7dO6__140->GetXaxis()->SetRange(0,18);
   hbicB10_7dO6__140->GetXaxis()->SetLabelFont(42);
   hbicB10_7dO6__140->GetXaxis()->SetLabelSize(0.035);
   hbicB10_7dO6__140->GetXaxis()->SetTitleSize(0.035);
   hbicB10_7dO6__140->GetXaxis()->SetTitleFont(42);
   hbicB10_7dO6__140->GetYaxis()->SetLabelFont(42);
   hbicB10_7dO6__140->GetYaxis()->SetLabelSize(0.035);
   hbicB10_7dO6__140->GetYaxis()->SetTitleSize(0.035);
   hbicB10_7dO6__140->GetYaxis()->SetTitleFont(42);
   hbicB10_7dO6__140->GetZaxis()->SetLabelFont(42);
   hbicB10_7dO6__140->GetZaxis()->SetLabelSize(0.035);
   hbicB10_7dO6__140->GetZaxis()->SetTitleSize(0.035);
   hbicB10_7dO6__140->GetZaxis()->SetTitleFont(42);
   hbicB10_7dO6__140->Draw("histCsame");
   
   TH1F *hinclB10_7dO6__141 = new TH1F("hinclB10_7dO6__141","INCL",17,8,76);
   hinclB10_7dO6__141->SetBinContent(0,0.2961863);
   hinclB10_7dO6__141->SetBinContent(1,0.06649081);
   hinclB10_7dO6__141->SetBinContent(2,0.4110341);
   hinclB10_7dO6__141->SetBinContent(3,0.9187821);
   hinclB10_7dO6__141->SetBinContent(4,1.813386);
   hinclB10_7dO6__141->SetBinContent(5,2.575008);
   hinclB10_7dO6__141->SetBinContent(6,3.451477);
   hinclB10_7dO6__141->SetBinContent(7,3.536102);
   hinclB10_7dO6__141->SetBinContent(8,3.119023);
   hinclB10_7dO6__141->SetBinContent(9,2.46016);
   hinclB10_7dO6__141->SetBinContent(10,1.843609);
   hinclB10_7dO6__141->SetBinContent(11,1.057808);
   hinclB10_7dO6__141->SetBinContent(12,0.3203648);
   hinclB10_7dO6__141->SetBinContent(13,0.06044619);
   hinclB10_7dO6__141->SetEntries(3628);
   hinclB10_7dO6__141->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_7dO6__141->SetLineColor(ci);
   hinclB10_7dO6__141->SetLineWidth(2);
   hinclB10_7dO6__141->GetXaxis()->SetRange(0,18);
   hinclB10_7dO6__141->GetXaxis()->SetLabelFont(42);
   hinclB10_7dO6__141->GetXaxis()->SetLabelSize(0.035);
   hinclB10_7dO6__141->GetXaxis()->SetTitleSize(0.035);
   hinclB10_7dO6__141->GetXaxis()->SetTitleFont(42);
   hinclB10_7dO6__141->GetYaxis()->SetLabelFont(42);
   hinclB10_7dO6__141->GetYaxis()->SetLabelSize(0.035);
   hinclB10_7dO6__141->GetYaxis()->SetTitleSize(0.035);
   hinclB10_7dO6__141->GetYaxis()->SetTitleFont(42);
   hinclB10_7dO6__141->GetZaxis()->SetLabelFont(42);
   hinclB10_7dO6__141->GetZaxis()->SetLabelSize(0.035);
   hinclB10_7dO6__141->GetZaxis()->SetTitleSize(0.035);
   hinclB10_7dO6__141->GetZaxis()->SetTitleFont(42);
   hinclB10_7dO6__141->Draw("histCsame");
   
   Double_t Graph0_fx1047[17] = {
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
   Double_t Graph0_fy1047[17] = {
   0.06,
   0.05,
   0.08,
   0.09,
   0.09,
   0.12,
   0.15,
   0.31,
   0.43,
   0.7,
   1.2,
   1.4,
   1.2,
   0.65,
   0.4,
   0.18,
   0.06};
   Double_t Graph0_fex1047[17] = {
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
   Double_t Graph0_fey1047[17] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.03,
   0.05,
   0.06,
   0.1,
   0.2,
   0.2,
   0.2,
   0.09,
   0.06,
   0.03,
   0.02};
   gre = new TGraphErrors(17,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,1.2,82.8);
   Graph_Graph1047->SetMinimum(0.027);
   Graph_Graph1047->SetMaximum(1.757);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
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
   canvasB10_4->Modified();
   canvasB10->cd();
  
// ------------>Primitives in pad: canvasB10_6
   TPad *canvasB10_6 = new TPad("canvasB10_6", "canvasB10_6",0.5209121,0,0.9504264,0.3632613);
   canvasB10_6->Draw();
   canvasB10_6->cd();
   canvasB10_6->Range(-2.94,-4.985407,86.94,3.69897);
   canvasB10_6->SetFillColor(0);
   canvasB10_6->SetBorderMode(0);
   canvasB10_6->SetBorderSize(2);
   canvasB10_6->SetLogy();
   canvasB10_6->SetLeftMargin(0);
   canvasB10_6->SetRightMargin(0);
   canvasB10_6->SetTopMargin(0);
   canvasB10_6->SetBottomMargin(0.1827957);
   canvasB10_6->SetFrameBorderMode(0);
   canvasB10_6->SetFrameBorderMode(0);
   
   TH1F *h1B10_14dO4__142 = new TH1F("h1B10_14dO4__142","",1,-2.94,86.94);
   h1B10_14dO4__142->SetMinimum(0.0004);
   h1B10_14dO4__142->SetMaximum(5000);
   h1B10_14dO4__142->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1B10_14dO4__142->SetLineColor(ci);
   h1B10_14dO4__142->GetXaxis()->SetTitle("E  [MeV/n]");
   h1B10_14dO4__142->GetXaxis()->SetRange(1,1);
   h1B10_14dO4__142->GetXaxis()->SetLabelFont(42);
   h1B10_14dO4__142->GetXaxis()->SetLabelSize(0.07);
   h1B10_14dO4__142->GetXaxis()->SetTitleSize(0.07);
   h1B10_14dO4__142->GetXaxis()->SetTitleFont(42);
   h1B10_14dO4__142->GetYaxis()->SetLabelFont(42);
   h1B10_14dO4__142->GetYaxis()->SetLabelSize(0.07);
   h1B10_14dO4__142->GetYaxis()->SetTitleSize(0.07);
   h1B10_14dO4__142->GetYaxis()->SetTitleOffset(1.1);
   h1B10_14dO4__142->GetYaxis()->SetTitleFont(42);
   h1B10_14dO4__142->GetZaxis()->SetLabelFont(42);
   h1B10_14dO4__142->GetZaxis()->SetLabelSize(0.035);
   h1B10_14dO4__142->GetZaxis()->SetTitleSize(0.035);
   h1B10_14dO4__142->GetZaxis()->SetTitleFont(42);
   h1B10_14dO4__142->Draw("");
   
   TH1F *hbicB10_14dO4__143 = new TH1F("hbicB10_14dO4__143","BIC",16,8,72);
   hbicB10_14dO4__143->SetBinContent(0,0.5368388);
   hbicB10_14dO4__143->SetBinContent(1,0.1092965);
   hbicB10_14dO4__143->SetBinContent(2,0.1639448);
   hbicB10_14dO4__143->SetBinContent(3,0.07072128);
   hbicB10_14dO4__143->SetBinContent(4,0.02250223);
   hbicB10_14dO4__143->SetBinContent(10,0.02893144);
   hbicB10_14dO4__143->SetBinContent(11,1.993054);
   hbicB10_14dO4__143->SetBinContent(12,7.072128);
   hbicB10_14dO4__143->SetBinContent(13,4.185414);
   hbicB10_14dO4__143->SetBinContent(14,0.2378807);
   hbicB10_14dO4__143->SetEntries(4486);
   hbicB10_14dO4__143->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicB10_14dO4__143->SetLineColor(ci);
   hbicB10_14dO4__143->SetLineWidth(2);
   hbicB10_14dO4__143->GetXaxis()->SetRange(0,17);
   hbicB10_14dO4__143->GetXaxis()->SetLabelFont(42);
   hbicB10_14dO4__143->GetXaxis()->SetLabelSize(0.035);
   hbicB10_14dO4__143->GetXaxis()->SetTitleSize(0.035);
   hbicB10_14dO4__143->GetXaxis()->SetTitleFont(42);
   hbicB10_14dO4__143->GetYaxis()->SetLabelFont(42);
   hbicB10_14dO4__143->GetYaxis()->SetLabelSize(0.035);
   hbicB10_14dO4__143->GetYaxis()->SetTitleSize(0.035);
   hbicB10_14dO4__143->GetYaxis()->SetTitleFont(42);
   hbicB10_14dO4__143->GetZaxis()->SetLabelFont(42);
   hbicB10_14dO4__143->GetZaxis()->SetLabelSize(0.035);
   hbicB10_14dO4__143->GetZaxis()->SetTitleSize(0.035);
   hbicB10_14dO4__143->GetZaxis()->SetTitleFont(42);
   hbicB10_14dO4__143->Draw("histCsame");
   
   TH1F *hinclB10_14dO4__144 = new TH1F("hinclB10_14dO4__144","INCL",16,8,72);
   hinclB10_14dO4__144->SetBinContent(0,0.2378807);
   hinclB10_14dO4__144->SetBinContent(1,0.02893144);
   hinclB10_14dO4__144->SetBinContent(2,0.1060819);
   hinclB10_14dO4__144->SetBinContent(3,0.2378807);
   hinclB10_14dO4__144->SetBinContent(4,0.356821);
   hinclB10_14dO4__144->SetBinContent(5,0.2957436);
   hinclB10_14dO4__144->SetBinContent(6,0.2378807);
   hinclB10_14dO4__144->SetBinContent(7,0.07715049);
   hinclB10_14dO4__144->SetBinContent(8,0.04500445);
   hinclB10_14dO4__144->SetBinContent(9,0.006429208);
   hinclB10_14dO4__144->SetBinContent(11,0.003214604);
   hinclB10_14dO4__144->SetEntries(508);
   hinclB10_14dO4__144->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclB10_14dO4__144->SetLineColor(ci);
   hinclB10_14dO4__144->SetLineWidth(2);
   hinclB10_14dO4__144->GetXaxis()->SetRange(0,17);
   hinclB10_14dO4__144->GetXaxis()->SetLabelFont(42);
   hinclB10_14dO4__144->GetXaxis()->SetLabelSize(0.035);
   hinclB10_14dO4__144->GetXaxis()->SetTitleSize(0.035);
   hinclB10_14dO4__144->GetXaxis()->SetTitleFont(42);
   hinclB10_14dO4__144->GetYaxis()->SetLabelFont(42);
   hinclB10_14dO4__144->GetYaxis()->SetLabelSize(0.035);
   hinclB10_14dO4__144->GetYaxis()->SetTitleSize(0.035);
   hinclB10_14dO4__144->GetYaxis()->SetTitleFont(42);
   hinclB10_14dO4__144->GetZaxis()->SetLabelFont(42);
   hinclB10_14dO4__144->GetZaxis()->SetLabelSize(0.035);
   hinclB10_14dO4__144->GetZaxis()->SetTitleSize(0.035);
   hinclB10_14dO4__144->GetZaxis()->SetTitleFont(42);
   hinclB10_14dO4__144->Draw("histCsame");
   
   Double_t Graph0_fx1048[16] = {
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
   70};
   Double_t Graph0_fy1048[16] = {
   0.005,
   0.02,
   0.025,
   0.021,
   0.015,
   0.022,
   0.023,
   0.039,
   0.05,
   0.05,
   0.038,
   0.027,
   0.016,
   0.008,
   0.005,
   0.005};
   Double_t Graph0_fex1048[16] = {
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
   Double_t Graph0_fey1048[16] = {
   0.003,
   0.006,
   0.007,
   0.006,
   0.005,
   0.006,
   0.006,
   0.009,
   0.01,
   0.01,
   0.009,
   0.007,
   0.005,
   0.004,
   0.003,
   0.003};
   gre = new TGraphErrors(16,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1048 = new TH1F("Graph_Graph1048","",100,1.6,78.4);
   Graph_Graph1048->SetMinimum(0.0018);
   Graph_Graph1048->SetMaximum(0.0658);
   Graph_Graph1048->SetDirectory(0);
   Graph_Graph1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1048->SetLineColor(ci);
   Graph_Graph1048->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph1048->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1048->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph1048->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1048->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1048->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1048);
   
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
   canvasB10_6->Modified();
   canvasB10->cd();
   canvasB10->Modified();
   canvasB10->cd();
   canvasB10->SetSelected(canvasB10);
}
