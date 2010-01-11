#include "mlp.h"

double mlp::Value(int index,double in0,double in1,double in2,double in3) {
   input0 = (in0 - 41.2286)/21.4641;
   input1 = (in1 - 45.7359)/63.1295;
   input2 = (in2 - 38.6473)/218.726;
   input3 = (in3 - 2.20017)/0.809457;
   switch(index) {
     case 0:
         return neuron0x106334270();
     case 1:
         return neuron0x1063344e0();
     case 2:
         return neuron0x106334970();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 41.2286)/21.4641;
   input1 = (input[1] - 45.7359)/63.1295;
   input2 = (input[2] - 38.6473)/218.726;
   input3 = (input[3] - 2.20017)/0.809457;
   switch(index) {
     case 0:
         return neuron0x106334270();
     case 1:
         return neuron0x1063344e0();
     case 2:
         return neuron0x106334970();
     default:
         return 0.;
   }
}

double mlp::neuron0x10632d160() {
   return input0;
}

double mlp::neuron0x10632d440() {
   return input1;
}

double mlp::neuron0x10632d720() {
   return input2;
}

double mlp::neuron0x10632da00() {
   return input3;
}

double mlp::input0x10632dce0() {
   double input = -3.25228;
   input += synapse0x10630f830();
   input += synapse0x10632d000();
   input += synapse0x10632df40();
   input += synapse0x10632df70();
   return input;
}

double mlp::neuron0x10632dce0() {
   double input = input0x10632dce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10632dfa0() {
   double input = 2.34578;
   input += synapse0x10632e2b0();
   input += synapse0x10632e2e0();
   input += synapse0x10632e310();
   input += synapse0x10632e340();
   return input;
}

double mlp::neuron0x10632dfa0() {
   double input = input0x10632dfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x106333f50() {
   double input = 6.79623;
   input += synapse0x1063341b0();
   input += synapse0x1063341e0();
   input += synapse0x106334210();
   input += synapse0x106334240();
   return input;
}

double mlp::neuron0x106333f50() {
   double input = input0x106333f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x106334270() {
   double input = 0.613868;
   input += synapse0x106334450();
   input += synapse0x106334480();
   input += synapse0x1063344b0();
   return input;
}

double mlp::neuron0x106334270() {
   double input = input0x106334270();
   return (input * 1)+0;
}

double mlp::input0x1063344e0() {
   double input = 0.540061;
   input += synapse0x1063347e0();
   input += synapse0x106334810();
   input += synapse0x106334940();
   return input;
}

double mlp::neuron0x1063344e0() {
   double input = input0x1063344e0();
   return (input * 1)+0;
}

double mlp::input0x106334970() {
   double input = -0.170474;
   input += synapse0x10630f670();
   input += synapse0x106334bd0();
   input += synapse0x106334c00();
   return input;
}

double mlp::neuron0x106334970() {
   double input = input0x106334970();
   return (input * 1)+0;
}

double mlp::synapse0x10630f830() {
   return (neuron0x10632d160()*0.165986);
}

double mlp::synapse0x10632d000() {
   return (neuron0x10632d440()*-0.458275);
}

double mlp::synapse0x10632df40() {
   return (neuron0x10632d720()*-11.2131);
}

double mlp::synapse0x10632df70() {
   return (neuron0x10632da00()*0.0146804);
}

double mlp::synapse0x10632e2b0() {
   return (neuron0x10632d160()*2.50957);
}

double mlp::synapse0x10632e2e0() {
   return (neuron0x10632d440()*-5.50368);
}

double mlp::synapse0x10632e310() {
   return (neuron0x10632d720()*-0.906064);
}

double mlp::synapse0x10632e340() {
   return (neuron0x10632da00()*-1.81647);
}

double mlp::synapse0x1063341b0() {
   return (neuron0x10632d160()*3.7287);
}

double mlp::synapse0x1063341e0() {
   return (neuron0x10632d440()*-0.535655);
}

double mlp::synapse0x106334210() {
   return (neuron0x10632d720()*5.99227);
}

double mlp::synapse0x106334240() {
   return (neuron0x10632da00()*-4.39502);
}

double mlp::synapse0x106334450() {
   return (neuron0x10632dce0()*0.569023);
}

double mlp::synapse0x106334480() {
   return (neuron0x10632dfa0()*-0.301673);
}

double mlp::synapse0x1063344b0() {
   return (neuron0x106333f50()*-0.309756);
}

double mlp::synapse0x1063347e0() {
   return (neuron0x10632dce0()*-3.99153);
}

double mlp::synapse0x106334810() {
   return (neuron0x10632dfa0()*0.472646);
}

double mlp::synapse0x106334940() {
   return (neuron0x106333f50()*0.0668329);
}

double mlp::synapse0x10630f670() {
   return (neuron0x10632dce0()*3.54686);
}

double mlp::synapse0x106334bd0() {
   return (neuron0x10632dfa0()*-0.180752);
}

double mlp::synapse0x106334c00() {
   return (neuron0x106333f50()*0.260833);
}

