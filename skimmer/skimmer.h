#ifndef __skimmer__
#define __skimmer__

#include <iostream>
#include <vector>
#include <string>
#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include <cmath>
#include <sstream>

//#include <TTree.h>
//#include <TBranch.h>
//#include <TClonesArray.h> // Nessary for SetBranchAddress
//#include <TLorentzVector.h>
//#include <Rtypes.h> // for Long_64 though not necessary if long_64 spelt with `L'


/* Process for implementing a new variable:
	1) Create bool as private data member of skimmer class
	2) Create function that returns variable in question for a given tree (i) and event (j)
	3) Create AddVariable function that sets bool state to true
	4) Skimmer default constructor sets this bool to false
	5) Add this variable to the register output branches loop in GoSkim
	6) Add this variable to trees & events loop in GoSkim
*/

class skimmer{
private:
	std::string rootpath;
	std::vector<std::string> channel;
	std::vector<TFile*> infile;
	std::vector<TTree*> intree;
	std::vector<TFile*> outfile;
	std::vector<TTree*> outtree;
	TFile* filecombo;
	TTree* treecombo;
	bool bElectronEt;
	bool bTauEt;
	bool bMetEt;
	bool bElectronTauDPhi;
	
public:

	skimmer();
	void SetRootPath(std::string);
	void AddChannel(std::string, std::string);
	void AddVarElectronEt(){bElectronEt = true; std::cout << "Added Variable ElectronEt" << std::endl;}
	void AddVarTauEt(){bTauEt = true; std::cout << "Added Variable TauEt" << std::endl;}
	void AddVarMetEt(){bMetEt = true; std::cout << "Added Variable MetEt" << std::endl;}
	void AddVarElectronTauDPhi(){bElectronTauDPhi = true; std::cout << "Added Variable ElectronTauDPhi" << std::endl;}
	void GoSkim();
	bool PassCuts(Int_t, Int_t);
	Double_t GetElectronEt(Int_t, Int_t, Int_t);
	Double_t GetTauEt(Int_t, Int_t, Int_t);
	Double_t GetMetEt(Int_t, Int_t);
	Double_t GetElectronTauDPhi(Int_t, Int_t, Int_t, Int_t);
	std::string Int2String(Int_t);

};

#endif