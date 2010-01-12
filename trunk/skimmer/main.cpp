 #include <iostream>
#include <vector>
#include <string>
#include "skimmer.h"

using namespace std;

int main(int argc, char** argv) {

	skimmer a;
	a.SetRootPath("../root/");
	a.AddChannel("AH115","bbAHCutTree");
	a.AddChannel("WplusJets","bbAHCutTree");
//	a.AddChannel("Zcc","bbAHCutTree");
	a.AddVarElectronEt();
	a.AddVarTauEt();
	a.AddVarMetEt();
	a.AddVarElectronTauDPhi();
	a.AddVarElectronEta();
	a.AddVarTauEta();
	a.AddVarElectronEcalIso();
	a.AddVarElectronHcalIso();
	a.AddVarElectronTrackIso();
	a.AddVarElectronCharge();
	a.AddVarTauCharge();
	a.AddVarElecTauChargeProd();
	a.AddVarTauProng();
	a.AddVarTauLeadTrk();
	a.AddVarTauEcalIso();
	a.AddVarTauTrackIso();
	a.AddVarTauAntiElectron();
	a.AddVarElectronMetDPhi();
	a.AddVarElectronMetMt();
	
	a.GoSkim();
	a.WriteCombo();

	
	
}