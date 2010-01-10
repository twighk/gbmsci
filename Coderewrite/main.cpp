#include <iostream>
#include "skimmer.h"

#include "cutHasElectrons.h"

using namespace std;

int main(){
	skimmer skim;
	
	skim.addCut(new cutHasElectrons());
	
	
	skim.addFile(new TFile("../root/AH115.root"));
	skim.addFile(new TFile("../root/AH115bb.root"));
	skim.addFile(new TFile("../root/AH160.root"));
	skim.addFile(new TFile("../root/AH160bb.root"));
	skim.addFile(new TFile("../root/TTplusJets.root"));// -something strange with this
	skim.addFile(new TFile("../root/WplusJets.root"));
	skim.addFile(new TFile("../root/Zbb.root"));
	skim.addFile(new TFile("../root/Zcc.root"));
	skim.addFile(new TFile("../root/ZplusJets.root"));
	
	skim.printFile();
	skim.printCut();
	
	return 0;	
}