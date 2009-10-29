#ifndef __cuts__
#define __cuts__


#include <vector>
#include <iostream>

#include <TTree.h>
#include <TBranch.h>
#include <TClonesArray.h> // Nessary for SetBranchAddress
#include <TLorentzVector.h>
#include <Rtypes.h> // for Long_64 though not necessary if long_64 spelt with `L'

#include "../eventviewer/eventviewer.h"

class cuts{
private:
	Bool_t float2bool(Float_t f);

	
	Bool_t IsoEle15Trigger_triggerHLTIsoEle15;
	
		
public:
	
	cuts();
	
	Int_t IsoEle15Trigger(eventviewer &evt);
	
	void SetIsoEle15Trigger(Bool_t _IsoEle15Trigger_triggerHLTIsoEle15){ IsoEle15Trigger_triggerHLTIsoEle15 = _IsoEle15Trigger_triggerHLTIsoEle15;}
	
	
	
	
	
	//std::vector<Int_t> 
	
};



#endif