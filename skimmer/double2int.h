#ifndef __double2int__
#define __double2int__

#include <cmath>

#include <Rtypes.h>

Int_t double2int(Double_t f ){
	Int_t i = floor(f); 
	
	if ( (f-i) >= 0.5 ) {
		i++;
	}
	
	return i;
}

#endif
