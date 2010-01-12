#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8) {
   input0 = (in0 - 42.1827)/20.8917;
   input1 = (in1 - 48.6411)/73.1473;
   input2 = (in2 - 26.3703)/298.013;
   input3 = (in3 - 2.57257)/0.56415;
   input4 = (in4 - 7.60156e-05)/0.979457;
   input5 = (in5 - -0.00416881)/1.11664;
   input6 = (in6 - 1.03357)/2.85002;
   input7 = (in7 - 0.191235)/1.46727;
   input8 = (in8 - 0.734332)/2.31602;
   switch(index) {
     case 0:
         return neuron0x10499a9e0();
     case 1:
         return neuron0x10499abf0();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 42.1827)/20.8917;
   input1 = (input[1] - 48.6411)/73.1473;
   input2 = (input[2] - 26.3703)/298.013;
   input3 = (input[3] - 2.57257)/0.56415;
   input4 = (input[4] - 7.60156e-05)/0.979457;
   input5 = (input[5] - -0.00416881)/1.11664;
   input6 = (input[6] - 1.03357)/2.85002;
   input7 = (input[7] - 0.191235)/1.46727;
   input8 = (input[8] - 0.734332)/2.31602;
   switch(index) {
     case 0:
         return neuron0x10499a9e0();
     case 1:
         return neuron0x10499abf0();
     default:
         return 0.;
   }
}

double mlp::neuron0x104998e20() {
   return input0;
}

double mlp::neuron0x104998f80() {
   return input1;
}

double mlp::neuron0x104999260() {
   return input2;
}

double mlp::neuron0x104999540() {
   return input3;
}

double mlp::neuron0x104999820() {
   return input4;
}

double mlp::neuron0x104999b00() {
   return input5;
}

double mlp::neuron0x104999de0() {
   return input6;
}

double mlp::neuron0x10499a0f0() {
   return input7;
}

double mlp::neuron0x10499a400() {
   return input8;
}

double mlp::input0x10499a850() {
   double input = 0.537333;
   input += synapse0x10498c070();
   input += synapse0x104998c40();
   input += synapse0x10498bd40();
   input += synapse0x10498bd70();
   input += synapse0x10498bdd0();
   input += synapse0x10498be00();
   input += synapse0x10498be30();
   input += synapse0x10498be60();
   input += synapse0x10499a9b0();
   return input;
}

double mlp::neuron0x10499a850() {
   double input = input0x10499a850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499a9e0() {
   double input = 0.823104;
   input += synapse0x10499abc0();
   return input;
}

double mlp::neuron0x10499a9e0() {
   double input = input0x10499a9e0();
   return (input * 1)+0;
}

double mlp::input0x10499abf0() {
   double input = 0.176896;
   input += synapse0x10499aed0();
   return input;
}

double mlp::neuron0x10499abf0() {
   double input = input0x10499abf0();
   return (input * 1)+0;
}

double mlp::synapse0x10498c070() {
   return (neuron0x104998e20()*1.3992);
}

double mlp::synapse0x104998c40() {
   return (neuron0x104998f80()*-1.25191);
}

double mlp::synapse0x10498bd40() {
   return (neuron0x104999260()*-16.2439);
}

double mlp::synapse0x10498bd70() {
   return (neuron0x104999540()*-0.234381);
}

double mlp::synapse0x10498bdd0() {
   return (neuron0x104999820()*0.0324739);
}

double mlp::synapse0x10498be00() {
   return (neuron0x104999b00()*-0.00973655);
}

double mlp::synapse0x10498be30() {
   return (neuron0x104999de0()*0.0199193);
}

double mlp::synapse0x10498be60() {
   return (neuron0x10499a0f0()*-0.0304569);
}

double mlp::synapse0x10499a9b0() {
   return (neuron0x10499a400()*0.0595891);
}

double mlp::synapse0x10499abc0() {
   return (neuron0x10499a850()*-0.819943);
}

double mlp::synapse0x10499aed0() {
   return (neuron0x10499a850()*0.819943);
}

