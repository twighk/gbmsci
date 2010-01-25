#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12) {
   input0 = (in0 - 37.6418)/20.0951;
   input1 = (in1 - 50.1115)/94.7607;
   input2 = (in2 - 34.9894)/96.266;
   input3 = (in3 - 2.50356)/0.704229;
   input4 = (in4 - -0.00104854)/0.969025;
   input5 = (in5 - 0.0138086)/1.13611;
   input6 = (in6 - 1.08577)/2.7008;
   input7 = (in7 - 0.240178)/1.59485;
   input8 = (in8 - 0.882073)/4.74797;
   input9 = (in9 - -0.819905)/0.586601;
   input10 = (in10 - 1.39863)/1.05065;
   input11 = (in11 - 35.1621)/34.8828;
   input12 = (in12 - 37.6418)/20.0951;
   switch(index) {
     case 0:
         return neuron0x1049f5f90();
     case 1:
         return neuron0x1049f63b0();
     case 2:
         return neuron0x1049f6900();
     case 3:
         return neuron0x1049f6e50();
     case 4:
         return neuron0x1049f73a0();
     case 5:
         return neuron0x1049f78c0();
     case 6:
         return neuron0x1049f7e10();
     case 7:
         return neuron0x1049f8360();
     case 8:
         return neuron0x1049f88b0();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 37.6418)/20.0951;
   input1 = (input[1] - 50.1115)/94.7607;
   input2 = (input[2] - 34.9894)/96.266;
   input3 = (input[3] - 2.50356)/0.704229;
   input4 = (input[4] - -0.00104854)/0.969025;
   input5 = (input[5] - 0.0138086)/1.13611;
   input6 = (input[6] - 1.08577)/2.7008;
   input7 = (input[7] - 0.240178)/1.59485;
   input8 = (input[8] - 0.882073)/4.74797;
   input9 = (input[9] - -0.819905)/0.586601;
   input10 = (input[10] - 1.39863)/1.05065;
   input11 = (input[11] - 35.1621)/34.8828;
   input12 = (input[12] - 37.6418)/20.0951;
   switch(index) {
     case 0:
         return neuron0x1049f5f90();
     case 1:
         return neuron0x1049f63b0();
     case 2:
         return neuron0x1049f6900();
     case 3:
         return neuron0x1049f6e50();
     case 4:
         return neuron0x1049f73a0();
     case 5:
         return neuron0x1049f78c0();
     case 6:
         return neuron0x1049f7e10();
     case 7:
         return neuron0x1049f8360();
     case 8:
         return neuron0x1049f88b0();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049e3910() {
   return input0;
}

double mlp::neuron0x1049eaec0() {
   return input1;
}

double mlp::neuron0x1049eb1a0() {
   return input2;
}

double mlp::neuron0x1049eb480() {
   return input3;
}

double mlp::neuron0x1049eb760() {
   return input4;
}

double mlp::neuron0x1049eba40() {
   return input5;
}

double mlp::neuron0x1049ebd20() {
   return input6;
}

double mlp::neuron0x1049ec000() {
   return input7;
}

double mlp::neuron0x1049ec310() {
   return input8;
}

double mlp::neuron0x1049ec620() {
   return input9;
}

double mlp::neuron0x1049ec930() {
   return input10;
}

double mlp::neuron0x1049ecc40() {
   return input11;
}

double mlp::neuron0x1049ecf50() {
   return input12;
}

double mlp::input0x1049ed260() {
   double input = -2.29657;
   input += synapse0x1049ea570();
   input += synapse0x1049e38c0();
   input += synapse0x1049eac30();
   input += synapse0x1049eac60();
   input += synapse0x1049e33c0();
   input += synapse0x1049e33f0();
   input += synapse0x1049e3420();
   input += synapse0x1049ed3c0();
   input += synapse0x1049ed3f0();
   input += synapse0x1049ed420();
   input += synapse0x1049ed450();
   input += synapse0x1049ed480();
   input += synapse0x1049ed4b0();
   return input;
}

double mlp::neuron0x1049ed260() {
   double input = input0x1049ed260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ed4e0() {
   double input = -1.27931;
   input += synapse0x1049ed7f0();
   input += synapse0x1049ed820();
   input += synapse0x1049ed850();
   input += synapse0x1049ed880();
   input += synapse0x1049ed9b0();
   input += synapse0x1049ed9e0();
   input += synapse0x1049eda10();
   input += synapse0x1049eda40();
   input += synapse0x1049eda70();
   input += synapse0x1049edaa0();
   input += synapse0x1049edad0();
   input += synapse0x1049edb00();
   input += synapse0x1049edb30();
   return input;
}

double mlp::neuron0x1049ed4e0() {
   double input = input0x1049ed4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049edb60() {
   double input = -0.110004;
   input += synapse0x1049eddf0();
   input += synapse0x1049ede20();
   input += synapse0x1049ede50();
   input += synapse0x1049ede80();
   input += synapse0x1049edeb0();
   input += synapse0x1049edee0();
   input += synapse0x1049edf10();
   input += synapse0x1049ed8b0();
   input += synapse0x1049ed8e0();
   input += synapse0x1049ed910();
   input += synapse0x1049ed940();
   input += synapse0x1049ed970();
   input += synapse0x1049ee140();
   return input;
}

double mlp::neuron0x1049edb60() {
   double input = input0x1049edb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ee170() {
   double input = -0.390481;
   input += synapse0x1049ee580();
   input += synapse0x1049ee5b0();
   input += synapse0x1049ee5e0();
   input += synapse0x1049ee610();
   input += synapse0x1049ee640();
   input += synapse0x1049ee670();
   input += synapse0x1049ee6a0();
   input += synapse0x1049ee6d0();
   input += synapse0x1049ee700();
   input += synapse0x1049ee730();
   input += synapse0x1049ee760();
   input += synapse0x1049ee790();
   input += synapse0x1049ee7c0();
   return input;
}

double mlp::neuron0x1049ee170() {
   double input = input0x1049ee170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ee7f0() {
   double input = 0.178565;
   input += synapse0x1049eea80();
   input += synapse0x1049eeab0();
   input += synapse0x1049eeae0();
   input += synapse0x1049eeb10();
   input += synapse0x1049eeb40();
   input += synapse0x1049eeb70();
   input += synapse0x1049eeba0();
   input += synapse0x1049eebd0();
   input += synapse0x1049eec00();
   input += synapse0x1049eec30();
   input += synapse0x1049eec60();
   input += synapse0x1049eec90();
   input += synapse0x1049eecc0();
   return input;
}

double mlp::neuron0x1049ee7f0() {
   double input = input0x1049ee7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049edf40() {
   double input = -1.21757;
   input += synapse0x1049ee0d0();
   input += synapse0x1049ee100();
   input += synapse0x1049eee70();
   input += synapse0x1049eeea0();
   input += synapse0x1049eeed0();
   input += synapse0x1049eef00();
   input += synapse0x1049eef30();
   input += synapse0x1049eef60();
   input += synapse0x1049eef90();
   input += synapse0x1049eefc0();
   input += synapse0x1049eeff0();
   input += synapse0x1049ef020();
   input += synapse0x1049ef050();
   return input;
}

double mlp::neuron0x1049edf40() {
   double input = input0x1049edf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ef080() {
   double input = 0.188434;
   input += synapse0x1049ef390();
   input += synapse0x1049ef3c0();
   input += synapse0x1049ef3f0();
   input += synapse0x1049ef420();
   input += synapse0x1049ef450();
   input += synapse0x1049ef480();
   input += synapse0x1049ef4b0();
   input += synapse0x1049ef4e0();
   input += synapse0x1049ef510();
   input += synapse0x1049ef540();
   input += synapse0x1049ef570();
   input += synapse0x1049ef5a0();
   input += synapse0x1049ef5d0();
   return input;
}

double mlp::neuron0x1049ef080() {
   double input = input0x1049ef080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ef600() {
   double input = 0.595101;
   input += synapse0x1049ef910();
   input += synapse0x1049ef940();
   input += synapse0x1049ef970();
   input += synapse0x1049ef9a0();
   input += synapse0x1049ef9d0();
   input += synapse0x1049efa00();
   input += synapse0x1049efa30();
   input += synapse0x1049efa60();
   input += synapse0x1049efa90();
   input += synapse0x1049efac0();
   input += synapse0x1049efaf0();
   input += synapse0x1049efb20();
   input += synapse0x1049efb50();
   return input;
}

double mlp::neuron0x1049ef600() {
   double input = input0x1049ef600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049efb80() {
   double input = -0.261695;
   input += synapse0x1049efe90();
   input += synapse0x1049efec0();
   input += synapse0x1049efef0();
   input += synapse0x1049eff20();
   input += synapse0x1049eff50();
   input += synapse0x1049eff80();
   input += synapse0x1049effb0();
   input += synapse0x1049effe0();
   input += synapse0x1049f0010();
   input += synapse0x1049f0040();
   input += synapse0x1049f0070();
   input += synapse0x1049f00a0();
   input += synapse0x1049f00d0();
   return input;
}

double mlp::neuron0x1049efb80() {
   double input = input0x1049efb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f0100() {
   double input = -0.42469;
   input += synapse0x1049f0410();
   input += synapse0x1049f0440();
   input += synapse0x1049f0470();
   input += synapse0x1049f04a0();
   input += synapse0x1049f04d0();
   input += synapse0x1049f0500();
   input += synapse0x1049f0530();
   input += synapse0x1049f0560();
   input += synapse0x1049f0590();
   input += synapse0x1049f05c0();
   input += synapse0x1049f05f0();
   input += synapse0x1049f0620();
   input += synapse0x1049f0650();
   return input;
}

double mlp::neuron0x1049f0100() {
   double input = input0x1049f0100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f0680() {
   double input = -1.15202;
   input += synapse0x1049f0990();
   input += synapse0x1049f09c0();
   input += synapse0x1049f09f0();
   input += synapse0x1049f0a20();
   input += synapse0x1049f0a50();
   input += synapse0x1049f0a80();
   input += synapse0x1049f0ab0();
   input += synapse0x1049f0ae0();
   input += synapse0x1049f0b10();
   input += synapse0x1049f0b40();
   input += synapse0x1049f0b70();
   input += synapse0x1049f0ba0();
   input += synapse0x1049f0bd0();
   return input;
}

double mlp::neuron0x1049f0680() {
   double input = input0x1049f0680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f0c00() {
   double input = 0.0785579;
   input += synapse0x1049f0f10();
   input += synapse0x1049f0f40();
   input += synapse0x1049f0f70();
   input += synapse0x1049f0fa0();
   input += synapse0x1049f0fd0();
   input += synapse0x1049f1000();
   input += synapse0x1049f1030();
   input += synapse0x1049f1060();
   input += synapse0x1049f1090();
   input += synapse0x1049f10c0();
   input += synapse0x1049f10f0();
   input += synapse0x1049f1120();
   input += synapse0x1049f1150();
   return input;
}

double mlp::neuron0x1049f0c00() {
   double input = input0x1049f0c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f1180() {
   double input = -1.42123;
   input += synapse0x1049f1490();
   input += synapse0x1049f14c0();
   input += synapse0x1049f14f0();
   input += synapse0x1049f1520();
   input += synapse0x1049f1550();
   input += synapse0x1049f1580();
   input += synapse0x1049f15b0();
   input += synapse0x1049f15e0();
   input += synapse0x1049f1610();
   input += synapse0x1049f1640();
   input += synapse0x1049f1670();
   input += synapse0x1049f16a0();
   input += synapse0x1049f16d0();
   return input;
}

double mlp::neuron0x1049f1180() {
   double input = input0x1049f1180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f1730() {
   double input = 0.104229;
   input += synapse0x1049f1a10();
   input += synapse0x1049f1a40();
   input += synapse0x1049f1a70();
   input += synapse0x1049f1aa0();
   input += synapse0x1049f1ad0();
   input += synapse0x1049f1b00();
   input += synapse0x1049f1b30();
   input += synapse0x1049f1b60();
   input += synapse0x1049f1b90();
   input += synapse0x1049f1bc0();
   input += synapse0x1049f1bf0();
   input += synapse0x1049f1c20();
   input += synapse0x1049f1c50();
   return input;
}

double mlp::neuron0x1049f1730() {
   double input = input0x1049f1730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f1c80() {
   double input = 0.0620228;
   input += synapse0x1049f1f90();
   input += synapse0x1049f1fc0();
   input += synapse0x1049f1ff0();
   input += synapse0x1049f2020();
   input += synapse0x1049f2050();
   input += synapse0x1049f2080();
   input += synapse0x1049f20b0();
   input += synapse0x1049f20e0();
   input += synapse0x1049f2110();
   input += synapse0x1049f2140();
   input += synapse0x1049f2170();
   input += synapse0x1049f21a0();
   input += synapse0x1049f21d0();
   return input;
}

double mlp::neuron0x1049f1c80() {
   double input = input0x1049f1c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f2200() {
   double input = 0.28105;
   input += synapse0x1049f2510();
   input += synapse0x1049f2540();
   input += synapse0x1049f2570();
   input += synapse0x1049f25a0();
   input += synapse0x1049f25d0();
   input += synapse0x1049f2600();
   input += synapse0x1049f2630();
   input += synapse0x1049f2660();
   input += synapse0x1049f2690();
   input += synapse0x1049f26c0();
   input += synapse0x1049f26f0();
   input += synapse0x1049f2720();
   input += synapse0x1049f2750();
   return input;
}

double mlp::neuron0x1049f2200() {
   double input = input0x1049f2200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f2780() {
   double input = -0.264404;
   input += synapse0x1049f2a90();
   input += synapse0x1049f2ac0();
   input += synapse0x1049f2af0();
   input += synapse0x1049f2b20();
   input += synapse0x1049f2b50();
   input += synapse0x1049f2b80();
   input += synapse0x1049f2bb0();
   input += synapse0x1049f2be0();
   input += synapse0x1049f2c10();
   input += synapse0x1049f2c40();
   input += synapse0x1049f2c70();
   input += synapse0x1049f2ca0();
   input += synapse0x1049f2cd0();
   return input;
}

double mlp::neuron0x1049f2780() {
   double input = input0x1049f2780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f2d00() {
   double input = -0.225462;
   input += synapse0x1049f3010();
   input += synapse0x1049f3040();
   input += synapse0x1049f3070();
   input += synapse0x1049f30a0();
   input += synapse0x1049f30d0();
   input += synapse0x1049f3100();
   input += synapse0x1049f3130();
   input += synapse0x1049f3160();
   input += synapse0x1049f3190();
   input += synapse0x1049f31c0();
   input += synapse0x1049f31f0();
   input += synapse0x1049f3220();
   input += synapse0x1049f3250();
   return input;
}

double mlp::neuron0x1049f2d00() {
   double input = input0x1049f2d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f3280() {
   double input = 0.0408156;
   input += synapse0x1049f3590();
   input += synapse0x1049f35c0();
   input += synapse0x1049f35f0();
   input += synapse0x1049f3620();
   input += synapse0x1049f3650();
   input += synapse0x1049f3680();
   input += synapse0x1049f36b0();
   input += synapse0x1049f36e0();
   input += synapse0x1049f3710();
   input += synapse0x1049f3740();
   input += synapse0x1049f3770();
   input += synapse0x1049f37a0();
   input += synapse0x1049f37d0();
   return input;
}

double mlp::neuron0x1049f3280() {
   double input = input0x1049f3280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f3800() {
   double input = 0.10496;
   input += synapse0x1049ee480();
   input += synapse0x1049ee4b0();
   input += synapse0x1049ee4e0();
   input += synapse0x1049ee510();
   input += synapse0x1049ee540();
   input += synapse0x1049f3d10();
   input += synapse0x1049f3d40();
   input += synapse0x1049f3d70();
   input += synapse0x1049f3da0();
   input += synapse0x1049f3dd0();
   input += synapse0x1049f3e00();
   input += synapse0x1049f3e30();
   input += synapse0x1049f3e60();
   return input;
}

double mlp::neuron0x1049f3800() {
   double input = input0x1049f3800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f3e90() {
   double input = -0.107659;
   input += synapse0x1049f41a0();
   input += synapse0x1049f41d0();
   input += synapse0x1049f4200();
   input += synapse0x1049f4230();
   input += synapse0x1049f4260();
   input += synapse0x1049f4290();
   input += synapse0x1049f42c0();
   input += synapse0x1049f42f0();
   input += synapse0x1049f4320();
   input += synapse0x1049f4350();
   input += synapse0x1049f4380();
   input += synapse0x1049f43b0();
   input += synapse0x1049f43e0();
   return input;
}

double mlp::neuron0x1049f3e90() {
   double input = input0x1049f3e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f4410() {
   double input = -0.686655;
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
   input += synapse0x1049f4900();
   input += synapse0x1049f4930();
   input += synapse0x1049f4960();
   return input;
}

double mlp::neuron0x1049f4410() {
   double input = input0x1049f4410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f4990() {
   double input = -0.14298;
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
   input += synapse0x1049f4ee0();
   return input;
}

double mlp::neuron0x1049f4990() {
   double input = input0x1049f4990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f4f10() {
   double input = 0.135644;
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
   return input;
}

double mlp::neuron0x1049f4f10() {
   double input = input0x1049f4f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f5490() {
   double input = -0.370343;
   input += synapse0x1049f57a0();
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
   return input;
}

double mlp::neuron0x1049f5490() {
   double input = input0x1049f5490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f5a10() {
   double input = 0.308043;
   input += synapse0x1049f5d20();
   input += synapse0x1049f5d50();
   input += synapse0x1049f5d80();
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
   return input;
}

double mlp::neuron0x1049f5a10() {
   double input = input0x1049f5a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049f5f90() {
   double input = -0.140492;
   input += synapse0x1049e3c70();
   input += synapse0x1049f6170();
   input += synapse0x1049f61a0();
   input += synapse0x1049f61d0();
   input += synapse0x1049f6200();
   input += synapse0x1049f6230();
   input += synapse0x1049f6260();
   input += synapse0x1049f6290();
   input += synapse0x1049f62c0();
   input += synapse0x1049f62f0();
   input += synapse0x1049f6320();
   input += synapse0x1049f6350();
   input += synapse0x1049f6380();
   return input;
}

double mlp::neuron0x1049f5f90() {
   double input = input0x1049f5f90();
   return (input * 1)+0;
}

double mlp::input0x1049f63b0() {
   double input = -0.258176;
   input += synapse0x1049f6690();
   input += synapse0x1049f66c0();
   input += synapse0x1049f66f0();
   input += synapse0x1049f6720();
   input += synapse0x1049f6750();
   input += synapse0x1049f6780();
   input += synapse0x1049f67b0();
   input += synapse0x1049f67e0();
   input += synapse0x1049f6810();
   input += synapse0x1049f6840();
   input += synapse0x1049f6870();
   input += synapse0x1049f68a0();
   input += synapse0x1049f68d0();
   return input;
}

double mlp::neuron0x1049f63b0() {
   double input = input0x1049f63b0();
   return (input * 1)+0;
}

double mlp::input0x1049f6900() {
   double input = 0.244669;
   input += synapse0x1049f6be0();
   input += synapse0x1049f6c10();
   input += synapse0x1049f6c40();
   input += synapse0x1049f6c70();
   input += synapse0x1049f6ca0();
   input += synapse0x1049f6cd0();
   input += synapse0x1049f6d00();
   input += synapse0x1049f6d30();
   input += synapse0x1049f6d60();
   input += synapse0x1049f6d90();
   input += synapse0x1049f6dc0();
   input += synapse0x1049f6df0();
   input += synapse0x1049f6e20();
   return input;
}

double mlp::neuron0x1049f6900() {
   double input = input0x1049f6900();
   return (input * 1)+0;
}

double mlp::input0x1049f6e50() {
   double input = 0.170624;
   input += synapse0x1049f7130();
   input += synapse0x1049f7160();
   input += synapse0x1049f7190();
   input += synapse0x1049f71c0();
   input += synapse0x1049f71f0();
   input += synapse0x1049f7220();
   input += synapse0x1049f7250();
   input += synapse0x1049f7280();
   input += synapse0x1049f72b0();
   input += synapse0x1049f72e0();
   input += synapse0x1049f7310();
   input += synapse0x1049f7340();
   input += synapse0x1049f7370();
   return input;
}

double mlp::neuron0x1049f6e50() {
   double input = input0x1049f6e50();
   return (input * 1)+0;
}

double mlp::input0x1049f73a0() {
   double input = 0.274005;
   input += synapse0x1049e3b40();
   input += synapse0x1049f7680();
   input += synapse0x1049f76b0();
   input += synapse0x1049f76e0();
   input += synapse0x1049f7710();
   input += synapse0x1049f7740();
   input += synapse0x1049f7770();
   input += synapse0x1049f77a0();
   input += synapse0x1049f77d0();
   input += synapse0x1049f7800();
   input += synapse0x1049f7830();
   input += synapse0x1049f7860();
   input += synapse0x1049f7890();
   return input;
}

double mlp::neuron0x1049f73a0() {
   double input = input0x1049f73a0();
   return (input * 1)+0;
}

double mlp::input0x1049f78c0() {
   double input = 0.3315;
   input += synapse0x1049f7ba0();
   input += synapse0x1049f7bd0();
   input += synapse0x1049f7c00();
   input += synapse0x1049f7c30();
   input += synapse0x1049f7c60();
   input += synapse0x1049f7c90();
   input += synapse0x1049f7cc0();
   input += synapse0x1049f7cf0();
   input += synapse0x1049f7d20();
   input += synapse0x1049f7d50();
   input += synapse0x1049f7d80();
   input += synapse0x1049f7db0();
   input += synapse0x1049f7de0();
   return input;
}

double mlp::neuron0x1049f78c0() {
   double input = input0x1049f78c0();
   return (input * 1)+0;
}

double mlp::input0x1049f7e10() {
   double input = -0.03084;
   input += synapse0x1049f80f0();
   input += synapse0x1049f8120();
   input += synapse0x1049f8150();
   input += synapse0x1049f8180();
   input += synapse0x1049f81b0();
   input += synapse0x1049f81e0();
   input += synapse0x1049f8210();
   input += synapse0x1049f8240();
   input += synapse0x1049f8270();
   input += synapse0x1049f82a0();
   input += synapse0x1049f82d0();
   input += synapse0x1049f8300();
   input += synapse0x1049f8330();
   return input;
}

double mlp::neuron0x1049f7e10() {
   double input = input0x1049f7e10();
   return (input * 1)+0;
}

double mlp::input0x1049f8360() {
   double input = -0.11223;
   input += synapse0x1049f8640();
   input += synapse0x1049f8670();
   input += synapse0x1049f86a0();
   input += synapse0x1049f86d0();
   input += synapse0x1049f8700();
   input += synapse0x1049f8730();
   input += synapse0x1049f8760();
   input += synapse0x1049f8790();
   input += synapse0x1049f87c0();
   input += synapse0x1049f87f0();
   input += synapse0x1049f8820();
   input += synapse0x1049f8850();
   input += synapse0x1049f8880();
   return input;
}

double mlp::neuron0x1049f8360() {
   double input = input0x1049f8360();
   return (input * 1)+0;
}

double mlp::input0x1049f88b0() {
   double input = 0.145333;
   input += synapse0x1049f8b90();
   input += synapse0x1049f8bc0();
   input += synapse0x1049f8bf0();
   input += synapse0x1049f8c20();
   input += synapse0x1049f8c50();
   input += synapse0x1049f8c80();
   input += synapse0x1049f8cb0();
   input += synapse0x1049f8ce0();
   input += synapse0x1049f8d10();
   input += synapse0x1049f8d40();
   input += synapse0x1049f8d70();
   input += synapse0x1049f8da0();
   input += synapse0x1049f8dd0();
   return input;
}

double mlp::neuron0x1049f88b0() {
   double input = input0x1049f88b0();
   return (input * 1)+0;
}

double mlp::synapse0x1049ea570() {
   return (neuron0x1049e3910()*-0.200297);
}

double mlp::synapse0x1049e38c0() {
   return (neuron0x1049eaec0()*0.53045);
}

double mlp::synapse0x1049eac30() {
   return (neuron0x1049eb1a0()*-0.463478);
}

double mlp::synapse0x1049eac60() {
   return (neuron0x1049eb480()*2.10776);
}

double mlp::synapse0x1049e33c0() {
   return (neuron0x1049eb760()*-0.111224);
}

double mlp::synapse0x1049e33f0() {
   return (neuron0x1049eba40()*0.00703016);
}

double mlp::synapse0x1049e3420() {
   return (neuron0x1049ebd20()*0.00952437);
}

double mlp::synapse0x1049ed3c0() {
   return (neuron0x1049ec000()*0.145881);
}

double mlp::synapse0x1049ed3f0() {
   return (neuron0x1049ec310()*-0.388584);
}

double mlp::synapse0x1049ed420() {
   return (neuron0x1049ec620()*-0.420041);
}

double mlp::synapse0x1049ed450() {
   return (neuron0x1049ec930()*0.305412);
}

double mlp::synapse0x1049ed480() {
   return (neuron0x1049ecc40()*-1.07753);
}

double mlp::synapse0x1049ed4b0() {
   return (neuron0x1049ecf50()*0.522374);
}

double mlp::synapse0x1049ed7f0() {
   return (neuron0x1049e3910()*-0.983489);
}

double mlp::synapse0x1049ed820() {
   return (neuron0x1049eaec0()*-0.372582);
}

double mlp::synapse0x1049ed850() {
   return (neuron0x1049eb1a0()*0.452032);
}

double mlp::synapse0x1049ed880() {
   return (neuron0x1049eb480()*-0.546829);
}

double mlp::synapse0x1049ed9b0() {
   return (neuron0x1049eb760()*0.195744);
}

double mlp::synapse0x1049ed9e0() {
   return (neuron0x1049eba40()*-0.280575);
}

double mlp::synapse0x1049eda10() {
   return (neuron0x1049ebd20()*0.0324079);
}

double mlp::synapse0x1049eda40() {
   return (neuron0x1049ec000()*-0.406824);
}

double mlp::synapse0x1049eda70() {
   return (neuron0x1049ec310()*0.0768373);
}

double mlp::synapse0x1049edaa0() {
   return (neuron0x1049ec620()*0.583284);
}

double mlp::synapse0x1049edad0() {
   return (neuron0x1049ec930()*0.211237);
}

double mlp::synapse0x1049edb00() {
   return (neuron0x1049ecc40()*1.16345);
}

double mlp::synapse0x1049edb30() {
   return (neuron0x1049ecf50()*-1.0015);
}

double mlp::synapse0x1049eddf0() {
   return (neuron0x1049e3910()*-0.553414);
}

double mlp::synapse0x1049ede20() {
   return (neuron0x1049eaec0()*-0.95811);
}

double mlp::synapse0x1049ede50() {
   return (neuron0x1049eb1a0()*0.280178);
}

double mlp::synapse0x1049ede80() {
   return (neuron0x1049eb480()*-0.611524);
}

double mlp::synapse0x1049edeb0() {
   return (neuron0x1049eb760()*0.152949);
}

double mlp::synapse0x1049edee0() {
   return (neuron0x1049eba40()*-0.0597253);
}

double mlp::synapse0x1049edf10() {
   return (neuron0x1049ebd20()*0.0130189);
}

double mlp::synapse0x1049ed8b0() {
   return (neuron0x1049ec000()*0.400612);
}

double mlp::synapse0x1049ed8e0() {
   return (neuron0x1049ec310()*0.219617);
}

double mlp::synapse0x1049ed910() {
   return (neuron0x1049ec620()*0.275322);
}

double mlp::synapse0x1049ed940() {
   return (neuron0x1049ec930()*-0.393815);
}

double mlp::synapse0x1049ed970() {
   return (neuron0x1049ecc40()*-0.704201);
}

double mlp::synapse0x1049ee140() {
   return (neuron0x1049ecf50()*0.348883);
}

double mlp::synapse0x1049ee580() {
   return (neuron0x1049e3910()*0.193162);
}

double mlp::synapse0x1049ee5b0() {
   return (neuron0x1049eaec0()*1.41908);
}

double mlp::synapse0x1049ee5e0() {
   return (neuron0x1049eb1a0()*0.196741);
}

double mlp::synapse0x1049ee610() {
   return (neuron0x1049eb480()*-0.0750208);
}

double mlp::synapse0x1049ee640() {
   return (neuron0x1049eb760()*0.229543);
}

double mlp::synapse0x1049ee670() {
   return (neuron0x1049eba40()*0.00129056);
}

double mlp::synapse0x1049ee6a0() {
   return (neuron0x1049ebd20()*0.128773);
}

double mlp::synapse0x1049ee6d0() {
   return (neuron0x1049ec000()*0.320851);
}

double mlp::synapse0x1049ee700() {
   return (neuron0x1049ec310()*0.233781);
}

double mlp::synapse0x1049ee730() {
   return (neuron0x1049ec620()*-0.175245);
}

double mlp::synapse0x1049ee760() {
   return (neuron0x1049ec930()*0.0331576);
}

double mlp::synapse0x1049ee790() {
   return (neuron0x1049ecc40()*-0.735012);
}

double mlp::synapse0x1049ee7c0() {
   return (neuron0x1049ecf50()*-0.0665773);
}

double mlp::synapse0x1049eea80() {
   return (neuron0x1049e3910()*1.0813);
}

double mlp::synapse0x1049eeab0() {
   return (neuron0x1049eaec0()*1.76499);
}

double mlp::synapse0x1049eeae0() {
   return (neuron0x1049eb1a0()*1.30422);
}

double mlp::synapse0x1049eeb10() {
   return (neuron0x1049eb480()*0.259713);
}

double mlp::synapse0x1049eeb40() {
   return (neuron0x1049eb760()*-0.188565);
}

double mlp::synapse0x1049eeb70() {
   return (neuron0x1049eba40()*0.207392);
}

double mlp::synapse0x1049eeba0() {
   return (neuron0x1049ebd20()*0.231398);
}

double mlp::synapse0x1049eebd0() {
   return (neuron0x1049ec000()*0.0999954);
}

double mlp::synapse0x1049eec00() {
   return (neuron0x1049ec310()*0.41235);
}

double mlp::synapse0x1049eec30() {
   return (neuron0x1049ec620()*0.203006);
}

double mlp::synapse0x1049eec60() {
   return (neuron0x1049ec930()*-0.441218);
}

double mlp::synapse0x1049eec90() {
   return (neuron0x1049ecc40()*-0.0245457);
}

double mlp::synapse0x1049eecc0() {
   return (neuron0x1049ecf50()*0.748204);
}

double mlp::synapse0x1049ee0d0() {
   return (neuron0x1049e3910()*0.207524);
}

double mlp::synapse0x1049ee100() {
   return (neuron0x1049eaec0()*-1.40281);
}

double mlp::synapse0x1049eee70() {
   return (neuron0x1049eb1a0()*-0.255013);
}

double mlp::synapse0x1049eeea0() {
   return (neuron0x1049eb480()*-0.103679);
}

double mlp::synapse0x1049eeed0() {
   return (neuron0x1049eb760()*-0.0956177);
}

double mlp::synapse0x1049eef00() {
   return (neuron0x1049eba40()*0.148753);
}

double mlp::synapse0x1049eef30() {
   return (neuron0x1049ebd20()*0.217683);
}

double mlp::synapse0x1049eef60() {
   return (neuron0x1049ec000()*0.146606);
}

double mlp::synapse0x1049eef90() {
   return (neuron0x1049ec310()*0.460343);
}

double mlp::synapse0x1049eefc0() {
   return (neuron0x1049ec620()*0.673318);
}

double mlp::synapse0x1049eeff0() {
   return (neuron0x1049ec930()*-0.696595);
}

double mlp::synapse0x1049ef020() {
   return (neuron0x1049ecc40()*2.26783);
}

double mlp::synapse0x1049ef050() {
   return (neuron0x1049ecf50()*-0.0743092);
}

double mlp::synapse0x1049ef390() {
   return (neuron0x1049e3910()*0.110644);
}

double mlp::synapse0x1049ef3c0() {
   return (neuron0x1049eaec0()*-0.727291);
}

double mlp::synapse0x1049ef3f0() {
   return (neuron0x1049eb1a0()*-0.854156);
}

double mlp::synapse0x1049ef420() {
   return (neuron0x1049eb480()*-0.0410267);
}

double mlp::synapse0x1049ef450() {
   return (neuron0x1049eb760()*0.143245);
}

double mlp::synapse0x1049ef480() {
   return (neuron0x1049eba40()*0.0837338);
}

double mlp::synapse0x1049ef4b0() {
   return (neuron0x1049ebd20()*0.0279035);
}

double mlp::synapse0x1049ef4e0() {
   return (neuron0x1049ec000()*0.0320577);
}

double mlp::synapse0x1049ef510() {
   return (neuron0x1049ec310()*-0.169199);
}

double mlp::synapse0x1049ef540() {
   return (neuron0x1049ec620()*0.514736);
}

double mlp::synapse0x1049ef570() {
   return (neuron0x1049ec930()*-0.668084);
}

double mlp::synapse0x1049ef5a0() {
   return (neuron0x1049ecc40()*0.349603);
}

double mlp::synapse0x1049ef5d0() {
   return (neuron0x1049ecf50()*0.463719);
}

double mlp::synapse0x1049ef910() {
   return (neuron0x1049e3910()*-0.471286);
}

double mlp::synapse0x1049ef940() {
   return (neuron0x1049eaec0()*0.284707);
}

double mlp::synapse0x1049ef970() {
   return (neuron0x1049eb1a0()*-0.197811);
}

double mlp::synapse0x1049ef9a0() {
   return (neuron0x1049eb480()*-1.68913);
}

double mlp::synapse0x1049ef9d0() {
   return (neuron0x1049eb760()*0.180588);
}

double mlp::synapse0x1049efa00() {
   return (neuron0x1049eba40()*-0.127329);
}

double mlp::synapse0x1049efa30() {
   return (neuron0x1049ebd20()*-0.00992944);
}

double mlp::synapse0x1049efa60() {
   return (neuron0x1049ec000()*0.0705921);
}

double mlp::synapse0x1049efa90() {
   return (neuron0x1049ec310()*-0.752549);
}

double mlp::synapse0x1049efac0() {
   return (neuron0x1049ec620()*0.33868);
}

double mlp::synapse0x1049efaf0() {
   return (neuron0x1049ec930()*-0.689701);
}

double mlp::synapse0x1049efb20() {
   return (neuron0x1049ecc40()*-1.0151);
}

double mlp::synapse0x1049efb50() {
   return (neuron0x1049ecf50()*-0.259871);
}

double mlp::synapse0x1049efe90() {
   return (neuron0x1049e3910()*0.302068);
}

double mlp::synapse0x1049efec0() {
   return (neuron0x1049eaec0()*0.826503);
}

double mlp::synapse0x1049efef0() {
   return (neuron0x1049eb1a0()*0.546641);
}

double mlp::synapse0x1049eff20() {
   return (neuron0x1049eb480()*-0.588052);
}

double mlp::synapse0x1049eff50() {
   return (neuron0x1049eb760()*0.128385);
}

double mlp::synapse0x1049eff80() {
   return (neuron0x1049eba40()*-0.135472);
}

double mlp::synapse0x1049effb0() {
   return (neuron0x1049ebd20()*-0.178724);
}

double mlp::synapse0x1049effe0() {
   return (neuron0x1049ec000()*0.152729);
}

double mlp::synapse0x1049f0010() {
   return (neuron0x1049ec310()*-0.526535);
}

double mlp::synapse0x1049f0040() {
   return (neuron0x1049ec620()*0.0581823);
}

double mlp::synapse0x1049f0070() {
   return (neuron0x1049ec930()*0.861517);
}

double mlp::synapse0x1049f00a0() {
   return (neuron0x1049ecc40()*-0.0679917);
}

double mlp::synapse0x1049f00d0() {
   return (neuron0x1049ecf50()*-0.275001);
}

double mlp::synapse0x1049f0410() {
   return (neuron0x1049e3910()*-0.224249);
}

double mlp::synapse0x1049f0440() {
   return (neuron0x1049eaec0()*-1.79356);
}

double mlp::synapse0x1049f0470() {
   return (neuron0x1049eb1a0()*-2.82147);
}

double mlp::synapse0x1049f04a0() {
   return (neuron0x1049eb480()*0.568635);
}

double mlp::synapse0x1049f04d0() {
   return (neuron0x1049eb760()*0.0846146);
}

double mlp::synapse0x1049f0500() {
   return (neuron0x1049eba40()*-0.0731371);
}

double mlp::synapse0x1049f0530() {
   return (neuron0x1049ebd20()*-0.0128642);
}

double mlp::synapse0x1049f0560() {
   return (neuron0x1049ec000()*0.018682);
}

double mlp::synapse0x1049f0590() {
   return (neuron0x1049ec310()*-0.174124);
}

double mlp::synapse0x1049f05c0() {
   return (neuron0x1049ec620()*0.363213);
}

double mlp::synapse0x1049f05f0() {
   return (neuron0x1049ec930()*1.13239);
}

double mlp::synapse0x1049f0620() {
   return (neuron0x1049ecc40()*-1.44081);
}

double mlp::synapse0x1049f0650() {
   return (neuron0x1049ecf50()*0.128214);
}

double mlp::synapse0x1049f0990() {
   return (neuron0x1049e3910()*-0.330086);
}

double mlp::synapse0x1049f09c0() {
   return (neuron0x1049eaec0()*-0.798372);
}

double mlp::synapse0x1049f09f0() {
   return (neuron0x1049eb1a0()*-0.298765);
}

double mlp::synapse0x1049f0a20() {
   return (neuron0x1049eb480()*0.565593);
}

double mlp::synapse0x1049f0a50() {
   return (neuron0x1049eb760()*0.0239345);
}

double mlp::synapse0x1049f0a80() {
   return (neuron0x1049eba40()*-0.0977286);
}

double mlp::synapse0x1049f0ab0() {
   return (neuron0x1049ebd20()*-0.0548546);
}

double mlp::synapse0x1049f0ae0() {
   return (neuron0x1049ec000()*-1.00059);
}

double mlp::synapse0x1049f0b10() {
   return (neuron0x1049ec310()*-0.463252);
}

double mlp::synapse0x1049f0b40() {
   return (neuron0x1049ec620()*-0.0371955);
}

double mlp::synapse0x1049f0b70() {
   return (neuron0x1049ec930()*1.83561);
}

double mlp::synapse0x1049f0ba0() {
   return (neuron0x1049ecc40()*0.478378);
}

double mlp::synapse0x1049f0bd0() {
   return (neuron0x1049ecf50()*-0.640703);
}

double mlp::synapse0x1049f0f10() {
   return (neuron0x1049e3910()*-0.11387);
}

double mlp::synapse0x1049f0f40() {
   return (neuron0x1049eaec0()*-0.483704);
}

double mlp::synapse0x1049f0f70() {
   return (neuron0x1049eb1a0()*-2.8594);
}

double mlp::synapse0x1049f0fa0() {
   return (neuron0x1049eb480()*0.0512444);
}

double mlp::synapse0x1049f0fd0() {
   return (neuron0x1049eb760()*-0.10003);
}

double mlp::synapse0x1049f1000() {
   return (neuron0x1049eba40()*0.0107419);
}

double mlp::synapse0x1049f1030() {
   return (neuron0x1049ebd20()*-0.512845);
}

double mlp::synapse0x1049f1060() {
   return (neuron0x1049ec000()*-0.710288);
}

double mlp::synapse0x1049f1090() {
   return (neuron0x1049ec310()*0.190845);
}

double mlp::synapse0x1049f10c0() {
   return (neuron0x1049ec620()*0.0362522);
}

double mlp::synapse0x1049f10f0() {
   return (neuron0x1049ec930()*2.47318);
}

double mlp::synapse0x1049f1120() {
   return (neuron0x1049ecc40()*-1.21032);
}

double mlp::synapse0x1049f1150() {
   return (neuron0x1049ecf50()*0.246496);
}

double mlp::synapse0x1049f1490() {
   return (neuron0x1049e3910()*-0.694395);
}

double mlp::synapse0x1049f14c0() {
   return (neuron0x1049eaec0()*-0.176396);
}

double mlp::synapse0x1049f14f0() {
   return (neuron0x1049eb1a0()*-0.0792239);
}

double mlp::synapse0x1049f1520() {
   return (neuron0x1049eb480()*0.29472);
}

double mlp::synapse0x1049f1550() {
   return (neuron0x1049eb760()*0.110704);
}

double mlp::synapse0x1049f1580() {
   return (neuron0x1049eba40()*-0.0597825);
}

double mlp::synapse0x1049f15b0() {
   return (neuron0x1049ebd20()*-0.070009);
}

double mlp::synapse0x1049f15e0() {
   return (neuron0x1049ec000()*0.167181);
}

double mlp::synapse0x1049f1610() {
   return (neuron0x1049ec310()*-0.240192);
}

double mlp::synapse0x1049f1640() {
   return (neuron0x1049ec620()*-0.454099);
}

double mlp::synapse0x1049f1670() {
   return (neuron0x1049ec930()*-0.662855);
}

double mlp::synapse0x1049f16a0() {
   return (neuron0x1049ecc40()*-0.755834);
}

double mlp::synapse0x1049f16d0() {
   return (neuron0x1049ecf50()*-0.535083);
}

double mlp::synapse0x1049f1a10() {
   return (neuron0x1049ed260()*-0.293028);
}

double mlp::synapse0x1049f1a40() {
   return (neuron0x1049ed4e0()*-0.294532);
}

double mlp::synapse0x1049f1a70() {
   return (neuron0x1049edb60()*0.0870472);
}

double mlp::synapse0x1049f1aa0() {
   return (neuron0x1049ee170()*-0.284723);
}

double mlp::synapse0x1049f1ad0() {
   return (neuron0x1049ee7f0()*-0.562067);
}

double mlp::synapse0x1049f1b00() {
   return (neuron0x1049edf40()*-0.124907);
}

double mlp::synapse0x1049f1b30() {
   return (neuron0x1049ef080()*-0.302138);
}

double mlp::synapse0x1049f1b60() {
   return (neuron0x1049ef600()*-0.65115);
}

double mlp::synapse0x1049f1b90() {
   return (neuron0x1049efb80()*-0.592413);
}

double mlp::synapse0x1049f1bc0() {
   return (neuron0x1049f0100()*-0.358808);
}

double mlp::synapse0x1049f1bf0() {
   return (neuron0x1049f0680()*0.254499);
}

double mlp::synapse0x1049f1c20() {
   return (neuron0x1049f0c00()*-0.361552);
}

double mlp::synapse0x1049f1c50() {
   return (neuron0x1049f1180()*0.0376863);
}

double mlp::synapse0x1049f1f90() {
   return (neuron0x1049ed260()*-0.390764);
}

double mlp::synapse0x1049f1fc0() {
   return (neuron0x1049ed4e0()*-0.246687);
}

double mlp::synapse0x1049f1ff0() {
   return (neuron0x1049edb60()*0.234979);
}

double mlp::synapse0x1049f2020() {
   return (neuron0x1049ee170()*-0.288791);
}

double mlp::synapse0x1049f2050() {
   return (neuron0x1049ee7f0()*-0.369646);
}

double mlp::synapse0x1049f2080() {
   return (neuron0x1049edf40()*-0.307937);
}

double mlp::synapse0x1049f20b0() {
   return (neuron0x1049ef080()*-0.0117622);
}

double mlp::synapse0x1049f20e0() {
   return (neuron0x1049ef600()*0.482788);
}

double mlp::synapse0x1049f2110() {
   return (neuron0x1049efb80()*-0.556685);
}

double mlp::synapse0x1049f2140() {
   return (neuron0x1049f0100()*-0.497211);
}

double mlp::synapse0x1049f2170() {
   return (neuron0x1049f0680()*-0.896875);
}

double mlp::synapse0x1049f21a0() {
   return (neuron0x1049f0c00()*-0.864497);
}

double mlp::synapse0x1049f21d0() {
   return (neuron0x1049f1180()*0.630391);
}

double mlp::synapse0x1049f2510() {
   return (neuron0x1049ed260()*0.0721684);
}

double mlp::synapse0x1049f2540() {
   return (neuron0x1049ed4e0()*-0.380704);
}

double mlp::synapse0x1049f2570() {
   return (neuron0x1049edb60()*0.234319);
}

double mlp::synapse0x1049f25a0() {
   return (neuron0x1049ee170()*-0.302814);
}

double mlp::synapse0x1049f25d0() {
   return (neuron0x1049ee7f0()*-0.0637795);
}

double mlp::synapse0x1049f2600() {
   return (neuron0x1049edf40()*-0.486973);
}

double mlp::synapse0x1049f2630() {
   return (neuron0x1049ef080()*-0.410552);
}

double mlp::synapse0x1049f2660() {
   return (neuron0x1049ef600()*-0.0728663);
}

double mlp::synapse0x1049f2690() {
   return (neuron0x1049efb80()*0.385513);
}

double mlp::synapse0x1049f26c0() {
   return (neuron0x1049f0100()*0.655432);
}

double mlp::synapse0x1049f26f0() {
   return (neuron0x1049f0680()*-0.0522299);
}

double mlp::synapse0x1049f2720() {
   return (neuron0x1049f0c00()*-0.236217);
}

double mlp::synapse0x1049f2750() {
   return (neuron0x1049f1180()*0.121115);
}

double mlp::synapse0x1049f2a90() {
   return (neuron0x1049ed260()*0.701214);
}

double mlp::synapse0x1049f2ac0() {
   return (neuron0x1049ed4e0()*-0.391879);
}

double mlp::synapse0x1049f2af0() {
   return (neuron0x1049edb60()*0.378343);
}

double mlp::synapse0x1049f2b20() {
   return (neuron0x1049ee170()*-0.24345);
}

double mlp::synapse0x1049f2b50() {
   return (neuron0x1049ee7f0()*-0.688665);
}

double mlp::synapse0x1049f2b80() {
   return (neuron0x1049edf40()*0.266355);
}

double mlp::synapse0x1049f2bb0() {
   return (neuron0x1049ef080()*0.22787);
}

double mlp::synapse0x1049f2be0() {
   return (neuron0x1049ef600()*-0.426577);
}

double mlp::synapse0x1049f2c10() {
   return (neuron0x1049efb80()*-0.384108);
}

double mlp::synapse0x1049f2c40() {
   return (neuron0x1049f0100()*0.0486802);
}

double mlp::synapse0x1049f2c70() {
   return (neuron0x1049f0680()*0.224303);
}

double mlp::synapse0x1049f2ca0() {
   return (neuron0x1049f0c00()*0.0403462);
}

double mlp::synapse0x1049f2cd0() {
   return (neuron0x1049f1180()*-0.00587657);
}

double mlp::synapse0x1049f3010() {
   return (neuron0x1049ed260()*-1.09376);
}

double mlp::synapse0x1049f3040() {
   return (neuron0x1049ed4e0()*-0.343438);
}

double mlp::synapse0x1049f3070() {
   return (neuron0x1049edb60()*-0.0708661);
}

double mlp::synapse0x1049f30a0() {
   return (neuron0x1049ee170()*-0.568888);
}

double mlp::synapse0x1049f30d0() {
   return (neuron0x1049ee7f0()*0.200789);
}

double mlp::synapse0x1049f3100() {
   return (neuron0x1049edf40()*-0.641199);
}

double mlp::synapse0x1049f3130() {
   return (neuron0x1049ef080()*-0.371156);
}

double mlp::synapse0x1049f3160() {
   return (neuron0x1049ef600()*-0.635616);
}

double mlp::synapse0x1049f3190() {
   return (neuron0x1049efb80()*-0.00995753);
}

double mlp::synapse0x1049f31c0() {
   return (neuron0x1049f0100()*0.779769);
}

double mlp::synapse0x1049f31f0() {
   return (neuron0x1049f0680()*0.1645);
}

double mlp::synapse0x1049f3220() {
   return (neuron0x1049f0c00()*0.220032);
}

double mlp::synapse0x1049f3250() {
   return (neuron0x1049f1180()*0.363047);
}

double mlp::synapse0x1049f3590() {
   return (neuron0x1049ed260()*-0.677473);
}

double mlp::synapse0x1049f35c0() {
   return (neuron0x1049ed4e0()*-0.163516);
}

double mlp::synapse0x1049f35f0() {
   return (neuron0x1049edb60()*-0.179924);
}

double mlp::synapse0x1049f3620() {
   return (neuron0x1049ee170()*0.390436);
}

double mlp::synapse0x1049f3650() {
   return (neuron0x1049ee7f0()*-0.350625);
}

double mlp::synapse0x1049f3680() {
   return (neuron0x1049edf40()*-0.040288);
}

double mlp::synapse0x1049f36b0() {
   return (neuron0x1049ef080()*-0.0155685);
}

double mlp::synapse0x1049f36e0() {
   return (neuron0x1049ef600()*0.18171);
}

double mlp::synapse0x1049f3710() {
   return (neuron0x1049efb80()*0.333139);
}

double mlp::synapse0x1049f3740() {
   return (neuron0x1049f0100()*-0.231982);
}

double mlp::synapse0x1049f3770() {
   return (neuron0x1049f0680()*0.071746);
}

double mlp::synapse0x1049f37a0() {
   return (neuron0x1049f0c00()*-0.272535);
}

double mlp::synapse0x1049f37d0() {
   return (neuron0x1049f1180()*-0.150802);
}

double mlp::synapse0x1049ee480() {
   return (neuron0x1049ed260()*0.208528);
}

double mlp::synapse0x1049ee4b0() {
   return (neuron0x1049ed4e0()*-0.129107);
}

double mlp::synapse0x1049ee4e0() {
   return (neuron0x1049edb60()*-0.128018);
}

double mlp::synapse0x1049ee510() {
   return (neuron0x1049ee170()*-0.181168);
}

double mlp::synapse0x1049ee540() {
   return (neuron0x1049ee7f0()*-0.597625);
}

double mlp::synapse0x1049f3d10() {
   return (neuron0x1049edf40()*-0.222431);
}

double mlp::synapse0x1049f3d40() {
   return (neuron0x1049ef080()*-0.314938);
}

double mlp::synapse0x1049f3d70() {
   return (neuron0x1049ef600()*-0.389453);
}

double mlp::synapse0x1049f3da0() {
   return (neuron0x1049efb80()*0.0593122);
}

double mlp::synapse0x1049f3dd0() {
   return (neuron0x1049f0100()*0.106389);
}

double mlp::synapse0x1049f3e00() {
   return (neuron0x1049f0680()*0.0714884);
}

double mlp::synapse0x1049f3e30() {
   return (neuron0x1049f0c00()*-0.266219);
}

double mlp::synapse0x1049f3e60() {
   return (neuron0x1049f1180()*-0.301875);
}

double mlp::synapse0x1049f41a0() {
   return (neuron0x1049ed260()*0.286346);
}

double mlp::synapse0x1049f41d0() {
   return (neuron0x1049ed4e0()*0.186508);
}

double mlp::synapse0x1049f4200() {
   return (neuron0x1049edb60()*0.507893);
}

double mlp::synapse0x1049f4230() {
   return (neuron0x1049ee170()*-0.308409);
}

double mlp::synapse0x1049f4260() {
   return (neuron0x1049ee7f0()*0.159477);
}

double mlp::synapse0x1049f4290() {
   return (neuron0x1049edf40()*0.212189);
}

double mlp::synapse0x1049f42c0() {
   return (neuron0x1049ef080()*0.351723);
}

double mlp::synapse0x1049f42f0() {
   return (neuron0x1049ef600()*0.309054);
}

double mlp::synapse0x1049f4320() {
   return (neuron0x1049efb80()*-0.547618);
}

double mlp::synapse0x1049f4350() {
   return (neuron0x1049f0100()*-0.303582);
}

double mlp::synapse0x1049f4380() {
   return (neuron0x1049f0680()*0.342782);
}

double mlp::synapse0x1049f43b0() {
   return (neuron0x1049f0c00()*-0.606161);
}

double mlp::synapse0x1049f43e0() {
   return (neuron0x1049f1180()*-0.470541);
}

double mlp::synapse0x1049f4720() {
   return (neuron0x1049ed260()*-0.0985411);
}

double mlp::synapse0x1049f4750() {
   return (neuron0x1049ed4e0()*-0.0838413);
}

double mlp::synapse0x1049f4780() {
   return (neuron0x1049edb60()*-0.0226938);
}

double mlp::synapse0x1049f47b0() {
   return (neuron0x1049ee170()*-0.500527);
}

double mlp::synapse0x1049f47e0() {
   return (neuron0x1049ee7f0()*-0.0751025);
}

double mlp::synapse0x1049f4810() {
   return (neuron0x1049edf40()*-0.137816);
}

double mlp::synapse0x1049f4840() {
   return (neuron0x1049ef080()*-0.247833);
}

double mlp::synapse0x1049f4870() {
   return (neuron0x1049ef600()*-0.192203);
}

double mlp::synapse0x1049f48a0() {
   return (neuron0x1049efb80()*-0.619771);
}

double mlp::synapse0x1049f48d0() {
   return (neuron0x1049f0100()*-0.41008);
}

double mlp::synapse0x1049f4900() {
   return (neuron0x1049f0680()*-0.0467498);
}

double mlp::synapse0x1049f4930() {
   return (neuron0x1049f0c00()*-0.111821);
}

double mlp::synapse0x1049f4960() {
   return (neuron0x1049f1180()*-0.1395);
}

double mlp::synapse0x1049f4ca0() {
   return (neuron0x1049ed260()*0.110819);
}

double mlp::synapse0x1049f4cd0() {
   return (neuron0x1049ed4e0()*1.02319);
}

double mlp::synapse0x1049f4d00() {
   return (neuron0x1049edb60()*0.302005);
}

double mlp::synapse0x1049f4d30() {
   return (neuron0x1049ee170()*-0.785327);
}

double mlp::synapse0x1049f4d60() {
   return (neuron0x1049ee7f0()*-0.647366);
}

double mlp::synapse0x1049f4d90() {
   return (neuron0x1049edf40()*1.2033);
}

double mlp::synapse0x1049f4dc0() {
   return (neuron0x1049ef080()*0.748531);
}

double mlp::synapse0x1049f4df0() {
   return (neuron0x1049ef600()*-0.585622);
}

double mlp::synapse0x1049f4e20() {
   return (neuron0x1049efb80()*-1.07327);
}

double mlp::synapse0x1049f4e50() {
   return (neuron0x1049f0100()*-1.452);
}

double mlp::synapse0x1049f4e80() {
   return (neuron0x1049f0680()*-0.480598);
}

double mlp::synapse0x1049f4eb0() {
   return (neuron0x1049f0c00()*-1.92402);
}

double mlp::synapse0x1049f4ee0() {
   return (neuron0x1049f1180()*-0.582693);
}

double mlp::synapse0x1049f5220() {
   return (neuron0x1049ed260()*0.321436);
}

double mlp::synapse0x1049f5250() {
   return (neuron0x1049ed4e0()*0.160029);
}

double mlp::synapse0x1049f5280() {
   return (neuron0x1049edb60()*-0.845807);
}

double mlp::synapse0x1049f52b0() {
   return (neuron0x1049ee170()*0.522524);
}

double mlp::synapse0x1049f52e0() {
   return (neuron0x1049ee7f0()*0.524145);
}

double mlp::synapse0x1049f5310() {
   return (neuron0x1049edf40()*0.197345);
}

double mlp::synapse0x1049f5340() {
   return (neuron0x1049ef080()*-0.453529);
}

double mlp::synapse0x1049f5370() {
   return (neuron0x1049ef600()*0.224312);
}

double mlp::synapse0x1049f53a0() {
   return (neuron0x1049efb80()*-0.0733627);
}

double mlp::synapse0x1049f53d0() {
   return (neuron0x1049f0100()*0.782197);
}

double mlp::synapse0x1049f5400() {
   return (neuron0x1049f0680()*0.182879);
}

double mlp::synapse0x1049f5430() {
   return (neuron0x1049f0c00()*0.589055);
}

double mlp::synapse0x1049f5460() {
   return (neuron0x1049f1180()*-0.0990519);
}

double mlp::synapse0x1049f57a0() {
   return (neuron0x1049ed260()*-1.14942);
}

double mlp::synapse0x1049f57d0() {
   return (neuron0x1049ed4e0()*-0.760015);
}

double mlp::synapse0x1049f5800() {
   return (neuron0x1049edb60()*-0.286385);
}

double mlp::synapse0x1049f5830() {
   return (neuron0x1049ee170()*-0.430637);
}

double mlp::synapse0x1049f5860() {
   return (neuron0x1049ee7f0()*-1.59994);
}

double mlp::synapse0x1049f5890() {
   return (neuron0x1049edf40()*0.352491);
}

double mlp::synapse0x1049f58c0() {
   return (neuron0x1049ef080()*0.441764);
}

double mlp::synapse0x1049f58f0() {
   return (neuron0x1049ef600()*-0.105425);
}

double mlp::synapse0x1049f5920() {
   return (neuron0x1049efb80()*-0.230023);
}

double mlp::synapse0x1049f5950() {
   return (neuron0x1049f0100()*1.016);
}

double mlp::synapse0x1049f5980() {
   return (neuron0x1049f0680()*-0.817346);
}

double mlp::synapse0x1049f59b0() {
   return (neuron0x1049f0c00()*0.346862);
}

double mlp::synapse0x1049f59e0() {
   return (neuron0x1049f1180()*0.46236);
}

double mlp::synapse0x1049f5d20() {
   return (neuron0x1049ed260()*-0.132259);
}

double mlp::synapse0x1049f5d50() {
   return (neuron0x1049ed4e0()*0.421925);
}

double mlp::synapse0x1049f5d80() {
   return (neuron0x1049edb60()*0.0207038);
}

double mlp::synapse0x1049f5db0() {
   return (neuron0x1049ee170()*-0.692538);
}

double mlp::synapse0x1049f5de0() {
   return (neuron0x1049ee7f0()*-0.534658);
}

double mlp::synapse0x1049f5e10() {
   return (neuron0x1049edf40()*0.89101);
}

double mlp::synapse0x1049f5e40() {
   return (neuron0x1049ef080()*-0.188079);
}

double mlp::synapse0x1049f5e70() {
   return (neuron0x1049ef600()*-0.4088);
}

double mlp::synapse0x1049f5ea0() {
   return (neuron0x1049efb80()*-0.457886);
}

double mlp::synapse0x1049f5ed0() {
   return (neuron0x1049f0100()*-0.528908);
}

double mlp::synapse0x1049f5f00() {
   return (neuron0x1049f0680()*0.814407);
}

double mlp::synapse0x1049f5f30() {
   return (neuron0x1049f0c00()*-0.291659);
}

double mlp::synapse0x1049f5f60() {
   return (neuron0x1049f1180()*0.330759);
}

double mlp::synapse0x1049e3c70() {
   return (neuron0x1049f1730()*0.138291);
}

double mlp::synapse0x1049f6170() {
   return (neuron0x1049f1c80()*0.144345);
}

double mlp::synapse0x1049f61a0() {
   return (neuron0x1049f2200()*0.373753);
}

double mlp::synapse0x1049f61d0() {
   return (neuron0x1049f2780()*0.169308);
}

double mlp::synapse0x1049f6200() {
   return (neuron0x1049f2d00()*0.347486);
}

double mlp::synapse0x1049f6230() {
   return (neuron0x1049f3280()*0.262278);
}

double mlp::synapse0x1049f6260() {
   return (neuron0x1049f3800()*0.257296);
}

double mlp::synapse0x1049f6290() {
   return (neuron0x1049f3e90()*0.169996);
}

double mlp::synapse0x1049f62c0() {
   return (neuron0x1049f4410()*-0.2378);
}

double mlp::synapse0x1049f62f0() {
   return (neuron0x1049f4990()*-0.186644);
}

double mlp::synapse0x1049f6320() {
   return (neuron0x1049f4f10()*-0.549811);
}

double mlp::synapse0x1049f6350() {
   return (neuron0x1049f5490()*-0.0145396);
}

double mlp::synapse0x1049f6380() {
   return (neuron0x1049f5a10()*-0.00476825);
}

double mlp::synapse0x1049f6690() {
   return (neuron0x1049f1730()*-0.133437);
}

double mlp::synapse0x1049f66c0() {
   return (neuron0x1049f1c80()*0.408388);
}

double mlp::synapse0x1049f66f0() {
   return (neuron0x1049f2200()*0.237261);
}

double mlp::synapse0x1049f6720() {
   return (neuron0x1049f2780()*0.281221);
}

double mlp::synapse0x1049f6750() {
   return (neuron0x1049f2d00()*-0.0346206);
}

double mlp::synapse0x1049f6780() {
   return (neuron0x1049f3280()*-0.027709);
}

double mlp::synapse0x1049f67b0() {
   return (neuron0x1049f3800()*0.011229);
}

double mlp::synapse0x1049f67e0() {
   return (neuron0x1049f3e90()*-0.364474);
}

double mlp::synapse0x1049f6810() {
   return (neuron0x1049f4410()*0.00270927);
}

double mlp::synapse0x1049f6840() {
   return (neuron0x1049f4990()*0.0970329);
}

double mlp::synapse0x1049f6870() {
   return (neuron0x1049f4f10()*0.117312);
}

double mlp::synapse0x1049f68a0() {
   return (neuron0x1049f5490()*0.376957);
}

double mlp::synapse0x1049f68d0() {
   return (neuron0x1049f5a10()*0.136498);
}

double mlp::synapse0x1049f6be0() {
   return (neuron0x1049f1730()*-0.0613799);
}

double mlp::synapse0x1049f6c10() {
   return (neuron0x1049f1c80()*0.367081);
}

double mlp::synapse0x1049f6c40() {
   return (neuron0x1049f2200()*0.302657);
}

double mlp::synapse0x1049f6c70() {
   return (neuron0x1049f2780()*-0.0160323);
}

double mlp::synapse0x1049f6ca0() {
   return (neuron0x1049f2d00()*0.564735);
}

double mlp::synapse0x1049f6cd0() {
   return (neuron0x1049f3280()*-0.198147);
}

double mlp::synapse0x1049f6d00() {
   return (neuron0x1049f3800()*-0.230026);
}

double mlp::synapse0x1049f6d30() {
   return (neuron0x1049f3e90()*0.0795301);
}

double mlp::synapse0x1049f6d60() {
   return (neuron0x1049f4410()*0.395851);
}

double mlp::synapse0x1049f6d90() {
   return (neuron0x1049f4990()*-0.375644);
}

double mlp::synapse0x1049f6dc0() {
   return (neuron0x1049f4f10()*-0.339061);
}

double mlp::synapse0x1049f6df0() {
   return (neuron0x1049f5490()*-0.981925);
}

double mlp::synapse0x1049f6e20() {
   return (neuron0x1049f5a10()*0.0827146);
}

double mlp::synapse0x1049f7130() {
   return (neuron0x1049f1730()*0.103814);
}

double mlp::synapse0x1049f7160() {
   return (neuron0x1049f1c80()*0.437901);
}

double mlp::synapse0x1049f7190() {
   return (neuron0x1049f2200()*0.0666438);
}

double mlp::synapse0x1049f71c0() {
   return (neuron0x1049f2780()*0.337246);
}

double mlp::synapse0x1049f71f0() {
   return (neuron0x1049f2d00()*-0.155122);
}

double mlp::synapse0x1049f7220() {
   return (neuron0x1049f3280()*-0.756399);
}

double mlp::synapse0x1049f7250() {
   return (neuron0x1049f3800()*-0.0700647);
}

double mlp::synapse0x1049f7280() {
   return (neuron0x1049f3e90()*0.105663);
}

double mlp::synapse0x1049f72b0() {
   return (neuron0x1049f4410()*0.248433);
}

double mlp::synapse0x1049f72e0() {
   return (neuron0x1049f4990()*-0.323118);
}

double mlp::synapse0x1049f7310() {
   return (neuron0x1049f4f10()*0.213179);
}

double mlp::synapse0x1049f7340() {
   return (neuron0x1049f5490()*-0.778976);
}

double mlp::synapse0x1049f7370() {
   return (neuron0x1049f5a10()*0.0580858);
}

double mlp::synapse0x1049e3b40() {
   return (neuron0x1049f1730()*0.476758);
}

double mlp::synapse0x1049f7680() {
   return (neuron0x1049f1c80()*-0.656582);
}

double mlp::synapse0x1049f76b0() {
   return (neuron0x1049f2200()*-0.193635);
}

double mlp::synapse0x1049f76e0() {
   return (neuron0x1049f2780()*-0.119631);
}

double mlp::synapse0x1049f7710() {
   return (neuron0x1049f2d00()*-0.411345);
}

double mlp::synapse0x1049f7740() {
   return (neuron0x1049f3280()*0.371161);
}

double mlp::synapse0x1049f7770() {
   return (neuron0x1049f3800()*0.359292);
}

double mlp::synapse0x1049f77a0() {
   return (neuron0x1049f3e90()*-0.216595);
}

double mlp::synapse0x1049f77d0() {
   return (neuron0x1049f4410()*0.538599);
}

double mlp::synapse0x1049f7800() {
   return (neuron0x1049f4990()*1.77093);
}

double mlp::synapse0x1049f7830() {
   return (neuron0x1049f4f10()*-0.143055);
}

double mlp::synapse0x1049f7860() {
   return (neuron0x1049f5490()*0.341348);
}

double mlp::synapse0x1049f7890() {
   return (neuron0x1049f5a10()*-0.54046);
}

double mlp::synapse0x1049f7ba0() {
   return (neuron0x1049f1730()*-0.191833);
}

double mlp::synapse0x1049f7bd0() {
   return (neuron0x1049f1c80()*-0.600386);
}

double mlp::synapse0x1049f7c00() {
   return (neuron0x1049f2200()*-0.665804);
}

double mlp::synapse0x1049f7c30() {
   return (neuron0x1049f2780()*0.384904);
}

double mlp::synapse0x1049f7c60() {
   return (neuron0x1049f2d00()*-1.28997);
}

double mlp::synapse0x1049f7c90() {
   return (neuron0x1049f3280()*0.169646);
}

double mlp::synapse0x1049f7cc0() {
   return (neuron0x1049f3800()*-0.0864894);
}

double mlp::synapse0x1049f7cf0() {
   return (neuron0x1049f3e90()*0.886477);
}

double mlp::synapse0x1049f7d20() {
   return (neuron0x1049f4410()*-0.0345997);
}

double mlp::synapse0x1049f7d50() {
   return (neuron0x1049f4990()*-1.41713);
}

double mlp::synapse0x1049f7d80() {
   return (neuron0x1049f4f10()*-0.159071);
}

double mlp::synapse0x1049f7db0() {
   return (neuron0x1049f5490()*-0.0151054);
}

double mlp::synapse0x1049f7de0() {
   return (neuron0x1049f5a10()*1.04382);
}

double mlp::synapse0x1049f80f0() {
   return (neuron0x1049f1730()*0.257338);
}

double mlp::synapse0x1049f8120() {
   return (neuron0x1049f1c80()*0.0540099);
}

double mlp::synapse0x1049f8150() {
   return (neuron0x1049f2200()*-0.356118);
}

double mlp::synapse0x1049f8180() {
   return (neuron0x1049f2780()*-0.713576);
}

double mlp::synapse0x1049f81b0() {
   return (neuron0x1049f2d00()*0.112248);
}

double mlp::synapse0x1049f81e0() {
   return (neuron0x1049f3280()*0.38043);
}

double mlp::synapse0x1049f8210() {
   return (neuron0x1049f3800()*-0.225683);
}

double mlp::synapse0x1049f8240() {
   return (neuron0x1049f3e90()*-0.421351);
}

double mlp::synapse0x1049f8270() {
   return (neuron0x1049f4410()*0.25987);
}

double mlp::synapse0x1049f82a0() {
   return (neuron0x1049f4990()*0.128581);
}

double mlp::synapse0x1049f82d0() {
   return (neuron0x1049f4f10()*0.628271);
}

double mlp::synapse0x1049f8300() {
   return (neuron0x1049f5490()*0.750032);
}

double mlp::synapse0x1049f8330() {
   return (neuron0x1049f5a10()*-0.19567);
}

double mlp::synapse0x1049f8640() {
   return (neuron0x1049f1730()*-0.204677);
}

double mlp::synapse0x1049f8670() {
   return (neuron0x1049f1c80()*-0.0715643);
}

double mlp::synapse0x1049f86a0() {
   return (neuron0x1049f2200()*0.0307282);
}

double mlp::synapse0x1049f86d0() {
   return (neuron0x1049f2780()*-0.999265);
}

double mlp::synapse0x1049f8700() {
   return (neuron0x1049f2d00()*0.686996);
}

double mlp::synapse0x1049f8730() {
   return (neuron0x1049f3280()*0.119451);
}

double mlp::synapse0x1049f8760() {
   return (neuron0x1049f3800()*-0.194605);
}

double mlp::synapse0x1049f8790() {
   return (neuron0x1049f3e90()*0.0733318);
}

double mlp::synapse0x1049f87c0() {
   return (neuron0x1049f4410()*0.164061);
}

double mlp::synapse0x1049f87f0() {
   return (neuron0x1049f4990()*0.158762);
}

double mlp::synapse0x1049f8820() {
   return (neuron0x1049f4f10()*0.380372);
}

double mlp::synapse0x1049f8850() {
   return (neuron0x1049f5490()*0.703076);
}

double mlp::synapse0x1049f8880() {
   return (neuron0x1049f5a10()*-0.235911);
}

double mlp::synapse0x1049f8b90() {
   return (neuron0x1049f1730()*-0.176192);
}

double mlp::synapse0x1049f8bc0() {
   return (neuron0x1049f1c80()*-0.328972);
}

double mlp::synapse0x1049f8bf0() {
   return (neuron0x1049f2200()*0.502072);
}

double mlp::synapse0x1049f8c20() {
   return (neuron0x1049f2780()*0.267286);
}

double mlp::synapse0x1049f8c50() {
   return (neuron0x1049f2d00()*-0.491141);
}

double mlp::synapse0x1049f8c80() {
   return (neuron0x1049f3280()*-0.289611);
}

double mlp::synapse0x1049f8cb0() {
   return (neuron0x1049f3800()*0.5101);
}

double mlp::synapse0x1049f8ce0() {
   return (neuron0x1049f3e90()*-0.10067);
}

double mlp::synapse0x1049f8d10() {
   return (neuron0x1049f4410()*-0.0927623);
}

double mlp::synapse0x1049f8d40() {
   return (neuron0x1049f4990()*0.150596);
}

double mlp::synapse0x1049f8d70() {
   return (neuron0x1049f4f10()*0.0788991);
}

double mlp::synapse0x1049f8da0() {
   return (neuron0x1049f5490()*-0.0148694);
}

double mlp::synapse0x1049f8dd0() {
   return (neuron0x1049f5a10()*-0.404926);
}

