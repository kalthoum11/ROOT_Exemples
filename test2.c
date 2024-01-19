void test2()
{
                                                           //1) : out.root (tree)
//  -------------------the first histogram-------------------------
    TH1F *hist1= new TH1F("hist1","test1-histogram",100,0,100);
    
    hist1 -> Fill(10);     //This call fills the histogram with the value 10. It increments the bin corresponding to the value 10 by 1.
    hist1 -> Fill(20);
    
//  ------------------the second histogram-------------------------
    TH1F *hist2= new TH1F("hist2","test1-histogram2",100,0,100);
    
    hist2 -> Fill(15);
    hist2 -> Fill(25);

// ------------------------------------------------------------------




 TFile *file = new TFile ("out1.root","RECREATE");
 
 TTree *tree = new TTree("tree","tree");
 
                                                    	   //2) : out.root (tree + hist1 + hist2)
 

 tree->Branch("hist1",&hist1);
 tree->Branch("hist2",&hist2);
 
                                                          //3) : out.root (tree + hist1 + hist2)
 
 
    // tree->Fill();                 // Fill the data into the tree for the current entry
     file-> Write();
     file-> Close();
   
} 



