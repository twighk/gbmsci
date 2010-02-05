 #include <iostream>
#include <vector>
#include <string>
#include "skimmer.h"

using namespace std;

int main(int argc, char** argv) {

	skimmer a("../root/");
	a.AddChannel("AH115","bbAHCutTree");
	a.AddChannel("AH115bb","bbAHCutTree");
//	a.AddChannel("AH160","bbAHCutTree", 36823.0);
//	a.AddChannel("AH160bb","bbAHCutTree", 11400.0);
	a.AddChannel("QCD_BCtoE","bbAHCutTree");
	a.AddChannel("QCD_EMenriched","bbAHCutTree");
	a.AddChannel("TTplusJets","bbAHCutTree");
	a.AddChannel("WplusJets","bbAHCutTree");
	a.AddChannel("Zbb","bbAHCutTree");
	a.AddChannel("Zcc","bbAHCutTree");
	a.AddChannel("ZplusJets","bbAHCutTree");

	a.GoSkim();
	a.WriteCombo();

	
	
}