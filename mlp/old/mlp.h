#ifndef __mlp__
#define __mlp__

#include <cmath>

class mlp { 
public:
   mlp() {}
   ~mlp() {}
   double Value(int index,double in0,double in1,double in2,double in3);
   double Value(int index, double* input);
private:
   double input0;
   double input1;
   double input2;
   double input3;
   double neuron0x10632d160();
   double neuron0x10632d440();
   double neuron0x10632d720();
   double neuron0x10632da00();
   double input0x10632dce0();
   double neuron0x10632dce0();
   double input0x10632dfa0();
   double neuron0x10632dfa0();
   double input0x106333f50();
   double neuron0x106333f50();
   double input0x106334270();
   double neuron0x106334270();
   double input0x1063344e0();
   double neuron0x1063344e0();
   double input0x106334970();
   double neuron0x106334970();
   double synapse0x10630f830();
   double synapse0x10632d000();
   double synapse0x10632df40();
   double synapse0x10632df70();
   double synapse0x10632e2b0();
   double synapse0x10632e2e0();
   double synapse0x10632e310();
   double synapse0x10632e340();
   double synapse0x1063341b0();
   double synapse0x1063341e0();
   double synapse0x106334210();
   double synapse0x106334240();
   double synapse0x106334450();
   double synapse0x106334480();
   double synapse0x1063344b0();
   double synapse0x1063347e0();
   double synapse0x106334810();
   double synapse0x106334940();
   double synapse0x10630f670();
   double synapse0x106334bd0();
   double synapse0x106334c00();
};

#endif // mlp_h

