void ma1()
{
  TFile *f = TFile::Open("data15.root");
    
  TH1F* t = new TH1F ("hist","hist",50,0,200); 
 
  t = (TH1F*)f->Get("mll"); 
  
  TCanvas *C1 = new TCanvas ("c1","c1",1000,1000);
  // t1-> SetFillColor (0);
   //t1->SetLineColor(9);
                                                               
   t->Draw();
   
  C1->SaveAs("munete.root");
  
  delete C1;
   
   
 }                                                       
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /*
 
 
TFile f("histos.root", "new");
TH1F h1("hgaus", "histo from a gaussian", 100, -3, 3);
h1.FillRandom("gaus", 10000);
h1->Write();


To read this histogram in another Root session, do:

TFile f("histos.root");
TH1F *h = (TH1F*)f.Get("hgaus");*/
