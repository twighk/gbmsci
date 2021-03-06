//Merge QCD root files
#include <TFile.h>
#include <TTree.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int merge(){
    vector <TFile*> files;
    vector <TTree*> trees;
    vector < vector<Double_t> > Int_lum;
    vector <TFile*> outfiles;
    vector <TTree*> outtrees;
    vector <string> names;
    
    Int_lum.resize(15);
    Int_lum[0].push_back(7852.);
    Int_lum[1].push_back(3831.);
    Int_lum[2].push_back(36823.);
    Int_lum[3].push_back(11400.);
    Int_lum[4].push_back(10.4);
    Int_lum[5].push_back(8.4);
    Int_lum[6].push_back(47.2);
    Int_lum[7].push_back(6.28);
    Int_lum[8].push_back(7.94);
    Int_lum[9].push_back(18.1);
    Int_lum[10].push_back(2562.);
    Int_lum[11].push_back(243.);
    Int_lum[12].push_back(3483.);
    Int_lum[13].push_back(3483.);
    Int_lum[14].push_back(331.);

    names.push_back("AH115");
    names.push_back("AH115bb");
    names.push_back("AH160");
    names.push_back("AH160bb");
    names.push_back("QCD_BCtoE_Pt20to30");
    names.push_back("QCD_BCtoE_Pt30to80");
    names.push_back("QCD_BCtoE_Pt80to170");
    names.push_back("QCD_EMenriched_Pt20to30");
    names.push_back("QCD_EMenriched_Pt30to80");
    names.push_back("QCD_EMenriched_Pt80to170");
    names.push_back("TTplusJets");
    names.push_back("WplusJets");
    names.push_back("Zbb");
    names.push_back("Zcc");
    names.push_back("ZplusJets");

    
    for (UInt_t i = 0; i < names.size(); ++i) {
        files.push_back(new TFile( ("../root/oldroot/"+names[i]+".root").c_str() ));
        trees.push_back( (TTree*)files[i]->Get("bbAHCutTree") );
        outfiles.push_back(new TFile ( ("../root/"+names[i]+".root").c_str() , "RECREATE"));
        outtrees.push_back( trees[i]->CloneTree(0) );
        outtrees[i]->Branch("intlum", &(Int_lum[i]));
        for (UInt_t j = 0; j < trees[i]->GetEntriesFast(); ++j) {
            trees[i]->GetEntry(j);
            outtrees[i]->Fill();
        }
        outfiles[i]->Write();
    }
                           
    return 0;


}
