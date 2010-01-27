#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14) {
   input0 = (in0 - -0.819905)/0.586601;
   input1 = (in1 - 0.0174954)/0.999847;
   input2 = (in2 - 1.08577)/2.7008;
   input3 = (in3 - 37.6418)/20.0951;
   input4 = (in4 - -0.00104854)/0.969025;
   input5 = (in5 - 0.240178)/1.59485;
   input6 = (in6 - 1.39863)/1.05065;
   input7 = (in7 - 35.1621)/34.8828;
   input8 = (in8 - 2.50356)/0.704229;
   input9 = (in9 - 0.882073)/4.74797;
   input10 = (in10 - 34.9894)/96.266;
   input11 = (in11 - -0.00928484)/1.0081;
   input12 = (in12 - 50.1115)/94.7607;
   input13 = (in13 - 0.0138086)/1.13611;
   input14 = (in14 - 87.0124)/43.769;
   switch(index) {
     case 0:
         return neuron0x1049fb9b0();
     case 1:
         return neuron0x1049fbe60();
     case 2:
         return neuron0x104a003a0();
     case 3:
         return neuron0x104a00950();
     case 4:
         return neuron0x104a00f00();
     case 5:
         return neuron0x104a01480();
     case 6:
         return neuron0x104a01a30();
     case 7:
         return neuron0x104a01fe0();
     case 8:
         return neuron0x104a02590();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - -0.819905)/0.586601;
   input1 = (input[1] - 0.0174954)/0.999847;
   input2 = (input[2] - 1.08577)/2.7008;
   input3 = (input[3] - 37.6418)/20.0951;
   input4 = (input[4] - -0.00104854)/0.969025;
   input5 = (input[5] - 0.240178)/1.59485;
   input6 = (input[6] - 1.39863)/1.05065;
   input7 = (input[7] - 35.1621)/34.8828;
   input8 = (input[8] - 2.50356)/0.704229;
   input9 = (input[9] - 0.882073)/4.74797;
   input10 = (input[10] - 34.9894)/96.266;
   input11 = (input[11] - -0.00928484)/1.0081;
   input12 = (input[12] - 50.1115)/94.7607;
   input13 = (input[13] - 0.0138086)/1.13611;
   input14 = (input[14] - 87.0124)/43.769;
   switch(index) {
     case 0:
         return neuron0x1049fb9b0();
     case 1:
         return neuron0x1049fbe60();
     case 2:
         return neuron0x104a003a0();
     case 3:
         return neuron0x104a00950();
     case 4:
         return neuron0x104a00f00();
     case 5:
         return neuron0x104a01480();
     case 6:
         return neuron0x104a01a30();
     case 7:
         return neuron0x104a01fe0();
     case 8:
         return neuron0x104a02590();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049ee140() {
   return input0;
}

double mlp::neuron0x1049ee2a0() {
   return input1;
}

double mlp::neuron0x1049ee500() {
   return input2;
}

double mlp::neuron0x1049ee7e0() {
   return input3;
}

double mlp::neuron0x1049eeac0() {
   return input4;
}

double mlp::neuron0x1049eeda0() {
   return input5;
}

double mlp::neuron0x1049ef0b0() {
   return input6;
}

double mlp::neuron0x1049ef3c0() {
   return input7;
}

double mlp::neuron0x1049ef6d0() {
   return input8;
}

double mlp::neuron0x1049ef9e0() {
   return input9;
}

double mlp::neuron0x1049efcf0() {
   return input10;
}

double mlp::neuron0x1049effd0() {
   return input11;
}

double mlp::neuron0x1049f02e0() {
   return input12;
}

double mlp::neuron0x1049f05c0() {
   return input13;
}

double mlp::neuron0x1049f08c0() {
   return input14;
}

double mlp::input0x1049f0bd0() {
   double input = 0.074155;
   input += synapse0x1049e5e70();
   input += synapse0x1049e5ea0();
   input += synapse0x1049e5f80();
   input += synapse0x1049e5fb0();
   input += synapse0x1049e5fe0();
   input += synapse0x1049e5770();
   input += synapse0x1049e57a0();
   input += synapse0x1049e57d0();
   input += synapse0x1049e5800();
   input += synapse0x1049e5830();
   input += synapse0x1049e5860();
   input += synapse0x1049f0d30();
   input += synapse0x1049f0d60();
   input += synapse0x1049f0d90();
   input += synapse0x1049f0dc0();
   return input;
}

double mlp::neuron0x1049f0bd0() {
   double input = input0x1049f0bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f0df0() {
   double input = 0.666053;
   input += synapse0x1049f1200();
   input += synapse0x1049f1230();
   input += synapse0x1049da970();
   input += synapse0x1049da9a0();
   input += synapse0x1049f1360();
   input += synapse0x1049f1390();
   input += synapse0x1049f13c0();
   input += synapse0x1049f13f0();
   input += synapse0x1049f1420();
   input += synapse0x1049f1450();
   input += synapse0x1049f1480();
   input += synapse0x1049f14b0();
   input += synapse0x1049f14e0();
   input += synapse0x1049f1510();
   input += synapse0x1049f1540();
   return input;
}

double mlp::neuron0x1049f0df0() {
   double input = input0x1049f0df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f1570() {
   double input = 0.173023;
   input += synapse0x1049f1800();
   input += synapse0x1049f1830();
   input += synapse0x1049f1860();
   input += synapse0x1049f1260();
   input += synapse0x1049f1290();
   input += synapse0x1049f12c0();
   input += synapse0x1049f12f0();
   input += synapse0x1049f1320();
   input += synapse0x1049f1a90();
   input += synapse0x1049f1ac0();
   input += synapse0x1049f1af0();
   input += synapse0x1049f1b20();
   input += synapse0x1049f1b50();
   input += synapse0x1049f1b80();
   input += synapse0x1049f1bb0();
   return input;
}

double mlp::neuron0x1049f1570() {
   double input = input0x1049f1570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f1be0() {
   double input = 0.834818;
   input += synapse0x1049f1ef0();
   input += synapse0x1049f1f20();
   input += synapse0x1049f1f50();
   input += synapse0x1049f1f80();
   input += synapse0x1049f1fb0();
   input += synapse0x1049f1fe0();
   input += synapse0x1049f2010();
   input += synapse0x1049f2040();
   input += synapse0x1049f2070();
   input += synapse0x1049f20a0();
   input += synapse0x1049f20d0();
   input += synapse0x1049f2100();
   input += synapse0x1049f2130();
   input += synapse0x1049f2160();
   input += synapse0x1049f2190();
   return input;
}

double mlp::neuron0x1049f1be0() {
   double input = input0x1049f1be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f21c0() {
   double input = -0.165609;
   input += synapse0x1049f24d0();
   input += synapse0x1049f2500();
   input += synapse0x1049f2530();
   input += synapse0x1049f2560();
   input += synapse0x1049f2590();
   input += synapse0x1049f1890();
   input += synapse0x1049f18c0();
   input += synapse0x1049f18f0();
   input += synapse0x1049f1920();
   input += synapse0x1049f1950();
   input += synapse0x1049f1980();
   input += synapse0x1049f19b0();
   input += synapse0x1049f19e0();
   input += synapse0x1049f1a10();
   input += synapse0x1049f1a40();
   return input;
}

double mlp::neuron0x1049f21c0() {
   double input = input0x1049f21c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f25c0() {
   double input = 0.670039;
   input += synapse0x1049f28d0();
   input += synapse0x1049f2900();
   input += synapse0x1049f2930();
   input += synapse0x1049f2960();
   input += synapse0x1049f2990();
   input += synapse0x1049f29c0();
   input += synapse0x1049f29f0();
   input += synapse0x1049f2a20();
   input += synapse0x1049f2a50();
   input += synapse0x1049f2a80();
   input += synapse0x1049f2ab0();
   input += synapse0x1049f2ae0();
   input += synapse0x1049f2b10();
   input += synapse0x1049f2b40();
   input += synapse0x1049f2b70();
   return input;
}

double mlp::neuron0x1049f25c0() {
   double input = input0x1049f25c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f2ba0() {
   double input = 0.207979;
   input += synapse0x1049f2eb0();
   input += synapse0x1049f2ee0();
   input += synapse0x1049f2f10();
   input += synapse0x1049f2f40();
   input += synapse0x1049f2f70();
   input += synapse0x1049f2fa0();
   input += synapse0x1049f2fd0();
   input += synapse0x1049f3000();
   input += synapse0x1049f3030();
   input += synapse0x1049f3060();
   input += synapse0x1049f3090();
   input += synapse0x1049f30c0();
   input += synapse0x1049f30f0();
   input += synapse0x1049f3120();
   input += synapse0x1049f3150();
   return input;
}

double mlp::neuron0x1049f2ba0() {
   double input = input0x1049f2ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f3180() {
   double input = -0.897401;
   input += synapse0x1049f3490();
   input += synapse0x1049f34c0();
   input += synapse0x1049f34f0();
   input += synapse0x1049f3520();
   input += synapse0x1049f3550();
   input += synapse0x1049f3580();
   input += synapse0x1049f35b0();
   input += synapse0x1049f35e0();
   input += synapse0x1049f3610();
   input += synapse0x1049f3640();
   input += synapse0x1049f3670();
   input += synapse0x1049f36a0();
   input += synapse0x1049f36d0();
   input += synapse0x1049f3700();
   input += synapse0x1049f3730();
   return input;
}

double mlp::neuron0x1049f3180() {
   double input = input0x1049f3180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f3760() {
   double input = -0.543592;
   input += synapse0x1049f3a70();
   input += synapse0x1049f3aa0();
   input += synapse0x1049f3ad0();
   input += synapse0x1049f3b00();
   input += synapse0x1049f3b30();
   input += synapse0x1049f3b60();
   input += synapse0x1049f3b90();
   input += synapse0x1049f3bc0();
   input += synapse0x1049f3bf0();
   input += synapse0x1049f3c20();
   input += synapse0x1049f3c50();
   input += synapse0x1049f3c80();
   input += synapse0x1049f3cb0();
   input += synapse0x1049f3ce0();
   input += synapse0x1049f3d10();
   return input;
}

double mlp::neuron0x1049f3760() {
   double input = input0x1049f3760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f3d40() {
   double input = -0.43544;
   input += synapse0x1049f4050();
   input += synapse0x1049f4080();
   input += synapse0x1049f40b0();
   input += synapse0x1049f40e0();
   input += synapse0x1049f4110();
   input += synapse0x1049f4140();
   input += synapse0x1049f4170();
   input += synapse0x1049f41a0();
   input += synapse0x1049f41d0();
   input += synapse0x1049f4200();
   input += synapse0x1049f4230();
   input += synapse0x1049f4260();
   input += synapse0x1049f4290();
   input += synapse0x1049f42c0();
   input += synapse0x1049f42f0();
   return input;
}

double mlp::neuron0x1049f3d40() {
   double input = input0x1049f3d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f4320() {
   double input = -0.121562;
   input += synapse0x1049f4630();
   input += synapse0x1049f4660();
   input += synapse0x1049f4690();
   input += synapse0x1049f46c0();
   input += synapse0x1049f46f0();
   input += synapse0x1049f4720();
   input += synapse0x1049f4750();
   input += synapse0x1049f4780();
   input += synapse0x1049f47b0();
   input += synapse0x1049f47e0();
   input += synapse0x1049f4810();
   input += synapse0x1049f4840();
   input += synapse0x1049f4870();
   input += synapse0x1049f48a0();
   input += synapse0x1049f48d0();
   return input;
}

double mlp::neuron0x1049f4320() {
   double input = input0x1049f4320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f4900() {
   double input = -0.32668;
   input += synapse0x1049f4c10();
   input += synapse0x1049f4c40();
   input += synapse0x1049f4c70();
   input += synapse0x1049f4ca0();
   input += synapse0x1049f4cd0();
   input += synapse0x1049f4d00();
   input += synapse0x1049f4d30();
   input += synapse0x1049f4d60();
   input += synapse0x1049f4d90();
   input += synapse0x1049f4dc0();
   input += synapse0x1049f4df0();
   input += synapse0x1049f4e20();
   input += synapse0x1049f4e50();
   input += synapse0x1049f4e80();
   input += synapse0x1049f4eb0();
   return input;
}

double mlp::neuron0x1049f4900() {
   double input = input0x1049f4900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f4ee0() {
   double input = -0.453477;
   input += synapse0x1049f51f0();
   input += synapse0x1049f5220();
   input += synapse0x1049f5250();
   input += synapse0x1049f5280();
   input += synapse0x1049f52b0();
   input += synapse0x1049f52e0();
   input += synapse0x1049f5310();
   input += synapse0x1049f5340();
   input += synapse0x1049f5370();
   input += synapse0x1049f53a0();
   input += synapse0x1049f53d0();
   input += synapse0x1049f5400();
   input += synapse0x1049f5430();
   input += synapse0x1049f5460();
   input += synapse0x1049f5490();
   return input;
}

double mlp::neuron0x1049f4ee0() {
   double input = input0x1049f4ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f54c0() {
   double input = 0.0240628;
   input += synapse0x1049f57d0();
   input += synapse0x1049f5800();
   input += synapse0x1049f5830();
   input += synapse0x1049f5860();
   input += synapse0x1049f5890();
   input += synapse0x1049f58c0();
   input += synapse0x1049f58f0();
   input += synapse0x1049f5920();
   input += synapse0x1049f5950();
   input += synapse0x1049f5980();
   input += synapse0x1049f59b0();
   input += synapse0x1049f59e0();
   input += synapse0x1049f5a10();
   input += synapse0x1049f5a40();
   input += synapse0x1049f5a70();
   return input;
}

double mlp::neuron0x1049f54c0() {
   double input = input0x1049f54c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f5aa0() {
   double input = -0.622533;
   input += synapse0x1049f5db0();
   input += synapse0x1049f5de0();
   input += synapse0x1049f5e10();
   input += synapse0x1049f5e40();
   input += synapse0x1049f5e70();
   input += synapse0x1049f5ea0();
   input += synapse0x1049f5ed0();
   input += synapse0x1049f5f00();
   input += synapse0x1049f5f30();
   input += synapse0x1049f5f60();
   input += synapse0x1049f5f90();
   input += synapse0x1049f5fc0();
   input += synapse0x1049f5ff0();
   input += synapse0x1049f6020();
   input += synapse0x1049f6050();
   return input;
}

double mlp::neuron0x1049f5aa0() {
   double input = input0x1049f5aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f60b0() {
   double input = -0.735703;
   input += synapse0x1049f6390();
   input += synapse0x1049f63c0();
   input += synapse0x1049f63f0();
   input += synapse0x1049f6420();
   input += synapse0x1049f6450();
   input += synapse0x1049f6480();
   input += synapse0x1049f64b0();
   input += synapse0x1049f64e0();
   input += synapse0x1049f6510();
   input += synapse0x1049f6540();
   input += synapse0x1049f6570();
   input += synapse0x1049f65a0();
   input += synapse0x1049f65d0();
   input += synapse0x1049f6600();
   input += synapse0x1049f6630();
   return input;
}

double mlp::neuron0x1049f60b0() {
   double input = input0x1049f60b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f6660() {
   double input = 0.750417;
   input += synapse0x1049f6970();
   input += synapse0x1049f69a0();
   input += synapse0x1049f69d0();
   input += synapse0x1049f6a00();
   input += synapse0x1049f6a30();
   input += synapse0x1049f6a60();
   input += synapse0x1049f6a90();
   input += synapse0x1049f6ac0();
   input += synapse0x1049f6af0();
   input += synapse0x1049f6b20();
   input += synapse0x1049f6b50();
   input += synapse0x1049f6b80();
   input += synapse0x1049f6bb0();
   input += synapse0x1049f6be0();
   input += synapse0x1049f6c10();
   return input;
}

double mlp::neuron0x1049f6660() {
   double input = input0x1049f6660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f6c40() {
   double input = -0.331497;
   input += synapse0x1049f1100();
   input += synapse0x1049f1130();
   input += synapse0x1049f1160();
   input += synapse0x1049f1190();
   input += synapse0x1049f11c0();
   input += synapse0x1049f7150();
   input += synapse0x1049f7180();
   input += synapse0x1049f71b0();
   input += synapse0x1049f71e0();
   input += synapse0x1049f7210();
   input += synapse0x1049f7240();
   input += synapse0x1049f7270();
   input += synapse0x1049f72a0();
   input += synapse0x1049f72d0();
   input += synapse0x1049f7300();
   return input;
}

double mlp::neuron0x1049f6c40() {
   double input = input0x1049f6c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f7330() {
   double input = 0.519524;
   input += synapse0x1049f7640();
   input += synapse0x1049f7670();
   input += synapse0x1049f76a0();
   input += synapse0x1049f76d0();
   input += synapse0x1049f7700();
   input += synapse0x1049f7730();
   input += synapse0x1049f7760();
   input += synapse0x1049f7790();
   input += synapse0x1049f77c0();
   input += synapse0x1049f77f0();
   input += synapse0x1049f7820();
   input += synapse0x1049f7850();
   input += synapse0x1049f7880();
   input += synapse0x1049f78b0();
   input += synapse0x1049f78e0();
   return input;
}

double mlp::neuron0x1049f7330() {
   double input = input0x1049f7330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f7910() {
   double input = 0.693278;
   input += synapse0x1049f7c20();
   input += synapse0x1049f7c50();
   input += synapse0x1049f7c80();
   input += synapse0x1049f7cb0();
   input += synapse0x1049f7ce0();
   input += synapse0x1049f7d10();
   input += synapse0x1049f7d40();
   input += synapse0x1049f7d70();
   input += synapse0x1049f7da0();
   input += synapse0x1049f7dd0();
   input += synapse0x1049f7e00();
   input += synapse0x1049f7e30();
   input += synapse0x1049f7e60();
   input += synapse0x1049f7e90();
   input += synapse0x1049f7ec0();
   return input;
}

double mlp::neuron0x1049f7910() {
   double input = input0x1049f7910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f7ef0() {
   double input = -0.160869;
   input += synapse0x1049f8200();
   input += synapse0x1049f8230();
   input += synapse0x1049f8260();
   input += synapse0x1049f8290();
   input += synapse0x1049f82c0();
   input += synapse0x1049f82f0();
   input += synapse0x1049f8320();
   input += synapse0x1049f8350();
   input += synapse0x1049f8380();
   input += synapse0x1049f83b0();
   input += synapse0x1049f83e0();
   input += synapse0x1049f8410();
   input += synapse0x1049f8440();
   input += synapse0x1049f8470();
   input += synapse0x1049f84a0();
   return input;
}

double mlp::neuron0x1049f7ef0() {
   double input = input0x1049f7ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f84d0() {
   double input = 0.0926207;
   input += synapse0x1049f87e0();
   input += synapse0x1049f8810();
   input += synapse0x1049f8840();
   input += synapse0x1049f8870();
   input += synapse0x1049f88a0();
   input += synapse0x1049f88d0();
   input += synapse0x1049f8900();
   input += synapse0x1049f8930();
   input += synapse0x1049f8960();
   input += synapse0x1049f8990();
   input += synapse0x1049f89c0();
   input += synapse0x1049f89f0();
   input += synapse0x1049f8a20();
   input += synapse0x1049f8a50();
   input += synapse0x1049f8a80();
   return input;
}

double mlp::neuron0x1049f84d0() {
   double input = input0x1049f84d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f8ab0() {
   double input = 0.672436;
   input += synapse0x1049f8dc0();
   input += synapse0x1049f8df0();
   input += synapse0x1049f8e20();
   input += synapse0x1049f8e50();
   input += synapse0x1049f8e80();
   input += synapse0x1049f8eb0();
   input += synapse0x1049f8ee0();
   input += synapse0x1049f8f10();
   input += synapse0x1049f8f40();
   input += synapse0x1049f8f70();
   input += synapse0x1049f8fa0();
   input += synapse0x1049f8fd0();
   input += synapse0x1049f9000();
   input += synapse0x1049f9030();
   input += synapse0x1049f9060();
   return input;
}

double mlp::neuron0x1049f8ab0() {
   double input = input0x1049f8ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f9090() {
   double input = -0.588953;
   input += synapse0x1049f93a0();
   input += synapse0x1049f93d0();
   input += synapse0x1049f9400();
   input += synapse0x1049f9430();
   input += synapse0x1049f9460();
   input += synapse0x1049f9490();
   input += synapse0x1049f94c0();
   input += synapse0x1049f94f0();
   input += synapse0x1049f9520();
   input += synapse0x1049f9550();
   input += synapse0x1049f9580();
   input += synapse0x1049f95b0();
   input += synapse0x1049f95e0();
   input += synapse0x1049f9610();
   input += synapse0x1049f9640();
   return input;
}

double mlp::neuron0x1049f9090() {
   double input = input0x1049f9090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f9670() {
   double input = -1.15598;
   input += synapse0x1049f9980();
   input += synapse0x1049f99b0();
   input += synapse0x1049f99e0();
   input += synapse0x1049f9a10();
   input += synapse0x1049f9a40();
   input += synapse0x1049f9a70();
   input += synapse0x1049f9aa0();
   input += synapse0x1049f9ad0();
   input += synapse0x1049f9b00();
   input += synapse0x1049f9b30();
   input += synapse0x1049f9b60();
   input += synapse0x1049f9b90();
   input += synapse0x1049f9bc0();
   input += synapse0x1049f9bf0();
   input += synapse0x1049f9c20();
   return input;
}

double mlp::neuron0x1049f9670() {
   double input = input0x1049f9670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f9c50() {
   double input = 0.177507;
   input += synapse0x1049f9f60();
   input += synapse0x1049f9f90();
   input += synapse0x1049f9fc0();
   input += synapse0x1049f9ff0();
   input += synapse0x1049fa020();
   input += synapse0x1049fa050();
   input += synapse0x1049fa080();
   input += synapse0x1049fa0b0();
   input += synapse0x1049fa0e0();
   input += synapse0x1049fa110();
   input += synapse0x1049fa140();
   input += synapse0x1049fa170();
   input += synapse0x1049fa1a0();
   input += synapse0x1049fa1d0();
   input += synapse0x1049fa200();
   return input;
}

double mlp::neuron0x1049f9c50() {
   double input = input0x1049f9c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049fa230() {
   double input = -0.353077;
   input += synapse0x1049fa540();
   input += synapse0x1049fa570();
   input += synapse0x1049fa5a0();
   input += synapse0x1049fa5d0();
   input += synapse0x1049fa600();
   input += synapse0x1049fa630();
   input += synapse0x1049fa660();
   input += synapse0x1049fa690();
   input += synapse0x1049fa6c0();
   input += synapse0x1049fa6f0();
   input += synapse0x1049fa720();
   input += synapse0x1049fa750();
   input += synapse0x1049fa780();
   input += synapse0x1049fa7b0();
   input += synapse0x1049fa7e0();
   return input;
}

double mlp::neuron0x1049fa230() {
   double input = input0x1049fa230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049fa810() {
   double input = 0.400678;
   input += synapse0x1049fab20();
   input += synapse0x1049fab50();
   input += synapse0x1049fab80();
   input += synapse0x1049fabb0();
   input += synapse0x1049fabe0();
   input += synapse0x1049fac10();
   input += synapse0x1049fac40();
   input += synapse0x1049fac70();
   input += synapse0x1049faca0();
   input += synapse0x1049facd0();
   input += synapse0x1049fad00();
   input += synapse0x1049fad30();
   input += synapse0x1049fad60();
   input += synapse0x1049fad90();
   input += synapse0x1049fadc0();
   return input;
}

double mlp::neuron0x1049fa810() {
   double input = input0x1049fa810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049fadf0() {
   double input = -0.619052;
   input += synapse0x1049fb100();
   input += synapse0x1049fb130();
   input += synapse0x1049fb160();
   input += synapse0x1049fb190();
   input += synapse0x1049fb1c0();
   input += synapse0x1049fb1f0();
   input += synapse0x1049fb220();
   input += synapse0x1049fb250();
   input += synapse0x1049fb280();
   input += synapse0x1049fb2b0();
   input += synapse0x1049fb2e0();
   input += synapse0x1049fb310();
   input += synapse0x1049fb340();
   input += synapse0x1049fb370();
   input += synapse0x1049fb3a0();
   return input;
}

double mlp::neuron0x1049fadf0() {
   double input = input0x1049fadf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049fb3d0() {
   double input = 0.60852;
   input += synapse0x1049fb6e0();
   input += synapse0x1049fb710();
   input += synapse0x1049fb740();
   input += synapse0x1049fb770();
   input += synapse0x1049fb7a0();
   input += synapse0x1049fb7d0();
   input += synapse0x1049fb800();
   input += synapse0x1049fb830();
   input += synapse0x1049fb860();
   input += synapse0x1049fb890();
   input += synapse0x1049fb8c0();
   input += synapse0x1049fb8f0();
   input += synapse0x1049fb920();
   input += synapse0x1049fb950();
   input += synapse0x1049fb980();
   return input;
}

double mlp::neuron0x1049fb3d0() {
   double input = input0x1049fb3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049fb9b0() {
   double input = -0.134614;
   input += synapse0x1049fbb90();
   input += synapse0x1049fbbc0();
   input += synapse0x1049fbbf0();
   input += synapse0x1049fbc20();
   input += synapse0x1049fbc50();
   input += synapse0x1049fbc80();
   input += synapse0x1049fbcb0();
   input += synapse0x1049fbce0();
   input += synapse0x1049fbd10();
   input += synapse0x1049fbd40();
   input += synapse0x1049fbd70();
   input += synapse0x1049fbda0();
   input += synapse0x1049fbdd0();
   input += synapse0x1049fbe00();
   input += synapse0x1049fbe30();
   return input;
}

double mlp::neuron0x1049fb9b0() {
   double input = input0x1049fb9b0();
   return (input * 1)+0;
}

double mlp::input0x1049fbe60() {
   double input = 0.458625;
   input += synapse0x1049fc040();
   input += synapse0x104a00100();
   input += synapse0x104a00130();
   input += synapse0x104a00160();
   input += synapse0x104a00190();
   input += synapse0x104a001c0();
   input += synapse0x104a001f0();
   input += synapse0x104a00220();
   input += synapse0x104a00250();
   input += synapse0x104a00280();
   input += synapse0x104a002b0();
   input += synapse0x104a002e0();
   input += synapse0x104a00310();
   input += synapse0x104a00340();
   input += synapse0x104a00370();
   return input;
}

double mlp::neuron0x1049fbe60() {
   double input = input0x1049fbe60();
   return (input * 1)+0;
}

double mlp::input0x104a003a0() {
   double input = -0.394875;
   input += synapse0x104a00680();
   input += synapse0x104a006b0();
   input += synapse0x104a006e0();
   input += synapse0x104a00710();
   input += synapse0x104a00740();
   input += synapse0x104a00770();
   input += synapse0x104a007a0();
   input += synapse0x104a007d0();
   input += synapse0x104a00800();
   input += synapse0x104a00830();
   input += synapse0x104a00860();
   input += synapse0x104a00890();
   input += synapse0x104a008c0();
   input += synapse0x104a008f0();
   input += synapse0x104a00920();
   return input;
}

double mlp::neuron0x104a003a0() {
   double input = input0x104a003a0();
   return (input * 1)+0;
}

double mlp::input0x104a00950() {
   double input = 0.294178;
   input += synapse0x104a00c30();
   input += synapse0x104a00c60();
   input += synapse0x104a00c90();
   input += synapse0x104a00cc0();
   input += synapse0x104a00cf0();
   input += synapse0x104a00d20();
   input += synapse0x104a00d50();
   input += synapse0x104a00d80();
   input += synapse0x104a00db0();
   input += synapse0x104a00de0();
   input += synapse0x104a00e10();
   input += synapse0x104a00e40();
   input += synapse0x104a00e70();
   input += synapse0x104a00ea0();
   input += synapse0x104a00ed0();
   return input;
}

double mlp::neuron0x104a00950() {
   double input = input0x104a00950();
   return (input * 1)+0;
}

double mlp::input0x104a00f00() {
   double input = -0.516659;
   input += synapse0x1049e5d30();
   input += synapse0x104a011e0();
   input += synapse0x104a01210();
   input += synapse0x104a01240();
   input += synapse0x104a01270();
   input += synapse0x104a012a0();
   input += synapse0x104a012d0();
   input += synapse0x104a01300();
   input += synapse0x104a01330();
   input += synapse0x104a01360();
   input += synapse0x104a01390();
   input += synapse0x104a013c0();
   input += synapse0x104a013f0();
   input += synapse0x104a01420();
   input += synapse0x104a01450();
   return input;
}

double mlp::neuron0x104a00f00() {
   double input = input0x104a00f00();
   return (input * 1)+0;
}

double mlp::input0x104a01480() {
   double input = 0.620139;
   input += synapse0x104a01760();
   input += synapse0x104a01790();
   input += synapse0x104a017c0();
   input += synapse0x104a017f0();
   input += synapse0x104a01820();
   input += synapse0x104a01850();
   input += synapse0x104a01880();
   input += synapse0x104a018b0();
   input += synapse0x104a018e0();
   input += synapse0x104a01910();
   input += synapse0x104a01940();
   input += synapse0x104a01970();
   input += synapse0x104a019a0();
   input += synapse0x104a019d0();
   input += synapse0x104a01a00();
   return input;
}

double mlp::neuron0x104a01480() {
   double input = input0x104a01480();
   return (input * 1)+0;
}

double mlp::input0x104a01a30() {
   double input = 0.279889;
   input += synapse0x104a01d10();
   input += synapse0x104a01d40();
   input += synapse0x104a01d70();
   input += synapse0x104a01da0();
   input += synapse0x104a01dd0();
   input += synapse0x104a01e00();
   input += synapse0x104a01e30();
   input += synapse0x104a01e60();
   input += synapse0x104a01e90();
   input += synapse0x104a01ec0();
   input += synapse0x104a01ef0();
   input += synapse0x104a01f20();
   input += synapse0x104a01f50();
   input += synapse0x104a01f80();
   input += synapse0x104a01fb0();
   return input;
}

double mlp::neuron0x104a01a30() {
   double input = input0x104a01a30();
   return (input * 1)+0;
}

double mlp::input0x104a01fe0() {
   double input = -0.129241;
   input += synapse0x104a022c0();
   input += synapse0x104a022f0();
   input += synapse0x104a02320();
   input += synapse0x104a02350();
   input += synapse0x104a02380();
   input += synapse0x104a023b0();
   input += synapse0x104a023e0();
   input += synapse0x104a02410();
   input += synapse0x104a02440();
   input += synapse0x104a02470();
   input += synapse0x104a024a0();
   input += synapse0x104a024d0();
   input += synapse0x104a02500();
   input += synapse0x104a02530();
   input += synapse0x104a02560();
   return input;
}

double mlp::neuron0x104a01fe0() {
   double input = input0x104a01fe0();
   return (input * 1)+0;
}

double mlp::input0x104a02590() {
   double input = 0.108133;
   input += synapse0x104a02870();
   input += synapse0x104a028a0();
   input += synapse0x104a028d0();
   input += synapse0x104a02900();
   input += synapse0x104a02930();
   input += synapse0x104a02960();
   input += synapse0x104a02990();
   input += synapse0x104a029c0();
   input += synapse0x104a029f0();
   input += synapse0x104a02a20();
   input += synapse0x104a02a50();
   input += synapse0x104a02a80();
   input += synapse0x104a02ab0();
   input += synapse0x104a02ae0();
   input += synapse0x104a02b10();
   return input;
}

double mlp::neuron0x104a02590() {
   double input = input0x104a02590();
   return (input * 1)+0;
}

double mlp::synapse0x1049e5e70() {
   return (neuron0x1049ee140()*-0.0149852);
}

double mlp::synapse0x1049e5ea0() {
   return (neuron0x1049ee2a0()*0.14888);
}

double mlp::synapse0x1049e5f80() {
   return (neuron0x1049ee500()*0.0994735);
}

double mlp::synapse0x1049e5fb0() {
   return (neuron0x1049ee7e0()*-0.0743935);
}

double mlp::synapse0x1049e5fe0() {
   return (neuron0x1049eeac0()*-0.225938);
}

double mlp::synapse0x1049e5770() {
   return (neuron0x1049eeda0()*-0.237169);
}

double mlp::synapse0x1049e57a0() {
   return (neuron0x1049ef0b0()*1.06478);
}

double mlp::synapse0x1049e57d0() {
   return (neuron0x1049ef3c0()*-0.695812);
}

double mlp::synapse0x1049e5800() {
   return (neuron0x1049ef6d0()*0.160885);
}

double mlp::synapse0x1049e5830() {
   return (neuron0x1049ef9e0()*0.264407);
}

double mlp::synapse0x1049e5860() {
   return (neuron0x1049efcf0()*-1.37493);
}

double mlp::synapse0x1049f0d30() {
   return (neuron0x1049effd0()*-0.307436);
}

double mlp::synapse0x1049f0d60() {
   return (neuron0x1049f02e0()*-0.171255);
}

double mlp::synapse0x1049f0d90() {
   return (neuron0x1049f05c0()*-0.163013);
}

double mlp::synapse0x1049f0dc0() {
   return (neuron0x1049f08c0()*-0.0760475);
}

double mlp::synapse0x1049f1200() {
   return (neuron0x1049ee140()*0.39168);
}

double mlp::synapse0x1049f1230() {
   return (neuron0x1049ee2a0()*0.168129);
}

double mlp::synapse0x1049da970() {
   return (neuron0x1049ee500()*-0.082302);
}

double mlp::synapse0x1049da9a0() {
   return (neuron0x1049ee7e0()*0.686128);
}

double mlp::synapse0x1049f1360() {
   return (neuron0x1049eeac0()*0.138293);
}

double mlp::synapse0x1049f1390() {
   return (neuron0x1049eeda0()*0.205257);
}

double mlp::synapse0x1049f13c0() {
   return (neuron0x1049ef0b0()*0.678795);
}

double mlp::synapse0x1049f13f0() {
   return (neuron0x1049ef3c0()*0.647426);
}

double mlp::synapse0x1049f1420() {
   return (neuron0x1049ef6d0()*0.19918);
}

double mlp::synapse0x1049f1450() {
   return (neuron0x1049ef9e0()*0.097724);
}

double mlp::synapse0x1049f1480() {
   return (neuron0x1049efcf0()*-1.30197);
}

double mlp::synapse0x1049f14b0() {
   return (neuron0x1049effd0()*0.028852);
}

double mlp::synapse0x1049f14e0() {
   return (neuron0x1049f02e0()*-1.72292);
}

double mlp::synapse0x1049f1510() {
   return (neuron0x1049f05c0()*0.00790858);
}

double mlp::synapse0x1049f1540() {
   return (neuron0x1049f08c0()*-0.811662);
}

double mlp::synapse0x1049f1800() {
   return (neuron0x1049ee140()*0.0981759);
}

double mlp::synapse0x1049f1830() {
   return (neuron0x1049ee2a0()*0.190218);
}

double mlp::synapse0x1049f1860() {
   return (neuron0x1049ee500()*-0.0498166);
}

double mlp::synapse0x1049f1260() {
   return (neuron0x1049ee7e0()*0.279548);
}

double mlp::synapse0x1049f1290() {
   return (neuron0x1049eeac0()*0.106307);
}

double mlp::synapse0x1049f12c0() {
   return (neuron0x1049eeda0()*0.0725871);
}

double mlp::synapse0x1049f12f0() {
   return (neuron0x1049ef0b0()*0.475203);
}

double mlp::synapse0x1049f1320() {
   return (neuron0x1049ef3c0()*-0.420936);
}

double mlp::synapse0x1049f1a90() {
   return (neuron0x1049ef6d0()*0.763431);
}

double mlp::synapse0x1049f1ac0() {
   return (neuron0x1049ef9e0()*-0.199565);
}

double mlp::synapse0x1049f1af0() {
   return (neuron0x1049efcf0()*1.07216);
}

double mlp::synapse0x1049f1b20() {
   return (neuron0x1049effd0()*0.237191);
}

double mlp::synapse0x1049f1b50() {
   return (neuron0x1049f02e0()*1.21241);
}

double mlp::synapse0x1049f1b80() {
   return (neuron0x1049f05c0()*-0.153931);
}

double mlp::synapse0x1049f1bb0() {
   return (neuron0x1049f08c0()*-0.850146);
}

double mlp::synapse0x1049f1ef0() {
   return (neuron0x1049ee140()*-0.386412);
}

double mlp::synapse0x1049f1f20() {
   return (neuron0x1049ee2a0()*0.116768);
}

double mlp::synapse0x1049f1f50() {
   return (neuron0x1049ee500()*-0.0270841);
}

double mlp::synapse0x1049f1f80() {
   return (neuron0x1049ee7e0()*0.196005);
}

double mlp::synapse0x1049f1fb0() {
   return (neuron0x1049eeac0()*-0.0339153);
}

double mlp::synapse0x1049f1fe0() {
   return (neuron0x1049eeda0()*0.362129);
}

double mlp::synapse0x1049f2010() {
   return (neuron0x1049ef0b0()*0.688724);
}

double mlp::synapse0x1049f2040() {
   return (neuron0x1049ef3c0()*-1.85496);
}

double mlp::synapse0x1049f2070() {
   return (neuron0x1049ef6d0()*0.0172108);
}

double mlp::synapse0x1049f20a0() {
   return (neuron0x1049ef9e0()*-0.514159);
}

double mlp::synapse0x1049f20d0() {
   return (neuron0x1049efcf0()*-1.04995);
}

double mlp::synapse0x1049f2100() {
   return (neuron0x1049effd0()*0.392644);
}

double mlp::synapse0x1049f2130() {
   return (neuron0x1049f02e0()*0.08547);
}

double mlp::synapse0x1049f2160() {
   return (neuron0x1049f05c0()*-0.00154104);
}

double mlp::synapse0x1049f2190() {
   return (neuron0x1049f08c0()*-0.918855);
}

double mlp::synapse0x1049f24d0() {
   return (neuron0x1049ee140()*-1.12556);
}

double mlp::synapse0x1049f2500() {
   return (neuron0x1049ee2a0()*-0.174452);
}

double mlp::synapse0x1049f2530() {
   return (neuron0x1049ee500()*-0.381941);
}

double mlp::synapse0x1049f2560() {
   return (neuron0x1049ee7e0()*-0.574128);
}

double mlp::synapse0x1049f2590() {
   return (neuron0x1049eeac0()*-0.0366429);
}

double mlp::synapse0x1049f1890() {
   return (neuron0x1049eeda0()*0.219084);
}

double mlp::synapse0x1049f18c0() {
   return (neuron0x1049ef0b0()*-0.144357);
}

double mlp::synapse0x1049f18f0() {
   return (neuron0x1049ef3c0()*-1.63233);
}

double mlp::synapse0x1049f1920() {
   return (neuron0x1049ef6d0()*0.647298);
}

double mlp::synapse0x1049f1950() {
   return (neuron0x1049ef9e0()*-0.137347);
}

double mlp::synapse0x1049f1980() {
   return (neuron0x1049efcf0()*-0.0777368);
}

double mlp::synapse0x1049f19b0() {
   return (neuron0x1049effd0()*-0.152309);
}

double mlp::synapse0x1049f19e0() {
   return (neuron0x1049f02e0()*1.00813);
}

double mlp::synapse0x1049f1a10() {
   return (neuron0x1049f05c0()*-0.0119502);
}

double mlp::synapse0x1049f1a40() {
   return (neuron0x1049f08c0()*-0.184187);
}

double mlp::synapse0x1049f28d0() {
   return (neuron0x1049ee140()*-0.154693);
}

double mlp::synapse0x1049f2900() {
   return (neuron0x1049ee2a0()*-0.00105754);
}

double mlp::synapse0x1049f2930() {
   return (neuron0x1049ee500()*-0.410988);
}

double mlp::synapse0x1049f2960() {
   return (neuron0x1049ee7e0()*0.410889);
}

double mlp::synapse0x1049f2990() {
   return (neuron0x1049eeac0()*-0.0956276);
}

double mlp::synapse0x1049f29c0() {
   return (neuron0x1049eeda0()*-0.50065);
}

double mlp::synapse0x1049f29f0() {
   return (neuron0x1049ef0b0()*1.07776);
}

double mlp::synapse0x1049f2a20() {
   return (neuron0x1049ef3c0()*-1.7824);
}

double mlp::synapse0x1049f2a50() {
   return (neuron0x1049ef6d0()*-0.0541509);
}

double mlp::synapse0x1049f2a80() {
   return (neuron0x1049ef9e0()*0.16724);
}

double mlp::synapse0x1049f2ab0() {
   return (neuron0x1049efcf0()*-0.551431);
}

double mlp::synapse0x1049f2ae0() {
   return (neuron0x1049effd0()*-0.180801);
}

double mlp::synapse0x1049f2b10() {
   return (neuron0x1049f02e0()*0.736977);
}

double mlp::synapse0x1049f2b40() {
   return (neuron0x1049f05c0()*-0.0824101);
}

double mlp::synapse0x1049f2b70() {
   return (neuron0x1049f08c0()*-0.354497);
}

double mlp::synapse0x1049f2eb0() {
   return (neuron0x1049ee140()*0.0668617);
}

double mlp::synapse0x1049f2ee0() {
   return (neuron0x1049ee2a0()*-0.0795391);
}

double mlp::synapse0x1049f2f10() {
   return (neuron0x1049ee500()*-0.351062);
}

double mlp::synapse0x1049f2f40() {
   return (neuron0x1049ee7e0()*-0.297779);
}

double mlp::synapse0x1049f2f70() {
   return (neuron0x1049eeac0()*0.0513013);
}

double mlp::synapse0x1049f2fa0() {
   return (neuron0x1049eeda0()*-0.31014);
}

double mlp::synapse0x1049f2fd0() {
   return (neuron0x1049ef0b0()*-0.136617);
}

double mlp::synapse0x1049f3000() {
   return (neuron0x1049ef3c0()*0.825471);
}

double mlp::synapse0x1049f3030() {
   return (neuron0x1049ef6d0()*-0.307036);
}

double mlp::synapse0x1049f3060() {
   return (neuron0x1049ef9e0()*-0.0622176);
}

double mlp::synapse0x1049f3090() {
   return (neuron0x1049efcf0()*-0.665701);
}

double mlp::synapse0x1049f30c0() {
   return (neuron0x1049effd0()*-0.267168);
}

double mlp::synapse0x1049f30f0() {
   return (neuron0x1049f02e0()*-0.315003);
}

double mlp::synapse0x1049f3120() {
   return (neuron0x1049f05c0()*-0.301209);
}

double mlp::synapse0x1049f3150() {
   return (neuron0x1049f08c0()*-1.7471);
}

double mlp::synapse0x1049f3490() {
   return (neuron0x1049ee140()*0.114672);
}

double mlp::synapse0x1049f34c0() {
   return (neuron0x1049ee2a0()*-0.160734);
}

double mlp::synapse0x1049f34f0() {
   return (neuron0x1049ee500()*0.420388);
}

double mlp::synapse0x1049f3520() {
   return (neuron0x1049ee7e0()*0.280832);
}

double mlp::synapse0x1049f3550() {
   return (neuron0x1049eeac0()*-0.123468);
}

double mlp::synapse0x1049f3580() {
   return (neuron0x1049eeda0()*-0.0246144);
}

double mlp::synapse0x1049f35b0() {
   return (neuron0x1049ef0b0()*-1.67591);
}

double mlp::synapse0x1049f35e0() {
   return (neuron0x1049ef3c0()*0.919436);
}

double mlp::synapse0x1049f3610() {
   return (neuron0x1049ef6d0()*-0.38542);
}

double mlp::synapse0x1049f3640() {
   return (neuron0x1049ef9e0()*0.348398);
}

double mlp::synapse0x1049f3670() {
   return (neuron0x1049efcf0()*1.63287);
}

double mlp::synapse0x1049f36a0() {
   return (neuron0x1049effd0()*-0.155213);
}

double mlp::synapse0x1049f36d0() {
   return (neuron0x1049f02e0()*0.37526);
}

double mlp::synapse0x1049f3700() {
   return (neuron0x1049f05c0()*-0.25372);
}

double mlp::synapse0x1049f3730() {
   return (neuron0x1049f08c0()*-0.0466645);
}

double mlp::synapse0x1049f3a70() {
   return (neuron0x1049ee140()*0.138721);
}

double mlp::synapse0x1049f3aa0() {
   return (neuron0x1049ee2a0()*-0.0556172);
}

double mlp::synapse0x1049f3ad0() {
   return (neuron0x1049ee500()*-0.0542905);
}

double mlp::synapse0x1049f3b00() {
   return (neuron0x1049ee7e0()*-0.0855275);
}

double mlp::synapse0x1049f3b30() {
   return (neuron0x1049eeac0()*-0.0513442);
}

double mlp::synapse0x1049f3b60() {
   return (neuron0x1049eeda0()*0.0922102);
}

double mlp::synapse0x1049f3b90() {
   return (neuron0x1049ef0b0()*0.236712);
}

double mlp::synapse0x1049f3bc0() {
   return (neuron0x1049ef3c0()*-0.418758);
}

double mlp::synapse0x1049f3bf0() {
   return (neuron0x1049ef6d0()*-0.166606);
}

double mlp::synapse0x1049f3c20() {
   return (neuron0x1049ef9e0()*-0.147498);
}

double mlp::synapse0x1049f3c50() {
   return (neuron0x1049efcf0()*-0.819515);
}

double mlp::synapse0x1049f3c80() {
   return (neuron0x1049effd0()*-0.12253);
}

double mlp::synapse0x1049f3cb0() {
   return (neuron0x1049f02e0()*-0.601134);
}

double mlp::synapse0x1049f3ce0() {
   return (neuron0x1049f05c0()*-0.115596);
}

double mlp::synapse0x1049f3d10() {
   return (neuron0x1049f08c0()*-1.86158);
}

double mlp::synapse0x1049f4050() {
   return (neuron0x1049ee140()*0.160915);
}

double mlp::synapse0x1049f4080() {
   return (neuron0x1049ee2a0()*0.339425);
}

double mlp::synapse0x1049f40b0() {
   return (neuron0x1049ee500()*-0.161506);
}

double mlp::synapse0x1049f40e0() {
   return (neuron0x1049ee7e0()*-0.490124);
}

double mlp::synapse0x1049f4110() {
   return (neuron0x1049eeac0()*-0.0364516);
}

double mlp::synapse0x1049f4140() {
   return (neuron0x1049eeda0()*-0.522167);
}

double mlp::synapse0x1049f4170() {
   return (neuron0x1049ef0b0()*-0.0120877);
}

double mlp::synapse0x1049f41a0() {
   return (neuron0x1049ef3c0()*0.49773);
}

double mlp::synapse0x1049f41d0() {
   return (neuron0x1049ef6d0()*-1.14129);
}

double mlp::synapse0x1049f4200() {
   return (neuron0x1049ef9e0()*-0.229605);
}

double mlp::synapse0x1049f4230() {
   return (neuron0x1049efcf0()*-0.96968);
}

double mlp::synapse0x1049f4260() {
   return (neuron0x1049effd0()*0.447594);
}

double mlp::synapse0x1049f4290() {
   return (neuron0x1049f02e0()*-0.466883);
}

double mlp::synapse0x1049f42c0() {
   return (neuron0x1049f05c0()*-0.167608);
}

double mlp::synapse0x1049f42f0() {
   return (neuron0x1049f08c0()*0.529428);
}

double mlp::synapse0x1049f4630() {
   return (neuron0x1049ee140()*0.174736);
}

double mlp::synapse0x1049f4660() {
   return (neuron0x1049ee2a0()*-0.166655);
}

double mlp::synapse0x1049f4690() {
   return (neuron0x1049ee500()*0.0587757);
}

double mlp::synapse0x1049f46c0() {
   return (neuron0x1049ee7e0()*0.0870704);
}

double mlp::synapse0x1049f46f0() {
   return (neuron0x1049eeac0()*-0.0228563);
}

double mlp::synapse0x1049f4720() {
   return (neuron0x1049eeda0()*0.517179);
}

double mlp::synapse0x1049f4750() {
   return (neuron0x1049ef0b0()*-1.2747);
}

double mlp::synapse0x1049f4780() {
   return (neuron0x1049ef3c0()*0.572836);
}

double mlp::synapse0x1049f47b0() {
   return (neuron0x1049ef6d0()*-0.329208);
}

double mlp::synapse0x1049f47e0() {
   return (neuron0x1049ef9e0()*0.459728);
}

double mlp::synapse0x1049f4810() {
   return (neuron0x1049efcf0()*2.79956);
}

double mlp::synapse0x1049f4840() {
   return (neuron0x1049effd0()*-0.173327);
}

double mlp::synapse0x1049f4870() {
   return (neuron0x1049f02e0()*1.9456);
}

double mlp::synapse0x1049f48a0() {
   return (neuron0x1049f05c0()*0.179826);
}

double mlp::synapse0x1049f48d0() {
   return (neuron0x1049f08c0()*0.8996);
}

double mlp::synapse0x1049f4c10() {
   return (neuron0x1049ee140()*-0.240171);
}

double mlp::synapse0x1049f4c40() {
   return (neuron0x1049ee2a0()*0.0157879);
}

double mlp::synapse0x1049f4c70() {
   return (neuron0x1049ee500()*-0.126913);
}

double mlp::synapse0x1049f4ca0() {
   return (neuron0x1049ee7e0()*-0.167176);
}

double mlp::synapse0x1049f4cd0() {
   return (neuron0x1049eeac0()*-0.0487582);
}

double mlp::synapse0x1049f4d00() {
   return (neuron0x1049eeda0()*-0.669608);
}

double mlp::synapse0x1049f4d30() {
   return (neuron0x1049ef0b0()*0.869685);
}

double mlp::synapse0x1049f4d60() {
   return (neuron0x1049ef3c0()*-0.229314);
}

double mlp::synapse0x1049f4d90() {
   return (neuron0x1049ef6d0()*-0.355686);
}

double mlp::synapse0x1049f4dc0() {
   return (neuron0x1049ef9e0()*-0.388422);
}

double mlp::synapse0x1049f4df0() {
   return (neuron0x1049efcf0()*0.647757);
}

double mlp::synapse0x1049f4e20() {
   return (neuron0x1049effd0()*0.0387696);
}

double mlp::synapse0x1049f4e50() {
   return (neuron0x1049f02e0()*0.498045);
}

double mlp::synapse0x1049f4e80() {
   return (neuron0x1049f05c0()*-0.0511542);
}

double mlp::synapse0x1049f4eb0() {
   return (neuron0x1049f08c0()*0.116107);
}

double mlp::synapse0x1049f51f0() {
   return (neuron0x1049ee140()*0.0742154);
}

double mlp::synapse0x1049f5220() {
   return (neuron0x1049ee2a0()*0.154008);
}

double mlp::synapse0x1049f5250() {
   return (neuron0x1049ee500()*-0.50591);
}

double mlp::synapse0x1049f5280() {
   return (neuron0x1049ee7e0()*-1.52952);
}

double mlp::synapse0x1049f52b0() {
   return (neuron0x1049eeac0()*-0.0443427);
}

double mlp::synapse0x1049f52e0() {
   return (neuron0x1049eeda0()*-0.284402);
}

double mlp::synapse0x1049f5310() {
   return (neuron0x1049ef0b0()*-0.644402);
}

double mlp::synapse0x1049f5340() {
   return (neuron0x1049ef3c0()*0.852865);
}

double mlp::synapse0x1049f5370() {
   return (neuron0x1049ef6d0()*0.378309);
}

double mlp::synapse0x1049f53a0() {
   return (neuron0x1049ef9e0()*-0.102694);
}

double mlp::synapse0x1049f53d0() {
   return (neuron0x1049efcf0()*0.948781);
}

double mlp::synapse0x1049f5400() {
   return (neuron0x1049effd0()*0.137693);
}

double mlp::synapse0x1049f5430() {
   return (neuron0x1049f02e0()*-0.373916);
}

double mlp::synapse0x1049f5460() {
   return (neuron0x1049f05c0()*-0.183841);
}

double mlp::synapse0x1049f5490() {
   return (neuron0x1049f08c0()*-2.31974);
}

double mlp::synapse0x1049f57d0() {
   return (neuron0x1049ee140()*-0.0259153);
}

double mlp::synapse0x1049f5800() {
   return (neuron0x1049ee2a0()*-0.198887);
}

double mlp::synapse0x1049f5830() {
   return (neuron0x1049ee500()*0.240063);
}

double mlp::synapse0x1049f5860() {
   return (neuron0x1049ee7e0()*-0.0714705);
}

double mlp::synapse0x1049f5890() {
   return (neuron0x1049eeac0()*0.0720617);
}

double mlp::synapse0x1049f58c0() {
   return (neuron0x1049eeda0()*0.152986);
}

double mlp::synapse0x1049f58f0() {
   return (neuron0x1049ef0b0()*0.208922);
}

double mlp::synapse0x1049f5920() {
   return (neuron0x1049ef3c0()*0.805564);
}

double mlp::synapse0x1049f5950() {
   return (neuron0x1049ef6d0()*-0.259471);
}

double mlp::synapse0x1049f5980() {
   return (neuron0x1049ef9e0()*0.364916);
}

double mlp::synapse0x1049f59b0() {
   return (neuron0x1049efcf0()*0.714569);
}

double mlp::synapse0x1049f59e0() {
   return (neuron0x1049effd0()*0.00534217);
}

double mlp::synapse0x1049f5a10() {
   return (neuron0x1049f02e0()*-0.451107);
}

double mlp::synapse0x1049f5a40() {
   return (neuron0x1049f05c0()*0.378471);
}

double mlp::synapse0x1049f5a70() {
   return (neuron0x1049f08c0()*0.83616);
}

double mlp::synapse0x1049f5db0() {
   return (neuron0x1049ee140()*0.768651);
}

double mlp::synapse0x1049f5de0() {
   return (neuron0x1049ee2a0()*-0.0476809);
}

double mlp::synapse0x1049f5e10() {
   return (neuron0x1049ee500()*-0.340595);
}

double mlp::synapse0x1049f5e40() {
   return (neuron0x1049ee7e0()*-0.658017);
}

double mlp::synapse0x1049f5e70() {
   return (neuron0x1049eeac0()*0.0995354);
}

double mlp::synapse0x1049f5ea0() {
   return (neuron0x1049eeda0()*-0.420097);
}

double mlp::synapse0x1049f5ed0() {
   return (neuron0x1049ef0b0()*-0.0208367);
}

double mlp::synapse0x1049f5f00() {
   return (neuron0x1049ef3c0()*0.273992);
}

double mlp::synapse0x1049f5f30() {
   return (neuron0x1049ef6d0()*-0.505486);
}

double mlp::synapse0x1049f5f60() {
   return (neuron0x1049ef9e0()*0.164215);
}

double mlp::synapse0x1049f5f90() {
   return (neuron0x1049efcf0()*0.131454);
}

double mlp::synapse0x1049f5fc0() {
   return (neuron0x1049effd0()*-0.0184878);
}

double mlp::synapse0x1049f5ff0() {
   return (neuron0x1049f02e0()*0.244332);
}

double mlp::synapse0x1049f6020() {
   return (neuron0x1049f05c0()*0.0788684);
}

double mlp::synapse0x1049f6050() {
   return (neuron0x1049f08c0()*0.878533);
}

double mlp::synapse0x1049f6390() {
   return (neuron0x1049f0bd0()*0.120113);
}

double mlp::synapse0x1049f63c0() {
   return (neuron0x1049f0df0()*-1.31338);
}

double mlp::synapse0x1049f63f0() {
   return (neuron0x1049f1570()*-0.0246119);
}

double mlp::synapse0x1049f6420() {
   return (neuron0x1049f1be0()*0.66341);
}

double mlp::synapse0x1049f6450() {
   return (neuron0x1049f21c0()*-0.219442);
}

double mlp::synapse0x1049f6480() {
   return (neuron0x1049f25c0()*0.0409384);
}

double mlp::synapse0x1049f64b0() {
   return (neuron0x1049f2ba0()*0.0347748);
}

double mlp::synapse0x1049f64e0() {
   return (neuron0x1049f3180()*-0.272826);
}

double mlp::synapse0x1049f6510() {
   return (neuron0x1049f3760()*-0.778054);
}

double mlp::synapse0x1049f6540() {
   return (neuron0x1049f3d40()*0.031208);
}

double mlp::synapse0x1049f6570() {
   return (neuron0x1049f4320()*1.03293);
}

double mlp::synapse0x1049f65a0() {
   return (neuron0x1049f4900()*-0.548722);
}

double mlp::synapse0x1049f65d0() {
   return (neuron0x1049f4ee0()*0.481341);
}

double mlp::synapse0x1049f6600() {
   return (neuron0x1049f54c0()*-0.489371);
}

double mlp::synapse0x1049f6630() {
   return (neuron0x1049f5aa0()*-0.729879);
}

double mlp::synapse0x1049f6970() {
   return (neuron0x1049f0bd0()*0.326198);
}

double mlp::synapse0x1049f69a0() {
   return (neuron0x1049f0df0()*0.468478);
}

double mlp::synapse0x1049f69d0() {
   return (neuron0x1049f1570()*0.355328);
}

double mlp::synapse0x1049f6a00() {
   return (neuron0x1049f1be0()*0.22413);
}

double mlp::synapse0x1049f6a30() {
   return (neuron0x1049f21c0()*0.0416858);
}

double mlp::synapse0x1049f6a60() {
   return (neuron0x1049f25c0()*0.523456);
}

double mlp::synapse0x1049f6a90() {
   return (neuron0x1049f2ba0()*-0.210743);
}

double mlp::synapse0x1049f6ac0() {
   return (neuron0x1049f3180()*0.316084);
}

double mlp::synapse0x1049f6af0() {
   return (neuron0x1049f3760()*0.407462);
}

double mlp::synapse0x1049f6b20() {
   return (neuron0x1049f3d40()*0.758465);
}

double mlp::synapse0x1049f6b50() {
   return (neuron0x1049f4320()*0.355964);
}

double mlp::synapse0x1049f6b80() {
   return (neuron0x1049f4900()*0.0620518);
}

double mlp::synapse0x1049f6bb0() {
   return (neuron0x1049f4ee0()*0.243701);
}

double mlp::synapse0x1049f6be0() {
   return (neuron0x1049f54c0()*-0.10535);
}

double mlp::synapse0x1049f6c10() {
   return (neuron0x1049f5aa0()*0.549435);
}

double mlp::synapse0x1049f1100() {
   return (neuron0x1049f0bd0()*0.583299);
}

double mlp::synapse0x1049f1130() {
   return (neuron0x1049f0df0()*0.0597559);
}

double mlp::synapse0x1049f1160() {
   return (neuron0x1049f1570()*0.726886);
}

double mlp::synapse0x1049f1190() {
   return (neuron0x1049f1be0()*0.046553);
}

double mlp::synapse0x1049f11c0() {
   return (neuron0x1049f21c0()*-0.527014);
}

double mlp::synapse0x1049f7150() {
   return (neuron0x1049f25c0()*0.146068);
}

double mlp::synapse0x1049f7180() {
   return (neuron0x1049f2ba0()*-0.196674);
}

double mlp::synapse0x1049f71b0() {
   return (neuron0x1049f3180()*-0.371445);
}

double mlp::synapse0x1049f71e0() {
   return (neuron0x1049f3760()*-0.413022);
}

double mlp::synapse0x1049f7210() {
   return (neuron0x1049f3d40()*0.0446445);
}

double mlp::synapse0x1049f7240() {
   return (neuron0x1049f4320()*0.0734586);
}

double mlp::synapse0x1049f7270() {
   return (neuron0x1049f4900()*-0.208773);
}

double mlp::synapse0x1049f72a0() {
   return (neuron0x1049f4ee0()*-0.348406);
}

double mlp::synapse0x1049f72d0() {
   return (neuron0x1049f54c0()*0.269261);
}

double mlp::synapse0x1049f7300() {
   return (neuron0x1049f5aa0()*0.205085);
}

double mlp::synapse0x1049f7640() {
   return (neuron0x1049f0bd0()*0.331945);
}

double mlp::synapse0x1049f7670() {
   return (neuron0x1049f0df0()*-0.0490612);
}

double mlp::synapse0x1049f76a0() {
   return (neuron0x1049f1570()*0.507774);
}

double mlp::synapse0x1049f76d0() {
   return (neuron0x1049f1be0()*0.366286);
}

double mlp::synapse0x1049f7700() {
   return (neuron0x1049f21c0()*0.0885192);
}

double mlp::synapse0x1049f7730() {
   return (neuron0x1049f25c0()*-0.00022182);
}

double mlp::synapse0x1049f7760() {
   return (neuron0x1049f2ba0()*0.457969);
}

double mlp::synapse0x1049f7790() {
   return (neuron0x1049f3180()*0.36973);
}

double mlp::synapse0x1049f77c0() {
   return (neuron0x1049f3760()*0.110855);
}

double mlp::synapse0x1049f77f0() {
   return (neuron0x1049f3d40()*0.061221);
}

double mlp::synapse0x1049f7820() {
   return (neuron0x1049f4320()*-0.140649);
}

double mlp::synapse0x1049f7850() {
   return (neuron0x1049f4900()*0.54554);
}

double mlp::synapse0x1049f7880() {
   return (neuron0x1049f4ee0()*-0.116255);
}

double mlp::synapse0x1049f78b0() {
   return (neuron0x1049f54c0()*0.543185);
}

double mlp::synapse0x1049f78e0() {
   return (neuron0x1049f5aa0()*-0.268817);
}

double mlp::synapse0x1049f7c20() {
   return (neuron0x1049f0bd0()*0.30852);
}

double mlp::synapse0x1049f7c50() {
   return (neuron0x1049f0df0()*0.726387);
}

double mlp::synapse0x1049f7c80() {
   return (neuron0x1049f1570()*-0.312112);
}

double mlp::synapse0x1049f7cb0() {
   return (neuron0x1049f1be0()*-0.70793);
}

double mlp::synapse0x1049f7ce0() {
   return (neuron0x1049f21c0()*-0.254326);
}

double mlp::synapse0x1049f7d10() {
   return (neuron0x1049f25c0()*0.136146);
}

double mlp::synapse0x1049f7d40() {
   return (neuron0x1049f2ba0()*-0.342588);
}

double mlp::synapse0x1049f7d70() {
   return (neuron0x1049f3180()*0.438346);
}

double mlp::synapse0x1049f7da0() {
   return (neuron0x1049f3760()*-0.060805);
}

double mlp::synapse0x1049f7dd0() {
   return (neuron0x1049f3d40()*1.0836);
}

double mlp::synapse0x1049f7e00() {
   return (neuron0x1049f4320()*0.00573306);
}

double mlp::synapse0x1049f7e30() {
   return (neuron0x1049f4900()*0.280776);
}

double mlp::synapse0x1049f7e60() {
   return (neuron0x1049f4ee0()*-0.0377738);
}

double mlp::synapse0x1049f7e90() {
   return (neuron0x1049f54c0()*0.672151);
}

double mlp::synapse0x1049f7ec0() {
   return (neuron0x1049f5aa0()*0.664472);
}

double mlp::synapse0x1049f8200() {
   return (neuron0x1049f0bd0()*0.232774);
}

double mlp::synapse0x1049f8230() {
   return (neuron0x1049f0df0()*-0.0855048);
}

double mlp::synapse0x1049f8260() {
   return (neuron0x1049f1570()*0.160957);
}

double mlp::synapse0x1049f8290() {
   return (neuron0x1049f1be0()*0.158016);
}

double mlp::synapse0x1049f82c0() {
   return (neuron0x1049f21c0()*0.340568);
}

double mlp::synapse0x1049f82f0() {
   return (neuron0x1049f25c0()*0.131342);
}

double mlp::synapse0x1049f8320() {
   return (neuron0x1049f2ba0()*-0.92087);
}

double mlp::synapse0x1049f8350() {
   return (neuron0x1049f3180()*-0.203116);
}

double mlp::synapse0x1049f8380() {
   return (neuron0x1049f3760()*-0.940031);
}

double mlp::synapse0x1049f83b0() {
   return (neuron0x1049f3d40()*-0.385781);
}

double mlp::synapse0x1049f83e0() {
   return (neuron0x1049f4320()*0.361478);
}

double mlp::synapse0x1049f8410() {
   return (neuron0x1049f4900()*0.406152);
}

double mlp::synapse0x1049f8440() {
   return (neuron0x1049f4ee0()*-0.361312);
}

double mlp::synapse0x1049f8470() {
   return (neuron0x1049f54c0()*-0.877153);
}

double mlp::synapse0x1049f84a0() {
   return (neuron0x1049f5aa0()*-0.967811);
}

double mlp::synapse0x1049f87e0() {
   return (neuron0x1049f0bd0()*-0.369584);
}

double mlp::synapse0x1049f8810() {
   return (neuron0x1049f0df0()*0.307466);
}

double mlp::synapse0x1049f8840() {
   return (neuron0x1049f1570()*0.00353764);
}

double mlp::synapse0x1049f8870() {
   return (neuron0x1049f1be0()*-0.584178);
}

double mlp::synapse0x1049f88a0() {
   return (neuron0x1049f21c0()*-0.405641);
}

double mlp::synapse0x1049f88d0() {
   return (neuron0x1049f25c0()*-0.113817);
}

double mlp::synapse0x1049f8900() {
   return (neuron0x1049f2ba0()*-0.0959376);
}

double mlp::synapse0x1049f8930() {
   return (neuron0x1049f3180()*0.228085);
}

double mlp::synapse0x1049f8960() {
   return (neuron0x1049f3760()*0.231833);
}

double mlp::synapse0x1049f8990() {
   return (neuron0x1049f3d40()*0.415689);
}

double mlp::synapse0x1049f89c0() {
   return (neuron0x1049f4320()*0.693395);
}

double mlp::synapse0x1049f89f0() {
   return (neuron0x1049f4900()*0.0265492);
}

double mlp::synapse0x1049f8a20() {
   return (neuron0x1049f4ee0()*0.962168);
}

double mlp::synapse0x1049f8a50() {
   return (neuron0x1049f54c0()*0.406868);
}

double mlp::synapse0x1049f8a80() {
   return (neuron0x1049f5aa0()*-0.492675);
}

double mlp::synapse0x1049f8dc0() {
   return (neuron0x1049f0bd0()*-0.216957);
}

double mlp::synapse0x1049f8df0() {
   return (neuron0x1049f0df0()*0.0439811);
}

double mlp::synapse0x1049f8e20() {
   return (neuron0x1049f1570()*0.573976);
}

double mlp::synapse0x1049f8e50() {
   return (neuron0x1049f1be0()*0.810164);
}

double mlp::synapse0x1049f8e80() {
   return (neuron0x1049f21c0()*0.0283825);
}

double mlp::synapse0x1049f8eb0() {
   return (neuron0x1049f25c0()*0.0120289);
}

double mlp::synapse0x1049f8ee0() {
   return (neuron0x1049f2ba0()*0.292937);
}

double mlp::synapse0x1049f8f10() {
   return (neuron0x1049f3180()*-0.191495);
}

double mlp::synapse0x1049f8f40() {
   return (neuron0x1049f3760()*-0.0247499);
}

double mlp::synapse0x1049f8f70() {
   return (neuron0x1049f3d40()*0.286908);
}

double mlp::synapse0x1049f8fa0() {
   return (neuron0x1049f4320()*-0.341147);
}

double mlp::synapse0x1049f8fd0() {
   return (neuron0x1049f4900()*0.471866);
}

double mlp::synapse0x1049f9000() {
   return (neuron0x1049f4ee0()*-0.172448);
}

double mlp::synapse0x1049f9030() {
   return (neuron0x1049f54c0()*0.131023);
}

double mlp::synapse0x1049f9060() {
   return (neuron0x1049f5aa0()*0.448992);
}

double mlp::synapse0x1049f93a0() {
   return (neuron0x1049f0bd0()*-0.142273);
}

double mlp::synapse0x1049f93d0() {
   return (neuron0x1049f0df0()*-0.305427);
}

double mlp::synapse0x1049f9400() {
   return (neuron0x1049f1570()*0.0914782);
}

double mlp::synapse0x1049f9430() {
   return (neuron0x1049f1be0()*-0.32529);
}

double mlp::synapse0x1049f9460() {
   return (neuron0x1049f21c0()*0.135886);
}

double mlp::synapse0x1049f9490() {
   return (neuron0x1049f25c0()*-0.425003);
}

double mlp::synapse0x1049f94c0() {
   return (neuron0x1049f2ba0()*-0.423313);
}

double mlp::synapse0x1049f94f0() {
   return (neuron0x1049f3180()*-0.450016);
}

double mlp::synapse0x1049f9520() {
   return (neuron0x1049f3760()*0.46402);
}

double mlp::synapse0x1049f9550() {
   return (neuron0x1049f3d40()*-0.465744);
}

double mlp::synapse0x1049f9580() {
   return (neuron0x1049f4320()*0.064019);
}

double mlp::synapse0x1049f95b0() {
   return (neuron0x1049f4900()*0.209653);
}

double mlp::synapse0x1049f95e0() {
   return (neuron0x1049f4ee0()*-0.256472);
}

double mlp::synapse0x1049f9610() {
   return (neuron0x1049f54c0()*-0.00245557);
}

double mlp::synapse0x1049f9640() {
   return (neuron0x1049f5aa0()*0.369681);
}

double mlp::synapse0x1049f9980() {
   return (neuron0x1049f0bd0()*-0.537711);
}

double mlp::synapse0x1049f99b0() {
   return (neuron0x1049f0df0()*0.257365);
}

double mlp::synapse0x1049f99e0() {
   return (neuron0x1049f1570()*-0.496008);
}

double mlp::synapse0x1049f9a10() {
   return (neuron0x1049f1be0()*-0.849662);
}

double mlp::synapse0x1049f9a40() {
   return (neuron0x1049f21c0()*-1.03113);
}

double mlp::synapse0x1049f9a70() {
   return (neuron0x1049f25c0()*-1.39948);
}

double mlp::synapse0x1049f9aa0() {
   return (neuron0x1049f2ba0()*0.318942);
}

double mlp::synapse0x1049f9ad0() {
   return (neuron0x1049f3180()*0.80679);
}

double mlp::synapse0x1049f9b00() {
   return (neuron0x1049f3760()*0.0362236);
}

double mlp::synapse0x1049f9b30() {
   return (neuron0x1049f3d40()*0.211176);
}

double mlp::synapse0x1049f9b60() {
   return (neuron0x1049f4320()*0.878621);
}

double mlp::synapse0x1049f9b90() {
   return (neuron0x1049f4900()*-1.15553);
}

double mlp::synapse0x1049f9bc0() {
   return (neuron0x1049f4ee0()*0.940735);
}

double mlp::synapse0x1049f9bf0() {
   return (neuron0x1049f54c0()*0.0766421);
}

double mlp::synapse0x1049f9c20() {
   return (neuron0x1049f5aa0()*-0.164723);
}

double mlp::synapse0x1049f9f60() {
   return (neuron0x1049f0bd0()*-0.066303);
}

double mlp::synapse0x1049f9f90() {
   return (neuron0x1049f0df0()*-0.192805);
}

double mlp::synapse0x1049f9fc0() {
   return (neuron0x1049f1570()*0.846667);
}

double mlp::synapse0x1049f9ff0() {
   return (neuron0x1049f1be0()*0.720496);
}

double mlp::synapse0x1049fa020() {
   return (neuron0x1049f21c0()*0.186151);
}

double mlp::synapse0x1049fa050() {
   return (neuron0x1049f25c0()*0.574245);
}

double mlp::synapse0x1049fa080() {
   return (neuron0x1049f2ba0()*-0.0732561);
}

double mlp::synapse0x1049fa0b0() {
   return (neuron0x1049f3180()*0.884882);
}

double mlp::synapse0x1049fa0e0() {
   return (neuron0x1049f3760()*-0.188782);
}

double mlp::synapse0x1049fa110() {
   return (neuron0x1049f3d40()*-0.659197);
}

double mlp::synapse0x1049fa140() {
   return (neuron0x1049f4320()*1.4341);
}

double mlp::synapse0x1049fa170() {
   return (neuron0x1049f4900()*0.568955);
}

double mlp::synapse0x1049fa1a0() {
   return (neuron0x1049f4ee0()*-0.152565);
}

double mlp::synapse0x1049fa1d0() {
   return (neuron0x1049f54c0()*-0.00248379);
}

double mlp::synapse0x1049fa200() {
   return (neuron0x1049f5aa0()*-0.0243339);
}

double mlp::synapse0x1049fa540() {
   return (neuron0x1049f0bd0()*0.0246705);
}

double mlp::synapse0x1049fa570() {
   return (neuron0x1049f0df0()*0.140166);
}

double mlp::synapse0x1049fa5a0() {
   return (neuron0x1049f1570()*-0.153602);
}

double mlp::synapse0x1049fa5d0() {
   return (neuron0x1049f1be0()*-0.00397893);
}

double mlp::synapse0x1049fa600() {
   return (neuron0x1049f21c0()*0.1228);
}

double mlp::synapse0x1049fa630() {
   return (neuron0x1049f25c0()*-0.720844);
}

double mlp::synapse0x1049fa660() {
   return (neuron0x1049f2ba0()*-0.191001);
}

double mlp::synapse0x1049fa690() {
   return (neuron0x1049f3180()*0.372112);
}

double mlp::synapse0x1049fa6c0() {
   return (neuron0x1049f3760()*-0.0210608);
}

double mlp::synapse0x1049fa6f0() {
   return (neuron0x1049f3d40()*0.0126269);
}

double mlp::synapse0x1049fa720() {
   return (neuron0x1049f4320()*-0.0989868);
}

double mlp::synapse0x1049fa750() {
   return (neuron0x1049f4900()*-0.458646);
}

double mlp::synapse0x1049fa780() {
   return (neuron0x1049f4ee0()*-0.39099);
}

double mlp::synapse0x1049fa7b0() {
   return (neuron0x1049f54c0()*0.291012);
}

double mlp::synapse0x1049fa7e0() {
   return (neuron0x1049f5aa0()*0.538999);
}

double mlp::synapse0x1049fab20() {
   return (neuron0x1049f0bd0()*0.564136);
}

double mlp::synapse0x1049fab50() {
   return (neuron0x1049f0df0()*0.432262);
}

double mlp::synapse0x1049fab80() {
   return (neuron0x1049f1570()*-0.236135);
}

double mlp::synapse0x1049fabb0() {
   return (neuron0x1049f1be0()*0.36185);
}

double mlp::synapse0x1049fabe0() {
   return (neuron0x1049f21c0()*0.0294869);
}

double mlp::synapse0x1049fac10() {
   return (neuron0x1049f25c0()*-0.251097);
}

double mlp::synapse0x1049fac40() {
   return (neuron0x1049f2ba0()*0.151014);
}

double mlp::synapse0x1049fac70() {
   return (neuron0x1049f3180()*-0.309665);
}

double mlp::synapse0x1049faca0() {
   return (neuron0x1049f3760()*-0.0954153);
}

double mlp::synapse0x1049facd0() {
   return (neuron0x1049f3d40()*0.448575);
}

double mlp::synapse0x1049fad00() {
   return (neuron0x1049f4320()*0.485731);
}

double mlp::synapse0x1049fad30() {
   return (neuron0x1049f4900()*-0.287393);
}

double mlp::synapse0x1049fad60() {
   return (neuron0x1049f4ee0()*0.605505);
}

double mlp::synapse0x1049fad90() {
   return (neuron0x1049f54c0()*0.404344);
}

double mlp::synapse0x1049fadc0() {
   return (neuron0x1049f5aa0()*-0.455643);
}

double mlp::synapse0x1049fb100() {
   return (neuron0x1049f0bd0()*0.17459);
}

double mlp::synapse0x1049fb130() {
   return (neuron0x1049f0df0()*-0.0396033);
}

double mlp::synapse0x1049fb160() {
   return (neuron0x1049f1570()*-0.460678);
}

double mlp::synapse0x1049fb190() {
   return (neuron0x1049f1be0()*-0.133546);
}

double mlp::synapse0x1049fb1c0() {
   return (neuron0x1049f21c0()*0.25517);
}

double mlp::synapse0x1049fb1f0() {
   return (neuron0x1049f25c0()*-0.235663);
}

double mlp::synapse0x1049fb220() {
   return (neuron0x1049f2ba0()*0.281747);
}

double mlp::synapse0x1049fb250() {
   return (neuron0x1049f3180()*-0.199746);
}

double mlp::synapse0x1049fb280() {
   return (neuron0x1049f3760()*0.315672);
}

double mlp::synapse0x1049fb2b0() {
   return (neuron0x1049f3d40()*0.0869996);
}

double mlp::synapse0x1049fb2e0() {
   return (neuron0x1049f4320()*-0.708181);
}

double mlp::synapse0x1049fb310() {
   return (neuron0x1049f4900()*-0.162867);
}

double mlp::synapse0x1049fb340() {
   return (neuron0x1049f4ee0()*0.492007);
}

double mlp::synapse0x1049fb370() {
   return (neuron0x1049f54c0()*-1.24346);
}

double mlp::synapse0x1049fb3a0() {
   return (neuron0x1049f5aa0()*-0.306034);
}

double mlp::synapse0x1049fb6e0() {
   return (neuron0x1049f0bd0()*0.184298);
}

double mlp::synapse0x1049fb710() {
   return (neuron0x1049f0df0()*-0.518132);
}

double mlp::synapse0x1049fb740() {
   return (neuron0x1049f1570()*1.03801);
}

double mlp::synapse0x1049fb770() {
   return (neuron0x1049f1be0()*0.769866);
}

double mlp::synapse0x1049fb7a0() {
   return (neuron0x1049f21c0()*1.5902);
}

double mlp::synapse0x1049fb7d0() {
   return (neuron0x1049f25c0()*0.726351);
}

double mlp::synapse0x1049fb800() {
   return (neuron0x1049f2ba0()*0.063742);
}

double mlp::synapse0x1049fb830() {
   return (neuron0x1049f3180()*0.238788);
}

double mlp::synapse0x1049fb860() {
   return (neuron0x1049f3760()*-0.266816);
}

double mlp::synapse0x1049fb890() {
   return (neuron0x1049f3d40()*-0.331445);
}

double mlp::synapse0x1049fb8c0() {
   return (neuron0x1049f4320()*0.674817);
}

double mlp::synapse0x1049fb8f0() {
   return (neuron0x1049f4900()*0.0964056);
}

double mlp::synapse0x1049fb920() {
   return (neuron0x1049f4ee0()*-1.19771);
}

double mlp::synapse0x1049fb950() {
   return (neuron0x1049f54c0()*-0.237822);
}

double mlp::synapse0x1049fb980() {
   return (neuron0x1049f5aa0()*-0.112719);
}

double mlp::synapse0x1049fbb90() {
   return (neuron0x1049f60b0()*-0.322123);
}

double mlp::synapse0x1049fbbc0() {
   return (neuron0x1049f6660()*0.171842);
}

double mlp::synapse0x1049fbbf0() {
   return (neuron0x1049f6c40()*-0.296236);
}

double mlp::synapse0x1049fbc20() {
   return (neuron0x1049f7330()*-0.0231367);
}

double mlp::synapse0x1049fbc50() {
   return (neuron0x1049f7910()*-0.686368);
}

double mlp::synapse0x1049fbc80() {
   return (neuron0x1049f7ef0()*-0.593829);
}

double mlp::synapse0x1049fbcb0() {
   return (neuron0x1049f84d0()*0.194114);
}

double mlp::synapse0x1049fbce0() {
   return (neuron0x1049f8ab0()*0.164303);
}

double mlp::synapse0x1049fbd10() {
   return (neuron0x1049f9090()*-0.380775);
}

double mlp::synapse0x1049fbd40() {
   return (neuron0x1049f9670()*-0.24888);
}

double mlp::synapse0x1049fbd70() {
   return (neuron0x1049f9c50()*0.412052);
}

double mlp::synapse0x1049fbda0() {
   return (neuron0x1049fa230()*0.0528336);
}

double mlp::synapse0x1049fbdd0() {
   return (neuron0x1049fa810()*0.273302);
}

double mlp::synapse0x1049fbe00() {
   return (neuron0x1049fadf0()*-0.535737);
}

double mlp::synapse0x1049fbe30() {
   return (neuron0x1049fb3d0()*0.383956);
}

double mlp::synapse0x1049fc040() {
   return (neuron0x1049f60b0()*-0.0291867);
}

double mlp::synapse0x104a00100() {
   return (neuron0x1049f6660()*-0.166714);
}

double mlp::synapse0x104a00130() {
   return (neuron0x1049f6c40()*0.137328);
}

double mlp::synapse0x104a00160() {
   return (neuron0x1049f7330()*0.0596982);
}

double mlp::synapse0x104a00190() {
   return (neuron0x1049f7910()*-0.71823);
}

double mlp::synapse0x104a001c0() {
   return (neuron0x1049f7ef0()*-0.630219);
}

double mlp::synapse0x104a001f0() {
   return (neuron0x1049f84d0()*-0.00730346);
}

double mlp::synapse0x104a00220() {
   return (neuron0x1049f8ab0()*-0.21034);
}

double mlp::synapse0x104a00250() {
   return (neuron0x1049f9090()*-0.127209);
}

double mlp::synapse0x104a00280() {
   return (neuron0x1049f9670()*-0.0236404);
}

double mlp::synapse0x104a002b0() {
   return (neuron0x1049f9c50()*0.11128);
}

double mlp::synapse0x104a002e0() {
   return (neuron0x1049fa230()*0.199719);
}

double mlp::synapse0x104a00310() {
   return (neuron0x1049fa810()*0.163955);
}

double mlp::synapse0x104a00340() {
   return (neuron0x1049fadf0()*0.284914);
}

double mlp::synapse0x104a00370() {
   return (neuron0x1049fb3d0()*0.322476);
}

double mlp::synapse0x104a00680() {
   return (neuron0x1049f60b0()*0.862629);
}

double mlp::synapse0x104a006b0() {
   return (neuron0x1049f6660()*0.272489);
}

double mlp::synapse0x104a006e0() {
   return (neuron0x1049f6c40()*0.239786);
}

double mlp::synapse0x104a00710() {
   return (neuron0x1049f7330()*0.390257);
}

double mlp::synapse0x104a00740() {
   return (neuron0x1049f7910()*0.113901);
}

double mlp::synapse0x104a00770() {
   return (neuron0x1049f7ef0()*0.287025);
}

double mlp::synapse0x104a007a0() {
   return (neuron0x1049f84d0()*0.0739503);
}

double mlp::synapse0x104a007d0() {
   return (neuron0x1049f8ab0()*-0.18496);
}

double mlp::synapse0x104a00800() {
   return (neuron0x1049f9090()*-0.561);
}

double mlp::synapse0x104a00830() {
   return (neuron0x1049f9670()*-0.0425715);
}

double mlp::synapse0x104a00860() {
   return (neuron0x1049f9c50()*0.181836);
}

double mlp::synapse0x104a00890() {
   return (neuron0x1049fa230()*-0.669177);
}

double mlp::synapse0x104a008c0() {
   return (neuron0x1049fa810()*-0.0202459);
}

double mlp::synapse0x104a008f0() {
   return (neuron0x1049fadf0()*-0.646436);
}

double mlp::synapse0x104a00920() {
   return (neuron0x1049fb3d0()*-0.109387);
}

double mlp::synapse0x104a00c30() {
   return (neuron0x1049f60b0()*0.896122);
}

double mlp::synapse0x104a00c60() {
   return (neuron0x1049f6660()*-0.389085);
}

double mlp::synapse0x104a00c90() {
   return (neuron0x1049f6c40()*0.402672);
}

double mlp::synapse0x104a00cc0() {
   return (neuron0x1049f7330()*0.0350883);
}

double mlp::synapse0x104a00cf0() {
   return (neuron0x1049f7910()*-0.282287);
}

double mlp::synapse0x104a00d20() {
   return (neuron0x1049f7ef0()*0.34558);
}

double mlp::synapse0x104a00d50() {
   return (neuron0x1049f84d0()*-0.371419);
}

double mlp::synapse0x104a00d80() {
   return (neuron0x1049f8ab0()*0.298091);
}

double mlp::synapse0x104a00db0() {
   return (neuron0x1049f9090()*-0.0584761);
}

double mlp::synapse0x104a00de0() {
   return (neuron0x1049f9670()*-0.0382512);
}

double mlp::synapse0x104a00e10() {
   return (neuron0x1049f9c50()*0.485914);
}

double mlp::synapse0x104a00e40() {
   return (neuron0x1049fa230()*-0.189722);
}

double mlp::synapse0x104a00e70() {
   return (neuron0x1049fa810()*0.339195);
}

double mlp::synapse0x104a00ea0() {
   return (neuron0x1049fadf0()*-0.279344);
}

double mlp::synapse0x104a00ed0() {
   return (neuron0x1049fb3d0()*-0.743424);
}

double mlp::synapse0x1049e5d30() {
   return (neuron0x1049f60b0()*-0.531123);
}

double mlp::synapse0x104a011e0() {
   return (neuron0x1049f6660()*-0.295402);
}

double mlp::synapse0x104a01210() {
   return (neuron0x1049f6c40()*-0.284576);
}

double mlp::synapse0x104a01240() {
   return (neuron0x1049f7330()*-0.409155);
}

double mlp::synapse0x104a01270() {
   return (neuron0x1049f7910()*0.574858);
}

double mlp::synapse0x104a012a0() {
   return (neuron0x1049f7ef0()*0.306249);
}

double mlp::synapse0x104a012d0() {
   return (neuron0x1049f84d0()*0.108466);
}

double mlp::synapse0x104a01300() {
   return (neuron0x1049f8ab0()*-0.486633);
}

double mlp::synapse0x104a01330() {
   return (neuron0x1049f9090()*-0.100155);
}

double mlp::synapse0x104a01360() {
   return (neuron0x1049f9670()*1.3217);
}

double mlp::synapse0x104a01390() {
   return (neuron0x1049f9c50()*0.827144);
}

double mlp::synapse0x104a013c0() {
   return (neuron0x1049fa230()*-0.210587);
}

double mlp::synapse0x104a013f0() {
   return (neuron0x1049fa810()*0.566164);
}

double mlp::synapse0x104a01420() {
   return (neuron0x1049fadf0()*0.111017);
}

double mlp::synapse0x104a01450() {
   return (neuron0x1049fb3d0()*0.0698593);
}

double mlp::synapse0x104a01760() {
   return (neuron0x1049f60b0()*0.345304);
}

double mlp::synapse0x104a01790() {
   return (neuron0x1049f6660()*0.258133);
}

double mlp::synapse0x104a017c0() {
   return (neuron0x1049f6c40()*0.402967);
}

double mlp::synapse0x104a017f0() {
   return (neuron0x1049f7330()*0.013392);
}

double mlp::synapse0x104a01820() {
   return (neuron0x1049f7910()*0.33958);
}

double mlp::synapse0x104a01850() {
   return (neuron0x1049f7ef0()*0.837991);
}

double mlp::synapse0x104a01880() {
   return (neuron0x1049f84d0()*1.0036);
}

double mlp::synapse0x104a018b0() {
   return (neuron0x1049f8ab0()*0.080611);
}

double mlp::synapse0x104a018e0() {
   return (neuron0x1049f9090()*0.714468);
}

double mlp::synapse0x104a01910() {
   return (neuron0x1049f9670()*-0.962544);
}

double mlp::synapse0x104a01940() {
   return (neuron0x1049f9c50()*-0.975681);
}

double mlp::synapse0x104a01970() {
   return (neuron0x1049fa230()*0.282545);
}

double mlp::synapse0x104a019a0() {
   return (neuron0x1049fa810()*-0.368301);
}

double mlp::synapse0x104a019d0() {
   return (neuron0x1049fadf0()*0.761227);
}

double mlp::synapse0x104a01a00() {
   return (neuron0x1049fb3d0()*-1.47425);
}

double mlp::synapse0x104a01d10() {
   return (neuron0x1049f60b0()*-0.183858);
}

double mlp::synapse0x104a01d40() {
   return (neuron0x1049f6660()*-0.34248);
}

double mlp::synapse0x104a01d70() {
   return (neuron0x1049f6c40()*-0.196169);
}

double mlp::synapse0x104a01da0() {
   return (neuron0x1049f7330()*0.175018);
}

double mlp::synapse0x104a01dd0() {
   return (neuron0x1049f7910()*0.338397);
}

double mlp::synapse0x104a01e00() {
   return (neuron0x1049f7ef0()*-0.45758);
}

double mlp::synapse0x104a01e30() {
   return (neuron0x1049f84d0()*-0.0726419);
}

double mlp::synapse0x104a01e60() {
   return (neuron0x1049f8ab0()*-0.187069);
}

double mlp::synapse0x104a01e90() {
   return (neuron0x1049f9090()*0.28519);
}

double mlp::synapse0x104a01ec0() {
   return (neuron0x1049f9670()*-0.185874);
}

double mlp::synapse0x104a01ef0() {
   return (neuron0x1049f9c50()*-0.756254);
}

double mlp::synapse0x104a01f20() {
   return (neuron0x1049fa230()*0.266584);
}

double mlp::synapse0x104a01f50() {
   return (neuron0x1049fa810()*-0.00353101);
}

double mlp::synapse0x104a01f80() {
   return (neuron0x1049fadf0()*0.0503718);
}

double mlp::synapse0x104a01fb0() {
   return (neuron0x1049fb3d0()*0.801072);
}

double mlp::synapse0x104a022c0() {
   return (neuron0x1049f60b0()*-0.266587);
}

double mlp::synapse0x104a022f0() {
   return (neuron0x1049f6660()*0.267011);
}

double mlp::synapse0x104a02320() {
   return (neuron0x1049f6c40()*-0.164117);
}

double mlp::synapse0x104a02350() {
   return (neuron0x1049f7330()*-0.223454);
}

double mlp::synapse0x104a02380() {
   return (neuron0x1049f7910()*0.540582);
}

double mlp::synapse0x104a023b0() {
   return (neuron0x1049f7ef0()*-0.477412);
}

double mlp::synapse0x104a023e0() {
   return (neuron0x1049f84d0()*-0.358223);
}

double mlp::synapse0x104a02410() {
   return (neuron0x1049f8ab0()*-0.095942);
}

double mlp::synapse0x104a02440() {
   return (neuron0x1049f9090()*0.07933);
}

double mlp::synapse0x104a02470() {
   return (neuron0x1049f9670()*-0.143844);
}

double mlp::synapse0x104a024a0() {
   return (neuron0x1049f9c50()*-0.279896);
}

double mlp::synapse0x104a024d0() {
   return (neuron0x1049fa230()*0.377667);
}

double mlp::synapse0x104a02500() {
   return (neuron0x1049fa810()*-0.258417);
}

double mlp::synapse0x104a02530() {
   return (neuron0x1049fadf0()*0.268278);
}

double mlp::synapse0x104a02560() {
   return (neuron0x1049fb3d0()*0.642979);
}

double mlp::synapse0x104a02870() {
   return (neuron0x1049f60b0()*-0.724661);
}

double mlp::synapse0x104a028a0() {
   return (neuron0x1049f6660()*0.0957801);
}

double mlp::synapse0x104a028d0() {
   return (neuron0x1049f6c40()*-0.245543);
}

double mlp::synapse0x104a02900() {
   return (neuron0x1049f7330()*0.429499);
}

double mlp::synapse0x104a02930() {
   return (neuron0x1049f7910()*-0.224563);
}

double mlp::synapse0x104a02960() {
   return (neuron0x1049f7ef0()*0.229682);
}

double mlp::synapse0x104a02990() {
   return (neuron0x1049f84d0()*-0.823674);
}

double mlp::synapse0x104a029c0() {
   return (neuron0x1049f8ab0()*0.517703);
}

double mlp::synapse0x104a029f0() {
   return (neuron0x1049f9090()*0.306043);
}

double mlp::synapse0x104a02a20() {
   return (neuron0x1049f9670()*0.249186);
}

double mlp::synapse0x104a02a50() {
   return (neuron0x1049f9c50()*0.492377);
}

double mlp::synapse0x104a02a80() {
   return (neuron0x1049fa230()*0.201529);
}

double mlp::synapse0x104a02ab0() {
   return (neuron0x1049fa810()*-0.565224);
}

double mlp::synapse0x104a02ae0() {
   return (neuron0x1049fadf0()*0.149812);
}

double mlp::synapse0x104a02b10() {
   return (neuron0x1049fb3d0()*-0.211073);
}

