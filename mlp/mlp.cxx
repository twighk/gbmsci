#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0) {
   input0 = (in0 - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1034c8990();
     case 1:
         return neuron0x1034c8bf0();
     case 2:
         return neuron0x1034c8ed0();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 0)/1;
   switch(index) {
     case 0:
         return neuron0x1034c8990();
     case 1:
         return neuron0x1034c8bf0();
     case 2:
         return neuron0x1034c8ed0();
     default:
         return 0.;
   }
}

double mlp::neuron0x1034c87b0() {
   return input0;
}

double mlp::neuron0x1034c8990() {
   return input1;
}

double mlp::neuron0x1034c8bf0() {
   return input2;
}

double mlp::neuron0x1034c8ed0() {
   return input3;
}

