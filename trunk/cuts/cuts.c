#include "cuts.h"


cuts::cuts(){
	IsoEle15Trigger_triggerHLTIsoEle15 = kTRUE;
}

Bool_t cuts::float2bool(Float_t f){
	if (f>0.5) {
		return kTRUE;
	}
	return kFALSE;
}


Int_t cuts::IsoEle15Trigger(eventviewer &evt){
	if( float2bool(*(evt.GettriggerHLTIsoEle15())) == IsoEle15Trigger_triggerHLTIsoEle15){
		return 1;
	}
	   return 0;
}