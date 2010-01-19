#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19) {
   input0 = (in0 - 45.1206)/25.7883;
   input1 = (in1 - 59.0016)/112.07;
   input2 = (in2 - 42.0687)/152.315;
   input3 = (in3 - 2.2746)/0.809032;
   input4 = (in4 - -0.000706937)/1.01924;
   input5 = (in5 - 0.00044766)/1.08316;
   input6 = (in6 - 1.39504)/3.72847;
   input7 = (in7 - 0.415149)/2.69898;
   input8 = (in8 - 1.26603)/5.67241;
   input9 = (in9 - 0.0605147)/0.998167;
   input10 = (in10 - 0.00015308)/1.00219;
   input11 = (in11 - -0.257964)/0.968423;
   input12 = (in12 - 1.68203)/1.47611;
   input13 = (in13 - 0.717717)/0.45011;
   input14 = (in14 - 0.51259)/0.499841;
   input15 = (in15 - 0.182771)/0.386478;
   input16 = (in16 - 0.711877)/0.452889;
   input17 = (in17 - 1.84464)/1.00211;
   input18 = (in18 - 53.6967)/39.064;
   input19 = (in19 - 45.1206)/25.7883;
   switch(index) {
     case 0:
         return neuron0x1049d62f0();
     case 1:
         return neuron0x1049d6910();
     case 2:
         return neuron0x1049d7030();
     case 3:
         return neuron0x1049d7750();
     case 4:
         return neuron0x1049d7e70();
     case 5:
         return neuron0x1049d8560();
     case 6:
         return neuron0x1049d8c80();
     case 7:
         return neuron0x1049d93a0();
     case 8:
         return neuron0x1049d9ac0();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 45.1206)/25.7883;
   input1 = (input[1] - 59.0016)/112.07;
   input2 = (input[2] - 42.0687)/152.315;
   input3 = (input[3] - 2.2746)/0.809032;
   input4 = (input[4] - -0.000706937)/1.01924;
   input5 = (input[5] - 0.00044766)/1.08316;
   input6 = (input[6] - 1.39504)/3.72847;
   input7 = (input[7] - 0.415149)/2.69898;
   input8 = (input[8] - 1.26603)/5.67241;
   input9 = (input[9] - 0.0605147)/0.998167;
   input10 = (input[10] - 0.00015308)/1.00219;
   input11 = (input[11] - -0.257964)/0.968423;
   input12 = (input[12] - 1.68203)/1.47611;
   input13 = (input[13] - 0.717717)/0.45011;
   input14 = (input[14] - 0.51259)/0.499841;
   input15 = (input[15] - 0.182771)/0.386478;
   input16 = (input[16] - 0.711877)/0.452889;
   input17 = (input[17] - 1.84464)/1.00211;
   input18 = (input[18] - 53.6967)/39.064;
   input19 = (input[19] - 45.1206)/25.7883;
   switch(index) {
     case 0:
         return neuron0x1049d62f0();
     case 1:
         return neuron0x1049d6910();
     case 2:
         return neuron0x1049d7030();
     case 3:
         return neuron0x1049d7750();
     case 4:
         return neuron0x1049d7e70();
     case 5:
         return neuron0x1049d8560();
     case 6:
         return neuron0x1049d8c80();
     case 7:
         return neuron0x1049d93a0();
     case 8:
         return neuron0x1049d9ac0();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049c8e70() {
   return input0;
}

double mlp::neuron0x1049c8fd0() {
   return input1;
}

double mlp::neuron0x1049c9230() {
   return input2;
}

double mlp::neuron0x1049c9510() {
   return input3;
}

double mlp::neuron0x1049c97f0() {
   return input4;
}

double mlp::neuron0x1049c9ad0() {
   return input5;
}

double mlp::neuron0x1049c9db0() {
   return input6;
}

double mlp::neuron0x1049ca090() {
   return input7;
}

double mlp::neuron0x1049ca370() {
   return input8;
}

double mlp::neuron0x1049ca680() {
   return input9;
}

double mlp::neuron0x1049ca990() {
   return input10;
}

double mlp::neuron0x1049caca0() {
   return input11;
}

double mlp::neuron0x1049cafb0() {
   return input12;
}

double mlp::neuron0x1049cb2c0() {
   return input13;
}

double mlp::neuron0x1049cb5d0() {
   return input14;
}

double mlp::neuron0x1049cb8e0() {
   return input15;
}

double mlp::neuron0x1049cbbf0() {
   return input16;
}

double mlp::neuron0x1049cc100() {
   return input17;
}

double mlp::neuron0x1049cc360() {
   return input18;
}

double mlp::neuron0x1049cc640() {
   return input19;
}

double mlp::input0x1049b7090() {
   double input = -0.598478;
   input += synapse0x1049c8690();
   input += synapse0x1049b6a30();
   input += synapse0x1049c8d10();
   input += synapse0x1049c8e10();
   input += synapse0x1049c8e40();
   input += synapse0x1049b7270();
   input += synapse0x1049b72a0();
   input += synapse0x1049b72d0();
   input += synapse0x1049b7300();
   input += synapse0x1049b7330();
   input += synapse0x1049b7360();
   input += synapse0x1049b7390();
   input += synapse0x1049b73c0();
   input += synapse0x1049b73f0();
   input += synapse0x1049b7420();
   input += synapse0x1049b7450();
   input += synapse0x1049cca50();
   input += synapse0x1049c8610();
   input += synapse0x1049c8640();
   input += synapse0x1049ccb80();
   return input;
}

double mlp::neuron0x1049b7090() {
   double input = input0x1049b7090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ccbb0() {
   double input = -0.0203878;
   input += synapse0x1049cce40();
   input += synapse0x1049cce70();
   input += synapse0x1049ccea0();
   input += synapse0x1049cced0();
   input += synapse0x1049ccf00();
   input += synapse0x1049ccf30();
   input += synapse0x1049ccf60();
   input += synapse0x1049ccf90();
   input += synapse0x1049ccfc0();
   input += synapse0x1049ccff0();
   input += synapse0x1049cd020();
   input += synapse0x1049cd050();
   input += synapse0x1049cd080();
   input += synapse0x1049cca80();
   input += synapse0x1049ccab0();
   input += synapse0x1049ccae0();
   input += synapse0x1049ccb10();
   input += synapse0x1049ccb40();
   input += synapse0x1049cd3b0();
   input += synapse0x1049cd3e0();
   return input;
}

double mlp::neuron0x1049ccbb0() {
   double input = input0x1049ccbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cd410() {
   double input = -0.607637;
   input += synapse0x1049cd6a0();
   input += synapse0x1049cd6d0();
   input += synapse0x1049cd700();
   input += synapse0x1049cd730();
   input += synapse0x1049cd760();
   input += synapse0x1049cd790();
   input += synapse0x1049cd7c0();
   input += synapse0x1049cd7f0();
   input += synapse0x1049cd820();
   input += synapse0x1049cd850();
   input += synapse0x1049cd880();
   input += synapse0x1049cd8b0();
   input += synapse0x1049cd8e0();
   input += synapse0x1049cd910();
   input += synapse0x1049cd940();
   input += synapse0x1049cd970();
   input += synapse0x1049cdaa0();
   input += synapse0x1049cdad0();
   input += synapse0x1049cdb00();
   input += synapse0x1049cdb30();
   return input;
}

double mlp::neuron0x1049cd410() {
   double input = input0x1049cd410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cdb60() {
   double input = 1.28005;
   input += synapse0x1049cddf0();
   input += synapse0x1049cde20();
   input += synapse0x1049cde50();
   input += synapse0x1049cde80();
   input += synapse0x1049cdeb0();
   input += synapse0x1049cd0b0();
   input += synapse0x1049cd0e0();
   input += synapse0x1049cd110();
   input += synapse0x1049cd140();
   input += synapse0x1049cd170();
   input += synapse0x1049cd1a0();
   input += synapse0x1049cd1d0();
   input += synapse0x1049cd200();
   input += synapse0x1049cd230();
   input += synapse0x1049cd260();
   input += synapse0x1049cdee0();
   input += synapse0x1049ce010();
   input += synapse0x1049ce040();
   input += synapse0x1049ce070();
   input += synapse0x1049ce0a0();
   return input;
}

double mlp::neuron0x1049cdb60() {
   double input = input0x1049cdb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ce0d0() {
   double input = 0.914149;
   input += synapse0x1049ce360();
   input += synapse0x1049ce390();
   input += synapse0x1049ce3c0();
   input += synapse0x1049ce3f0();
   input += synapse0x1049ce420();
   input += synapse0x1049ce450();
   input += synapse0x1049ce480();
   input += synapse0x1049ce4b0();
   input += synapse0x1049ce4e0();
   input += synapse0x1049ce510();
   input += synapse0x1049ce540();
   input += synapse0x1049ce570();
   input += synapse0x1049ce5a0();
   input += synapse0x1049ce5d0();
   input += synapse0x1049ce600();
   input += synapse0x1049ce630();
   input += synapse0x1049ce760();
   input += synapse0x1049ce790();
   input += synapse0x1049ce7c0();
   input += synapse0x1049ce7f0();
   return input;
}

double mlp::neuron0x1049ce0d0() {
   double input = input0x1049ce0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ce820() {
   double input = 0.11613;
   input += synapse0x1049ceab0();
   input += synapse0x1049ceae0();
   input += synapse0x1049ceb10();
   input += synapse0x1049ceb40();
   input += synapse0x1049ceb70();
   input += synapse0x1049ceba0();
   input += synapse0x1049cebd0();
   input += synapse0x1049cec00();
   input += synapse0x1049cec30();
   input += synapse0x1049cec60();
   input += synapse0x1049cec90();
   input += synapse0x1049cecc0();
   input += synapse0x1049cecf0();
   input += synapse0x1049ced20();
   input += synapse0x1049ced50();
   input += synapse0x1049ced80();
   input += synapse0x1049ceeb0();
   input += synapse0x1049ceee0();
   input += synapse0x1049cef10();
   input += synapse0x1049cef40();
   return input;
}

double mlp::neuron0x1049ce820() {
   double input = input0x1049ce820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cef70() {
   double input = -0.385155;
   input += synapse0x1049cf200();
   input += synapse0x1049cf230();
   input += synapse0x1049cf260();
   input += synapse0x1049cf290();
   input += synapse0x1049cf2c0();
   input += synapse0x1049cf2f0();
   input += synapse0x1049cf320();
   input += synapse0x1049cf350();
   input += synapse0x1049cf380();
   input += synapse0x1049cf3b0();
   input += synapse0x1049cf3e0();
   input += synapse0x1049cf410();
   input += synapse0x1049cf440();
   input += synapse0x1049cf470();
   input += synapse0x1049cf4a0();
   input += synapse0x1049cf4d0();
   input += synapse0x1049cf600();
   input += synapse0x1049cf630();
   input += synapse0x1049cf660();
   input += synapse0x1049cf690();
   return input;
}

double mlp::neuron0x1049cef70() {
   double input = input0x1049cef70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cf6c0() {
   double input = -0.344619;
   input += synapse0x1049cf950();
   input += synapse0x1049cf980();
   input += synapse0x1049cf9b0();
   input += synapse0x1049cf9e0();
   input += synapse0x1049cfa10();
   input += synapse0x1049cfa40();
   input += synapse0x1049cfa70();
   input += synapse0x1049cfaa0();
   input += synapse0x1049cfad0();
   input += synapse0x1049cfb00();
   input += synapse0x1049cfb30();
   input += synapse0x1049cfb60();
   input += synapse0x1049cfb90();
   input += synapse0x1049cfbc0();
   input += synapse0x1049cfbf0();
   input += synapse0x1049cfc20();
   input += synapse0x1049cfd50();
   input += synapse0x1049cfd80();
   input += synapse0x1049cfdb0();
   input += synapse0x1049cfde0();
   return input;
}

double mlp::neuron0x1049cf6c0() {
   double input = input0x1049cf6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cfe10() {
   double input = 1.62631;
   input += synapse0x1049d00a0();
   input += synapse0x1049d00d0();
   input += synapse0x1049d0100();
   input += synapse0x1049d0130();
   input += synapse0x1049d0160();
   input += synapse0x1049d0190();
   input += synapse0x1049d01c0();
   input += synapse0x1049d01f0();
   input += synapse0x1049d0220();
   input += synapse0x1049d0250();
   input += synapse0x1049d0280();
   input += synapse0x1049d02b0();
   input += synapse0x1049d02e0();
   input += synapse0x1049d0310();
   input += synapse0x1049d0340();
   input += synapse0x1049d0370();
   input += synapse0x1049d04a0();
   input += synapse0x1049d04d0();
   input += synapse0x1049d0500();
   input += synapse0x1049d0530();
   return input;
}

double mlp::neuron0x1049cfe10() {
   double input = input0x1049cfe10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d0560() {
   double input = 0.197255;
   input += synapse0x1049d07f0();
   input += synapse0x1049d0820();
   input += synapse0x1049d0850();
   input += synapse0x1049d0880();
   input += synapse0x1049d08b0();
   input += synapse0x1049d08e0();
   input += synapse0x1049d0910();
   input += synapse0x1049d0940();
   input += synapse0x1049d0970();
   input += synapse0x1049d09a0();
   input += synapse0x1049d09d0();
   input += synapse0x1049d0a00();
   input += synapse0x1049d0a30();
   input += synapse0x1049d0a60();
   input += synapse0x1049d0a90();
   input += synapse0x1049d0ac0();
   input += synapse0x1049d0bf0();
   input += synapse0x1049d0c20();
   input += synapse0x1049d0c50();
   input += synapse0x1049d0c80();
   return input;
}

double mlp::neuron0x1049d0560() {
   double input = input0x1049d0560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d0cb0() {
   double input = -0.435506;
   input += synapse0x1049d0f40();
   input += synapse0x1049d0f70();
   input += synapse0x1049d0fa0();
   input += synapse0x1049d0fd0();
   input += synapse0x1049d1000();
   input += synapse0x1049d1030();
   input += synapse0x1049d1060();
   input += synapse0x1049d1090();
   input += synapse0x1049d10c0();
   input += synapse0x1049d10f0();
   input += synapse0x1049d1120();
   input += synapse0x1049d1150();
   input += synapse0x1049d1180();
   input += synapse0x1049d11b0();
   input += synapse0x1049d11e0();
   input += synapse0x1049d1210();
   input += synapse0x1049d1340();
   input += synapse0x1049d1370();
   input += synapse0x1049d13a0();
   input += synapse0x1049d13d0();
   return input;
}

double mlp::neuron0x1049d0cb0() {
   double input = input0x1049d0cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d1400() {
   double input = -0.547011;
   input += synapse0x1049d1690();
   input += synapse0x1049d16c0();
   input += synapse0x1049d16f0();
   input += synapse0x1049d1720();
   input += synapse0x1049d1750();
   input += synapse0x1049d1780();
   input += synapse0x1049d17b0();
   input += synapse0x1049d17e0();
   input += synapse0x1049d1810();
   input += synapse0x1049d1840();
   input += synapse0x1049d1870();
   input += synapse0x1049d18a0();
   input += synapse0x1049d18d0();
   input += synapse0x1049d1900();
   input += synapse0x1049d1930();
   input += synapse0x1049d1960();
   input += synapse0x1049d1a90();
   input += synapse0x1049d1ac0();
   input += synapse0x1049d1af0();
   input += synapse0x1049d1b20();
   return input;
}

double mlp::neuron0x1049d1400() {
   double input = input0x1049d1400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d1b50() {
   double input = -1.36826;
   input += synapse0x1049cc000();
   input += synapse0x1049cc030();
   input += synapse0x1049cc060();
   input += synapse0x1049cc090();
   input += synapse0x1049cc0c0();
   input += synapse0x1049d1fe0();
   input += synapse0x1049d2010();
   input += synapse0x1049d2040();
   input += synapse0x1049d2070();
   input += synapse0x1049d20a0();
   input += synapse0x1049d20d0();
   input += synapse0x1049d2100();
   input += synapse0x1049d2130();
   input += synapse0x1049d2160();
   input += synapse0x1049d2190();
   input += synapse0x1049d21c0();
   input += synapse0x1049d22f0();
   input += synapse0x1049d2320();
   input += synapse0x1049d2350();
   input += synapse0x1049d2380();
   return input;
}

double mlp::neuron0x1049d1b50() {
   double input = input0x1049d1b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d23b0() {
   double input = 1.95184;
   input += synapse0x1049d2640();
   input += synapse0x1049d2670();
   input += synapse0x1049d26a0();
   input += synapse0x1049d26d0();
   input += synapse0x1049d2700();
   input += synapse0x1049d2730();
   input += synapse0x1049d2760();
   input += synapse0x1049d2790();
   input += synapse0x1049d27c0();
   input += synapse0x1049d27f0();
   input += synapse0x1049d2820();
   input += synapse0x1049d2850();
   input += synapse0x1049d2880();
   input += synapse0x1049d28b0();
   input += synapse0x1049d28e0();
   input += synapse0x1049d2910();
   input += synapse0x1049d2a40();
   input += synapse0x1049d2a70();
   input += synapse0x1049d2aa0();
   input += synapse0x1049d2ad0();
   return input;
}

double mlp::neuron0x1049d23b0() {
   double input = input0x1049d23b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d2b00() {
   double input = 0.394151;
   input += synapse0x1049d2d90();
   input += synapse0x1049d2dc0();
   input += synapse0x1049d2df0();
   input += synapse0x1049d2e20();
   input += synapse0x1049d2e50();
   input += synapse0x1049d2e80();
   input += synapse0x1049d2eb0();
   input += synapse0x1049d2ee0();
   input += synapse0x1049d2f10();
   input += synapse0x1049d2f40();
   input += synapse0x1049d2f70();
   input += synapse0x1049d2fa0();
   input += synapse0x1049d2fd0();
   input += synapse0x1049d3000();
   input += synapse0x1049d3030();
   input += synapse0x1049d3060();
   input += synapse0x1049d3190();
   input += synapse0x1049d31c0();
   input += synapse0x1049d31f0();
   input += synapse0x1049d3220();
   return input;
}

double mlp::neuron0x1049d2b00() {
   double input = input0x1049d2b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d3250() {
   double input = -0.417787;
   input += synapse0x1049d34e0();
   input += synapse0x1049d3610();
   input += synapse0x1049b6fd0();
   input += synapse0x1049b7000();
   input += synapse0x1049b7030();
   input += synapse0x1049c96f0();
   input += synapse0x1049c9720();
   input += synapse0x1049c9cb0();
   input += synapse0x1049c9ce0();
   input += synapse0x1049ca270();
   input += synapse0x1049ca2a0();
   input += synapse0x1049ca890();
   input += synapse0x1049ca8c0();
   input += synapse0x1049caeb0();
   input += synapse0x1049caee0();
   input += synapse0x1049cb4d0();
   input += synapse0x1049cb500();
   input += synapse0x1049abc90();
   input += synapse0x1049abcc0();
   input += synapse0x1049cc260();
   return input;
}

double mlp::neuron0x1049d3250() {
   double input = input0x1049d3250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d4a40() {
   double input = 0.198855;
   input += synapse0x1049cbaf0();
   input += synapse0x1049cbb20();
   input += synapse0x1049cb7e0();
   input += synapse0x1049cb810();
   input += synapse0x1049cb1c0();
   input += synapse0x1049cb1f0();
   input += synapse0x1049caba0();
   input += synapse0x1049cabd0();
   input += synapse0x1049ca580();
   input += synapse0x1049ca5b0();
   input += synapse0x1049c9f90();
   input += synapse0x1049c9fc0();
   input += synapse0x1049c99d0();
   input += synapse0x1049c9a00();
   input += synapse0x1049c9410();
   input += synapse0x1049c9440();
   input += synapse0x1049c9130();
   input += synapse0x1049c9160();
   input += synapse0x1049d4ca0();
   input += synapse0x1049d4cd0();
   return input;
}

double mlp::neuron0x1049d4a40() {
   double input = input0x1049d4a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d4d00() {
   double input = -0.0809724;
   input += synapse0x1049d4f90();
   input += synapse0x1049d4fc0();
   input += synapse0x1049d4ff0();
   input += synapse0x1049d5020();
   input += synapse0x1049d5050();
   input += synapse0x1049d5080();
   input += synapse0x1049d50b0();
   input += synapse0x1049d50e0();
   input += synapse0x1049d5110();
   input += synapse0x1049d5140();
   input += synapse0x1049d5170();
   input += synapse0x1049d51a0();
   input += synapse0x1049d51d0();
   input += synapse0x1049d5200();
   input += synapse0x1049d5230();
   input += synapse0x1049d5260();
   input += synapse0x1049d5390();
   input += synapse0x1049d53c0();
   input += synapse0x1049d53f0();
   input += synapse0x1049d5420();
   return input;
}

double mlp::neuron0x1049d4d00() {
   double input = input0x1049d4d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d5450() {
   double input = -0.541566;
   input += synapse0x1049d56e0();
   input += synapse0x1049d5710();
   input += synapse0x1049d5740();
   input += synapse0x1049d5770();
   input += synapse0x1049d57a0();
   input += synapse0x1049d57d0();
   input += synapse0x1049d5800();
   input += synapse0x1049d5830();
   input += synapse0x1049d5860();
   input += synapse0x1049d5890();
   input += synapse0x1049d58c0();
   input += synapse0x1049d58f0();
   input += synapse0x1049d5920();
   input += synapse0x1049d5950();
   input += synapse0x1049d5980();
   input += synapse0x1049d59b0();
   input += synapse0x1049d5ae0();
   input += synapse0x1049d5b10();
   input += synapse0x1049d5b40();
   input += synapse0x1049d5b70();
   return input;
}

double mlp::neuron0x1049d5450() {
   double input = input0x1049d5450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d5ba0() {
   double input = -0.683501;
   input += synapse0x1049d5e30();
   input += synapse0x1049d5e60();
   input += synapse0x1049d5e90();
   input += synapse0x1049d5ec0();
   input += synapse0x1049d5ef0();
   input += synapse0x1049d5f20();
   input += synapse0x1049d5f50();
   input += synapse0x1049d5f80();
   input += synapse0x1049d5fb0();
   input += synapse0x1049d5fe0();
   input += synapse0x1049d6010();
   input += synapse0x1049d6040();
   input += synapse0x1049d6070();
   input += synapse0x1049d60a0();
   input += synapse0x1049d60d0();
   input += synapse0x1049d6100();
   input += synapse0x1049d6230();
   input += synapse0x1049d6260();
   input += synapse0x1049d6290();
   input += synapse0x1049d62c0();
   return input;
}

double mlp::neuron0x1049d5ba0() {
   double input = input0x1049d5ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d62f0() {
   double input = 0.179533;
   input += synapse0x1049d6450();
   input += synapse0x1049d6480();
   input += synapse0x1049d64b0();
   input += synapse0x1049d64e0();
   input += synapse0x1049d6510();
   input += synapse0x1049d6540();
   input += synapse0x1049d6570();
   input += synapse0x1049d65a0();
   input += synapse0x1049d65d0();
   input += synapse0x1049d6600();
   input += synapse0x1049d6630();
   input += synapse0x1049d6660();
   input += synapse0x1049d6690();
   input += synapse0x1049d66c0();
   input += synapse0x1049d66f0();
   input += synapse0x1049d6720();
   input += synapse0x1049d6850();
   input += synapse0x1049d6880();
   input += synapse0x1049d68b0();
   input += synapse0x1049d68e0();
   return input;
}

double mlp::neuron0x1049d62f0() {
   double input = input0x1049d62f0();
   return (input * 1)+0;
}

double mlp::input0x1049d6910() {
   double input = 0.0907779;
   input += synapse0x1049d6b70();
   input += synapse0x1049d6ba0();
   input += synapse0x1049d6bd0();
   input += synapse0x1049d6c00();
   input += synapse0x1049d6c30();
   input += synapse0x1049d6c60();
   input += synapse0x1049d6c90();
   input += synapse0x1049d6cc0();
   input += synapse0x1049d6cf0();
   input += synapse0x1049d6d20();
   input += synapse0x1049d6d50();
   input += synapse0x1049d6d80();
   input += synapse0x1049d6db0();
   input += synapse0x1049d6de0();
   input += synapse0x1049d6e10();
   input += synapse0x1049d6e40();
   input += synapse0x1049d6f70();
   input += synapse0x1049d6fa0();
   input += synapse0x1049d6fd0();
   input += synapse0x1049d7000();
   return input;
}

double mlp::neuron0x1049d6910() {
   double input = input0x1049d6910();
   return (input * 1)+0;
}

double mlp::input0x1049d7030() {
   double input = 0.492936;
   input += synapse0x1049d7290();
   input += synapse0x1049d72c0();
   input += synapse0x1049d72f0();
   input += synapse0x1049d7320();
   input += synapse0x1049d7350();
   input += synapse0x1049d7380();
   input += synapse0x1049d73b0();
   input += synapse0x1049d73e0();
   input += synapse0x1049d7410();
   input += synapse0x1049d7440();
   input += synapse0x1049d7470();
   input += synapse0x1049d74a0();
   input += synapse0x1049d74d0();
   input += synapse0x1049d7500();
   input += synapse0x1049d7530();
   input += synapse0x1049d7560();
   input += synapse0x1049d7690();
   input += synapse0x1049d76c0();
   input += synapse0x1049d76f0();
   input += synapse0x1049d7720();
   return input;
}

double mlp::neuron0x1049d7030() {
   double input = input0x1049d7030();
   return (input * 1)+0;
}

double mlp::input0x1049d7750() {
   double input = 0.350679;
   input += synapse0x1049d79b0();
   input += synapse0x1049d79e0();
   input += synapse0x1049d7a10();
   input += synapse0x1049d7a40();
   input += synapse0x1049d7a70();
   input += synapse0x1049d7aa0();
   input += synapse0x1049d7ad0();
   input += synapse0x1049d7b00();
   input += synapse0x1049d7b30();
   input += synapse0x1049d7b60();
   input += synapse0x1049d7b90();
   input += synapse0x1049d7bc0();
   input += synapse0x1049d7bf0();
   input += synapse0x1049d7c20();
   input += synapse0x1049d7c50();
   input += synapse0x1049d7c80();
   input += synapse0x1049d7db0();
   input += synapse0x1049d7de0();
   input += synapse0x1049d7e10();
   input += synapse0x1049d7e40();
   return input;
}

double mlp::neuron0x1049d7750() {
   double input = input0x1049d7750();
   return (input * 1)+0;
}

double mlp::input0x1049d7e70() {
   double input = -0.351867;
   input += synapse0x1049b68f0();
   input += synapse0x1049d80d0();
   input += synapse0x1049d8100();
   input += synapse0x1049d8130();
   input += synapse0x1049d8160();
   input += synapse0x1049d8190();
   input += synapse0x1049d81c0();
   input += synapse0x1049d81f0();
   input += synapse0x1049d8220();
   input += synapse0x1049d8250();
   input += synapse0x1049d8280();
   input += synapse0x1049d82b0();
   input += synapse0x1049d82e0();
   input += synapse0x1049d8310();
   input += synapse0x1049d8340();
   input += synapse0x1049d8370();
   input += synapse0x1049d84a0();
   input += synapse0x1049d84d0();
   input += synapse0x1049d8500();
   input += synapse0x1049d8530();
   return input;
}

double mlp::neuron0x1049d7e70() {
   double input = input0x1049d7e70();
   return (input * 1)+0;
}

double mlp::input0x1049d8560() {
   double input = -0.367546;
   input += synapse0x1049d87c0();
   input += synapse0x1049d87f0();
   input += synapse0x1049d8820();
   input += synapse0x1049d8850();
   input += synapse0x1049d8880();
   input += synapse0x1049d88b0();
   input += synapse0x1049d88e0();
   input += synapse0x1049d8910();
   input += synapse0x1049d8940();
   input += synapse0x1049d8970();
   input += synapse0x1049d89a0();
   input += synapse0x1049d89d0();
   input += synapse0x1049d8a00();
   input += synapse0x1049d8a30();
   input += synapse0x1049d8a60();
   input += synapse0x1049d8a90();
   input += synapse0x1049d8bc0();
   input += synapse0x1049d8bf0();
   input += synapse0x1049d8c20();
   input += synapse0x1049d8c50();
   return input;
}

double mlp::neuron0x1049d8560() {
   double input = input0x1049d8560();
   return (input * 1)+0;
}

double mlp::input0x1049d8c80() {
   double input = 0.0751218;
   input += synapse0x1049d8ee0();
   input += synapse0x1049d8f10();
   input += synapse0x1049d8f40();
   input += synapse0x1049d8f70();
   input += synapse0x1049d8fa0();
   input += synapse0x1049d8fd0();
   input += synapse0x1049d9000();
   input += synapse0x1049d9030();
   input += synapse0x1049d9060();
   input += synapse0x1049d9090();
   input += synapse0x1049d90c0();
   input += synapse0x1049d90f0();
   input += synapse0x1049d9120();
   input += synapse0x1049d9150();
   input += synapse0x1049d9180();
   input += synapse0x1049d91b0();
   input += synapse0x1049d92e0();
   input += synapse0x1049d9310();
   input += synapse0x1049d9340();
   input += synapse0x1049d9370();
   return input;
}

double mlp::neuron0x1049d8c80() {
   double input = input0x1049d8c80();
   return (input * 1)+0;
}

double mlp::input0x1049d93a0() {
   double input = 0.0441974;
   input += synapse0x1049d9600();
   input += synapse0x1049d9630();
   input += synapse0x1049d9660();
   input += synapse0x1049d9690();
   input += synapse0x1049d96c0();
   input += synapse0x1049d96f0();
   input += synapse0x1049d9720();
   input += synapse0x1049d9750();
   input += synapse0x1049d9780();
   input += synapse0x1049d97b0();
   input += synapse0x1049d97e0();
   input += synapse0x1049d9810();
   input += synapse0x1049d9840();
   input += synapse0x1049d9870();
   input += synapse0x1049d98a0();
   input += synapse0x1049d98d0();
   input += synapse0x1049d9a00();
   input += synapse0x1049d9a30();
   input += synapse0x1049d9a60();
   input += synapse0x1049d9a90();
   return input;
}

double mlp::neuron0x1049d93a0() {
   double input = input0x1049d93a0();
   return (input * 1)+0;
}

double mlp::input0x1049d9ac0() {
   double input = 0.548445;
   input += synapse0x1049d9d20();
   input += synapse0x1049d9d50();
   input += synapse0x1049d9d80();
   input += synapse0x1049d9db0();
   input += synapse0x1049d9de0();
   input += synapse0x1049d9e10();
   input += synapse0x1049d9e40();
   input += synapse0x1049d9e70();
   input += synapse0x1049d9ea0();
   input += synapse0x1049d9ed0();
   input += synapse0x1049d9f00();
   input += synapse0x1049d9f30();
   input += synapse0x1049d9f60();
   input += synapse0x1049d9f90();
   input += synapse0x1049d9fc0();
   input += synapse0x1049d9ff0();
   input += synapse0x1049da120();
   input += synapse0x1049da150();
   input += synapse0x1049da180();
   input += synapse0x1049da1b0();
   return input;
}

double mlp::neuron0x1049d9ac0() {
   double input = input0x1049d9ac0();
   return (input * 1)+0;
}

double mlp::synapse0x1049c8690() {
   return (neuron0x1049c8e70()*-0.303518);
}

double mlp::synapse0x1049b6a30() {
   return (neuron0x1049c8fd0()*0.659859);
}

double mlp::synapse0x1049c8d10() {
   return (neuron0x1049c9230()*-0.241466);
}

double mlp::synapse0x1049c8e10() {
   return (neuron0x1049c9510()*-0.409998);
}

double mlp::synapse0x1049c8e40() {
   return (neuron0x1049c97f0()*-0.0572088);
}

double mlp::synapse0x1049b7270() {
   return (neuron0x1049c9ad0()*0.00354512);
}

double mlp::synapse0x1049b72a0() {
   return (neuron0x1049c9db0()*0.0961727);
}

double mlp::synapse0x1049b72d0() {
   return (neuron0x1049ca090()*0.355562);
}

double mlp::synapse0x1049b7300() {
   return (neuron0x1049ca370()*0.298917);
}

double mlp::synapse0x1049b7330() {
   return (neuron0x1049ca680()*-0.0502412);
}

double mlp::synapse0x1049b7360() {
   return (neuron0x1049ca990()*-0.021012);
}

double mlp::synapse0x1049b7390() {
   return (neuron0x1049caca0()*0.0298364);
}

double mlp::synapse0x1049b73c0() {
   return (neuron0x1049cafb0()*0.290989);
}

double mlp::synapse0x1049b73f0() {
   return (neuron0x1049cb2c0()*0.803082);
}

double mlp::synapse0x1049b7420() {
   return (neuron0x1049cb5d0()*0.0570526);
}

double mlp::synapse0x1049b7450() {
   return (neuron0x1049cb8e0()*0.133022);
}

double mlp::synapse0x1049cca50() {
   return (neuron0x1049cbbf0()*-0.535138);
}

double mlp::synapse0x1049c8610() {
   return (neuron0x1049cc100()*0.0579532);
}

double mlp::synapse0x1049c8640() {
   return (neuron0x1049cc360()*0.360461);
}

double mlp::synapse0x1049ccb80() {
   return (neuron0x1049cc640()*-0.436246);
}

double mlp::synapse0x1049cce40() {
   return (neuron0x1049c8e70()*-0.0824921);
}

double mlp::synapse0x1049cce70() {
   return (neuron0x1049c8fd0()*-0.548445);
}

double mlp::synapse0x1049ccea0() {
   return (neuron0x1049c9230()*-0.151718);
}

double mlp::synapse0x1049cced0() {
   return (neuron0x1049c9510()*-0.620902);
}

double mlp::synapse0x1049ccf00() {
   return (neuron0x1049c97f0()*0.103639);
}

double mlp::synapse0x1049ccf30() {
   return (neuron0x1049c9ad0()*-0.00945097);
}

double mlp::synapse0x1049ccf60() {
   return (neuron0x1049c9db0()*-0.175128);
}

double mlp::synapse0x1049ccf90() {
   return (neuron0x1049ca090()*0.258142);
}

double mlp::synapse0x1049ccfc0() {
   return (neuron0x1049ca370()*0.333134);
}

double mlp::synapse0x1049ccff0() {
   return (neuron0x1049ca680()*-0.0796119);
}

double mlp::synapse0x1049cd020() {
   return (neuron0x1049ca990()*-0.0902796);
}

double mlp::synapse0x1049cd050() {
   return (neuron0x1049caca0()*0.0937524);
}

double mlp::synapse0x1049cd080() {
   return (neuron0x1049cafb0()*-0.531153);
}

double mlp::synapse0x1049cca80() {
   return (neuron0x1049cb2c0()*-0.49107);
}

double mlp::synapse0x1049ccab0() {
   return (neuron0x1049cb5d0()*-0.134081);
}

double mlp::synapse0x1049ccae0() {
   return (neuron0x1049cb8e0()*-0.0493274);
}

double mlp::synapse0x1049ccb10() {
   return (neuron0x1049cbbf0()*0.150774);
}

double mlp::synapse0x1049ccb40() {
   return (neuron0x1049cc100()*-0.380192);
}

double mlp::synapse0x1049cd3b0() {
   return (neuron0x1049cc360()*-0.112575);
}

double mlp::synapse0x1049cd3e0() {
   return (neuron0x1049cc640()*0.271121);
}

double mlp::synapse0x1049cd6a0() {
   return (neuron0x1049c8e70()*-0.477764);
}

double mlp::synapse0x1049cd6d0() {
   return (neuron0x1049c8fd0()*-1.53736);
}

double mlp::synapse0x1049cd700() {
   return (neuron0x1049c9230()*-0.314132);
}

double mlp::synapse0x1049cd730() {
   return (neuron0x1049c9510()*0.778381);
}

double mlp::synapse0x1049cd760() {
   return (neuron0x1049c97f0()*0.0330072);
}

double mlp::synapse0x1049cd790() {
   return (neuron0x1049c9ad0()*-0.0356215);
}

double mlp::synapse0x1049cd7c0() {
   return (neuron0x1049c9db0()*-0.425099);
}

double mlp::synapse0x1049cd7f0() {
   return (neuron0x1049ca090()*-0.447854);
}

double mlp::synapse0x1049cd820() {
   return (neuron0x1049ca370()*-0.223146);
}

double mlp::synapse0x1049cd850() {
   return (neuron0x1049ca680()*0.0955949);
}

double mlp::synapse0x1049cd880() {
   return (neuron0x1049ca990()*-0.0153297);
}

double mlp::synapse0x1049cd8b0() {
   return (neuron0x1049caca0()*-0.129075);
}

double mlp::synapse0x1049cd8e0() {
   return (neuron0x1049cafb0()*-0.123876);
}

double mlp::synapse0x1049cd910() {
   return (neuron0x1049cb2c0()*0.332533);
}

double mlp::synapse0x1049cd940() {
   return (neuron0x1049cb5d0()*0.230344);
}

double mlp::synapse0x1049cd970() {
   return (neuron0x1049cb8e0()*-0.247612);
}

double mlp::synapse0x1049cdaa0() {
   return (neuron0x1049cbbf0()*-0.34498);
}

double mlp::synapse0x1049cdad0() {
   return (neuron0x1049cc100()*0.873577);
}

double mlp::synapse0x1049cdb00() {
   return (neuron0x1049cc360()*-0.816865);
}

double mlp::synapse0x1049cdb30() {
   return (neuron0x1049cc640()*0.145873);
}

double mlp::synapse0x1049cddf0() {
   return (neuron0x1049c8e70()*-0.492733);
}

double mlp::synapse0x1049cde20() {
   return (neuron0x1049c8fd0()*-0.0257934);
}

double mlp::synapse0x1049cde50() {
   return (neuron0x1049c9230()*-0.818687);
}

double mlp::synapse0x1049cde80() {
   return (neuron0x1049c9510()*0.74581);
}

double mlp::synapse0x1049cdeb0() {
   return (neuron0x1049c97f0()*-0.0138417);
}

double mlp::synapse0x1049cd0b0() {
   return (neuron0x1049c9ad0()*-0.0334694);
}

double mlp::synapse0x1049cd0e0() {
   return (neuron0x1049c9db0()*-0.529062);
}

double mlp::synapse0x1049cd110() {
   return (neuron0x1049ca090()*-0.440654);
}

double mlp::synapse0x1049cd140() {
   return (neuron0x1049ca370()*-0.360687);
}

double mlp::synapse0x1049cd170() {
   return (neuron0x1049ca680()*0.1527);
}

double mlp::synapse0x1049cd1a0() {
   return (neuron0x1049ca990()*0.032694);
}

double mlp::synapse0x1049cd1d0() {
   return (neuron0x1049caca0()*-0.0439752);
}

double mlp::synapse0x1049cd200() {
   return (neuron0x1049cafb0()*0.15351);
}

double mlp::synapse0x1049cd230() {
   return (neuron0x1049cb2c0()*-0.105751);
}

double mlp::synapse0x1049cd260() {
   return (neuron0x1049cb5d0()*0.152698);
}

double mlp::synapse0x1049cdee0() {
   return (neuron0x1049cb8e0()*0.109606);
}

double mlp::synapse0x1049ce010() {
   return (neuron0x1049cbbf0()*0.0727698);
}

double mlp::synapse0x1049ce040() {
   return (neuron0x1049cc100()*0.946098);
}

double mlp::synapse0x1049ce070() {
   return (neuron0x1049cc360()*-0.545052);
}

double mlp::synapse0x1049ce0a0() {
   return (neuron0x1049cc640()*-0.23471);
}

double mlp::synapse0x1049ce360() {
   return (neuron0x1049c8e70()*-0.174647);
}

double mlp::synapse0x1049ce390() {
   return (neuron0x1049c8fd0()*0.488104);
}

double mlp::synapse0x1049ce3c0() {
   return (neuron0x1049c9230()*1.20088);
}

double mlp::synapse0x1049ce3f0() {
   return (neuron0x1049c9510()*-0.645022);
}

double mlp::synapse0x1049ce420() {
   return (neuron0x1049c97f0()*-0.0290324);
}

double mlp::synapse0x1049ce450() {
   return (neuron0x1049c9ad0()*0.0270107);
}

double mlp::synapse0x1049ce480() {
   return (neuron0x1049c9db0()*0.432436);
}

double mlp::synapse0x1049ce4b0() {
   return (neuron0x1049ca090()*0.275407);
}

double mlp::synapse0x1049ce4e0() {
   return (neuron0x1049ca370()*0.155869);
}

double mlp::synapse0x1049ce510() {
   return (neuron0x1049ca680()*0.0711224);
}

double mlp::synapse0x1049ce540() {
   return (neuron0x1049ca990()*0.0118231);
}

double mlp::synapse0x1049ce570() {
   return (neuron0x1049caca0()*0.107286);
}

double mlp::synapse0x1049ce5a0() {
   return (neuron0x1049cafb0()*0.266825);
}

double mlp::synapse0x1049ce5d0() {
   return (neuron0x1049cb2c0()*-0.202919);
}

double mlp::synapse0x1049ce600() {
   return (neuron0x1049cb5d0()*-0.224547);
}

double mlp::synapse0x1049ce630() {
   return (neuron0x1049cb8e0()*-0.392012);
}

double mlp::synapse0x1049ce760() {
   return (neuron0x1049cbbf0()*0.311985);
}

double mlp::synapse0x1049ce790() {
   return (neuron0x1049cc100()*-0.71462);
}

double mlp::synapse0x1049ce7c0() {
   return (neuron0x1049cc360()*2.01684);
}

double mlp::synapse0x1049ce7f0() {
   return (neuron0x1049cc640()*-0.182793);
}

double mlp::synapse0x1049ceab0() {
   return (neuron0x1049c8e70()*-0.0807675);
}

double mlp::synapse0x1049ceae0() {
   return (neuron0x1049c8fd0()*0.644819);
}

double mlp::synapse0x1049ceb10() {
   return (neuron0x1049c9230()*0.0443033);
}

double mlp::synapse0x1049ceb40() {
   return (neuron0x1049c9510()*0.0685423);
}

double mlp::synapse0x1049ceb70() {
   return (neuron0x1049c97f0()*0.0436082);
}

double mlp::synapse0x1049ceba0() {
   return (neuron0x1049c9ad0()*-0.0275389);
}

double mlp::synapse0x1049cebd0() {
   return (neuron0x1049c9db0()*0.0694486);
}

double mlp::synapse0x1049cec00() {
   return (neuron0x1049ca090()*0.23564);
}

double mlp::synapse0x1049cec30() {
   return (neuron0x1049ca370()*0.121344);
}

double mlp::synapse0x1049cec60() {
   return (neuron0x1049ca680()*0.0369783);
}

double mlp::synapse0x1049cec90() {
   return (neuron0x1049ca990()*-0.0712478);
}

double mlp::synapse0x1049cecc0() {
   return (neuron0x1049caca0()*0.210281);
}

double mlp::synapse0x1049cecf0() {
   return (neuron0x1049cafb0()*0.0366614);
}

double mlp::synapse0x1049ced20() {
   return (neuron0x1049cb2c0()*0.0210963);
}

double mlp::synapse0x1049ced50() {
   return (neuron0x1049cb5d0()*0.164646);
}

double mlp::synapse0x1049ced80() {
   return (neuron0x1049cb8e0()*-0.0966746);
}

double mlp::synapse0x1049ceeb0() {
   return (neuron0x1049cbbf0()*0.104867);
}

double mlp::synapse0x1049ceee0() {
   return (neuron0x1049cc100()*-0.434439);
}

double mlp::synapse0x1049cef10() {
   return (neuron0x1049cc360()*0.547199);
}

double mlp::synapse0x1049cef40() {
   return (neuron0x1049cc640()*0.233689);
}

double mlp::synapse0x1049cf200() {
   return (neuron0x1049c8e70()*-0.392574);
}

double mlp::synapse0x1049cf230() {
   return (neuron0x1049c8fd0()*-0.389406);
}

double mlp::synapse0x1049cf260() {
   return (neuron0x1049c9230()*-0.241439);
}

double mlp::synapse0x1049cf290() {
   return (neuron0x1049c9510()*0.22801);
}

double mlp::synapse0x1049cf2c0() {
   return (neuron0x1049c97f0()*0.0826867);
}

double mlp::synapse0x1049cf2f0() {
   return (neuron0x1049c9ad0()*-0.125931);
}

double mlp::synapse0x1049cf320() {
   return (neuron0x1049c9db0()*-0.00928397);
}

double mlp::synapse0x1049cf350() {
   return (neuron0x1049ca090()*-0.292508);
}

double mlp::synapse0x1049cf380() {
   return (neuron0x1049ca370()*0.0065277);
}

double mlp::synapse0x1049cf3b0() {
   return (neuron0x1049ca680()*0.139315);
}

double mlp::synapse0x1049cf3e0() {
   return (neuron0x1049ca990()*-0.189434);
}

double mlp::synapse0x1049cf410() {
   return (neuron0x1049caca0()*0.024123);
}

double mlp::synapse0x1049cf440() {
   return (neuron0x1049cafb0()*-0.0850616);
}

double mlp::synapse0x1049cf470() {
   return (neuron0x1049cb2c0()*-0.0184871);
}

double mlp::synapse0x1049cf4a0() {
   return (neuron0x1049cb5d0()*0.410923);
}

double mlp::synapse0x1049cf4d0() {
   return (neuron0x1049cb8e0()*0.19515);
}

double mlp::synapse0x1049cf600() {
   return (neuron0x1049cbbf0()*-0.137318);
}

double mlp::synapse0x1049cf630() {
   return (neuron0x1049cc100()*-0.177826);
}

double mlp::synapse0x1049cf660() {
   return (neuron0x1049cc360()*-0.212863);
}

double mlp::synapse0x1049cf690() {
   return (neuron0x1049cc640()*-0.00928545);
}

double mlp::synapse0x1049cf950() {
   return (neuron0x1049c8e70()*-0.0519464);
}

double mlp::synapse0x1049cf980() {
   return (neuron0x1049c8fd0()*-3.49076);
}

double mlp::synapse0x1049cf9b0() {
   return (neuron0x1049c9230()*-2.54829);
}

double mlp::synapse0x1049cf9e0() {
   return (neuron0x1049c9510()*0.21317);
}

double mlp::synapse0x1049cfa10() {
   return (neuron0x1049c97f0()*0.0187747);
}

double mlp::synapse0x1049cfa40() {
   return (neuron0x1049c9ad0()*0.00420232);
}

double mlp::synapse0x1049cfa70() {
   return (neuron0x1049c9db0()*-0.0300256);
}

double mlp::synapse0x1049cfaa0() {
   return (neuron0x1049ca090()*-0.244532);
}

double mlp::synapse0x1049cfad0() {
   return (neuron0x1049ca370()*-0.282012);
}

double mlp::synapse0x1049cfb00() {
   return (neuron0x1049ca680()*0.00808174);
}

double mlp::synapse0x1049cfb30() {
   return (neuron0x1049ca990()*-0.0379076);
}

double mlp::synapse0x1049cfb60() {
   return (neuron0x1049caca0()*-0.0503933);
}

double mlp::synapse0x1049cfb90() {
   return (neuron0x1049cafb0()*-0.225294);
}

double mlp::synapse0x1049cfbc0() {
   return (neuron0x1049cb2c0()*0.0853398);
}

double mlp::synapse0x1049cfbf0() {
   return (neuron0x1049cb5d0()*0.035266);
}

double mlp::synapse0x1049cfc20() {
   return (neuron0x1049cb8e0()*-0.24555);
}

double mlp::synapse0x1049cfd50() {
   return (neuron0x1049cbbf0()*-0.102811);
}

double mlp::synapse0x1049cfd80() {
   return (neuron0x1049cc100()*0.502143);
}

double mlp::synapse0x1049cfdb0() {
   return (neuron0x1049cc360()*-0.518702);
}

double mlp::synapse0x1049cfde0() {
   return (neuron0x1049cc640()*0.062884);
}

double mlp::synapse0x1049d00a0() {
   return (neuron0x1049c8e70()*0.538552);
}

double mlp::synapse0x1049d00d0() {
   return (neuron0x1049c8fd0()*-0.67214);
}

double mlp::synapse0x1049d0100() {
   return (neuron0x1049c9230()*0.103205);
}

double mlp::synapse0x1049d0130() {
   return (neuron0x1049c9510()*-1.18158);
}

double mlp::synapse0x1049d0160() {
   return (neuron0x1049c97f0()*0.0133441);
}

double mlp::synapse0x1049d0190() {
   return (neuron0x1049c9ad0()*0.00470343);
}

double mlp::synapse0x1049d01c0() {
   return (neuron0x1049c9db0()*0.149694);
}

double mlp::synapse0x1049d01f0() {
   return (neuron0x1049ca090()*-0.300159);
}

double mlp::synapse0x1049d0220() {
   return (neuron0x1049ca370()*-0.147227);
}

double mlp::synapse0x1049d0250() {
   return (neuron0x1049ca680()*0.170741);
}

double mlp::synapse0x1049d0280() {
   return (neuron0x1049ca990()*0.0503587);
}

double mlp::synapse0x1049d02b0() {
   return (neuron0x1049caca0()*0.238976);
}

double mlp::synapse0x1049d02e0() {
   return (neuron0x1049cafb0()*0.319886);
}

double mlp::synapse0x1049d0310() {
   return (neuron0x1049cb2c0()*-0.314418);
}

double mlp::synapse0x1049d0340() {
   return (neuron0x1049cb5d0()*-0.0230742);
}

double mlp::synapse0x1049d0370() {
   return (neuron0x1049cb8e0()*-0.376608);
}

double mlp::synapse0x1049d04a0() {
   return (neuron0x1049cbbf0()*0.323464);
}

double mlp::synapse0x1049d04d0() {
   return (neuron0x1049cc100()*0.150906);
}

double mlp::synapse0x1049d0500() {
   return (neuron0x1049cc360()*-0.202479);
}

double mlp::synapse0x1049d0530() {
   return (neuron0x1049cc640()*0.793797);
}

double mlp::synapse0x1049d07f0() {
   return (neuron0x1049c8e70()*-0.890726);
}

double mlp::synapse0x1049d0820() {
   return (neuron0x1049c8fd0()*-0.335936);
}

double mlp::synapse0x1049d0850() {
   return (neuron0x1049c9230()*-0.166833);
}

double mlp::synapse0x1049d0880() {
   return (neuron0x1049c9510()*-0.720763);
}

double mlp::synapse0x1049d08b0() {
   return (neuron0x1049c97f0()*-0.0157043);
}

double mlp::synapse0x1049d08e0() {
   return (neuron0x1049c9ad0()*0.052804);
}

double mlp::synapse0x1049d0910() {
   return (neuron0x1049c9db0()*-0.209864);
}

double mlp::synapse0x1049d0940() {
   return (neuron0x1049ca090()*-0.220524);
}

double mlp::synapse0x1049d0970() {
   return (neuron0x1049ca370()*0.17548);
}

double mlp::synapse0x1049d09a0() {
   return (neuron0x1049ca680()*0.072775);
}

double mlp::synapse0x1049d09d0() {
   return (neuron0x1049ca990()*0.0778559);
}

double mlp::synapse0x1049d0a00() {
   return (neuron0x1049caca0()*0.155557);
}

double mlp::synapse0x1049d0a30() {
   return (neuron0x1049cafb0()*0.486911);
}

double mlp::synapse0x1049d0a60() {
   return (neuron0x1049cb2c0()*-0.376725);
}

double mlp::synapse0x1049d0a90() {
   return (neuron0x1049cb5d0()*-0.0774264);
}

double mlp::synapse0x1049d0ac0() {
   return (neuron0x1049cb8e0()*-0.189653);
}

double mlp::synapse0x1049d0bf0() {
   return (neuron0x1049cbbf0()*0.0408582);
}

double mlp::synapse0x1049d0c20() {
   return (neuron0x1049cc100()*-0.66476);
}

double mlp::synapse0x1049d0c50() {
   return (neuron0x1049cc360()*0.594522);
}

double mlp::synapse0x1049d0c80() {
   return (neuron0x1049cc640()*-0.918045);
}

double mlp::synapse0x1049d0f40() {
   return (neuron0x1049c8e70()*-1.03751);
}

double mlp::synapse0x1049d0f70() {
   return (neuron0x1049c8fd0()*-0.407464);
}

double mlp::synapse0x1049d0fa0() {
   return (neuron0x1049c9230()*0.480502);
}

double mlp::synapse0x1049d0fd0() {
   return (neuron0x1049c9510()*0.0832442);
}

double mlp::synapse0x1049d1000() {
   return (neuron0x1049c97f0()*-0.0349982);
}

double mlp::synapse0x1049d1030() {
   return (neuron0x1049c9ad0()*0.0209028);
}

double mlp::synapse0x1049d1060() {
   return (neuron0x1049c9db0()*-0.0265957);
}

double mlp::synapse0x1049d1090() {
   return (neuron0x1049ca090()*0.356973);
}

double mlp::synapse0x1049d10c0() {
   return (neuron0x1049ca370()*0.181969);
}

double mlp::synapse0x1049d10f0() {
   return (neuron0x1049ca680()*0.0738441);
}

double mlp::synapse0x1049d1120() {
   return (neuron0x1049ca990()*-0.0126145);
}

double mlp::synapse0x1049d1150() {
   return (neuron0x1049caca0()*0.0450399);
}

double mlp::synapse0x1049d1180() {
   return (neuron0x1049cafb0()*0.129214);
}

double mlp::synapse0x1049d11b0() {
   return (neuron0x1049cb2c0()*0.158059);
}

double mlp::synapse0x1049d11e0() {
   return (neuron0x1049cb5d0()*-0.0561326);
}

double mlp::synapse0x1049d1210() {
   return (neuron0x1049cb8e0()*-0.0161033);
}

double mlp::synapse0x1049d1340() {
   return (neuron0x1049cbbf0()*-0.0665613);
}

double mlp::synapse0x1049d1370() {
   return (neuron0x1049cc100()*0.153088);
}

double mlp::synapse0x1049d13a0() {
   return (neuron0x1049cc360()*1.89759);
}

double mlp::synapse0x1049d13d0() {
   return (neuron0x1049cc640()*-1.45301);
}

double mlp::synapse0x1049d1690() {
   return (neuron0x1049c8e70()*-0.266112);
}

double mlp::synapse0x1049d16c0() {
   return (neuron0x1049c8fd0()*-0.755437);
}

double mlp::synapse0x1049d16f0() {
   return (neuron0x1049c9230()*-0.262585);
}

double mlp::synapse0x1049d1720() {
   return (neuron0x1049c9510()*-0.377482);
}

double mlp::synapse0x1049d1750() {
   return (neuron0x1049c97f0()*-0.031653);
}

double mlp::synapse0x1049d1780() {
   return (neuron0x1049c9ad0()*-0.00210295);
}

double mlp::synapse0x1049d17b0() {
   return (neuron0x1049c9db0()*-0.143221);
}

double mlp::synapse0x1049d17e0() {
   return (neuron0x1049ca090()*-0.0900635);
}

double mlp::synapse0x1049d1810() {
   return (neuron0x1049ca370()*-0.23707);
}

double mlp::synapse0x1049d1840() {
   return (neuron0x1049ca680()*0.117073);
}

double mlp::synapse0x1049d1870() {
   return (neuron0x1049ca990()*0.0722696);
}

double mlp::synapse0x1049d18a0() {
   return (neuron0x1049caca0()*-0.123107);
}

double mlp::synapse0x1049d18d0() {
   return (neuron0x1049cafb0()*0.264364);
}

double mlp::synapse0x1049d1900() {
   return (neuron0x1049cb2c0()*0.495698);
}

double mlp::synapse0x1049d1930() {
   return (neuron0x1049cb5d0()*0.185559);
}

double mlp::synapse0x1049d1960() {
   return (neuron0x1049cb8e0()*0.112655);
}

double mlp::synapse0x1049d1a90() {
   return (neuron0x1049cbbf0()*0.0476918);
}

double mlp::synapse0x1049d1ac0() {
   return (neuron0x1049cc100()*0.355609);
}

double mlp::synapse0x1049d1af0() {
   return (neuron0x1049cc360()*-0.303607);
}

double mlp::synapse0x1049d1b20() {
   return (neuron0x1049cc640()*0.189651);
}

double mlp::synapse0x1049cc000() {
   return (neuron0x1049c8e70()*0.504645);
}

double mlp::synapse0x1049cc030() {
   return (neuron0x1049c8fd0()*-2.28158);
}

double mlp::synapse0x1049cc060() {
   return (neuron0x1049c9230()*-1.98087);
}

double mlp::synapse0x1049cc090() {
   return (neuron0x1049c9510()*0.169347);
}

double mlp::synapse0x1049cc0c0() {
   return (neuron0x1049c97f0()*0.0236015);
}

double mlp::synapse0x1049d1fe0() {
   return (neuron0x1049c9ad0()*-0.00544743);
}

double mlp::synapse0x1049d2010() {
   return (neuron0x1049c9db0()*-0.233309);
}

double mlp::synapse0x1049d2040() {
   return (neuron0x1049ca090()*-0.110936);
}

double mlp::synapse0x1049d2070() {
   return (neuron0x1049ca370()*-0.318925);
}

double mlp::synapse0x1049d20a0() {
   return (neuron0x1049ca680()*0.0440441);
}

double mlp::synapse0x1049d20d0() {
   return (neuron0x1049ca990()*-0.00905429);
}

double mlp::synapse0x1049d2100() {
   return (neuron0x1049caca0()*-0.107734);
}

double mlp::synapse0x1049d2130() {
   return (neuron0x1049cafb0()*-0.249108);
}

double mlp::synapse0x1049d2160() {
   return (neuron0x1049cb2c0()*0.187774);
}

double mlp::synapse0x1049d2190() {
   return (neuron0x1049cb5d0()*0.140772);
}

double mlp::synapse0x1049d21c0() {
   return (neuron0x1049cb8e0()*-0.0577253);
}

double mlp::synapse0x1049d22f0() {
   return (neuron0x1049cbbf0()*-0.126092);
}

double mlp::synapse0x1049d2320() {
   return (neuron0x1049cc100()*0.934111);
}

double mlp::synapse0x1049d2350() {
   return (neuron0x1049cc360()*-1.92215);
}

double mlp::synapse0x1049d2380() {
   return (neuron0x1049cc640()*-0.0925943);
}

double mlp::synapse0x1049d2640() {
   return (neuron0x1049c8e70()*0.351521);
}

double mlp::synapse0x1049d2670() {
   return (neuron0x1049c8fd0()*2.19259);
}

double mlp::synapse0x1049d26a0() {
   return (neuron0x1049c9230()*0.44893);
}

double mlp::synapse0x1049d26d0() {
   return (neuron0x1049c9510()*0.157731);
}

double mlp::synapse0x1049d2700() {
   return (neuron0x1049c97f0()*0.00835403);
}

double mlp::synapse0x1049d2730() {
   return (neuron0x1049c9ad0()*-0.000624118);
}

double mlp::synapse0x1049d2760() {
   return (neuron0x1049c9db0()*0.0340389);
}

double mlp::synapse0x1049d2790() {
   return (neuron0x1049ca090()*-0.0559534);
}

double mlp::synapse0x1049d27c0() {
   return (neuron0x1049ca370()*-0.0188344);
}

double mlp::synapse0x1049d27f0() {
   return (neuron0x1049ca680()*-0.0153819);
}

double mlp::synapse0x1049d2820() {
   return (neuron0x1049ca990()*-0.00801106);
}

double mlp::synapse0x1049d2850() {
   return (neuron0x1049caca0()*-0.0735197);
}

double mlp::synapse0x1049d2880() {
   return (neuron0x1049cafb0()*0.0477519);
}

double mlp::synapse0x1049d28b0() {
   return (neuron0x1049cb2c0()*-0.01804);
}

double mlp::synapse0x1049d28e0() {
   return (neuron0x1049cb5d0()*0.067373);
}

double mlp::synapse0x1049d2910() {
   return (neuron0x1049cb8e0()*0.162505);
}

double mlp::synapse0x1049d2a40() {
   return (neuron0x1049cbbf0()*-0.0930711);
}

double mlp::synapse0x1049d2a70() {
   return (neuron0x1049cc100()*-0.788959);
}

double mlp::synapse0x1049d2aa0() {
   return (neuron0x1049cc360()*-0.0947753);
}

double mlp::synapse0x1049d2ad0() {
   return (neuron0x1049cc640()*0.0981384);
}

double mlp::synapse0x1049d2d90() {
   return (neuron0x1049c8e70()*0.706247);
}

double mlp::synapse0x1049d2dc0() {
   return (neuron0x1049c8fd0()*0.864215);
}

double mlp::synapse0x1049d2df0() {
   return (neuron0x1049c9230()*0.352055);
}

double mlp::synapse0x1049d2e20() {
   return (neuron0x1049c9510()*0.325571);
}

double mlp::synapse0x1049d2e50() {
   return (neuron0x1049c97f0()*-0.0062495);
}

double mlp::synapse0x1049d2e80() {
   return (neuron0x1049c9ad0()*0.0238405);
}

double mlp::synapse0x1049d2eb0() {
   return (neuron0x1049c9db0()*0.147967);
}

double mlp::synapse0x1049d2ee0() {
   return (neuron0x1049ca090()*-0.204484);
}

double mlp::synapse0x1049d2f10() {
   return (neuron0x1049ca370()*-0.156029);
}

double mlp::synapse0x1049d2f40() {
   return (neuron0x1049ca680()*-0.108668);
}

double mlp::synapse0x1049d2f70() {
   return (neuron0x1049ca990()*0.0135841);
}

double mlp::synapse0x1049d2fa0() {
   return (neuron0x1049caca0()*0.1958);
}

double mlp::synapse0x1049d2fd0() {
   return (neuron0x1049cafb0()*0.355623);
}

double mlp::synapse0x1049d3000() {
   return (neuron0x1049cb2c0()*-0.0800031);
}

double mlp::synapse0x1049d3030() {
   return (neuron0x1049cb5d0()*-0.197384);
}

double mlp::synapse0x1049d3060() {
   return (neuron0x1049cb8e0()*-0.411354);
}

double mlp::synapse0x1049d3190() {
   return (neuron0x1049cbbf0()*0.145119);
}

double mlp::synapse0x1049d31c0() {
   return (neuron0x1049cc100()*0.863648);
}

double mlp::synapse0x1049d31f0() {
   return (neuron0x1049cc360()*-0.411374);
}

double mlp::synapse0x1049d3220() {
   return (neuron0x1049cc640()*0.882404);
}

double mlp::synapse0x1049d34e0() {
   return (neuron0x1049c8e70()*-0.114478);
}

double mlp::synapse0x1049d3610() {
   return (neuron0x1049c8fd0()*0.246486);
}

double mlp::synapse0x1049b6fd0() {
   return (neuron0x1049c9230()*0.319761);
}

double mlp::synapse0x1049b7000() {
   return (neuron0x1049c9510()*-0.346218);
}

double mlp::synapse0x1049b7030() {
   return (neuron0x1049c97f0()*-0.0435187);
}

double mlp::synapse0x1049c96f0() {
   return (neuron0x1049c9ad0()*0.140198);
}

double mlp::synapse0x1049c9720() {
   return (neuron0x1049c9db0()*-0.308838);
}

double mlp::synapse0x1049c9cb0() {
   return (neuron0x1049ca090()*-0.0634489);
}

double mlp::synapse0x1049c9ce0() {
   return (neuron0x1049ca370()*-0.178135);
}

double mlp::synapse0x1049ca270() {
   return (neuron0x1049ca680()*0.057434);
}

double mlp::synapse0x1049ca2a0() {
   return (neuron0x1049ca990()*0.0784058);
}

double mlp::synapse0x1049ca890() {
   return (neuron0x1049caca0()*0.132012);
}

double mlp::synapse0x1049ca8c0() {
   return (neuron0x1049cafb0()*-0.0881471);
}

double mlp::synapse0x1049caeb0() {
   return (neuron0x1049cb2c0()*-0.0733282);
}

double mlp::synapse0x1049caee0() {
   return (neuron0x1049cb5d0()*-0.0849228);
}

double mlp::synapse0x1049cb4d0() {
   return (neuron0x1049cb8e0()*-0.283037);
}

double mlp::synapse0x1049cb500() {
   return (neuron0x1049cbbf0()*0.36617);
}

double mlp::synapse0x1049abc90() {
   return (neuron0x1049cc100()*-0.145701);
}

double mlp::synapse0x1049abcc0() {
   return (neuron0x1049cc360()*0.281462);
}

double mlp::synapse0x1049cc260() {
   return (neuron0x1049cc640()*-0.1087);
}

double mlp::synapse0x1049cbaf0() {
   return (neuron0x1049c8e70()*-0.175478);
}

double mlp::synapse0x1049cbb20() {
   return (neuron0x1049c8fd0()*-0.73361);
}

double mlp::synapse0x1049cb7e0() {
   return (neuron0x1049c9230()*-0.46084);
}

double mlp::synapse0x1049cb810() {
   return (neuron0x1049c9510()*0.694569);
}

double mlp::synapse0x1049cb1c0() {
   return (neuron0x1049c97f0()*-0.00330705);
}

double mlp::synapse0x1049cb1f0() {
   return (neuron0x1049c9ad0()*-0.00481937);
}

double mlp::synapse0x1049caba0() {
   return (neuron0x1049c9db0()*-0.0122973);
}

double mlp::synapse0x1049cabd0() {
   return (neuron0x1049ca090()*-0.11393);
}

double mlp::synapse0x1049ca580() {
   return (neuron0x1049ca370()*-0.126771);
}

double mlp::synapse0x1049ca5b0() {
   return (neuron0x1049ca680()*0.00790325);
}

double mlp::synapse0x1049c9f90() {
   return (neuron0x1049ca990()*-0.0201474);
}

double mlp::synapse0x1049c9fc0() {
   return (neuron0x1049caca0()*-0.197247);
}

double mlp::synapse0x1049c99d0() {
   return (neuron0x1049cafb0()*-0.654058);
}

double mlp::synapse0x1049c9a00() {
   return (neuron0x1049cb2c0()*0.323539);
}

double mlp::synapse0x1049c9410() {
   return (neuron0x1049cb5d0()*0.00649829);
}

double mlp::synapse0x1049c9440() {
   return (neuron0x1049cb8e0()*0.470004);
}

double mlp::synapse0x1049c9130() {
   return (neuron0x1049cbbf0()*-1.49468);
}

double mlp::synapse0x1049c9160() {
   return (neuron0x1049cc100()*0.387446);
}

double mlp::synapse0x1049d4ca0() {
   return (neuron0x1049cc360()*-0.841028);
}

double mlp::synapse0x1049d4cd0() {
   return (neuron0x1049cc640()*0.0746818);
}

double mlp::synapse0x1049d4f90() {
   return (neuron0x1049c8e70()*-0.761885);
}

double mlp::synapse0x1049d4fc0() {
   return (neuron0x1049c8fd0()*-0.270061);
}

double mlp::synapse0x1049d4ff0() {
   return (neuron0x1049c9230()*0.334234);
}

double mlp::synapse0x1049d5020() {
   return (neuron0x1049c9510()*-0.105924);
}

double mlp::synapse0x1049d5050() {
   return (neuron0x1049c97f0()*0.0308543);
}

double mlp::synapse0x1049d5080() {
   return (neuron0x1049c9ad0()*-0.0157566);
}

double mlp::synapse0x1049d50b0() {
   return (neuron0x1049c9db0()*-0.11004);
}

double mlp::synapse0x1049d50e0() {
   return (neuron0x1049ca090()*-0.100173);
}

double mlp::synapse0x1049d5110() {
   return (neuron0x1049ca370()*0.123337);
}

double mlp::synapse0x1049d5140() {
   return (neuron0x1049ca680()*0.151974);
}

double mlp::synapse0x1049d5170() {
   return (neuron0x1049ca990()*-0.030711);
}

double mlp::synapse0x1049d51a0() {
   return (neuron0x1049caca0()*-0.0748346);
}

double mlp::synapse0x1049d51d0() {
   return (neuron0x1049cafb0()*-0.302978);
}

double mlp::synapse0x1049d5200() {
   return (neuron0x1049cb2c0()*0.130364);
}

double mlp::synapse0x1049d5230() {
   return (neuron0x1049cb5d0()*-0.0124014);
}

double mlp::synapse0x1049d5260() {
   return (neuron0x1049cb8e0()*0.079515);
}

double mlp::synapse0x1049d5390() {
   return (neuron0x1049cbbf0()*-1.04119);
}

double mlp::synapse0x1049d53c0() {
   return (neuron0x1049cc100()*0.14713);
}

double mlp::synapse0x1049d53f0() {
   return (neuron0x1049cc360()*0.379888);
}

double mlp::synapse0x1049d5420() {
   return (neuron0x1049cc640()*-0.182103);
}

double mlp::synapse0x1049d56e0() {
   return (neuron0x1049c8e70()*-0.438683);
}

double mlp::synapse0x1049d5710() {
   return (neuron0x1049c8fd0()*-0.56023);
}

double mlp::synapse0x1049d5740() {
   return (neuron0x1049c9230()*-0.201325);
}

double mlp::synapse0x1049d5770() {
   return (neuron0x1049c9510()*0.582077);
}

double mlp::synapse0x1049d57a0() {
   return (neuron0x1049c97f0()*0.0261648);
}

double mlp::synapse0x1049d57d0() {
   return (neuron0x1049c9ad0()*-0.0154511);
}

double mlp::synapse0x1049d5800() {
   return (neuron0x1049c9db0()*-0.123035);
}

double mlp::synapse0x1049d5830() {
   return (neuron0x1049ca090()*-0.261477);
}

double mlp::synapse0x1049d5860() {
   return (neuron0x1049ca370()*-0.0315517);
}

double mlp::synapse0x1049d5890() {
   return (neuron0x1049ca680()*0.018982);
}

double mlp::synapse0x1049d58c0() {
   return (neuron0x1049ca990()*-0.0775968);
}

double mlp::synapse0x1049d58f0() {
   return (neuron0x1049caca0()*0.240485);
}

double mlp::synapse0x1049d5920() {
   return (neuron0x1049cafb0()*-0.620995);
}

double mlp::synapse0x1049d5950() {
   return (neuron0x1049cb2c0()*-0.0636843);
}

double mlp::synapse0x1049d5980() {
   return (neuron0x1049cb5d0()*0.112746);
}

double mlp::synapse0x1049d59b0() {
   return (neuron0x1049cb8e0()*-0.0306656);
}

double mlp::synapse0x1049d5ae0() {
   return (neuron0x1049cbbf0()*-0.554652);
}

double mlp::synapse0x1049d5b10() {
   return (neuron0x1049cc100()*0.212868);
}

double mlp::synapse0x1049d5b40() {
   return (neuron0x1049cc360()*-0.120769);
}

double mlp::synapse0x1049d5b70() {
   return (neuron0x1049cc640()*0.192665);
}

double mlp::synapse0x1049d5e30() {
   return (neuron0x1049c8e70()*0.679913);
}

double mlp::synapse0x1049d5e60() {
   return (neuron0x1049c8fd0()*1.93959);
}

double mlp::synapse0x1049d5e90() {
   return (neuron0x1049c9230()*-0.456547);
}

double mlp::synapse0x1049d5ec0() {
   return (neuron0x1049c9510()*0.349075);
}

double mlp::synapse0x1049d5ef0() {
   return (neuron0x1049c97f0()*3.91389e-05);
}

double mlp::synapse0x1049d5f20() {
   return (neuron0x1049c9ad0()*-0.0102466);
}

double mlp::synapse0x1049d5f50() {
   return (neuron0x1049c9db0()*0.0370851);
}

double mlp::synapse0x1049d5f80() {
   return (neuron0x1049ca090()*0.042414);
}

double mlp::synapse0x1049d5fb0() {
   return (neuron0x1049ca370()*0.0350288);
}

double mlp::synapse0x1049d5fe0() {
   return (neuron0x1049ca680()*-0.101748);
}

double mlp::synapse0x1049d6010() {
   return (neuron0x1049ca990()*0.0200359);
}

double mlp::synapse0x1049d6040() {
   return (neuron0x1049caca0()*-0.0294261);
}

double mlp::synapse0x1049d6070() {
   return (neuron0x1049cafb0()*-0.0456137);
}

double mlp::synapse0x1049d60a0() {
   return (neuron0x1049cb2c0()*0.16865);
}

double mlp::synapse0x1049d60d0() {
   return (neuron0x1049cb5d0()*0.00939359);
}

double mlp::synapse0x1049d6100() {
   return (neuron0x1049cb8e0()*0.182294);
}

double mlp::synapse0x1049d6230() {
   return (neuron0x1049cbbf0()*0.0876385);
}

double mlp::synapse0x1049d6260() {
   return (neuron0x1049cc100()*-0.458488);
}

double mlp::synapse0x1049d6290() {
   return (neuron0x1049cc360()*-0.628857);
}

double mlp::synapse0x1049d62c0() {
   return (neuron0x1049cc640()*0.570229);
}

double mlp::synapse0x1049d6450() {
   return (neuron0x1049b7090()*-0.0338744);
}

double mlp::synapse0x1049d6480() {
   return (neuron0x1049ccbb0()*-0.029574);
}

double mlp::synapse0x1049d64b0() {
   return (neuron0x1049cd410()*-0.0114859);
}

double mlp::synapse0x1049d64e0() {
   return (neuron0x1049cdb60()*-0.0312242);
}

double mlp::synapse0x1049d6510() {
   return (neuron0x1049ce0d0()*-0.0433207);
}

double mlp::synapse0x1049d6540() {
   return (neuron0x1049ce820()*0.0368905);
}

double mlp::synapse0x1049d6570() {
   return (neuron0x1049cef70()*0.0417057);
}

double mlp::synapse0x1049d65a0() {
   return (neuron0x1049cf6c0()*0.0360345);
}

double mlp::synapse0x1049d65d0() {
   return (neuron0x1049cfe10()*-0.0858229);
}

double mlp::synapse0x1049d6600() {
   return (neuron0x1049d0560()*0.0621513);
}

double mlp::synapse0x1049d6630() {
   return (neuron0x1049d0cb0()*-0.0410898);
}

double mlp::synapse0x1049d6660() {
   return (neuron0x1049d1400()*-0.0249945);
}

double mlp::synapse0x1049d6690() {
   return (neuron0x1049d1b50()*-0.0481083);
}

double mlp::synapse0x1049d66c0() {
   return (neuron0x1049d23b0()*-0.04217);
}

double mlp::synapse0x1049d66f0() {
   return (neuron0x1049d2b00()*-0.00276223);
}

double mlp::synapse0x1049d6720() {
   return (neuron0x1049d3250()*0.0662814);
}

double mlp::synapse0x1049d6850() {
   return (neuron0x1049d4a40()*0.107211);
}

double mlp::synapse0x1049d6880() {
   return (neuron0x1049d4d00()*-0.0639839);
}

double mlp::synapse0x1049d68b0() {
   return (neuron0x1049d5450()*-0.112522);
}

double mlp::synapse0x1049d68e0() {
   return (neuron0x1049d5ba0()*-0.0481363);
}

double mlp::synapse0x1049d6b70() {
   return (neuron0x1049b7090()*-0.064971);
}

double mlp::synapse0x1049d6ba0() {
   return (neuron0x1049ccbb0()*-0.00271964);
}

double mlp::synapse0x1049d6bd0() {
   return (neuron0x1049cd410()*-0.049966);
}

double mlp::synapse0x1049d6c00() {
   return (neuron0x1049cdb60()*-0.0125594);
}

double mlp::synapse0x1049d6c30() {
   return (neuron0x1049ce0d0()*-0.0401322);
}

double mlp::synapse0x1049d6c60() {
   return (neuron0x1049ce820()*0.0739398);
}

double mlp::synapse0x1049d6c90() {
   return (neuron0x1049cef70()*0.0216437);
}

double mlp::synapse0x1049d6cc0() {
   return (neuron0x1049cf6c0()*0.0397441);
}

double mlp::synapse0x1049d6cf0() {
   return (neuron0x1049cfe10()*-0.0949935);
}

double mlp::synapse0x1049d6d20() {
   return (neuron0x1049d0560()*0.0580591);
}

double mlp::synapse0x1049d6d50() {
   return (neuron0x1049d0cb0()*-0.000241584);
}

double mlp::synapse0x1049d6d80() {
   return (neuron0x1049d1400()*0.0379187);
}

double mlp::synapse0x1049d6db0() {
   return (neuron0x1049d1b50()*-0.0150515);
}

double mlp::synapse0x1049d6de0() {
   return (neuron0x1049d23b0()*-0.0168917);
}

double mlp::synapse0x1049d6e10() {
   return (neuron0x1049d2b00()*0.0261573);
}

double mlp::synapse0x1049d6e40() {
   return (neuron0x1049d3250()*0.0139896);
}

double mlp::synapse0x1049d6f70() {
   return (neuron0x1049d4a40()*0.106413);
}

double mlp::synapse0x1049d6fa0() {
   return (neuron0x1049d4d00()*-0.0559487);
}

double mlp::synapse0x1049d6fd0() {
   return (neuron0x1049d5450()*-0.0960633);
}

double mlp::synapse0x1049d7000() {
   return (neuron0x1049d5ba0()*-0.0537715);
}

double mlp::synapse0x1049d7290() {
   return (neuron0x1049b7090()*-0.00401363);
}

double mlp::synapse0x1049d72c0() {
   return (neuron0x1049ccbb0()*-0.0352834);
}

double mlp::synapse0x1049d72f0() {
   return (neuron0x1049cd410()*-0.0280869);
}

double mlp::synapse0x1049d7320() {
   return (neuron0x1049cdb60()*-0.0367347);
}

double mlp::synapse0x1049d7350() {
   return (neuron0x1049ce0d0()*-0.118645);
}

double mlp::synapse0x1049d7380() {
   return (neuron0x1049ce820()*-0.0805358);
}

double mlp::synapse0x1049d73b0() {
   return (neuron0x1049cef70()*0.174719);
}

double mlp::synapse0x1049d73e0() {
   return (neuron0x1049cf6c0()*-0.0901387);
}

double mlp::synapse0x1049d7410() {
   return (neuron0x1049cfe10()*-0.0590879);
}

double mlp::synapse0x1049d7440() {
   return (neuron0x1049d0560()*0.0200054);
}

double mlp::synapse0x1049d7470() {
   return (neuron0x1049d0cb0()*-0.077218);
}

double mlp::synapse0x1049d74a0() {
   return (neuron0x1049d1400()*-0.0675202);
}

double mlp::synapse0x1049d74d0() {
   return (neuron0x1049d1b50()*-0.165383);
}

double mlp::synapse0x1049d7500() {
   return (neuron0x1049d23b0()*-0.215924);
}

double mlp::synapse0x1049d7530() {
   return (neuron0x1049d2b00()*0.00722976);
}

double mlp::synapse0x1049d7560() {
   return (neuron0x1049d3250()*0.138991);
}

double mlp::synapse0x1049d7690() {
   return (neuron0x1049d4a40()*0.192463);
}

double mlp::synapse0x1049d76c0() {
   return (neuron0x1049d4d00()*-0.134265);
}

double mlp::synapse0x1049d76f0() {
   return (neuron0x1049d5450()*-0.141261);
}

double mlp::synapse0x1049d7720() {
   return (neuron0x1049d5ba0()*-0.0512209);
}

double mlp::synapse0x1049d79b0() {
   return (neuron0x1049b7090()*-0.0485732);
}

double mlp::synapse0x1049d79e0() {
   return (neuron0x1049ccbb0()*-0.003388);
}

double mlp::synapse0x1049d7a10() {
   return (neuron0x1049cd410()*-0.0613675);
}

double mlp::synapse0x1049d7a40() {
   return (neuron0x1049cdb60()*-0.00299063);
}

double mlp::synapse0x1049d7a70() {
   return (neuron0x1049ce0d0()*-0.110935);
}

double mlp::synapse0x1049d7aa0() {
   return (neuron0x1049ce820()*0.0475662);
}

double mlp::synapse0x1049d7ad0() {
   return (neuron0x1049cef70()*0.142533);
}

double mlp::synapse0x1049d7b00() {
   return (neuron0x1049cf6c0()*-0.0259771);
}

double mlp::synapse0x1049d7b30() {
   return (neuron0x1049cfe10()*-0.103355);
}

double mlp::synapse0x1049d7b60() {
   return (neuron0x1049d0560()*0.021188);
}

double mlp::synapse0x1049d7b90() {
   return (neuron0x1049d0cb0()*-0.0501299);
}

double mlp::synapse0x1049d7bc0() {
   return (neuron0x1049d1400()*-0.0124329);
}

double mlp::synapse0x1049d7bf0() {
   return (neuron0x1049d1b50()*-0.133365);
}

double mlp::synapse0x1049d7c20() {
   return (neuron0x1049d23b0()*-0.17962);
}

double mlp::synapse0x1049d7c50() {
   return (neuron0x1049d2b00()*0.0226106);
}

double mlp::synapse0x1049d7c80() {
   return (neuron0x1049d3250()*0.106019);
}

double mlp::synapse0x1049d7db0() {
   return (neuron0x1049d4a40()*0.234011);
}

double mlp::synapse0x1049d7de0() {
   return (neuron0x1049d4d00()*-0.108311);
}

double mlp::synapse0x1049d7e10() {
   return (neuron0x1049d5450()*-0.200105);
}

double mlp::synapse0x1049d7e40() {
   return (neuron0x1049d5ba0()*-0.074176);
}

double mlp::synapse0x1049b68f0() {
   return (neuron0x1049b7090()*0.0306847);
}

double mlp::synapse0x1049d80d0() {
   return (neuron0x1049ccbb0()*0.358872);
}

double mlp::synapse0x1049d8100() {
   return (neuron0x1049cd410()*0.521462);
}

double mlp::synapse0x1049d8130() {
   return (neuron0x1049cdb60()*-0.552434);
}

double mlp::synapse0x1049d8160() {
   return (neuron0x1049ce0d0()*0.869463);
}

double mlp::synapse0x1049d8190() {
   return (neuron0x1049ce820()*-0.485684);
}

double mlp::synapse0x1049d81c0() {
   return (neuron0x1049cef70()*0.0619794);
}

double mlp::synapse0x1049d81f0() {
   return (neuron0x1049cf6c0()*-1.55519);
}

double mlp::synapse0x1049d8220() {
   return (neuron0x1049cfe10()*-0.231707);
}

double mlp::synapse0x1049d8250() {
   return (neuron0x1049d0560()*0.124101);
}

double mlp::synapse0x1049d8280() {
   return (neuron0x1049d0cb0()*0.122585);
}

double mlp::synapse0x1049d82b0() {
   return (neuron0x1049d1400()*0.376075);
}

double mlp::synapse0x1049d82e0() {
   return (neuron0x1049d1b50()*0.914397);
}

double mlp::synapse0x1049d8310() {
   return (neuron0x1049d23b0()*0.72878);
}

double mlp::synapse0x1049d8340() {
   return (neuron0x1049d2b00()*0.456119);
}

double mlp::synapse0x1049d8370() {
   return (neuron0x1049d3250()*-0.154047);
}

double mlp::synapse0x1049d84a0() {
   return (neuron0x1049d4a40()*-0.0162313);
}

double mlp::synapse0x1049d84d0() {
   return (neuron0x1049d4d00()*-0.409161);
}

double mlp::synapse0x1049d8500() {
   return (neuron0x1049d5450()*0.544918);
}

double mlp::synapse0x1049d8530() {
   return (neuron0x1049d5ba0()*-0.289848);
}

double mlp::synapse0x1049d87c0() {
   return (neuron0x1049b7090()*-0.409897);
}

double mlp::synapse0x1049d87f0() {
   return (neuron0x1049ccbb0()*-0.0729845);
}

double mlp::synapse0x1049d8820() {
   return (neuron0x1049cd410()*0.445834);
}

double mlp::synapse0x1049d8850() {
   return (neuron0x1049cdb60()*0.245721);
}

double mlp::synapse0x1049d8880() {
   return (neuron0x1049ce0d0()*0.0803673);
}

double mlp::synapse0x1049d88b0() {
   return (neuron0x1049ce820()*0.116543);
}

double mlp::synapse0x1049d88e0() {
   return (neuron0x1049cef70()*-0.0333231);
}

double mlp::synapse0x1049d8910() {
   return (neuron0x1049cf6c0()*0.962561);
}

double mlp::synapse0x1049d8940() {
   return (neuron0x1049cfe10()*0.554227);
}

double mlp::synapse0x1049d8970() {
   return (neuron0x1049d0560()*0.0660414);
}

double mlp::synapse0x1049d89a0() {
   return (neuron0x1049d0cb0()*0.665567);
}

double mlp::synapse0x1049d89d0() {
   return (neuron0x1049d1400()*0.0817287);
}

double mlp::synapse0x1049d8a00() {
   return (neuron0x1049d1b50()*-1.10578);
}

double mlp::synapse0x1049d8a30() {
   return (neuron0x1049d23b0()*-0.926134);
}

double mlp::synapse0x1049d8a60() {
   return (neuron0x1049d2b00()*-0.344844);
}

double mlp::synapse0x1049d8a90() {
   return (neuron0x1049d3250()*-0.0852434);
}

double mlp::synapse0x1049d8bc0() {
   return (neuron0x1049d4a40()*-0.0400225);
}

double mlp::synapse0x1049d8bf0() {
   return (neuron0x1049d4d00()*0.319544);
}

double mlp::synapse0x1049d8c20() {
   return (neuron0x1049d5450()*-0.24366);
}

double mlp::synapse0x1049d8c50() {
   return (neuron0x1049d5ba0()*1.20694);
}

double mlp::synapse0x1049d8ee0() {
   return (neuron0x1049b7090()*0.0918155);
}

double mlp::synapse0x1049d8f10() {
   return (neuron0x1049ccbb0()*-0.00948004);
}

double mlp::synapse0x1049d8f40() {
   return (neuron0x1049cd410()*-0.122505);
}

double mlp::synapse0x1049d8f70() {
   return (neuron0x1049cdb60()*0.112362);
}

double mlp::synapse0x1049d8fa0() {
   return (neuron0x1049ce0d0()*-0.15463);
}

double mlp::synapse0x1049d8fd0() {
   return (neuron0x1049ce820()*0.0922716);
}

double mlp::synapse0x1049d9000() {
   return (neuron0x1049cef70()*-0.124511);
}

double mlp::synapse0x1049d9030() {
   return (neuron0x1049cf6c0()*0.152213);
}

double mlp::synapse0x1049d9060() {
   return (neuron0x1049cfe10()*0.0731405);
}

double mlp::synapse0x1049d9090() {
   return (neuron0x1049d0560()*-0.056954);
}

double mlp::synapse0x1049d90c0() {
   return (neuron0x1049d0cb0()*-0.0910538);
}

double mlp::synapse0x1049d90f0() {
   return (neuron0x1049d1400()*-0.07295);
}

double mlp::synapse0x1049d9120() {
   return (neuron0x1049d1b50()*-0.04714);
}

double mlp::synapse0x1049d9150() {
   return (neuron0x1049d23b0()*0.119083);
}

double mlp::synapse0x1049d9180() {
   return (neuron0x1049d2b00()*-0.0421142);
}

double mlp::synapse0x1049d91b0() {
   return (neuron0x1049d3250()*-0.0526281);
}

double mlp::synapse0x1049d92e0() {
   return (neuron0x1049d4a40()*-0.0153092);
}

double mlp::synapse0x1049d9310() {
   return (neuron0x1049d4d00()*0.0220845);
}

double mlp::synapse0x1049d9340() {
   return (neuron0x1049d5450()*-0.0105571);
}

double mlp::synapse0x1049d9370() {
   return (neuron0x1049d5ba0()*-0.151764);
}

double mlp::synapse0x1049d9600() {
   return (neuron0x1049b7090()*0.164215);
}

double mlp::synapse0x1049d9630() {
   return (neuron0x1049ccbb0()*-0.0117655);
}

double mlp::synapse0x1049d9660() {
   return (neuron0x1049cd410()*-0.124939);
}

double mlp::synapse0x1049d9690() {
   return (neuron0x1049cdb60()*0.171395);
}

double mlp::synapse0x1049d96c0() {
   return (neuron0x1049ce0d0()*-0.309601);
}

double mlp::synapse0x1049d96f0() {
   return (neuron0x1049ce820()*0.219186);
}

double mlp::synapse0x1049d9720() {
   return (neuron0x1049cef70()*-0.197893);
}

double mlp::synapse0x1049d9750() {
   return (neuron0x1049cf6c0()*0.217378);
}

double mlp::synapse0x1049d9780() {
   return (neuron0x1049cfe10()*0.16237);
}

double mlp::synapse0x1049d97b0() {
   return (neuron0x1049d0560()*-0.0587082);
}

double mlp::synapse0x1049d97e0() {
   return (neuron0x1049d0cb0()*-0.114158);
}

double mlp::synapse0x1049d9810() {
   return (neuron0x1049d1400()*-0.131692);
}

double mlp::synapse0x1049d9840() {
   return (neuron0x1049d1b50()*-0.00870719);
}

double mlp::synapse0x1049d9870() {
   return (neuron0x1049d23b0()*0.154566);
}

double mlp::synapse0x1049d98a0() {
   return (neuron0x1049d2b00()*-0.0712399);
}

double mlp::synapse0x1049d98d0() {
   return (neuron0x1049d3250()*-0.0640609);
}

double mlp::synapse0x1049d9a00() {
   return (neuron0x1049d4a40()*-0.048708);
}

double mlp::synapse0x1049d9a30() {
   return (neuron0x1049d4d00()*0.0438208);
}

double mlp::synapse0x1049d9a60() {
   return (neuron0x1049d5450()*-0.0574342);
}

double mlp::synapse0x1049d9a90() {
   return (neuron0x1049d5ba0()*-0.183435);
}

double mlp::synapse0x1049d9d20() {
   return (neuron0x1049b7090()*0.240917);
}

double mlp::synapse0x1049d9d50() {
   return (neuron0x1049ccbb0()*-0.204602);
}

double mlp::synapse0x1049d9d80() {
   return (neuron0x1049cd410()*-0.581307);
}

double mlp::synapse0x1049d9db0() {
   return (neuron0x1049cdb60()*0.113907);
}

double mlp::synapse0x1049d9de0() {
   return (neuron0x1049ce0d0()*-0.147697);
}

double mlp::synapse0x1049d9e10() {
   return (neuron0x1049ce820()*-0.0255635);
}

double mlp::synapse0x1049d9e40() {
   return (neuron0x1049cef70()*-0.117967);
}

double mlp::synapse0x1049d9e70() {
   return (neuron0x1049cf6c0()*0.243783);
}

double mlp::synapse0x1049d9ea0() {
   return (neuron0x1049cfe10()*-0.237313);
}

double mlp::synapse0x1049d9ed0() {
   return (neuron0x1049d0560()*-0.235784);
}

double mlp::synapse0x1049d9f00() {
   return (neuron0x1049d0cb0()*-0.434335);
}

double mlp::synapse0x1049d9f30() {
   return (neuron0x1049d1400()*-0.159411);
}

double mlp::synapse0x1049d9f60() {
   return (neuron0x1049d1b50()*0.626907);
}

double mlp::synapse0x1049d9f90() {
   return (neuron0x1049d23b0()*0.349453);
}

double mlp::synapse0x1049d9fc0() {
   return (neuron0x1049d2b00()*-0.0427354);
}

double mlp::synapse0x1049d9ff0() {
   return (neuron0x1049d3250()*0.0031589);
}

double mlp::synapse0x1049da120() {
   return (neuron0x1049d4a40()*-0.528447);
}

double mlp::synapse0x1049da150() {
   return (neuron0x1049d4d00()*0.413288);
}

double mlp::synapse0x1049da180() {
   return (neuron0x1049d5450()*0.317201);
}

double mlp::synapse0x1049da1b0() {
   return (neuron0x1049d5ba0()*-0.366801);
}

