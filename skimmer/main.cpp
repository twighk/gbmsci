 #include <iostream>
#include <vector>
#include <string>
#include "skimmer.h"

using namespace std;

int main(int argc, char** argv) {

	skimmer a;
	a.SetRootPath("../root/");
	a.AddChannel("AH115","bbAHCutTree", 7852.0);
	a.AddChannel("AH115bb","bbAHCutTree", 3831.0);
	a.AddChannel("AH160","bbAHCutTree", 36823.0);
	a.AddChannel("AH160bb","bbAHCutTree", 11400.0);
//	a.AddChannel("QCD_BCtoE_Pt20to30","bbAHCutTree", 1);
//	a.AddChannel("QCD_BCtoE_Pt30to80","bbAHCutTree", 1);
//	a.AddChannel("QCD_BCtoE_Pt80to170","bbAHCutTree", 1);
//	a.AddChannel("QCD_EMenriched_Pt20to30","bbAHCutTree", 1);
//	a.AddChannel("QCD_EMenriched_Pt30to80","bbAHCutTree", 1);
//	a.AddChannel("QCD_EMenriched_Pt80to170","bbAHCutTree", 1);
	a.AddChannel("TTplusJets","bbAHCutTree", 2562.0);
	a.AddChannel("WplusJets","bbAHCutTree", 243.0);
	a.AddChannel("Zbb","bbAHCutTree", 3483.0);
	a.AddChannel("Zcc","bbAHCutTree", 3483.0);
	a.AddChannel("ZplusJets","bbAHCutTree", 331.0);

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
	a.AddVarVisibleMass();
	a.GoSkim();
	a.WriteCombo();

	
	
}