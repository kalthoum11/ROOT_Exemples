/*#include "iostream" 
#include "fstream" 
#include "TH1F.h" 
#include "TCanvas.h" 
#include "TLegend.h" 
#include "TGraph.h" 
#include "TFile.h" 
#include "TH3F.h" 
#include "TGaxis.h" 
#include "TTree.h" 
#include "TBranch.h" 
#include "TRatioPlot.h" 
#include "TH2F.h" 
//using namespace std;  */

void vv()
{

  TFile*file=new TFile("data15.root","old"); 
  file->ls(); // lister les files dde data15.root
  TTree*tree=(TTree*) file->Get("data_NONE"); 
  tree->Print();  
    
  TCanvas*canvas=new TCanvas("canvas","canvas",900,3000); 
            	                                             		   
 TH1F*h1=new TH1F("h1","mll and mu",100,0.0,450.0); 
 tree->Draw("mll>>h1","","same");  
  
  
  TH1F*h2=new TH1F("h2","mu",900,0.0,350.0); 
  tree->Draw("mu>>h2","","same");  
     
									 
  h1->SetLineColor(kRed);
   h2->SetLineColor(kBlue);
 
     												  
  h1->Draw("same");  
   h2->Draw("same"); 
  
}








































/*
#include "iostream" 
#include "fstream" 
#include "TH1F.h" 
#include "TCanvas.h" 
#include "TLegend.h" 
#include "TGraph.h" 
#include "TFile.h" 
#include "TH3F.h" 
#include "TGaxis.h" 
#include "TTree.h" 
#include "TBranch.h" 
#include "TRatioPlot.h" 
#include "TH2F.h" using namespace std;  
void revis(){  TFile*file=new TFile("VVV.root","old");  file->ls();  TTree*tree=(TTree*) file->Get("VVV"); tree->Print();  
TCanvas*canvas=new TCanvas("canvas","canvas",10000,10000); 
 //TH1F*h1=new TH1F("h1","h1",100,0.0,600.0); 
 //tree->Draw("lep1pT>>h1","","same"); 
  TH1F*h2=new TH1F("h2","lep2tp",100,0.0,1000.0); 
  tree->Draw("lep2pT>>h2","","same");   
  TH1F*h1=new TH1F("h1","h1",100,0.0,600.0); 
  tree->Draw("lep1pT>>h1","","same");  
  //h1->SetLineColor(kRed); 
  h2->SetLineColor(kBlue);
   h1->SetLineColor(kRed);  
    //h1->Draw("same"); 
    h2->Draw("same"); 
    h1->Draw("same");

*/
