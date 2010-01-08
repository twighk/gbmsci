#include <iostream>
#include <vector>
#include <string>
#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include "mlp.h"

using namespace std;

int main(int argc, char** argv) {
	
	cout << "Hello World!" << endl;
	TFile* file = new TFile("../root/combo.root");
	TTree* tree = (TTree *) file->Get("combotree");
	Double_t ElectronEt, TauEt, MetEt, ElectronTauDPhi;
	TBranch * b_ElectronEt = tree->GetBranch("ElectronEt");
	TBranch * b_TauEt = tree->GetBranch("TauEt");
	TBranch * b_MetEt = tree->GetBranch("MetEt");
	TBranch * b_ElectronTauDPhi = tree->GetBranch("ElectronTauDPhi");
	b_ElectronEt->SetAddress(&ElectronEt);
	b_TauEt->SetAddress(&TauEt);
	b_MetEt->SetAddress(&MetEt);
	b_ElectronTauDPhi->SetAddress(&ElectronTauDPhi);
	
	mlp tester;
	for (int i = 0; i < tree->GetEntries(); i++){
		tree->GetEntry(i);
		Double_t a = tester.Value(0, ElectronEt, TauEt, MetEt, ElectronTauDPhi);
		Double_t b = tester.Value(1, ElectronEt, TauEt, MetEt, ElectronTauDPhi);
		Double_t c = tester.Value(2, ElectronEt, TauEt, MetEt, ElectronTauDPhi);
		cout << "A " << a << endl;
		cout << "B " << b << endl;
		cout << "C " << c << endl;
		cout << "Sum: " << (a + b + c) << endl << endl;
	}
	


}