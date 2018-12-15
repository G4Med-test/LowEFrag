void Li6()
{
//=========Macro generated from canvas: canvasLi6/canvasLi6
//=========  (Sat Dec 15 20:24:35 2018) by ROOT version6.06/06
   TCanvas *canvasLi6 = new TCanvas("canvasLi6", "canvasLi6",0,0,800,900);
   gStyle->SetOptStat(0);
   canvasLi6->Range(0,0,1,1);
   canvasLi6->SetFillColor(0);
   canvasLi6->SetBorderMode(0);
   canvasLi6->SetBorderSize(2);
   canvasLi6->SetRightMargin(0.04957356);
   canvasLi6->SetTopMargin(0.03208003);
   canvasLi6->SetBottomMargin(0.0609319);
   canvasLi6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: canvasLi6_1
   TPad *canvasLi6_1 = new TPad("canvasLi6_1", "canvasLi6_1",0,0.6655906,0.5209121,0.96792);
   canvasLi6_1->Draw();
   canvasLi6_1->cd();
   canvasLi6_1->Range(-30.78947,-3.39794,109.2,3.69897);
   canvasLi6_1->SetFillColor(0);
   canvasLi6_1->SetBorderMode(0);
   canvasLi6_1->SetBorderSize(2);
   canvasLi6_1->SetLogy();
   canvasLi6_1->SetLeftMargin(0.1827957);
   canvasLi6_1->SetRightMargin(0);
   canvasLi6_1->SetTopMargin(0);
   canvasLi6_1->SetBottomMargin(0);
   canvasLi6_1->SetFrameBorderMode(0);
   canvasLi6_1->SetFrameBorderMode(0);
   
   TH1F *h1Li6_2dO2__55 = new TH1F("h1Li6_2dO2__55","^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n",1,-5.2,109.2);
   h1Li6_2dO2__55->SetMinimum(0.0004);
   h1Li6_2dO2__55->SetMaximum(5000);
   h1Li6_2dO2__55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1Li6_2dO2__55->SetLineColor(ci);
   h1Li6_2dO2__55->GetXaxis()->SetRange(1,1);
   h1Li6_2dO2__55->GetXaxis()->SetLabelFont(42);
   h1Li6_2dO2__55->GetXaxis()->SetLabelSize(0.07);
   h1Li6_2dO2__55->GetXaxis()->SetTitleSize(0.07);
   h1Li6_2dO2__55->GetXaxis()->SetTitleFont(42);
   h1Li6_2dO2__55->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   h1Li6_2dO2__55->GetYaxis()->SetLabelFont(42);
   h1Li6_2dO2__55->GetYaxis()->SetLabelSize(0.07);
   h1Li6_2dO2__55->GetYaxis()->SetTitleSize(0.07);
   h1Li6_2dO2__55->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_2dO2__55->GetYaxis()->SetTitleFont(42);
   h1Li6_2dO2__55->GetZaxis()->SetLabelFont(42);
   h1Li6_2dO2__55->GetZaxis()->SetLabelSize(0.035);
   h1Li6_2dO2__55->GetZaxis()->SetTitleSize(0.035);
   h1Li6_2dO2__55->GetZaxis()->SetTitleFont(42);
   h1Li6_2dO2__55->Draw("");
   
   TPaveText *pt = new TPaveText(0.2657123,0.9312746,0.7342877,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n");
   pt->Draw();
   
   TH1F *hbicLi6_2dO2__56 = new TH1F("hbicLi6_2dO2__56","BIC",18,5,95);
   hbicLi6_2dO2__56->SetBinContent(0,0.6246941);
   hbicLi6_2dO2__56->SetBinContent(1,0.2498777);
   hbicLi6_2dO2__56->SetBinContent(2,0.4372859);
   hbicLi6_2dO2__56->SetBinContent(3,0.2498777);
   hbicLi6_2dO2__56->SetBinContent(4,0.06246942);
   hbicLi6_2dO2__56->SetBinContent(9,1.249388);
   hbicLi6_2dO2__56->SetBinContent(10,11.11956);
   hbicLi6_2dO2__56->SetBinContent(11,44.29081);
   hbicLi6_2dO2__56->SetBinContent(12,55.84766);
   hbicLi6_2dO2__56->SetBinContent(13,23.86332);
   hbicLi6_2dO2__56->SetBinContent(14,3.873104);
   hbicLi6_2dO2__56->SetBinContent(15,0.3748165);
   hbicLi6_2dO2__56->SetEntries(2277);
   hbicLi6_2dO2__56->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi6_2dO2__56->SetLineColor(ci);
   hbicLi6_2dO2__56->SetLineWidth(2);
   hbicLi6_2dO2__56->GetXaxis()->SetRange(0,19);
   hbicLi6_2dO2__56->GetXaxis()->SetLabelFont(42);
   hbicLi6_2dO2__56->GetXaxis()->SetLabelSize(0.035);
   hbicLi6_2dO2__56->GetXaxis()->SetTitleSize(0.035);
   hbicLi6_2dO2__56->GetXaxis()->SetTitleFont(42);
   hbicLi6_2dO2__56->GetYaxis()->SetLabelFont(42);
   hbicLi6_2dO2__56->GetYaxis()->SetLabelSize(0.035);
   hbicLi6_2dO2__56->GetYaxis()->SetTitleSize(0.035);
   hbicLi6_2dO2__56->GetYaxis()->SetTitleFont(42);
   hbicLi6_2dO2__56->GetZaxis()->SetLabelFont(42);
   hbicLi6_2dO2__56->GetZaxis()->SetLabelSize(0.035);
   hbicLi6_2dO2__56->GetZaxis()->SetTitleSize(0.035);
   hbicLi6_2dO2__56->GetZaxis()->SetTitleFont(42);
   hbicLi6_2dO2__56->Draw("histCsame");
   
   TH1F *hinclLi6_2dO2__57 = new TH1F("hinclLi6_2dO2__57","INCL",18,5,95);
   hinclLi6_2dO2__57->SetBinContent(0,0.5622247);
   hinclLi6_2dO2__57->SetBinContent(1,0.6871635);
   hinclLi6_2dO2__57->SetBinContent(2,2.686185);
   hinclLi6_2dO2__57->SetBinContent(3,6.496819);
   hinclLi6_2dO2__57->SetBinContent(4,13.93068);
   hinclLi6_2dO2__57->SetBinContent(5,18.36601);
   hinclLi6_2dO2__57->SetBinContent(6,27.73642);
   hinclLi6_2dO2__57->SetBinContent(7,32.23422);
   hinclLi6_2dO2__57->SetBinContent(8,34.04583);
   hinclLi6_2dO2__57->SetBinContent(9,32.17175);
   hinclLi6_2dO2__57->SetBinContent(10,24.23813);
   hinclLi6_2dO2__57->SetBinContent(11,14.55537);
   hinclLi6_2dO2__57->SetBinContent(12,5.37237);
   hinclLi6_2dO2__57->SetBinContent(13,1.874082);
   hinclLi6_2dO2__57->SetBinContent(14,0.2498777);
   hinclLi6_2dO2__57->SetBinContent(16,0.06246942);
   hinclLi6_2dO2__57->SetEntries(3446);
   hinclLi6_2dO2__57->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_2dO2__57->SetLineColor(ci);
   hinclLi6_2dO2__57->SetLineWidth(2);
   hinclLi6_2dO2__57->GetXaxis()->SetRange(0,19);
   hinclLi6_2dO2__57->GetXaxis()->SetLabelFont(42);
   hinclLi6_2dO2__57->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_2dO2__57->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_2dO2__57->GetXaxis()->SetTitleFont(42);
   hinclLi6_2dO2__57->GetYaxis()->SetLabelFont(42);
   hinclLi6_2dO2__57->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_2dO2__57->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_2dO2__57->GetYaxis()->SetTitleFont(42);
   hinclLi6_2dO2__57->GetZaxis()->SetLabelFont(42);
   hinclLi6_2dO2__57->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_2dO2__57->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_2dO2__57->GetZaxis()->SetTitleFont(42);
   hinclLi6_2dO2__57->Draw("histCsame");
   
   Double_t Graph0_fx1019[18] = {
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
   92.5};
   Double_t Graph0_fy1019[18] = {
   0.4,
   0.4,
   0.4,
   0.5,
   1,
   0.7,
   1.4,
   1.6,
   2.3,
   3,
   4.7,
   4.7,
   4,
   2.5,
   1,
   0.4,
   0.2,
   0.2};
   Double_t Graph0_fex1019[18] = {
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
   Double_t Graph0_fey1019[18] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.3,
   0.2,
   0.4,
   0.4,
   0.5,
   0.5,
   0.8,
   0.8,
   0.7,
   0.6,
   0.3,
   0.2,
   0.1,
   0.1};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","^{12}C + ^{nat}C #rightarrow ^{6}Li at 62 MeV/n",100,0,104);
   Graph_Graph1019->SetMinimum(0.09);
   Graph_Graph1019->SetMaximum(6.04);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("#partial^{2}#sigma/#partialE/#partial#Omega  [mb/sr/(MeV/n)]");
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
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
   canvasLi6_1->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_3
   TPad *canvasLi6_3 = new TPad("canvasLi6_3", "canvasLi6_3",0,0.3632613,0.5209121,0.6655906);
   canvasLi6_3->Draw();
   canvasLi6_3->cd();
   canvasLi6_3->Range(-30.78947,-3.39794,109.2,3.69897);
   canvasLi6_3->SetFillColor(0);
   canvasLi6_3->SetBorderMode(0);
   canvasLi6_3->SetBorderSize(2);
   canvasLi6_3->SetLogy();
   canvasLi6_3->SetLeftMargin(0.1827957);
   canvasLi6_3->SetRightMargin(0);
   canvasLi6_3->SetTopMargin(0);
   canvasLi6_3->SetBottomMargin(0);
   canvasLi6_3->SetFrameBorderMode(0);
   canvasLi6_3->SetFrameBorderMode(0);
   
   TH1F *h1Li6_7dO6__58 = new TH1F("h1Li6_7dO6__58","",1,-5.2,109.2);
   h1Li6_7dO6__58->SetMinimum(0.0004);
   h1Li6_7dO6__58->SetMaximum(5000);
   h1Li6_7dO6__58->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_7dO6__58->SetLineColor(ci);
   h1Li6_7dO6__58->GetXaxis()->SetRange(1,1);
   h1Li6_7dO6__58->GetXaxis()->SetLabelFont(42);
   h1Li6_7dO6__58->GetXaxis()->SetLabelSize(0.07);
   h1Li6_7dO6__58->GetXaxis()->SetTitleSize(0.07);
   h1Li6_7dO6__58->GetXaxis()->SetTitleFont(42);
   h1Li6_7dO6__58->GetYaxis()->SetLabelFont(42);
   h1Li6_7dO6__58->GetYaxis()->SetLabelSize(0.07);
   h1Li6_7dO6__58->GetYaxis()->SetTitleSize(0.07);
   h1Li6_7dO6__58->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_7dO6__58->GetYaxis()->SetTitleFont(42);
   h1Li6_7dO6__58->GetZaxis()->SetLabelFont(42);
   h1Li6_7dO6__58->GetZaxis()->SetLabelSize(0.035);
   h1Li6_7dO6__58->GetZaxis()->SetTitleSize(0.035);
   h1Li6_7dO6__58->GetZaxis()->SetTitleFont(42);
   h1Li6_7dO6__58->Draw("");
   
   TH1F *hbicLi6_7dO6__59 = new TH1F("hbicLi6_7dO6__59","BIC",18,5,95);
   hbicLi6_7dO6__59->SetBinContent(0,0.8994393);
   hbicLi6_7dO6__59->SetBinContent(1,0.2804703);
   hbicLi6_7dO6__59->SetBinContent(2,0.3433343);
   hbicLi6_7dO6__59->SetBinContent(3,0.1595779);
   hbicLi6_7dO6__59->SetBinContent(4,0.004835695);
   hbicLi6_7dO6__59->SetBinContent(6,0.004835695);
   hbicLi6_7dO6__59->SetBinContent(7,0.01450709);
   hbicLi6_7dO6__59->SetBinContent(8,0.1982635);
   hbicLi6_7dO6__59->SetBinContent(9,1.320145);
   hbicLi6_7dO6__59->SetBinContent(10,6.576545);
   hbicLi6_7dO6__59->SetBinContent(11,15.04868);
   hbicLi6_7dO6__59->SetBinContent(12,11.68787);
   hbicLi6_7dO6__59->SetBinContent(13,3.467193);
   hbicLi6_7dO6__59->SetBinContent(14,0.5851191);
   hbicLi6_7dO6__59->SetBinContent(15,0.07737112);
   hbicLi6_7dO6__59->SetBinContent(16,0.004835695);
   hbicLi6_7dO6__59->SetEntries(8411);
   hbicLi6_7dO6__59->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi6_7dO6__59->SetLineColor(ci);
   hbicLi6_7dO6__59->SetLineWidth(2);
   hbicLi6_7dO6__59->GetXaxis()->SetRange(0,19);
   hbicLi6_7dO6__59->GetXaxis()->SetLabelFont(42);
   hbicLi6_7dO6__59->GetXaxis()->SetLabelSize(0.035);
   hbicLi6_7dO6__59->GetXaxis()->SetTitleSize(0.035);
   hbicLi6_7dO6__59->GetXaxis()->SetTitleFont(42);
   hbicLi6_7dO6__59->GetYaxis()->SetLabelFont(42);
   hbicLi6_7dO6__59->GetYaxis()->SetLabelSize(0.035);
   hbicLi6_7dO6__59->GetYaxis()->SetTitleSize(0.035);
   hbicLi6_7dO6__59->GetYaxis()->SetTitleFont(42);
   hbicLi6_7dO6__59->GetZaxis()->SetLabelFont(42);
   hbicLi6_7dO6__59->GetZaxis()->SetLabelSize(0.035);
   hbicLi6_7dO6__59->GetZaxis()->SetTitleSize(0.035);
   hbicLi6_7dO6__59->GetZaxis()->SetTitleFont(42);
   hbicLi6_7dO6__59->Draw("histCsame");
   
   TH1F *hinclLi6_7dO6__60 = new TH1F("hinclLi6_7dO6__60","INCL",18,5,95);
   hinclLi6_7dO6__60->SetBinContent(0,0.4255412);
   hinclLi6_7dO6__60->SetBinContent(1,0.6141333);
   hinclLi6_7dO6__60->SetBinContent(2,2.205077);
   hinclLi6_7dO6__60->SetBinContent(3,5.3241);
   hinclLi6_7dO6__60->SetBinContent(4,9.366741);
   hinclLi6_7dO6__60->SetBinContent(5,13.33201);
   hinclLi6_7dO6__60->SetBinContent(6,15.93845);
   hinclLi6_7dO6__60->SetBinContent(7,15.9723);
   hinclLi6_7dO6__60->SetBinContent(8,14.54094);
   hinclLi6_7dO6__60->SetBinContent(9,11.69271);
   hinclLi6_7dO6__60->SetBinContent(10,7.775798);
   hinclLi6_7dO6__60->SetBinContent(11,4.013627);
   hinclLi6_7dO6__60->SetBinContent(12,1.344323);
   hinclLi6_7dO6__60->SetBinContent(13,0.5174194);
   hinclLi6_7dO6__60->SetBinContent(14,0.1257281);
   hinclLi6_7dO6__60->SetBinContent(15,0.02417848);
   hinclLi6_7dO6__60->SetBinContent(16,0.00967139);
   hinclLi6_7dO6__60->SetEntries(21346);
   hinclLi6_7dO6__60->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_7dO6__60->SetLineColor(ci);
   hinclLi6_7dO6__60->SetLineWidth(2);
   hinclLi6_7dO6__60->GetXaxis()->SetRange(0,19);
   hinclLi6_7dO6__60->GetXaxis()->SetLabelFont(42);
   hinclLi6_7dO6__60->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_7dO6__60->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_7dO6__60->GetXaxis()->SetTitleFont(42);
   hinclLi6_7dO6__60->GetYaxis()->SetLabelFont(42);
   hinclLi6_7dO6__60->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_7dO6__60->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_7dO6__60->GetYaxis()->SetTitleFont(42);
   hinclLi6_7dO6__60->GetZaxis()->SetLabelFont(42);
   hinclLi6_7dO6__60->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_7dO6__60->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_7dO6__60->GetZaxis()->SetTitleFont(42);
   hinclLi6_7dO6__60->Draw("histCsame");
   
   Double_t Graph0_fx1020[18] = {
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
   92.5};
   Double_t Graph0_fy1020[18] = {
   0.12,
   0.35,
   0.33,
   0.47,
   0.43,
   0.59,
   0.79,
   1,
   1.4,
   1.5,
   1.8,
   1.5,
   1.1,
   0.58,
   0.28,
   0.1,
   0.02,
   0.02};
   Double_t Graph0_fex1020[18] = {
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
   Double_t Graph0_fey1020[18] = {
   0.02,
   0.05,
   0.05,
   0.07,
   0.06,
   0.07,
   0.09,
   0.1,
   0.1,
   0.2,
   0.2,
   0.2,
   0.1,
   0.07,
   0.04,
   0.02,
   0.01,
   0.01};
   gre = new TGraphErrors(18,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,0,104);
   Graph_Graph1020->SetMinimum(0.009);
   Graph_Graph1020->SetMaximum(2.199);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
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
   canvasLi6_3->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_5
   TPad *canvasLi6_5 = new TPad("canvasLi6_5", "canvasLi6_5",0,0,0.5209121,0.3632613);
   canvasLi6_5->Draw();
   canvasLi6_5->cd();
   canvasLi6_5->Range(-30.78947,-4.985407,109.2,3.69897);
   canvasLi6_5->SetFillColor(0);
   canvasLi6_5->SetBorderMode(0);
   canvasLi6_5->SetBorderSize(2);
   canvasLi6_5->SetLogy();
   canvasLi6_5->SetLeftMargin(0.1827957);
   canvasLi6_5->SetRightMargin(0);
   canvasLi6_5->SetTopMargin(0);
   canvasLi6_5->SetBottomMargin(0.1827957);
   canvasLi6_5->SetFrameBorderMode(0);
   canvasLi6_5->SetFrameBorderMode(0);
   
   TH1F *h1Li6_18__61 = new TH1F("h1Li6_18__61","",1,-5.2,109.2);
   h1Li6_18__61->SetMinimum(0.0004);
   h1Li6_18__61->SetMaximum(5000);
   h1Li6_18__61->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_18__61->SetLineColor(ci);
   h1Li6_18__61->GetXaxis()->SetRange(1,1);
   h1Li6_18__61->GetXaxis()->SetLabelFont(42);
   h1Li6_18__61->GetXaxis()->SetLabelSize(0.07);
   h1Li6_18__61->GetXaxis()->SetTitleSize(0.07);
   h1Li6_18__61->GetXaxis()->SetTitleFont(42);
   h1Li6_18__61->GetYaxis()->SetLabelFont(42);
   h1Li6_18__61->GetYaxis()->SetLabelSize(0.07);
   h1Li6_18__61->GetYaxis()->SetTitleSize(0.07);
   h1Li6_18__61->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_18__61->GetYaxis()->SetTitleFont(42);
   h1Li6_18__61->GetZaxis()->SetLabelFont(42);
   h1Li6_18__61->GetZaxis()->SetLabelSize(0.035);
   h1Li6_18__61->GetZaxis()->SetTitleSize(0.035);
   h1Li6_18__61->GetZaxis()->SetTitleFont(42);
   h1Li6_18__61->Draw("");
   
   TH1F *hbicLi6_18__62 = new TH1F("hbicLi6_18__62","BIC",17,5,90);
   hbicLi6_18__62->SetBinContent(0,1.167273);
   hbicLi6_18__62->SetBinContent(1,0.4739458);
   hbicLi6_18__62->SetBinContent(2,0.5298259);
   hbicLi6_18__62->SetBinContent(3,0.1904062);
   hbicLi6_18__62->SetBinContent(4,0.02276596);
   hbicLi6_18__62->SetBinContent(5,0.002069632);
   hbicLi6_18__62->SetBinContent(7,0.03725338);
   hbicLi6_18__62->SetBinContent(8,0.2235203);
   hbicLi6_18__62->SetBinContent(9,1.219013);
   hbicLi6_18__62->SetBinContent(10,2.808491);
   hbicLi6_18__62->SetBinContent(11,2.121373);
   hbicLi6_18__62->SetBinContent(12,0.742998);
   hbicLi6_18__62->SetBinContent(13,0.2111025);
   hbicLi6_18__62->SetBinContent(14,0.02690522);
   hbicLi6_18__62->SetBinContent(15,0.002069632);
   hbicLi6_18__62->SetEntries(4725);
   hbicLi6_18__62->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi6_18__62->SetLineColor(ci);
   hbicLi6_18__62->SetLineWidth(2);
   hbicLi6_18__62->GetXaxis()->SetRange(0,18);
   hbicLi6_18__62->GetXaxis()->SetLabelFont(42);
   hbicLi6_18__62->GetXaxis()->SetLabelSize(0.035);
   hbicLi6_18__62->GetXaxis()->SetTitleSize(0.035);
   hbicLi6_18__62->GetXaxis()->SetTitleFont(42);
   hbicLi6_18__62->GetYaxis()->SetLabelFont(42);
   hbicLi6_18__62->GetYaxis()->SetLabelSize(0.035);
   hbicLi6_18__62->GetYaxis()->SetTitleSize(0.035);
   hbicLi6_18__62->GetYaxis()->SetTitleFont(42);
   hbicLi6_18__62->GetZaxis()->SetLabelFont(42);
   hbicLi6_18__62->GetZaxis()->SetLabelSize(0.035);
   hbicLi6_18__62->GetZaxis()->SetTitleSize(0.035);
   hbicLi6_18__62->GetZaxis()->SetTitleFont(42);
   hbicLi6_18__62->Draw("histCsame");
   
   TH1F *hinclLi6_18__63 = new TH1F("hinclLi6_18__63","INCL",17,5,90);
   hinclLi6_18__63->SetBinContent(0,0.4594584);
   hinclLi6_18__63->SetBinContent(1,0.320793);
   hinclLi6_18__63->SetBinContent(2,0.8878723);
   hinclLi6_18__63->SetBinContent(3,1.672263);
   hinclLi6_18__63->SetBinContent(4,2.030309);
   hinclLi6_18__63->SetBinContent(5,2.063423);
   hinclLi6_18__63->SetBinContent(6,1.539806);
   hinclLi6_18__63->SetBinContent(7,1.009981);
   hinclLi6_18__63->SetBinContent(8,0.5960541);
   hinclLi6_18__63->SetBinContent(9,0.2524951);
   hinclLi6_18__63->SetBinContent(10,0.1221083);
   hinclLi6_18__63->SetBinContent(11,0.06829787);
   hinclLi6_18__63->SetBinContent(12,0.02069632);
   hinclLi6_18__63->SetBinContent(13,0.01241779);
   hinclLi6_18__63->SetBinContent(14,0.004139265);
   hinclLi6_18__63->SetBinContent(15,0.002069632);
   hinclLi6_18__63->SetEntries(5345);
   hinclLi6_18__63->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_18__63->SetLineColor(ci);
   hinclLi6_18__63->SetLineWidth(2);
   hinclLi6_18__63->GetXaxis()->SetRange(0,18);
   hinclLi6_18__63->GetXaxis()->SetLabelFont(42);
   hinclLi6_18__63->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_18__63->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_18__63->GetXaxis()->SetTitleFont(42);
   hinclLi6_18__63->GetYaxis()->SetLabelFont(42);
   hinclLi6_18__63->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_18__63->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_18__63->GetYaxis()->SetTitleFont(42);
   hinclLi6_18__63->GetZaxis()->SetLabelFont(42);
   hinclLi6_18__63->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_18__63->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_18__63->GetZaxis()->SetTitleFont(42);
   hinclLi6_18__63->Draw("histCsame");
   
   Double_t Graph0_fx1021[17] = {
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
   87.5};
   Double_t Graph0_fy1021[17] = {
   0.032,
   0.13,
   0.12,
   0.09,
   0.11,
   0.11,
   0.1,
   0.1,
   0.08,
   0.07,
   0.08,
   0.06,
   0.034,
   0.029,
   0.008,
   0.004,
   0.0031};
   Double_t Graph0_fex1021[17] = {
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
   Double_t Graph0_fey1021[17] = {
   0.007,
   0.02,
   0.02,
   0.01,
   0.02,
   0.02,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.007,
   0.008,
   0.004,
   0.003,
   0.0003};
   gre = new TGraphErrors(17,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,0,98.5);
   Graph_Graph1021->SetMinimum(0.0009);
   Graph_Graph1021->SetMaximum(0.1649);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
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
   entry=leg->AddEntry("hbicLi6_18","BIC","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hinclLi6_18","INCL","l");

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
   canvasLi6_5->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_2
   TPad *canvasLi6_2 = new TPad("canvasLi6_2", "canvasLi6_2",0.5209121,0.6655906,0.9504264,0.96792);
   canvasLi6_2->Draw();
   canvasLi6_2->cd();
   canvasLi6_2->Range(-5.2,-3.39794,109.2,3.69897);
   canvasLi6_2->SetFillColor(0);
   canvasLi6_2->SetBorderMode(0);
   canvasLi6_2->SetBorderSize(2);
   canvasLi6_2->SetLogy();
   canvasLi6_2->SetLeftMargin(0);
   canvasLi6_2->SetRightMargin(0);
   canvasLi6_2->SetTopMargin(0);
   canvasLi6_2->SetBottomMargin(0);
   canvasLi6_2->SetFrameBorderMode(0);
   canvasLi6_2->SetFrameBorderMode(0);
   
   TH1F *h1Li6_4dO9__64 = new TH1F("h1Li6_4dO9__64","",1,-5.2,109.2);
   h1Li6_4dO9__64->SetMinimum(0.0004);
   h1Li6_4dO9__64->SetMaximum(5000);
   h1Li6_4dO9__64->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_4dO9__64->SetLineColor(ci);
   h1Li6_4dO9__64->GetXaxis()->SetRange(1,1);
   h1Li6_4dO9__64->GetXaxis()->SetLabelFont(42);
   h1Li6_4dO9__64->GetXaxis()->SetLabelSize(0.07);
   h1Li6_4dO9__64->GetXaxis()->SetTitleSize(0.07);
   h1Li6_4dO9__64->GetXaxis()->SetTitleFont(42);
   h1Li6_4dO9__64->GetYaxis()->SetLabelFont(42);
   h1Li6_4dO9__64->GetYaxis()->SetLabelSize(0.07);
   h1Li6_4dO9__64->GetYaxis()->SetTitleSize(0.07);
   h1Li6_4dO9__64->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_4dO9__64->GetYaxis()->SetTitleFont(42);
   h1Li6_4dO9__64->GetZaxis()->SetLabelFont(42);
   h1Li6_4dO9__64->GetZaxis()->SetLabelSize(0.035);
   h1Li6_4dO9__64->GetZaxis()->SetTitleSize(0.035);
   h1Li6_4dO9__64->GetZaxis()->SetTitleFont(42);
   h1Li6_4dO9__64->Draw("");
   
   TH1F *hbicLi6_4dO9__65 = new TH1F("hbicLi6_4dO9__65","BIC",18,5,95);
   hbicLi6_4dO9__65->SetBinContent(0,0.8703191);
   hbicLi6_4dO9__65->SetBinContent(1,0.1965237);
   hbicLi6_4dO9__65->SetBinContent(2,0.2245985);
   hbicLi6_4dO9__65->SetBinContent(3,0.140374);
   hbicLi6_4dO9__65->SetBinContent(8,0.140374);
   hbicLi6_4dO9__65->SetBinContent(9,1.094918);
   hbicLi6_4dO9__65->SetBinContent(10,6.737955);
   hbicLi6_4dO9__65->SetBinContent(11,24.42509);
   hbicLi6_4dO9__65->SetBinContent(12,24.64968);
   hbicLi6_4dO9__65->SetBinContent(13,7.748648);
   hbicLi6_4dO9__65->SetBinContent(14,1.431815);
   hbicLi6_4dO9__65->SetBinContent(15,0.1684489);
   hbicLi6_4dO9__65->SetBinContent(16,0.02807481);
   hbicLi6_4dO9__65->SetEntries(2417);
   hbicLi6_4dO9__65->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi6_4dO9__65->SetLineColor(ci);
   hbicLi6_4dO9__65->SetLineWidth(2);
   hbicLi6_4dO9__65->GetXaxis()->SetRange(0,19);
   hbicLi6_4dO9__65->GetXaxis()->SetLabelFont(42);
   hbicLi6_4dO9__65->GetXaxis()->SetLabelSize(0.035);
   hbicLi6_4dO9__65->GetXaxis()->SetTitleSize(0.035);
   hbicLi6_4dO9__65->GetXaxis()->SetTitleFont(42);
   hbicLi6_4dO9__65->GetYaxis()->SetLabelFont(42);
   hbicLi6_4dO9__65->GetYaxis()->SetLabelSize(0.035);
   hbicLi6_4dO9__65->GetYaxis()->SetTitleSize(0.035);
   hbicLi6_4dO9__65->GetYaxis()->SetTitleFont(42);
   hbicLi6_4dO9__65->GetZaxis()->SetLabelFont(42);
   hbicLi6_4dO9__65->GetZaxis()->SetLabelSize(0.035);
   hbicLi6_4dO9__65->GetZaxis()->SetTitleSize(0.035);
   hbicLi6_4dO9__65->GetZaxis()->SetTitleFont(42);
   hbicLi6_4dO9__65->Draw("histCsame");
   
   TH1F *hinclLi6_4dO9__66 = new TH1F("hinclLi6_4dO9__66","INCL",18,5,95);
   hinclLi6_4dO9__66->SetBinContent(0,0.3368977);
   hinclLi6_4dO9__66->SetBinContent(1,0.6176458);
   hinclLi6_4dO9__66->SetBinContent(2,2.91978);
   hinclLi6_4dO9__66->SetBinContent(3,7.131002);
   hinclLi6_4dO9__66->SetBinContent(4,11.56682);
   hinclLi6_4dO9__66->SetBinContent(5,17.40638);
   hinclLi6_4dO9__66->SetBinContent(6,21.42108);
   hinclLi6_4dO9__66->SetBinContent(7,25.82882);
   hinclLi6_4dO9__66->SetBinContent(8,23.58284);
   hinclLi6_4dO9__66->SetBinContent(9,22.76867);
   hinclLi6_4dO9__66->SetBinContent(10,15.1604);
   hinclLi6_4dO9__66->SetBinContent(11,7.917097);
   hinclLi6_4dO9__66->SetBinContent(12,3.565501);
   hinclLi6_4dO9__66->SetBinContent(13,1.010693);
   hinclLi6_4dO9__66->SetBinContent(14,0.08422443);
   hinclLi6_4dO9__66->SetBinContent(15,0.08422443);
   hinclLi6_4dO9__66->SetEntries(5749);
   hinclLi6_4dO9__66->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_4dO9__66->SetLineColor(ci);
   hinclLi6_4dO9__66->SetLineWidth(2);
   hinclLi6_4dO9__66->GetXaxis()->SetRange(0,19);
   hinclLi6_4dO9__66->GetXaxis()->SetLabelFont(42);
   hinclLi6_4dO9__66->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_4dO9__66->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_4dO9__66->GetXaxis()->SetTitleFont(42);
   hinclLi6_4dO9__66->GetYaxis()->SetLabelFont(42);
   hinclLi6_4dO9__66->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_4dO9__66->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_4dO9__66->GetYaxis()->SetTitleFont(42);
   hinclLi6_4dO9__66->GetZaxis()->SetLabelFont(42);
   hinclLi6_4dO9__66->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_4dO9__66->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_4dO9__66->GetZaxis()->SetTitleFont(42);
   hinclLi6_4dO9__66->Draw("histCsame");
   
   Double_t Graph0_fx1022[18] = {
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
   92.5};
   Double_t Graph0_fy1022[18] = {
   0.09,
   0.14,
   0.18,
   0.14,
   0.5,
   0.8,
   0.9,
   1.1,
   1.6,
   2.3,
   2.4,
   2.1,
   1.4,
   0.9,
   0.4,
   0.2,
   0.02,
   0.02};
   Double_t Graph0_fex1022[18] = {
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
   Double_t Graph0_fey1022[18] = {
   0.03,
   0.03,
   0.04,
   0.03,
   0.2,
   0.3,
   0.3,
   0.3,
   0.3,
   0.5,
   0.5,
   0.4,
   0.3,
   0.3,
   0.1,
   0.1,
   0.01,
   0.01};
   gre = new TGraphErrors(18,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,0,104);
   Graph_Graph1022->SetMinimum(0.009);
   Graph_Graph1022->SetMaximum(3.189);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
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
   canvasLi6_2->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_4
   TPad *canvasLi6_4 = new TPad("canvasLi6_4", "canvasLi6_4",0.5209121,0.3632613,0.9504264,0.6655906);
   canvasLi6_4->Draw();
   canvasLi6_4->cd();
   canvasLi6_4->Range(-5.2,-3.39794,109.2,3.69897);
   canvasLi6_4->SetFillColor(0);
   canvasLi6_4->SetBorderMode(0);
   canvasLi6_4->SetBorderSize(2);
   canvasLi6_4->SetLogy();
   canvasLi6_4->SetLeftMargin(0);
   canvasLi6_4->SetRightMargin(0);
   canvasLi6_4->SetTopMargin(0);
   canvasLi6_4->SetBottomMargin(0);
   canvasLi6_4->SetFrameBorderMode(0);
   canvasLi6_4->SetFrameBorderMode(0);
   
   TH1F *h1Li6_14dO4__67 = new TH1F("h1Li6_14dO4__67","",1,-5.2,109.2);
   h1Li6_14dO4__67->SetMinimum(0.0004);
   h1Li6_14dO4__67->SetMaximum(5000);
   h1Li6_14dO4__67->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_14dO4__67->SetLineColor(ci);
   h1Li6_14dO4__67->GetXaxis()->SetRange(1,1);
   h1Li6_14dO4__67->GetXaxis()->SetLabelFont(42);
   h1Li6_14dO4__67->GetXaxis()->SetLabelSize(0.07);
   h1Li6_14dO4__67->GetXaxis()->SetTitleSize(0.07);
   h1Li6_14dO4__67->GetXaxis()->SetTitleFont(42);
   h1Li6_14dO4__67->GetYaxis()->SetLabelFont(42);
   h1Li6_14dO4__67->GetYaxis()->SetLabelSize(0.07);
   h1Li6_14dO4__67->GetYaxis()->SetTitleSize(0.07);
   h1Li6_14dO4__67->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_14dO4__67->GetYaxis()->SetTitleFont(42);
   h1Li6_14dO4__67->GetZaxis()->SetLabelFont(42);
   h1Li6_14dO4__67->GetZaxis()->SetLabelSize(0.035);
   h1Li6_14dO4__67->GetZaxis()->SetTitleSize(0.035);
   h1Li6_14dO4__67->GetZaxis()->SetTitleFont(42);
   h1Li6_14dO4__67->Draw("");
   
   TH1F *hbicLi6_14dO4__68 = new TH1F("hbicLi6_14dO4__68","BIC",18,5,95);
   hbicLi6_14dO4__68->SetBinContent(0,1.062105);
   hbicLi6_14dO4__68->SetBinContent(1,0.3780374);
   hbicLi6_14dO4__68->SetBinContent(2,0.4526162);
   hbicLi6_14dO4__68->SetBinContent(3,0.1594443);
   hbicLi6_14dO4__68->SetBinContent(4,0.02314515);
   hbicLi6_14dO4__68->SetBinContent(5,0.002571683);
   hbicLi6_14dO4__68->SetBinContent(6,0.002571683);
   hbicLi6_14dO4__68->SetBinContent(7,0.03600356);
   hbicLi6_14dO4__68->SetBinContent(8,0.3188887);
   hbicLi6_14dO4__68->SetBinContent(9,1.548153);
   hbicLi6_14dO4__68->SetBinContent(10,4.816762);
   hbicLi6_14dO4__68->SetBinContent(11,5.212801);
   hbicLi6_14dO4__68->SetBinContent(12,2.15507);
   hbicLi6_14dO4__68->SetBinContent(13,0.4371861);
   hbicLi6_14dO4__68->SetBinContent(14,0.1002956);
   hbicLi6_14dO4__68->SetBinContent(15,0.01800178);
   hbicLi6_14dO4__68->SetEntries(6503);
   hbicLi6_14dO4__68->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi6_14dO4__68->SetLineColor(ci);
   hbicLi6_14dO4__68->SetLineWidth(2);
   hbicLi6_14dO4__68->GetXaxis()->SetRange(0,19);
   hbicLi6_14dO4__68->GetXaxis()->SetLabelFont(42);
   hbicLi6_14dO4__68->GetXaxis()->SetLabelSize(0.035);
   hbicLi6_14dO4__68->GetXaxis()->SetTitleSize(0.035);
   hbicLi6_14dO4__68->GetXaxis()->SetTitleFont(42);
   hbicLi6_14dO4__68->GetYaxis()->SetLabelFont(42);
   hbicLi6_14dO4__68->GetYaxis()->SetLabelSize(0.035);
   hbicLi6_14dO4__68->GetYaxis()->SetTitleSize(0.035);
   hbicLi6_14dO4__68->GetYaxis()->SetTitleFont(42);
   hbicLi6_14dO4__68->GetZaxis()->SetLabelFont(42);
   hbicLi6_14dO4__68->GetZaxis()->SetLabelSize(0.035);
   hbicLi6_14dO4__68->GetZaxis()->SetTitleSize(0.035);
   hbicLi6_14dO4__68->GetZaxis()->SetTitleFont(42);
   hbicLi6_14dO4__68->Draw("histCsame");
   
   TH1F *hinclLi6_14dO4__69 = new TH1F("hinclLi6_14dO4__69","INCL",18,5,95);
   hinclLi6_14dO4__69->SetBinContent(0,0.5040499);
   hinclLi6_14dO4__69->SetBinContent(1,0.3214604);
   hinclLi6_14dO4__69->SetBinContent(2,1.319273);
   hinclLi6_14dO4__69->SetBinContent(3,2.939434);
   hinclLi6_14dO4__69->SetBinContent(4,4.076118);
   hinclLi6_14dO4__69->SetBinContent(5,4.459299);
   hinclLi6_14dO4__69->SetBinContent(6,3.872955);
   hinclLi6_14dO4__69->SetBinContent(7,3.122023);
   hinclLi6_14dO4__69->SetBinContent(8,2.011056);
   hinclLi6_14dO4__69->SetBinContent(9,1.198404);
   hinclLi6_14dO4__69->SetBinContent(10,0.6634942);
   hinclLi6_14dO4__69->SetBinContent(11,0.2288798);
   hinclLi6_14dO4__69->SetBinContent(12,0.1080107);
   hinclLi6_14dO4__69->SetBinContent(13,0.0308602);
   hinclLi6_14dO4__69->SetBinContent(14,0.007715049);
   hinclLi6_14dO4__69->SetEntries(9668);
   hinclLi6_14dO4__69->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_14dO4__69->SetLineColor(ci);
   hinclLi6_14dO4__69->SetLineWidth(2);
   hinclLi6_14dO4__69->GetXaxis()->SetRange(0,19);
   hinclLi6_14dO4__69->GetXaxis()->SetLabelFont(42);
   hinclLi6_14dO4__69->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_14dO4__69->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_14dO4__69->GetXaxis()->SetTitleFont(42);
   hinclLi6_14dO4__69->GetYaxis()->SetLabelFont(42);
   hinclLi6_14dO4__69->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_14dO4__69->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_14dO4__69->GetYaxis()->SetTitleFont(42);
   hinclLi6_14dO4__69->GetZaxis()->SetLabelFont(42);
   hinclLi6_14dO4__69->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_14dO4__69->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_14dO4__69->GetZaxis()->SetTitleFont(42);
   hinclLi6_14dO4__69->Draw("histCsame");
   
   Double_t Graph0_fx1023[18] = {
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
   92.5};
   Double_t Graph0_fy1023[18] = {
   0.042,
   0.17,
   0.17,
   0.15,
   0.18,
   0.17,
   0.2,
   0.21,
   0.24,
   0.22,
   0.22,
   0.18,
   0.12,
   0.047,
   0.025,
   0.009,
   0.006,
   0.0031};
   Double_t Graph0_fex1023[18] = {
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
   Double_t Graph0_fey1023[18] = {
   0.007,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.03,
   0.03,
   0.03,
   0.02,
   0.02,
   0.009,
   0.006,
   0.004,
   0.004,
   0.0026};
   gre = new TGraphErrors(18,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,0,104);
   Graph_Graph1023->SetMinimum(0.00045);
   Graph_Graph1023->SetMaximum(0.29695);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
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
   canvasLi6_4->Modified();
   canvasLi6->cd();
  
// ------------>Primitives in pad: canvasLi6_6
   TPad *canvasLi6_6 = new TPad("canvasLi6_6", "canvasLi6_6",0.5209121,0,0.9504264,0.3632613);
   canvasLi6_6->Draw();
   canvasLi6_6->cd();
   canvasLi6_6->Range(-5.2,-4.985407,109.2,3.69897);
   canvasLi6_6->SetFillColor(0);
   canvasLi6_6->SetBorderMode(0);
   canvasLi6_6->SetBorderSize(2);
   canvasLi6_6->SetLogy();
   canvasLi6_6->SetLeftMargin(0);
   canvasLi6_6->SetRightMargin(0);
   canvasLi6_6->SetTopMargin(0);
   canvasLi6_6->SetBottomMargin(0.1827957);
   canvasLi6_6->SetFrameBorderMode(0);
   canvasLi6_6->SetFrameBorderMode(0);
   
   TH1F *h1Li6_21dO8__70 = new TH1F("h1Li6_21dO8__70","",1,-5.2,109.2);
   h1Li6_21dO8__70->SetMinimum(0.0004);
   h1Li6_21dO8__70->SetMaximum(5000);
   h1Li6_21dO8__70->SetStats(0);

   ci = TColor::GetColor("#000099");
   h1Li6_21dO8__70->SetLineColor(ci);
   h1Li6_21dO8__70->GetXaxis()->SetTitle("E  [MeV/n]");
   h1Li6_21dO8__70->GetXaxis()->SetRange(1,1);
   h1Li6_21dO8__70->GetXaxis()->SetLabelFont(42);
   h1Li6_21dO8__70->GetXaxis()->SetLabelSize(0.07);
   h1Li6_21dO8__70->GetXaxis()->SetTitleSize(0.07);
   h1Li6_21dO8__70->GetXaxis()->SetTitleFont(42);
   h1Li6_21dO8__70->GetYaxis()->SetLabelFont(42);
   h1Li6_21dO8__70->GetYaxis()->SetLabelSize(0.07);
   h1Li6_21dO8__70->GetYaxis()->SetTitleSize(0.07);
   h1Li6_21dO8__70->GetYaxis()->SetTitleOffset(1.1);
   h1Li6_21dO8__70->GetYaxis()->SetTitleFont(42);
   h1Li6_21dO8__70->GetZaxis()->SetLabelFont(42);
   h1Li6_21dO8__70->GetZaxis()->SetLabelSize(0.035);
   h1Li6_21dO8__70->GetZaxis()->SetTitleSize(0.035);
   h1Li6_21dO8__70->GetZaxis()->SetTitleFont(42);
   h1Li6_21dO8__70->Draw("");
   
   TH1F *hbicLi6_21dO8__71 = new TH1F("hbicLi6_21dO8__71","BIC",14,5,75);
   hbicLi6_21dO8__71->SetBinContent(0,1.207228);
   hbicLi6_21dO8__71->SetBinContent(1,0.5683099);
   hbicLi6_21dO8__71->SetBinContent(2,0.6526953);
   hbicLi6_21dO8__71->SetBinContent(3,0.2032138);
   hbicLi6_21dO8__71->SetBinContent(4,0.02755442);
   hbicLi6_21dO8__71->SetBinContent(5,0.003444302);
   hbicLi6_21dO8__71->SetBinContent(6,0.003444302);
   hbicLi6_21dO8__71->SetBinContent(7,0.01894366);
   hbicLi6_21dO8__71->SetBinContent(8,0.1653265);
   hbicLi6_21dO8__71->SetBinContent(9,0.6389181);
   hbicLi6_21dO8__71->SetBinContent(10,1.09701);
   hbicLi6_21dO8__71->SetBinContent(11,0.762913);
   hbicLi6_21dO8__71->SetBinContent(12,0.2944879);
   hbicLi6_21dO8__71->SetBinContent(13,0.0706082);
   hbicLi6_21dO8__71->SetBinContent(14,0.01722151);
   hbicLi6_21dO8__71->SetBinContent(15,0.001722151);
   hbicLi6_21dO8__71->SetEntries(3329);
   hbicLi6_21dO8__71->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   hbicLi6_21dO8__71->SetLineColor(ci);
   hbicLi6_21dO8__71->SetLineWidth(2);
   hbicLi6_21dO8__71->GetXaxis()->SetRange(0,15);
   hbicLi6_21dO8__71->GetXaxis()->SetLabelFont(42);
   hbicLi6_21dO8__71->GetXaxis()->SetLabelSize(0.035);
   hbicLi6_21dO8__71->GetXaxis()->SetTitleSize(0.035);
   hbicLi6_21dO8__71->GetXaxis()->SetTitleFont(42);
   hbicLi6_21dO8__71->GetYaxis()->SetLabelFont(42);
   hbicLi6_21dO8__71->GetYaxis()->SetLabelSize(0.035);
   hbicLi6_21dO8__71->GetYaxis()->SetTitleSize(0.035);
   hbicLi6_21dO8__71->GetYaxis()->SetTitleFont(42);
   hbicLi6_21dO8__71->GetZaxis()->SetLabelFont(42);
   hbicLi6_21dO8__71->GetZaxis()->SetLabelSize(0.035);
   hbicLi6_21dO8__71->GetZaxis()->SetTitleSize(0.035);
   hbicLi6_21dO8__71->GetZaxis()->SetTitleFont(42);
   hbicLi6_21dO8__71->Draw("histCsame");
   
   TH1F *hinclLi6_21dO8__72 = new TH1F("hinclLi6_21dO8__72","INCL",14,5,75);
   hinclLi6_21dO8__72->SetBinContent(0,0.4512036);
   hinclLi6_21dO8__72->SetBinContent(1,0.2032138);
   hinclLi6_21dO8__72->SetBinContent(2,0.6061972);
   hinclLi6_21dO8__72->SetBinContent(3,0.9144623);
   hinclLi6_21dO8__72->SetBinContent(4,0.967849);
   hinclLi6_21dO8__72->SetBinContent(5,0.831799);
   hinclLi6_21dO8__72->SetBinContent(6,0.5218118);
   hinclLi6_21dO8__72->SetBinContent(7,0.3082651);
   hinclLi6_21dO8__72->SetBinContent(8,0.1360499);
   hinclLi6_21dO8__72->SetBinContent(9,0.0774968);
   hinclLi6_21dO8__72->SetBinContent(10,0.02927657);
   hinclLi6_21dO8__72->SetBinContent(11,0.01549936);
   hinclLi6_21dO8__72->SetBinContent(13,0.005166454);
   hinclLi6_21dO8__72->SetEntries(2943);
   hinclLi6_21dO8__72->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hinclLi6_21dO8__72->SetLineColor(ci);
   hinclLi6_21dO8__72->SetLineWidth(2);
   hinclLi6_21dO8__72->GetXaxis()->SetRange(0,15);
   hinclLi6_21dO8__72->GetXaxis()->SetLabelFont(42);
   hinclLi6_21dO8__72->GetXaxis()->SetLabelSize(0.035);
   hinclLi6_21dO8__72->GetXaxis()->SetTitleSize(0.035);
   hinclLi6_21dO8__72->GetXaxis()->SetTitleFont(42);
   hinclLi6_21dO8__72->GetYaxis()->SetLabelFont(42);
   hinclLi6_21dO8__72->GetYaxis()->SetLabelSize(0.035);
   hinclLi6_21dO8__72->GetYaxis()->SetTitleSize(0.035);
   hinclLi6_21dO8__72->GetYaxis()->SetTitleFont(42);
   hinclLi6_21dO8__72->GetZaxis()->SetLabelFont(42);
   hinclLi6_21dO8__72->GetZaxis()->SetLabelSize(0.035);
   hinclLi6_21dO8__72->GetZaxis()->SetTitleSize(0.035);
   hinclLi6_21dO8__72->GetZaxis()->SetTitleFont(42);
   hinclLi6_21dO8__72->Draw("histCsame");
   
   Double_t Graph0_fx1024[14] = {
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
   72.5};
   Double_t Graph0_fy1024[14] = {
   0.05,
   0.14,
   0.09,
   0.06,
   0.07,
   0.05,
   0.049,
   0.036,
   0.021,
   0.028,
   0.011,
   0.01,
   0.002,
   0.0008};
   Double_t Graph0_fex1024[14] = {
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
   Double_t Graph0_fey1024[14] = {
   0.01,
   0.02,
   0.01,
   0.01,
   0.01,
   0.01,
   0.009,
   0.007,
   0.004,
   0.007,
   0.004,
   0.004,
   0.0006,
   0.0004};
   gre = new TGraphErrors(14,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(2);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","",100,0,82);
   Graph_Graph1024->SetMinimum(0.00036);
   Graph_Graph1024->SetMaximum(0.17596);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetTitle("E  [MeV/n]");
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetLabelSize(0.07);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.07);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1024->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
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
   canvasLi6_6->Modified();
   canvasLi6->cd();
   canvasLi6->Modified();
   canvasLi6->cd();
   canvasLi6->SetSelected(canvasLi6);
}
