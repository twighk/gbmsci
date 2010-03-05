#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3) {
   input0 = (in0 - 42.1827)/20.8917;
   input1 = (in1 - 48.6411)/73.1473;
   input2 = (in2 - 26.3703)/298.013;
   input3 = (in3 - 2.57257)/0.56415;
   switch(index) {
     case 0:
         return neuron0x1043adf30();
     case 1:
         return neuron0x1043ae1a0();
     case 2:
         return neuron0x1043ae610();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 42.1827)/20.8917;
   input1 = (input[1] - 48.6411)/73.1473;
   input2 = (input[2] - 26.3703)/298.013;
   input3 = (input[3] - 2.57257)/0.56415;
   switch(index) {
     case 0:
         return neuron0x1043adf30();
     case 1:
         return neuron0x1043ae1a0();
     case 2:
         return neuron0x1043ae610();
     default:
         return 0.;
   }
}

double mlp::neuron0x1043aca20() {
   return input0;
}

double mlp::neuron0x1043acc00() {
   return input1;
}

double mlp::neuron0x1043acee0() {
   return input2;
}

double mlp::neuron0x1043ad1c0() {
   return input3;
}

double mlp::input0x1043ad5e0() {
   double input = -1.20382;
   input += synapse0x1043a1ff0();
   input += synapse0x1043ac850();
   input += synapse0x1043ac880();
   input += synapse0x1043ac9c0();
   return input;
}

double mlp::neuron0x1043ad5e0() {
   double input = input0x1043ad5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1043ad7c0() {
   double input = 0.174858;
   input += synapse0x1043adaa0();
   input += synapse0x1043adad0();
   input += synapse0x1043adb00();
   input += synapse0x1043adb30();
   return input;
}

double mlp::neuron0x1043ad7c0() {
   double input = input0x1043ad7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1043adb60() {
   double input = 0.588454;
   input += synapse0x1043ade70();
   input += synapse0x1043adea0();
   input += synapse0x1043aded0();
   input += synapse0x1043adf00();
   return input;
}

double mlp::neuron0x1043adb60() {
   double input = input0x1043adb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1043adf30() {
   double input = 1.73403;
   input += synapse0x1043ae110();
   input += synapse0x1043ae140();
   input += synapse0x1043ae170();
   return input;
}

double mlp::neuron0x1043adf30() {
   double input = input0x1043adf30();
   return (input * 1)+0;
}

double mlp::input0x1043ae1a0() {
   double input = -0.734354;
   input += synapse0x1043ae480();
   input += synapse0x1043ae4b0();
   input += synapse0x1043ae5e0();
   return input;
}

double mlp::neuron0x1043ae1a0() {
   double input = input0x1043ae1a0();
   return (input * 1)+0;
}

double mlp::input0x1043ae610() {
   double input = 0.000399928;
   input += synapse0x1043ad4a0();
   input += synapse0x1043ae870();
   input += synapse0x1043ae8a0();
   return input;
}

double mlp::neuron0x1043ae610() {
   double input = input0x1043ae610();
   return (input * 1)+0;
}

double mlp::synapse0x1043a1ff0() {
   return (neuron0x1043aca20()*1.77453);
}

double mlp::synapse0x1043ac850() {
   return (neuron0x1043acc00()*-0.69326);
}

double mlp::synapse0x1043ac880() {
   return (neuron0x1043acee0()*-4.33555);
}

double mlp::synapse0x1043ac9c0() {
   return (neuron0x1043ad1c0()*4.75842);
}

double mlp::synapse0x1043adaa0() {
   return (neuron0x1043aca20()*0.979589);
}

double mlp::synapse0x1043adad0() {
   return (neuron0x1043acc00()*-0.586395);
}

double mlp::synapse0x1043adb00() {
   return (neuron0x1043acee0()*-8.0342);
}

double mlp::synapse0x1043adb30() {
   return (neuron0x1043ad1c0()*-0.22624);
}

double mlp::synapse0x1043ade70() {
   return (neuron0x1043aca20()*-0.538983);
}

double mlp::synapse0x1043adea0() {
   return (neuron0x1043acc00()*0.0962837);
}

double mlp::synapse0x1043aded0() {
   return (neuron0x1043acee0()*1.79864);
}

double mlp::synapse0x1043adf00() {
   return (neuron0x1043ad1c0()*0.441539);
}

double mlp::synapse0x1043ae110() {
   return (neuron0x1043ad5e0()*0.176533);
}

double mlp::synapse0x1043ae140() {
   return (neuron0x1043ad7c0()*-1.62319);
}

double mlp::synapse0x1043ae170() {
   return (neuron0x1043adb60()*-0.992255);
}

double mlp::synapse0x1043ae480() {
   return (neuron0x1043ad5e0()*-0.178691);
}

double mlp::synapse0x1043ae4b0() {
   return (neuron0x1043ad7c0()*1.63346);
}

double mlp::synapse0x1043ae5e0() {
   return (neuron0x1043adb60()*0.979918);
}

double mlp::synapse0x1043ad4a0() {
   return (neuron0x1043ad5e0()*-0.00250437);
}

double mlp::synapse0x1043ae870() {
   return (neuron0x1043ad7c0()*-0.00410408);
}

double mlp::synapse0x1043ae8a0() {
   return (neuron0x1043adb60()*0.00916459);
}

