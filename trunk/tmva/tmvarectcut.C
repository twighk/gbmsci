#include <cstdlib>
#include <iostream> 
#include <map>
#include <string>

// idenify at a later point in time
#include "TChain.h" // magic includes
#include "TFile.h" // magic includes
#include "TTree.h" // magic includes
#include "TString.h" // magic includes
#include "TObjString.h" // magic includes
#include "TSystem.h" // magic includes
#include "TROOT.h" // magic includes
#include "TPluginManager.h" // magic includes

#include "TMVAGui.C"

#if not defined(__CINT__) || defined(__MAKECINT__)
// needs to be included when makecint runs (ACLIC)
#include "TMVA/Factory.h"
#include "TMVA/Tools.h"
#endif

int main(){
	
	
	return 0;
}
