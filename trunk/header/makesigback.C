//Take either combo115 or combo160 and make it into a signal/background tree
//Current "type" branches are removed, and type1 and type2 are added
//For the first two channels, type1 = 1, type2 = 0
//For all remaining channels, type1 = 0, type2 = 1

#include <TFile.h>
#include <TTree.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int makesigback(){
    
    TFile * infile = new TFile("../root/combo115.root");
//    TFile * infile = new TFile("../root/combo160.root");

    Int_t type1 = 1;
    Int_t type2 = 0;
    Double_t weight;
    Int_t switchpoint;
    TTree * intree = (TTree*)infile->Get("combotree");
    TTree * inmeta = (TTree*)infile->Get("metadata");
    inmeta->SetBranchAddress("BeginIndex", &switchpoint);
    inmeta->GetEntry(2);
    cout << switchpoint << endl;
    
    TObjArray* lob = intree->GetListOfBranches();

    intree->SetBranchStatus("*",0);
    
	for (Int_t i = 0; i < lob->GetEntriesFast(); ++i) {
		TBranch * branch = (TBranch *)lob->At(i);
		string bname = string(branch -> GetName());
        if(string(bname).compare(0,4,"type")){
            if (bname == "weight") {
                continue;
            }
            intree->SetBranchStatus(bname.c_str(),1);

		}
    }
    
    TFile *newfile = new TFile("../root/combo115sb.root","recreate");
    TTree *newtree = intree->CloneTree(0);
    newtree->Branch("type1", &type1);
    newtree->Branch("type2", &type2);
    newtree->Branch("weight", &weight);
    weight = (1. / Double_t(switchpoint) );

    for (UInt_t j = 0; j < intree->GetEntriesFast(); ++j) {
            if (j == switchpoint) {
                type1 = 0;
                type2 = 1;
                weight = (1. / Double_t(intree->GetEntriesFast() - switchpoint) );
            }
             intree->GetEntry(j);
             newtree->Fill();
          }
    
    Int_t newbegin;
    Int_t newend;
    TString newchannelname;
    TTree * newmeta = new TTree("metadata", "metadata");
    newmeta->Branch("BeginIndex", &newbegin);
    newmeta->Branch("EndIndex", &newend);
    newmeta->Branch("ChannelName",&newchannelname,256000,0);
    
    newbegin = 0;
    newend = switchpoint - 1;
    newchannelname = "signal";
    newmeta->Fill();
    
    newbegin = switchpoint;
    newend = (intree->GetEntriesFast()) - 1;
    newchannelname = "backgr";
    newmeta->Fill();

    newfile->Write();
    delete infile;
    delete newfile;
    
//    vector <TFile*> files;
//    vector <TTree*> trees;
//    vector < vector<Double_t> > Int_lum;
//    vector <TFile*> outfiles;
//    vector <TTree*> outtrees;
//    vector <string> names;
    
//    Int_lum.resize(15);
//    Int_lum[0].push_back(7852.);
//    Int_lum[1].push_back(3831.);
//    Int_lum[2].push_back(36823.);
//    Int_lum[3].push_back(11400.);
//    Int_lum[4].push_back(10.4);
//    Int_lum[5].push_back(8.4);
//    Int_lum[6].push_back(47.2);
//    Int_lum[7].push_back(6.28);
//    Int_lum[8].push_back(7.94);
//    Int_lum[9].push_back(18.1);
//    Int_lum[10].push_back(2562.);
//    Int_lum[11].push_back(243.);
//    Int_lum[12].push_back(3483.);
//    Int_lum[13].push_back(3483.);
//    Int_lum[14].push_back(331.);

//    names.push_back("AH115");
//    names.push_back("AH115bb");
//    names.push_back("AH160");
//    names.push_back("AH160bb");
//    names.push_back("QCD_BCtoE_Pt20to30");
//    names.push_back("QCD_BCtoE_Pt30to80");
//    names.push_back("QCD_BCtoE_Pt80to170");
//    names.push_back("QCD_EMenriched_Pt20to30");
//    names.push_back("QCD_EMenriched_Pt30to80");
//    names.push_back("QCD_EMenriched_Pt80to170");
//    names.push_back("TTplusJets");
//    names.push_back("WplusJets");
//    names.push_back("Zbb");
//    names.push_back("Zcc");
//    names.push_back("ZplusJets");

    
//    for (UInt_t i = 0; i < names.size(); ++i) {
//        files.push_back(new TFile( ("../root/oldroot/"+names[i]+".root").c_str() ));
//        trees.push_back( (TTree*)files[i]->Get("bbAHCutTree") );
//        outfiles.push_back(new TFile ( ("../root/"+names[i]+".root").c_str() , "RECREATE"));
//        outtrees.push_back( trees[i]->CloneTree(0) );
//        outtrees[i]->Branch("intlum", &(Int_lum[i]));
//        for (UInt_t j = 0; j < trees[i]->GetEntriesFast(); ++j) {
//            trees[i]->GetEntry(j);
//            outtrees[i]->Fill();
//        }
//        outfiles[i]->Write();
//    }
                           
    return 0;


}
