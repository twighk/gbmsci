 #include <iostream>
#include <vector>
#include <string>
#include "skimmer.h"

using namespace std;

int main(int argc, char** argv) {

	skimmer a("../root/","combo115");
	a.AddChannel("AH115","bbAHCutTree", 240000.);
	a.AddChannel("AH115bb","bbAHCutTree", 210000.);
	a.AddChannel("QCD_BCtoE","bbAHCutTree", 5.1e6);
	a.AddChannel("QCD_EMenriched","bbAHCutTree", 62.2e6);
	a.AddChannel("TTplusJets","bbAHCutTree", 0.8e6);
	a.AddChannel("WplusJets","bbAHCutTree", 9.7e6);
	a.AddChannel("Zbb","bbAHCutTree", 160000.);
	a.AddChannel("Zcc","bbAHCutTree", 260000.);
	a.AddChannel("ZplusJets","bbAHCutTree", 1.2e6);

	a.GoSkim();
	a.WriteCombo();

	
	
}
