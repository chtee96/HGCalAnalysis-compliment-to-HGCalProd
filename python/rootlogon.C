// Adjusted from https://github.com/yhaddad/Heppi/blob/master/heppi/rootlogon.C

#include "TStyle.h"
#include <time.h>

TStyle* adjustStyle;

void declar_colors(){
  new TColor(120, 26/255., 188/255., 156/255.,"turquoise"     );
  new TColor(121, 46/255., 204/255., 113/255.,"emerland"      );
  new TColor(122, 52/255., 152/255., 219/255.,"peter-river"   );
  new TColor(123,155/255.,  89/255., 182/255.,"amethyst"      );
  new TColor(124, 52/255.,  73/255.,  94/255.,"wet-asphalt"   );
  new TColor(125, 22/255., 160/255., 133/255.,"green-sea"     );
  new TColor(126, 39/255., 174/255.,  96/255.,"nephritis"     );
  new TColor(127, 41/255., 128/255., 185/255.,"belize-hole"   );
  new TColor(128,142/255.,  68/255., 173/255.,"wisteria"      );
  new TColor(129, 44/255.,  62/255.,  80/255.,"midnight-blue" );
  new TColor(130,241/255., 196/255.,  15/255.,"sun-flower"    );
  new TColor(131,230/255., 126/255.,  34/255.,"carrot"        );
  new TColor(132,231/255.,  76/255.,  60/255.,"alizarin"      );
  new TColor(133,236/255., 240/255., 241/255.,"clouds"        );
  new TColor(134,149/255., 165/255., 166/255.,"concrete"      );
  new TColor(135,243/255., 156/255.,  18/255.,"orange"        );
  new TColor(136,211/255.,  84/255.,   0/255.,"pumpkin"       );
  new TColor(137,192/255.,  57/255.,  43/255.,"pomegranate"   );
  new TColor(138,189/255., 195/255., 199/255.,"silver"        );
  new TColor(139,127/255., 140/255., 141/255.,"asbestos"      );
}

