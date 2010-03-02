//Merge QCD root files
using namespace std;

int qcdmerge(){
    TChain * chain1 = new TChain("bbAHCutTree");
    chain1->Add("../root/QCD_BCtoE_Pt20to30.root");
    chain1->Add("../root/QCD_BCtoE_Pt30to80.root");
    chain1->Add("../root/QCD_BCtoE_Pt80to170.root");
    
    TChain * chain2 = new TChain("bbAHCutTree");
    chain2->Add("../root/QCD_EMenriched_Pt20to30.root");
    chain2->Add("../root/QCD_EMenriched_Pt30to80.root");
    chain2->Add("../root/QCD_EMenriched_Pt80to170.root");
    

    
    TFile * out1 = new TFile("../root/QCD_BCtoE.root","RECREATE");
    TTree * ntr1 = (TTree *) chain1->CloneTree(0);
    for (int i = 0; i < chain1->GetEntriesFast(); ++i) {
        chain1->GetEntry(i);
        ntr1->Fill();
    }
    out1->Write();

    TFile * out2 = new TFile("../root/QCD_EMenriched.root","RECREATE");
    TTree * ntr2 = (TTree *) chain2->CloneTree(0);
    for (int i = 0; i < chain2->GetEntriesFast(); ++i) {
        chain2->GetEntry(i);
        ntr2->Fill();
    }
    out2->Write();


}
