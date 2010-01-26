#ifndef __dict__
#define __dict__

#include <iostream>
#include <vector>
#include <string>
#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include <cmath>
#include <sstream>
#include <TString.h>
#include "../header/brptr.h"


namespace dict {
	
	template<class T>
	static T * u(brptr object){
		return (static_cast<T*>(object.pointer));
	}
};


#endif