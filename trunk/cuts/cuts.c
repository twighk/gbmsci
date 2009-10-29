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



std::vector<Int_t> cuts::runcut (std::vector <Int_t (cuts::*)(eventviewer&)> &cutlist, eventviewer &evt){
	std::vector <Int_t> output(/*new vector size*/ cutlist.size(),/*default value*/ -1 ); // make output vector, the same size as the number of cuts, and setall = -1
	for (int i = 0; i < cutlist.size(); i++) { // foreach cut in the list
		output[i] = (this->*cutlist[i])(evt); // store the output in to the output vector
		//std::cout << output[i] << std::endl;
	}
	return output;
}