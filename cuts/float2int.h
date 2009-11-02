#include <cmath>

#include <Rtypes.h>

Int_t float2int(Float_t f ){
	Int_t i = floor(f); 
	
	if ( (f-i) >= 0.5 ) {
		i++;
	}
	
	return i;
}