void setadjustStyle(){
  adjustStyle = new  TStyle("adjustStyle", "Adjust Style");
  adjustStyle->SetFillColor(10);
  adjustStyle->SetTitleFillColor(10);
  adjustStyle->SetTextFont(18); //@
  //adjustStyle->SetLineWidth(2); //@

  adjustStyle->SetPaperSize(20, 43);
  //
  ////  comment me
  //adjustStyle->SetPaperSize(20,20);
  //adjustStyle->SetScreenFactor(1.);
  //// For Canvas
  ////adjustStyle->SetCanvasPreferGL(true); // as a test
  adjustStyle->SetCanvasBorderMode(0);
  adjustStyle->SetCanvasColor(0);     // chaned fron kWhite to -1
  adjustStyle->SetCanvasDefH(600);    //Height of canvas
  adjustStyle->SetCanvasDefW(600);    //Width of canvas
  adjustStyle->SetCanvasDefX(900);    //POsition on screen
  adjustStyle->SetCanvasDefY(20);
  //
  //// For Pad
  adjustStyle->SetPadBorderMode(0);
  adjustStyle->SetPadColor(0);        // chaned fron kWhite to -1
  adjustStyle->SetPadGridX(false);
  adjustStyle->SetPadGridY(false);
  adjustStyle->SetGridColor(kGray);
  adjustStyle->SetGridStyle(3);
  adjustStyle->SetGridWidth(1);
  adjustStyle->SetPadTickX(1);
  adjustStyle->SetPadTickY(1);

  //// for frame
  adjustStyle->SetFrameBorderMode(0);
  adjustStyle->SetFrameBorderSize(1);
  adjustStyle->SetFrameFillColor(0);   // chaned fron kWhite to -1
  adjustStyle->SetFrameFillStyle(0);
  adjustStyle->SetFrameLineColor(1);
  adjustStyle->SetFrameLineStyle(1);
  adjustStyle->SetFrameLineWidth(1);   // default : 2
  //
  //// For Hito
  adjustStyle->SetHistFillColor(0);    // changed from kWhite to -1
  adjustStyle->SetHistLineColor(kBlue+3);
  adjustStyle->SetHistLineStyle(0); //@
  adjustStyle->SetHistLineWidth(2); //@
  //adjustStyle->SetEndErrorSize(0);
  //adjustStyle->SetErrorX(0.);
  adjustStyle->SetMarkerColor(kBlue+3);
  adjustStyle->SetMarkerSize (0.7); //@
  //adjustStyle->SetMarkerStyle(20); //@
  /* // */
  /* //// for function */
  adjustStyle->SetFuncColor(kOrange-3);
  adjustStyle->SetFuncStyle(1);
  adjustStyle->SetFuncWidth(2);
  adjustStyle->SetOptFit(01100);
  adjustStyle->SetFitFormat("3.4f"); //gStyle->SetFitFormat("3.1g");
  /* // */
  /* // */
  /* //// for the statistic box */
  adjustStyle->SetOptStat(0);
  //adjustStyle->SetStatBorderSize(0);
  //adjustStyle->SetStatFont(43);
  //adjustStyle->SetStatFontSize(25);
  adjustStyle->SetStatColor(0);
  adjustStyle->SetStatStyle(0);
  adjustStyle->SetStatW(0.19);
  adjustStyle->SetStatH(0.05);
  adjustStyle->SetStatX(0.80);
  adjustStyle->SetStatY(0.88);
  //adjustStyle->SetStatBorderSize(0);
  /* // */
  /* ////adjustStyle->SetStatX(1.0-adjustStyle->GetPadRightMargin()-0.02); */
  /* ////adjustStyle->SetStatY(1.0-adjustStyle->GetPadTopMargin()-0.02); */
  /* // */
  /* //// Margins */
  /* adjustStyle->SetPadBottomMargin(0.15); */
  /* adjustStyle->SetPadTopMargin   (0.08); // def == 1.3 */
  /* adjustStyle->SetPadRightMargin (0.08); // def == 1.3 */
  /* adjustStyle->SetPadLeftMargin  (0.15); */
  /* // */
  //// Global Title
  //adjustStyle->SetTitleFont  (43); //@
  /* adjustStyle->SetTitleSize  (25);//@ */
  //adjustStyle->SetTitleColor (1);
  //adjustStyle->SetTitleTextColor(1);
  //adjustStyle->SetTitleFillColor(0);                // Changed -- JEK
  //adjustStyle->SetTitleFontSize(25); //@
  //adjustStyle->SetTitleBorderSize(0);
  //adjustStyle->SetTitleAlign(33);
  adjustStyle->SetTitleX(0.2);
  adjustStyle->SetTitleY(0.97);
  /* //// Axis Titles */
  adjustStyle->SetTitleColor (1 ,  "xyz");
  adjustStyle->SetTitleFont  (43,  "xyz");
  adjustStyle->SetTitleSize  (25,  "xyz");
  /* //// Legend */
  /* adjustStyle->SetLegendBorderSize(0); */
  /* //// Axis */
  adjustStyle->SetAxisColor  (1    , "XYZ");
  adjustStyle->SetTickLength (0.03 , "XYZ");
  //adjustStyle->SetNdivisions (508  , "XYZ");
  /* YACINESTYLE->Setstripdecimals(Ktrue); */
  /* // */
  /* //// Change for log plots */
  adjustStyle->SetOptLogx(0);
  adjustStyle->SetOptLogy(0);
  adjustStyle->SetOptLogz(0);
  /* // */
  adjustStyle->SetOptStat(0);
  //adjustStyle->SetPalette(56,0);

  declar_colors();
  //====> done
  adjustStyle->cd();
  gROOT->ForceStyle();
  gStyle->ls();

}


void rootlogon(){
  setadjustStyle();
}

// on the grid
void onGrid(bool gridOn) {
  adjustStyle->SetPadGridX(gridOn);
  adjustStyle->SetPadGridY(gridOn);
}

// on the stat option
void onStatOpt(bool onStat)
{
  if(onStat) adjustStyle->SetOptStat("emr");
  else       adjustStyle->SetOptStat(0);
}

void onFitOpt(bool onStat)
{
  if(onStat) adjustStyle->SetOptStat("emr");
  else       adjustStyle->SetOptStat(0);
}

void onTranspacy(bool trans){
  adjustStyle->SetCanvasColor(-1);     // chaned fron kWhite to -1
  adjustStyle->SetPadColor(-1);        // chaned fron kWhite to -1
  adjustStyle->SetFrameFillColor(-1);
  adjustStyle->SetTitleFillColor(-1);
  adjustStyle->SetHistFillColor(-1);

}
