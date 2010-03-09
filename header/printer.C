#include <vector>
#include <TLorentzVector.h>
#include <TTree.h>
#include <TFile.h>
#include <TClonesArray.h>
#include <iostream>

using namespace std;
void printer(){
    TFile * file = new TFile("/Users/Andrew/Documents/Research/gbmsci/root/Zbb.root");
    TTree * tree = (TTree*)file->Get("bbAHCutTree");
    
    TClonesArray * lv_genelectron   = 0;
    TClonesArray * lv_genmuon       = 0;
    TClonesArray * lv_gentau        = 0;
    TClonesArray * lv_gentaujet     = 0;
    TClonesArray * lv_genbjet       = 0;
    TClonesArray * lv_genmet        = 0;
    
    TClonesArray * lv_electron      = 0;
    TClonesArray * lv_muon          = 0;
    TClonesArray * lv_tau           = 0;
    TClonesArray * lv_jet           = 0;
    TClonesArray * lv_met           = 0;

    vector<Double_t> * electronCharge   = 0;
    vector<Double_t> * muonCharge       = 0;
    vector<Double_t> * tauCharge        = 0;


    tree->SetBranchAddress("lv_genelectron", &lv_genelectron);
    tree->SetBranchAddress("lv_genmuon", &lv_genmuon);
    tree->SetBranchAddress("lv_gentau", &lv_gentau);
    tree->SetBranchAddress("lv_gentaujet", &lv_gentaujet);
    tree->SetBranchAddress("lv_genbjet", &lv_genbjet);
    tree->SetBranchAddress("lv_genmet", &lv_genmet);
    tree->SetBranchAddress("electronCharge", &electronCharge);
    tree->SetBranchAddress("muonCharge", &muonCharge);
    tree->SetBranchAddress("tauCharge", &tauCharge);

    tree->SetBranchAddress("lv_electron", &lv_electron);
    tree->SetBranchAddress("lv_muon", &lv_muon);
    tree->SetBranchAddress("lv_tau", &lv_tau);
    tree->SetBranchAddress("lv_jet", &lv_jet);
    tree->SetBranchAddress("lv_met", &lv_met);

    for (int i = 0; i < tree->GetEntriesFast(); ++i) {
            tree->GetEntry(i);
        
        cout << "Event " << i << endl;
        
        
        cout << "Gen. Electron" << endl;
        for (int j = 0; j < lv_genelectron->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
                    << ((TLorentzVector*)lv_genelectron->At(j))->E() << ","
                    << ((TLorentzVector*)lv_genelectron->At(j))->Px() << ","
                    << ((TLorentzVector*)lv_genelectron->At(j))->Py() << ","
                    << ((TLorentzVector*)lv_genelectron->At(j))->Pz() << ")" << endl;
        }
        cout << "Electron" << endl;
        for (int j = 0; j < lv_electron->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_electron->At(j))->E() << ","
            << ((TLorentzVector*)lv_electron->At(j))->Px() << ","
            << ((TLorentzVector*)lv_electron->At(j))->Py() << ","
            << ((TLorentzVector*)lv_electron->At(j))->Pz() << ")" 
            << "(" << (*electronCharge)[j] << ")"
            << endl;
        }
        
        cout << "Gen. Muon" << endl;
        for (int j = 0; j < lv_genmuon->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_genmuon->At(j))->E() << ","
            << ((TLorentzVector*)lv_genmuon->At(j))->Px() << ","
            << ((TLorentzVector*)lv_genmuon->At(j))->Py() << ","
            << ((TLorentzVector*)lv_genmuon->At(j))->Pz() << ")" << endl;
        }
        cout << "Muon" << endl;
        for (int j = 0; j < lv_muon->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_muon->At(j))->E() << ","
            << ((TLorentzVector*)lv_muon->At(j))->Px() << ","
            << ((TLorentzVector*)lv_muon->At(j))->Py() << ","
            << ((TLorentzVector*)lv_muon->At(j))->Pz() << ")" 
            << "(" << (*muonCharge)[j] << ")"
            << endl;
        }
        
        cout << "Gen. Tau" << endl;
        for (int j = 0; j < lv_gentau->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_gentau->At(j))->E() << ","
            << ((TLorentzVector*)lv_gentau->At(j))->Px() << ","
            << ((TLorentzVector*)lv_gentau->At(j))->Py() << ","
            << ((TLorentzVector*)lv_gentau->At(j))->Pz() << ")" << endl;
        }
        cout << "Tau" << endl;
        for (int j = 0; j < lv_tau->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_tau->At(j))->E() << ","
            << ((TLorentzVector*)lv_tau->At(j))->Px() << ","
            << ((TLorentzVector*)lv_tau->At(j))->Py() << ","
            << ((TLorentzVector*)lv_tau->At(j))->Pz() << ")" 
            << "(" << (*tauCharge)[j] << ")"
            << endl;
        }
        
        cout << "Gen. Tau Jet" << endl;
        for (int j = 0; j < lv_gentaujet->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_gentaujet->At(j))->E() << ","
            << ((TLorentzVector*)lv_gentaujet->At(j))->Px() << ","
            << ((TLorentzVector*)lv_gentaujet->At(j))->Py() << ","
            << ((TLorentzVector*)lv_gentaujet->At(j))->Pz() << ")" << endl;
        }
        
        cout << "Gen. b Jet" << endl;
        for (int j = 0; j < lv_genbjet->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_genbjet->At(j))->E() << ","
            << ((TLorentzVector*)lv_genbjet->At(j))->Px() << ","
            << ((TLorentzVector*)lv_genbjet->At(j))->Py() << ","
            << ((TLorentzVector*)lv_genbjet->At(j))->Pz() << ")" << endl;
        }
        cout << "Jets" << endl;
        for (int j = 0; j < lv_jet->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_jet->At(j))->E() << ","
            << ((TLorentzVector*)lv_jet->At(j))->Px() << ","
            << ((TLorentzVector*)lv_jet->At(j))->Py() << ","
            << ((TLorentzVector*)lv_jet->At(j))->Pz() << ")" << endl;
        }
        
        cout << "Gen. MET" << endl;
        for (int j = 0; j < lv_genmet->GetEntriesFast(); ++j) {
            cout << "(" << j << ") (" 
            << ((TLorentzVector*)lv_genmet->At(j))->E() << ","
            << ((TLorentzVector*)lv_genmet->At(j))->Px() << ","
            << ((TLorentzVector*)lv_genmet->At(j))->Py() << ","
            << ((TLorentzVector*)lv_genmet->At(j))->Pz() << ")" << endl;
        }
        
        
        
        
        
        
    cout  << endl;

    }
    
}
