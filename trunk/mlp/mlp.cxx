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
   double input = -0.460315;
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
   double input = -0.182748;
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
   double input = 0.233694;
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
   double input = 0.204362;
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
   double input = 0.363569;
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
   double input = 0.0629581;
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
   double input = -0.029098;
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
   double input = -0.467073;
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
   double input = -0.000906398;
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
   double input = -0.298749;
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
   double input = -0.161984;
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
   double input = -0.347043;
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
   double input = 0.429519;
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
   double input = 0.387281;
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
   double input = -0.413051;
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
   double input = -0.316455;
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
   double input = 0.247537;
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
   double input = -0.0990445;
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
   double input = -0.193868;
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
   double input = -0.0573174;
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
   double input = -0.259538;
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
   double input = -0.0506566;
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
   double input = 0.452292;
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
   double input = -0.0259371;
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
   double input = -0.24621;
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
   double input = 0.522355;
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
   double input = -0.357182;
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
   double input = -0.146008;
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
   double input = -0.0948744;
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
   return (neuron0x1049c8e70()*0.207101);
}

double mlp::synapse0x1049b6a30() {
   return (neuron0x1049c8fd0()*-0.0972798);
}

double mlp::synapse0x1049c8d10() {
   return (neuron0x1049c9230()*0.443057);
}

double mlp::synapse0x1049c8e10() {
   return (neuron0x1049c9510()*-0.180763);
}

double mlp::synapse0x1049c8e40() {
   return (neuron0x1049c97f0()*0.0392222);
}

double mlp::synapse0x1049b7270() {
   return (neuron0x1049c9ad0()*-0.430454);
}

double mlp::synapse0x1049b72a0() {
   return (neuron0x1049c9db0()*0.127997);
}

double mlp::synapse0x1049b72d0() {
   return (neuron0x1049ca090()*0.118815);
}

double mlp::synapse0x1049b7300() {
   return (neuron0x1049ca370()*-0.214825);
}

double mlp::synapse0x1049b7330() {
   return (neuron0x1049ca680()*0.123475);
}

double mlp::synapse0x1049b7360() {
   return (neuron0x1049ca990()*-0.29975);
}

double mlp::synapse0x1049b7390() {
   return (neuron0x1049caca0()*-0.19865);
}

double mlp::synapse0x1049b73c0() {
   return (neuron0x1049cafb0()*-0.210748);
}

double mlp::synapse0x1049b73f0() {
   return (neuron0x1049cb2c0()*-0.0804334);
}

double mlp::synapse0x1049b7420() {
   return (neuron0x1049cb5d0()*0.292737);
}

double mlp::synapse0x1049b7450() {
   return (neuron0x1049cb8e0()*-0.0571496);
}

double mlp::synapse0x1049cca50() {
   return (neuron0x1049cbbf0()*-0.122217);
}

double mlp::synapse0x1049c8610() {
   return (neuron0x1049cc100()*-0.2457);
}

double mlp::synapse0x1049c8640() {
   return (neuron0x1049cc360()*0.227791);
}

double mlp::synapse0x1049ccb80() {
   return (neuron0x1049cc640()*-0.17769);
}

double mlp::synapse0x1049cce40() {
   return (neuron0x1049c8e70()*0.241978);
}

double mlp::synapse0x1049cce70() {
   return (neuron0x1049c8fd0()*-0.373894);
}

double mlp::synapse0x1049ccea0() {
   return (neuron0x1049c9230()*-0.401339);
}

double mlp::synapse0x1049cced0() {
   return (neuron0x1049c9510()*0.374462);
}

double mlp::synapse0x1049ccf00() {
   return (neuron0x1049c97f0()*-0.187264);
}

double mlp::synapse0x1049ccf30() {
   return (neuron0x1049c9ad0()*-0.100279);
}

double mlp::synapse0x1049ccf60() {
   return (neuron0x1049c9db0()*-0.155397);
}

double mlp::synapse0x1049ccf90() {
   return (neuron0x1049ca090()*-0.355915);
}

double mlp::synapse0x1049ccfc0() {
   return (neuron0x1049ca370()*-0.0805731);
}

double mlp::synapse0x1049ccff0() {
   return (neuron0x1049ca680()*0.133596);
}

double mlp::synapse0x1049cd020() {
   return (neuron0x1049ca990()*0.0260957);
}

double mlp::synapse0x1049cd050() {
   return (neuron0x1049caca0()*-0.0749297);
}

double mlp::synapse0x1049cd080() {
   return (neuron0x1049cafb0()*-0.306715);
}

double mlp::synapse0x1049cca80() {
   return (neuron0x1049cb2c0()*-0.340971);
}

double mlp::synapse0x1049ccab0() {
   return (neuron0x1049cb5d0()*0.168976);
}

double mlp::synapse0x1049ccae0() {
   return (neuron0x1049cb8e0()*0.129689);
}

double mlp::synapse0x1049ccb10() {
   return (neuron0x1049cbbf0()*-0.337936);
}

double mlp::synapse0x1049ccb40() {
   return (neuron0x1049cc100()*-0.141001);
}

double mlp::synapse0x1049cd3b0() {
   return (neuron0x1049cc360()*-0.611222);
}

double mlp::synapse0x1049cd3e0() {
   return (neuron0x1049cc640()*0.350087);
}

double mlp::synapse0x1049cd6a0() {
   return (neuron0x1049c8e70()*0.220658);
}

double mlp::synapse0x1049cd6d0() {
   return (neuron0x1049c8fd0()*-0.3026);
}

double mlp::synapse0x1049cd700() {
   return (neuron0x1049c9230()*0.549516);
}

double mlp::synapse0x1049cd730() {
   return (neuron0x1049c9510()*0.29961);
}

double mlp::synapse0x1049cd760() {
   return (neuron0x1049c97f0()*0.122096);
}

double mlp::synapse0x1049cd790() {
   return (neuron0x1049c9ad0()*-0.490785);
}

double mlp::synapse0x1049cd7c0() {
   return (neuron0x1049c9db0()*-0.0652473);
}

double mlp::synapse0x1049cd7f0() {
   return (neuron0x1049ca090()*-0.213348);
}

double mlp::synapse0x1049cd820() {
   return (neuron0x1049ca370()*0.443619);
}

double mlp::synapse0x1049cd850() {
   return (neuron0x1049ca680()*0.0916735);
}

double mlp::synapse0x1049cd880() {
   return (neuron0x1049ca990()*0.249903);
}

double mlp::synapse0x1049cd8b0() {
   return (neuron0x1049caca0()*0.076462);
}

double mlp::synapse0x1049cd8e0() {
   return (neuron0x1049cafb0()*-0.119672);
}

double mlp::synapse0x1049cd910() {
   return (neuron0x1049cb2c0()*-0.335505);
}

double mlp::synapse0x1049cd940() {
   return (neuron0x1049cb5d0()*0.178663);
}

double mlp::synapse0x1049cd970() {
   return (neuron0x1049cb8e0()*-0.198012);
}

double mlp::synapse0x1049cdaa0() {
   return (neuron0x1049cbbf0()*0.331745);
}

double mlp::synapse0x1049cdad0() {
   return (neuron0x1049cc100()*-0.256709);
}

double mlp::synapse0x1049cdb00() {
   return (neuron0x1049cc360()*0.622063);
}

double mlp::synapse0x1049cdb30() {
   return (neuron0x1049cc640()*0.312748);
}

double mlp::synapse0x1049cddf0() {
   return (neuron0x1049c8e70()*-0.504958);
}

double mlp::synapse0x1049cde20() {
   return (neuron0x1049c8fd0()*-0.254789);
}

double mlp::synapse0x1049cde50() {
   return (neuron0x1049c9230()*0.0937102);
}

double mlp::synapse0x1049cde80() {
   return (neuron0x1049c9510()*-0.269378);
}

double mlp::synapse0x1049cdeb0() {
   return (neuron0x1049c97f0()*-0.225286);
}

double mlp::synapse0x1049cd0b0() {
   return (neuron0x1049c9ad0()*0.375156);
}

double mlp::synapse0x1049cd0e0() {
   return (neuron0x1049c9db0()*0.357292);
}

double mlp::synapse0x1049cd110() {
   return (neuron0x1049ca090()*0.316346);
}

double mlp::synapse0x1049cd140() {
   return (neuron0x1049ca370()*0.21582);
}

double mlp::synapse0x1049cd170() {
   return (neuron0x1049ca680()*0.130484);
}

double mlp::synapse0x1049cd1a0() {
   return (neuron0x1049ca990()*-0.247064);
}

double mlp::synapse0x1049cd1d0() {
   return (neuron0x1049caca0()*-0.167269);
}

double mlp::synapse0x1049cd200() {
   return (neuron0x1049cafb0()*-0.433133);
}

double mlp::synapse0x1049cd230() {
   return (neuron0x1049cb2c0()*0.327515);
}

double mlp::synapse0x1049cd260() {
   return (neuron0x1049cb5d0()*0.0590208);
}

double mlp::synapse0x1049cdee0() {
   return (neuron0x1049cb8e0()*-0.0399036);
}

double mlp::synapse0x1049ce010() {
   return (neuron0x1049cbbf0()*0.0310295);
}

double mlp::synapse0x1049ce040() {
   return (neuron0x1049cc100()*0.00777572);
}

double mlp::synapse0x1049ce070() {
   return (neuron0x1049cc360()*-0.387349);
}

double mlp::synapse0x1049ce0a0() {
   return (neuron0x1049cc640()*-0.397799);
}

double mlp::synapse0x1049ce360() {
   return (neuron0x1049c8e70()*-0.200732);
}

double mlp::synapse0x1049ce390() {
   return (neuron0x1049c8fd0()*0.137518);
}

double mlp::synapse0x1049ce3c0() {
   return (neuron0x1049c9230()*-0.253091);
}

double mlp::synapse0x1049ce3f0() {
   return (neuron0x1049c9510()*-0.036478);
}

double mlp::synapse0x1049ce420() {
   return (neuron0x1049c97f0()*0.454315);
}

double mlp::synapse0x1049ce450() {
   return (neuron0x1049c9ad0()*0.407386);
}

double mlp::synapse0x1049ce480() {
   return (neuron0x1049c9db0()*0.350346);
}

double mlp::synapse0x1049ce4b0() {
   return (neuron0x1049ca090()*-0.103754);
}

double mlp::synapse0x1049ce4e0() {
   return (neuron0x1049ca370()*-0.394189);
}

double mlp::synapse0x1049ce510() {
   return (neuron0x1049ca680()*0.228876);
}

double mlp::synapse0x1049ce540() {
   return (neuron0x1049ca990()*0.506588);
}

double mlp::synapse0x1049ce570() {
   return (neuron0x1049caca0()*-0.0888474);
}

double mlp::synapse0x1049ce5a0() {
   return (neuron0x1049cafb0()*0.0678667);
}

double mlp::synapse0x1049ce5d0() {
   return (neuron0x1049cb2c0()*0.278972);
}

double mlp::synapse0x1049ce600() {
   return (neuron0x1049cb5d0()*-0.185497);
}

double mlp::synapse0x1049ce630() {
   return (neuron0x1049cb8e0()*-0.311694);
}

double mlp::synapse0x1049ce760() {
   return (neuron0x1049cbbf0()*0.297946);
}

double mlp::synapse0x1049ce790() {
   return (neuron0x1049cc100()*-0.20231);
}

double mlp::synapse0x1049ce7c0() {
   return (neuron0x1049cc360()*0.277984);
}

double mlp::synapse0x1049ce7f0() {
   return (neuron0x1049cc640()*0.0883023);
}

double mlp::synapse0x1049ceab0() {
   return (neuron0x1049c8e70()*-0.170987);
}

double mlp::synapse0x1049ceae0() {
   return (neuron0x1049c8fd0()*0.0278572);
}

double mlp::synapse0x1049ceb10() {
   return (neuron0x1049c9230()*-0.247229);
}

double mlp::synapse0x1049ceb40() {
   return (neuron0x1049c9510()*0.427498);
}

double mlp::synapse0x1049ceb70() {
   return (neuron0x1049c97f0()*-0.284705);
}

double mlp::synapse0x1049ceba0() {
   return (neuron0x1049c9ad0()*-0.285383);
}

double mlp::synapse0x1049cebd0() {
   return (neuron0x1049c9db0()*0.232303);
}

double mlp::synapse0x1049cec00() {
   return (neuron0x1049ca090()*0.266335);
}

double mlp::synapse0x1049cec30() {
   return (neuron0x1049ca370()*-0.0820254);
}

double mlp::synapse0x1049cec60() {
   return (neuron0x1049ca680()*0.162811);
}

double mlp::synapse0x1049cec90() {
   return (neuron0x1049ca990()*0.185318);
}

double mlp::synapse0x1049cecc0() {
   return (neuron0x1049caca0()*0.171542);
}

double mlp::synapse0x1049cecf0() {
   return (neuron0x1049cafb0()*0.149869);
}

double mlp::synapse0x1049ced20() {
   return (neuron0x1049cb2c0()*-0.0517869);
}

double mlp::synapse0x1049ced50() {
   return (neuron0x1049cb5d0()*-0.08497);
}

double mlp::synapse0x1049ced80() {
   return (neuron0x1049cb8e0()*-0.20149);
}

double mlp::synapse0x1049ceeb0() {
   return (neuron0x1049cbbf0()*0.358315);
}

double mlp::synapse0x1049ceee0() {
   return (neuron0x1049cc100()*-0.0482965);
}

double mlp::synapse0x1049cef10() {
   return (neuron0x1049cc360()*0.206441);
}

double mlp::synapse0x1049cef40() {
   return (neuron0x1049cc640()*0.580755);
}

double mlp::synapse0x1049cf200() {
   return (neuron0x1049c8e70()*-0.10744);
}

double mlp::synapse0x1049cf230() {
   return (neuron0x1049c8fd0()*-0.492017);
}

double mlp::synapse0x1049cf260() {
   return (neuron0x1049c9230()*0.101631);
}

double mlp::synapse0x1049cf290() {
   return (neuron0x1049c9510()*-0.329962);
}

double mlp::synapse0x1049cf2c0() {
   return (neuron0x1049c97f0()*-0.251683);
}

double mlp::synapse0x1049cf2f0() {
   return (neuron0x1049c9ad0()*-0.1337);
}

double mlp::synapse0x1049cf320() {
   return (neuron0x1049c9db0()*0.0836173);
}

double mlp::synapse0x1049cf350() {
   return (neuron0x1049ca090()*-0.134898);
}

double mlp::synapse0x1049cf380() {
   return (neuron0x1049ca370()*-0.486815);
}

double mlp::synapse0x1049cf3b0() {
   return (neuron0x1049ca680()*0.397371);
}

double mlp::synapse0x1049cf3e0() {
   return (neuron0x1049ca990()*0.15615);
}

double mlp::synapse0x1049cf410() {
   return (neuron0x1049caca0()*0.385133);
}

double mlp::synapse0x1049cf440() {
   return (neuron0x1049cafb0()*-0.434224);
}

double mlp::synapse0x1049cf470() {
   return (neuron0x1049cb2c0()*-0.257838);
}

double mlp::synapse0x1049cf4a0() {
   return (neuron0x1049cb5d0()*0.162899);
}

double mlp::synapse0x1049cf4d0() {
   return (neuron0x1049cb8e0()*0.19053);
}

double mlp::synapse0x1049cf600() {
   return (neuron0x1049cbbf0()*0.0870279);
}

double mlp::synapse0x1049cf630() {
   return (neuron0x1049cc100()*-0.140573);
}

double mlp::synapse0x1049cf660() {
   return (neuron0x1049cc360()*-0.0659234);
}

double mlp::synapse0x1049cf690() {
   return (neuron0x1049cc640()*-0.502487);
}

double mlp::synapse0x1049cf950() {
   return (neuron0x1049c8e70()*0.272191);
}

double mlp::synapse0x1049cf980() {
   return (neuron0x1049c8fd0()*0.457128);
}

double mlp::synapse0x1049cf9b0() {
   return (neuron0x1049c9230()*0.340569);
}

double mlp::synapse0x1049cf9e0() {
   return (neuron0x1049c9510()*-0.262455);
}

double mlp::synapse0x1049cfa10() {
   return (neuron0x1049c97f0()*-0.39707);
}

double mlp::synapse0x1049cfa40() {
   return (neuron0x1049c9ad0()*0.0533698);
}

double mlp::synapse0x1049cfa70() {
   return (neuron0x1049c9db0()*0.355154);
}

double mlp::synapse0x1049cfaa0() {
   return (neuron0x1049ca090()*-0.316424);
}

double mlp::synapse0x1049cfad0() {
   return (neuron0x1049ca370()*-0.299997);
}

double mlp::synapse0x1049cfb00() {
   return (neuron0x1049ca680()*0.170379);
}

double mlp::synapse0x1049cfb30() {
   return (neuron0x1049ca990()*-0.013621);
}

double mlp::synapse0x1049cfb60() {
   return (neuron0x1049caca0()*-0.28471);
}

double mlp::synapse0x1049cfb90() {
   return (neuron0x1049cafb0()*0.50413);
}

double mlp::synapse0x1049cfbc0() {
   return (neuron0x1049cb2c0()*0.177431);
}

double mlp::synapse0x1049cfbf0() {
   return (neuron0x1049cb5d0()*0.227477);
}

double mlp::synapse0x1049cfc20() {
   return (neuron0x1049cb8e0()*-0.278852);
}

double mlp::synapse0x1049cfd50() {
   return (neuron0x1049cbbf0()*0.0590594);
}

double mlp::synapse0x1049cfd80() {
   return (neuron0x1049cc100()*0.0674467);
}

double mlp::synapse0x1049cfdb0() {
   return (neuron0x1049cc360()*0.159597);
}

double mlp::synapse0x1049cfde0() {
   return (neuron0x1049cc640()*-0.0579421);
}

double mlp::synapse0x1049d00a0() {
   return (neuron0x1049c8e70()*0.350376);
}

double mlp::synapse0x1049d00d0() {
   return (neuron0x1049c8fd0()*-0.0753137);
}

double mlp::synapse0x1049d0100() {
   return (neuron0x1049c9230()*-0.103244);
}

double mlp::synapse0x1049d0130() {
   return (neuron0x1049c9510()*0.484783);
}

double mlp::synapse0x1049d0160() {
   return (neuron0x1049c97f0()*-0.256977);
}

double mlp::synapse0x1049d0190() {
   return (neuron0x1049c9ad0()*-0.28891);
}

double mlp::synapse0x1049d01c0() {
   return (neuron0x1049c9db0()*0.0414437);
}

double mlp::synapse0x1049d01f0() {
   return (neuron0x1049ca090()*0.399764);
}

double mlp::synapse0x1049d0220() {
   return (neuron0x1049ca370()*0.078976);
}

double mlp::synapse0x1049d0250() {
   return (neuron0x1049ca680()*0.259644);
}

double mlp::synapse0x1049d0280() {
   return (neuron0x1049ca990()*0.149416);
}

double mlp::synapse0x1049d02b0() {
   return (neuron0x1049caca0()*-0.174099);
}

double mlp::synapse0x1049d02e0() {
   return (neuron0x1049cafb0()*-0.329211);
}

double mlp::synapse0x1049d0310() {
   return (neuron0x1049cb2c0()*0.119444);
}

double mlp::synapse0x1049d0340() {
   return (neuron0x1049cb5d0()*-0.158557);
}

double mlp::synapse0x1049d0370() {
   return (neuron0x1049cb8e0()*-0.36295);
}

double mlp::synapse0x1049d04a0() {
   return (neuron0x1049cbbf0()*-0.530797);
}

double mlp::synapse0x1049d04d0() {
   return (neuron0x1049cc100()*0.278206);
}

double mlp::synapse0x1049d0500() {
   return (neuron0x1049cc360()*-0.0267184);
}

double mlp::synapse0x1049d0530() {
   return (neuron0x1049cc640()*-0.244609);
}

double mlp::synapse0x1049d07f0() {
   return (neuron0x1049c8e70()*-0.400482);
}

double mlp::synapse0x1049d0820() {
   return (neuron0x1049c8fd0()*0.0149979);
}

double mlp::synapse0x1049d0850() {
   return (neuron0x1049c9230()*-0.346847);
}

double mlp::synapse0x1049d0880() {
   return (neuron0x1049c9510()*0.22248);
}

double mlp::synapse0x1049d08b0() {
   return (neuron0x1049c97f0()*0.407126);
}

double mlp::synapse0x1049d08e0() {
   return (neuron0x1049c9ad0()*-0.055779);
}

double mlp::synapse0x1049d0910() {
   return (neuron0x1049c9db0()*0.17973);
}

double mlp::synapse0x1049d0940() {
   return (neuron0x1049ca090()*-0.253376);
}

double mlp::synapse0x1049d0970() {
   return (neuron0x1049ca370()*-0.169692);
}

double mlp::synapse0x1049d09a0() {
   return (neuron0x1049ca680()*-0.0951803);
}

double mlp::synapse0x1049d09d0() {
   return (neuron0x1049ca990()*0.125462);
}

double mlp::synapse0x1049d0a00() {
   return (neuron0x1049caca0()*-0.398471);
}

double mlp::synapse0x1049d0a30() {
   return (neuron0x1049cafb0()*-0.386011);
}

double mlp::synapse0x1049d0a60() {
   return (neuron0x1049cb2c0()*-0.115247);
}

double mlp::synapse0x1049d0a90() {
   return (neuron0x1049cb5d0()*0.205011);
}

double mlp::synapse0x1049d0ac0() {
   return (neuron0x1049cb8e0()*0.0478172);
}

double mlp::synapse0x1049d0bf0() {
   return (neuron0x1049cbbf0()*0.171543);
}

double mlp::synapse0x1049d0c20() {
   return (neuron0x1049cc100()*0.442608);
}

double mlp::synapse0x1049d0c50() {
   return (neuron0x1049cc360()*0.170303);
}

double mlp::synapse0x1049d0c80() {
   return (neuron0x1049cc640()*-0.0744966);
}

double mlp::synapse0x1049d0f40() {
   return (neuron0x1049c8e70()*0.497753);
}

double mlp::synapse0x1049d0f70() {
   return (neuron0x1049c8fd0()*0.443958);
}

double mlp::synapse0x1049d0fa0() {
   return (neuron0x1049c9230()*-0.0209065);
}

double mlp::synapse0x1049d0fd0() {
   return (neuron0x1049c9510()*0.0556977);
}

double mlp::synapse0x1049d1000() {
   return (neuron0x1049c97f0()*-0.204459);
}

double mlp::synapse0x1049d1030() {
   return (neuron0x1049c9ad0()*-0.455007);
}

double mlp::synapse0x1049d1060() {
   return (neuron0x1049c9db0()*0.268751);
}

double mlp::synapse0x1049d1090() {
   return (neuron0x1049ca090()*-0.0959701);
}

double mlp::synapse0x1049d10c0() {
   return (neuron0x1049ca370()*-0.223564);
}

double mlp::synapse0x1049d10f0() {
   return (neuron0x1049ca680()*0.438263);
}

double mlp::synapse0x1049d1120() {
   return (neuron0x1049ca990()*-0.0456254);
}

double mlp::synapse0x1049d1150() {
   return (neuron0x1049caca0()*-0.328896);
}

double mlp::synapse0x1049d1180() {
   return (neuron0x1049cafb0()*-0.292996);
}

double mlp::synapse0x1049d11b0() {
   return (neuron0x1049cb2c0()*-0.569524);
}

double mlp::synapse0x1049d11e0() {
   return (neuron0x1049cb5d0()*-0.0231766);
}

double mlp::synapse0x1049d1210() {
   return (neuron0x1049cb8e0()*-0.122113);
}

double mlp::synapse0x1049d1340() {
   return (neuron0x1049cbbf0()*-0.257555);
}

double mlp::synapse0x1049d1370() {
   return (neuron0x1049cc100()*-0.304325);
}

double mlp::synapse0x1049d13a0() {
   return (neuron0x1049cc360()*-0.112213);
}

double mlp::synapse0x1049d13d0() {
   return (neuron0x1049cc640()*-0.225389);
}

double mlp::synapse0x1049d1690() {
   return (neuron0x1049c8e70()*0.240968);
}

double mlp::synapse0x1049d16c0() {
   return (neuron0x1049c8fd0()*0.479205);
}

double mlp::synapse0x1049d16f0() {
   return (neuron0x1049c9230()*-0.158392);
}

double mlp::synapse0x1049d1720() {
   return (neuron0x1049c9510()*0.188373);
}

double mlp::synapse0x1049d1750() {
   return (neuron0x1049c97f0()*0.0910582);
}

double mlp::synapse0x1049d1780() {
   return (neuron0x1049c9ad0()*-0.244292);
}

double mlp::synapse0x1049d17b0() {
   return (neuron0x1049c9db0()*-0.148195);
}

double mlp::synapse0x1049d17e0() {
   return (neuron0x1049ca090()*-0.391233);
}

double mlp::synapse0x1049d1810() {
   return (neuron0x1049ca370()*0.435183);
}

double mlp::synapse0x1049d1840() {
   return (neuron0x1049ca680()*-0.113595);
}

double mlp::synapse0x1049d1870() {
   return (neuron0x1049ca990()*-0.17329);
}

double mlp::synapse0x1049d18a0() {
   return (neuron0x1049caca0()*-0.00912115);
}

double mlp::synapse0x1049d18d0() {
   return (neuron0x1049cafb0()*-0.198886);
}

double mlp::synapse0x1049d1900() {
   return (neuron0x1049cb2c0()*-0.467087);
}

double mlp::synapse0x1049d1930() {
   return (neuron0x1049cb5d0()*-0.0935953);
}

double mlp::synapse0x1049d1960() {
   return (neuron0x1049cb8e0()*0.0302294);
}

double mlp::synapse0x1049d1a90() {
   return (neuron0x1049cbbf0()*-0.199415);
}

double mlp::synapse0x1049d1ac0() {
   return (neuron0x1049cc100()*-0.0351884);
}

double mlp::synapse0x1049d1af0() {
   return (neuron0x1049cc360()*0.0420354);
}

double mlp::synapse0x1049d1b20() {
   return (neuron0x1049cc640()*0.485082);
}

double mlp::synapse0x1049cc000() {
   return (neuron0x1049c8e70()*0.00481127);
}

double mlp::synapse0x1049cc030() {
   return (neuron0x1049c8fd0()*-0.262654);
}

double mlp::synapse0x1049cc060() {
   return (neuron0x1049c9230()*0.0266285);
}

double mlp::synapse0x1049cc090() {
   return (neuron0x1049c9510()*0.033684);
}

double mlp::synapse0x1049cc0c0() {
   return (neuron0x1049c97f0()*0.299907);
}

double mlp::synapse0x1049d1fe0() {
   return (neuron0x1049c9ad0()*-0.361229);
}

double mlp::synapse0x1049d2010() {
   return (neuron0x1049c9db0()*0.332571);
}

double mlp::synapse0x1049d2040() {
   return (neuron0x1049ca090()*-0.19999);
}

double mlp::synapse0x1049d2070() {
   return (neuron0x1049ca370()*0.19078);
}

double mlp::synapse0x1049d20a0() {
   return (neuron0x1049ca680()*-0.323921);
}

double mlp::synapse0x1049d20d0() {
   return (neuron0x1049ca990()*-0.297905);
}

double mlp::synapse0x1049d2100() {
   return (neuron0x1049caca0()*-0.41782);
}

double mlp::synapse0x1049d2130() {
   return (neuron0x1049cafb0()*0.300459);
}

double mlp::synapse0x1049d2160() {
   return (neuron0x1049cb2c0()*-0.148543);
}

double mlp::synapse0x1049d2190() {
   return (neuron0x1049cb5d0()*0.296828);
}

double mlp::synapse0x1049d21c0() {
   return (neuron0x1049cb8e0()*0.0828666);
}

double mlp::synapse0x1049d22f0() {
   return (neuron0x1049cbbf0()*0.302036);
}

double mlp::synapse0x1049d2320() {
   return (neuron0x1049cc100()*0.236246);
}

double mlp::synapse0x1049d2350() {
   return (neuron0x1049cc360()*-0.0913564);
}

double mlp::synapse0x1049d2380() {
   return (neuron0x1049cc640()*-0.183031);
}

double mlp::synapse0x1049d2640() {
   return (neuron0x1049c8e70()*0.254414);
}

double mlp::synapse0x1049d2670() {
   return (neuron0x1049c8fd0()*-2.16492e-05);
}

double mlp::synapse0x1049d26a0() {
   return (neuron0x1049c9230()*-0.261078);
}

double mlp::synapse0x1049d26d0() {
   return (neuron0x1049c9510()*0.302424);
}

double mlp::synapse0x1049d2700() {
   return (neuron0x1049c97f0()*0.340409);
}

double mlp::synapse0x1049d2730() {
   return (neuron0x1049c9ad0()*0.351237);
}

double mlp::synapse0x1049d2760() {
   return (neuron0x1049c9db0()*0.502325);
}

double mlp::synapse0x1049d2790() {
   return (neuron0x1049ca090()*0.0540894);
}

double mlp::synapse0x1049d27c0() {
   return (neuron0x1049ca370()*0.374997);
}

double mlp::synapse0x1049d27f0() {
   return (neuron0x1049ca680()*0.194741);
}

double mlp::synapse0x1049d2820() {
   return (neuron0x1049ca990()*0.0410688);
}

double mlp::synapse0x1049d2850() {
   return (neuron0x1049caca0()*0.3418);
}

double mlp::synapse0x1049d2880() {
   return (neuron0x1049cafb0()*-0.359766);
}

double mlp::synapse0x1049d28b0() {
   return (neuron0x1049cb2c0()*0.336919);
}

double mlp::synapse0x1049d28e0() {
   return (neuron0x1049cb5d0()*-0.231853);
}

double mlp::synapse0x1049d2910() {
   return (neuron0x1049cb8e0()*-0.219651);
}

double mlp::synapse0x1049d2a40() {
   return (neuron0x1049cbbf0()*-0.0167686);
}

double mlp::synapse0x1049d2a70() {
   return (neuron0x1049cc100()*-0.0355837);
}

double mlp::synapse0x1049d2aa0() {
   return (neuron0x1049cc360()*0.264);
}

double mlp::synapse0x1049d2ad0() {
   return (neuron0x1049cc640()*-0.0715139);
}

double mlp::synapse0x1049d2d90() {
   return (neuron0x1049c8e70()*-0.325917);
}

double mlp::synapse0x1049d2dc0() {
   return (neuron0x1049c8fd0()*0.352563);
}

double mlp::synapse0x1049d2df0() {
   return (neuron0x1049c9230()*0.0261385);
}

double mlp::synapse0x1049d2e20() {
   return (neuron0x1049c9510()*0.108332);
}

double mlp::synapse0x1049d2e50() {
   return (neuron0x1049c97f0()*0.237899);
}

double mlp::synapse0x1049d2e80() {
   return (neuron0x1049c9ad0()*-0.0270865);
}

double mlp::synapse0x1049d2eb0() {
   return (neuron0x1049c9db0()*0.39279);
}

double mlp::synapse0x1049d2ee0() {
   return (neuron0x1049ca090()*0.422195);
}

double mlp::synapse0x1049d2f10() {
   return (neuron0x1049ca370()*-0.213359);
}

double mlp::synapse0x1049d2f40() {
   return (neuron0x1049ca680()*-0.132418);
}

double mlp::synapse0x1049d2f70() {
   return (neuron0x1049ca990()*-0.024011);
}

double mlp::synapse0x1049d2fa0() {
   return (neuron0x1049caca0()*-0.0787862);
}

double mlp::synapse0x1049d2fd0() {
   return (neuron0x1049cafb0()*0.125116);
}

double mlp::synapse0x1049d3000() {
   return (neuron0x1049cb2c0()*0.148195);
}

double mlp::synapse0x1049d3030() {
   return (neuron0x1049cb5d0()*-0.12531);
}

double mlp::synapse0x1049d3060() {
   return (neuron0x1049cb8e0()*0.0816114);
}

double mlp::synapse0x1049d3190() {
   return (neuron0x1049cbbf0()*0.223592);
}

double mlp::synapse0x1049d31c0() {
   return (neuron0x1049cc100()*0.0976413);
}

double mlp::synapse0x1049d31f0() {
   return (neuron0x1049cc360()*0.124888);
}

double mlp::synapse0x1049d3220() {
   return (neuron0x1049cc640()*-0.0339883);
}

double mlp::synapse0x1049d34e0() {
   return (neuron0x1049c8e70()*0.184431);
}

double mlp::synapse0x1049d3610() {
   return (neuron0x1049c8fd0()*0.657789);
}

double mlp::synapse0x1049b6fd0() {
   return (neuron0x1049c9230()*0.408699);
}

double mlp::synapse0x1049b7000() {
   return (neuron0x1049c9510()*-0.0138123);
}

double mlp::synapse0x1049b7030() {
   return (neuron0x1049c97f0()*-0.366803);
}

double mlp::synapse0x1049c96f0() {
   return (neuron0x1049c9ad0()*0.27289);
}

double mlp::synapse0x1049c9720() {
   return (neuron0x1049c9db0()*-0.0412948);
}

double mlp::synapse0x1049c9cb0() {
   return (neuron0x1049ca090()*0.271159);
}

double mlp::synapse0x1049c9ce0() {
   return (neuron0x1049ca370()*0.342798);
}

double mlp::synapse0x1049ca270() {
   return (neuron0x1049ca680()*-0.112836);
}

double mlp::synapse0x1049ca2a0() {
   return (neuron0x1049ca990()*0.302139);
}

double mlp::synapse0x1049ca890() {
   return (neuron0x1049caca0()*0.074351);
}

double mlp::synapse0x1049ca8c0() {
   return (neuron0x1049cafb0()*0.41948);
}

double mlp::synapse0x1049caeb0() {
   return (neuron0x1049cb2c0()*0.254608);
}

double mlp::synapse0x1049caee0() {
   return (neuron0x1049cb5d0()*-0.0931229);
}

double mlp::synapse0x1049cb4d0() {
   return (neuron0x1049cb8e0()*-0.131256);
}

double mlp::synapse0x1049cb500() {
   return (neuron0x1049cbbf0()*0.211241);
}

double mlp::synapse0x1049abc90() {
   return (neuron0x1049cc100()*-0.277524);
}

double mlp::synapse0x1049abcc0() {
   return (neuron0x1049cc360()*0.582205);
}

double mlp::synapse0x1049cc260() {
   return (neuron0x1049cc640()*0.063778);
}

double mlp::synapse0x1049cbaf0() {
   return (neuron0x1049c8e70()*0.42893);
}

double mlp::synapse0x1049cbb20() {
   return (neuron0x1049c8fd0()*0.155363);
}

double mlp::synapse0x1049cb7e0() {
   return (neuron0x1049c9230()*0.608147);
}

double mlp::synapse0x1049cb810() {
   return (neuron0x1049c9510()*-0.368964);
}

double mlp::synapse0x1049cb1c0() {
   return (neuron0x1049c97f0()*0.1004);
}

double mlp::synapse0x1049cb1f0() {
   return (neuron0x1049c9ad0()*0.162622);
}

double mlp::synapse0x1049caba0() {
   return (neuron0x1049c9db0()*0.279293);
}

double mlp::synapse0x1049cabd0() {
   return (neuron0x1049ca090()*0.172145);
}

double mlp::synapse0x1049ca580() {
   return (neuron0x1049ca370()*-0.331936);
}

double mlp::synapse0x1049ca5b0() {
   return (neuron0x1049ca680()*0.0665242);
}

double mlp::synapse0x1049c9f90() {
   return (neuron0x1049ca990()*-0.230143);
}

double mlp::synapse0x1049c9fc0() {
   return (neuron0x1049caca0()*0.205786);
}

double mlp::synapse0x1049c99d0() {
   return (neuron0x1049cafb0()*0.444413);
}

double mlp::synapse0x1049c9a00() {
   return (neuron0x1049cb2c0()*-0.248939);
}

double mlp::synapse0x1049c9410() {
   return (neuron0x1049cb5d0()*-0.334016);
}

double mlp::synapse0x1049c9440() {
   return (neuron0x1049cb8e0()*-0.292741);
}

double mlp::synapse0x1049c9130() {
   return (neuron0x1049cbbf0()*0.350075);
}

double mlp::synapse0x1049c9160() {
   return (neuron0x1049cc100()*0.0444425);
}

double mlp::synapse0x1049d4ca0() {
   return (neuron0x1049cc360()*-0.0319842);
}

double mlp::synapse0x1049d4cd0() {
   return (neuron0x1049cc640()*-0.475958);
}

double mlp::synapse0x1049d4f90() {
   return (neuron0x1049c8e70()*-0.0862024);
}

double mlp::synapse0x1049d4fc0() {
   return (neuron0x1049c8fd0()*0.341803);
}

double mlp::synapse0x1049d4ff0() {
   return (neuron0x1049c9230()*0.373052);
}

double mlp::synapse0x1049d5020() {
   return (neuron0x1049c9510()*-0.145912);
}

double mlp::synapse0x1049d5050() {
   return (neuron0x1049c97f0()*0.215222);
}

double mlp::synapse0x1049d5080() {
   return (neuron0x1049c9ad0()*-0.178612);
}

double mlp::synapse0x1049d50b0() {
   return (neuron0x1049c9db0()*-0.154806);
}

double mlp::synapse0x1049d50e0() {
   return (neuron0x1049ca090()*-0.0694393);
}

double mlp::synapse0x1049d5110() {
   return (neuron0x1049ca370()*-0.255293);
}

double mlp::synapse0x1049d5140() {
   return (neuron0x1049ca680()*-0.199983);
}

double mlp::synapse0x1049d5170() {
   return (neuron0x1049ca990()*0.0443528);
}

double mlp::synapse0x1049d51a0() {
   return (neuron0x1049caca0()*-0.49228);
}

double mlp::synapse0x1049d51d0() {
   return (neuron0x1049cafb0()*-0.0477594);
}

double mlp::synapse0x1049d5200() {
   return (neuron0x1049cb2c0()*-0.461673);
}

double mlp::synapse0x1049d5230() {
   return (neuron0x1049cb5d0()*0.0968785);
}

double mlp::synapse0x1049d5260() {
   return (neuron0x1049cb8e0()*0.356114);
}

double mlp::synapse0x1049d5390() {
   return (neuron0x1049cbbf0()*0.0603117);
}

double mlp::synapse0x1049d53c0() {
   return (neuron0x1049cc100()*0.122829);
}

double mlp::synapse0x1049d53f0() {
   return (neuron0x1049cc360()*-0.270481);
}

double mlp::synapse0x1049d5420() {
   return (neuron0x1049cc640()*-0.472638);
}

double mlp::synapse0x1049d56e0() {
   return (neuron0x1049c8e70()*0.430232);
}

double mlp::synapse0x1049d5710() {
   return (neuron0x1049c8fd0()*-0.60572);
}

double mlp::synapse0x1049d5740() {
   return (neuron0x1049c9230()*0.103704);
}

double mlp::synapse0x1049d5770() {
   return (neuron0x1049c9510()*-0.227377);
}

double mlp::synapse0x1049d57a0() {
   return (neuron0x1049c97f0()*-0.105904);
}

double mlp::synapse0x1049d57d0() {
   return (neuron0x1049c9ad0()*-0.329256);
}

double mlp::synapse0x1049d5800() {
   return (neuron0x1049c9db0()*-0.0597818);
}

double mlp::synapse0x1049d5830() {
   return (neuron0x1049ca090()*-0.10472);
}

double mlp::synapse0x1049d5860() {
   return (neuron0x1049ca370()*0.00741721);
}

double mlp::synapse0x1049d5890() {
   return (neuron0x1049ca680()*0.191416);
}

double mlp::synapse0x1049d58c0() {
   return (neuron0x1049ca990()*0.189762);
}

double mlp::synapse0x1049d58f0() {
   return (neuron0x1049caca0()*0.364624);
}

double mlp::synapse0x1049d5920() {
   return (neuron0x1049cafb0()*0.141556);
}

double mlp::synapse0x1049d5950() {
   return (neuron0x1049cb2c0()*0.228499);
}

double mlp::synapse0x1049d5980() {
   return (neuron0x1049cb5d0()*0.33516);
}

double mlp::synapse0x1049d59b0() {
   return (neuron0x1049cb8e0()*0.112982);
}

double mlp::synapse0x1049d5ae0() {
   return (neuron0x1049cbbf0()*0.250977);
}

double mlp::synapse0x1049d5b10() {
   return (neuron0x1049cc100()*0.00132652);
}

double mlp::synapse0x1049d5b40() {
   return (neuron0x1049cc360()*-0.337991);
}

double mlp::synapse0x1049d5b70() {
   return (neuron0x1049cc640()*0.340239);
}

double mlp::synapse0x1049d5e30() {
   return (neuron0x1049c8e70()*-0.145621);
}

double mlp::synapse0x1049d5e60() {
   return (neuron0x1049c8fd0()*0.483372);
}

double mlp::synapse0x1049d5e90() {
   return (neuron0x1049c9230()*0.588473);
}

double mlp::synapse0x1049d5ec0() {
   return (neuron0x1049c9510()*-0.265038);
}

double mlp::synapse0x1049d5ef0() {
   return (neuron0x1049c97f0()*0.216057);
}

double mlp::synapse0x1049d5f20() {
   return (neuron0x1049c9ad0()*-0.200353);
}

double mlp::synapse0x1049d5f50() {
   return (neuron0x1049c9db0()*0.148935);
}

double mlp::synapse0x1049d5f80() {
   return (neuron0x1049ca090()*-0.0870668);
}

double mlp::synapse0x1049d5fb0() {
   return (neuron0x1049ca370()*0.186661);
}

double mlp::synapse0x1049d5fe0() {
   return (neuron0x1049ca680()*-0.113255);
}

double mlp::synapse0x1049d6010() {
   return (neuron0x1049ca990()*-0.0645239);
}

double mlp::synapse0x1049d6040() {
   return (neuron0x1049caca0()*-0.00277445);
}

double mlp::synapse0x1049d6070() {
   return (neuron0x1049cafb0()*-0.176986);
}

double mlp::synapse0x1049d60a0() {
   return (neuron0x1049cb2c0()*-0.027286);
}

double mlp::synapse0x1049d60d0() {
   return (neuron0x1049cb5d0()*0.266154);
}

double mlp::synapse0x1049d6100() {
   return (neuron0x1049cb8e0()*0.568604);
}

double mlp::synapse0x1049d6230() {
   return (neuron0x1049cbbf0()*-0.0782035);
}

double mlp::synapse0x1049d6260() {
   return (neuron0x1049cc100()*-0.354841);
}

double mlp::synapse0x1049d6290() {
   return (neuron0x1049cc360()*-0.28717);
}

double mlp::synapse0x1049d62c0() {
   return (neuron0x1049cc640()*-0.166727);
}

double mlp::synapse0x1049d6450() {
   return (neuron0x1049b7090()*-0.0268548);
}

double mlp::synapse0x1049d6480() {
   return (neuron0x1049ccbb0()*0.171138);
}

double mlp::synapse0x1049d64b0() {
   return (neuron0x1049cd410()*0.187852);
}

double mlp::synapse0x1049d64e0() {
   return (neuron0x1049cdb60()*0.134233);
}

double mlp::synapse0x1049d6510() {
   return (neuron0x1049ce0d0()*0.0495495);
}

double mlp::synapse0x1049d6540() {
   return (neuron0x1049ce820()*0.0988728);
}

double mlp::synapse0x1049d6570() {
   return (neuron0x1049cef70()*0.0426947);
}

double mlp::synapse0x1049d65a0() {
   return (neuron0x1049cf6c0()*0.198114);
}

double mlp::synapse0x1049d65d0() {
   return (neuron0x1049cfe10()*-0.0285896);
}

double mlp::synapse0x1049d6600() {
   return (neuron0x1049d0560()*-0.188095);
}

double mlp::synapse0x1049d6630() {
   return (neuron0x1049d0cb0()*-0.212463);
}

double mlp::synapse0x1049d6660() {
   return (neuron0x1049d1400()*0.0892108);
}

double mlp::synapse0x1049d6690() {
   return (neuron0x1049d1b50()*-0.0969172);
}

double mlp::synapse0x1049d66c0() {
   return (neuron0x1049d23b0()*0.0208903);
}

double mlp::synapse0x1049d66f0() {
   return (neuron0x1049d2b00()*0.188863);
}

double mlp::synapse0x1049d6720() {
   return (neuron0x1049d3250()*-0.191582);
}

double mlp::synapse0x1049d6850() {
   return (neuron0x1049d4a40()*-0.00837533);
}

double mlp::synapse0x1049d6880() {
   return (neuron0x1049d4d00()*0.213783);
}

double mlp::synapse0x1049d68b0() {
   return (neuron0x1049d5450()*-0.0655345);
}

double mlp::synapse0x1049d68e0() {
   return (neuron0x1049d5ba0()*0.0105962);
}

double mlp::synapse0x1049d6b70() {
   return (neuron0x1049b7090()*0.166623);
}

double mlp::synapse0x1049d6ba0() {
   return (neuron0x1049ccbb0()*0.041974);
}

double mlp::synapse0x1049d6bd0() {
   return (neuron0x1049cd410()*-0.158489);
}

double mlp::synapse0x1049d6c00() {
   return (neuron0x1049cdb60()*0.015311);
}

double mlp::synapse0x1049d6c30() {
   return (neuron0x1049ce0d0()*0.199797);
}

double mlp::synapse0x1049d6c60() {
   return (neuron0x1049ce820()*0.150539);
}

double mlp::synapse0x1049d6c90() {
   return (neuron0x1049cef70()*0.188745);
}

double mlp::synapse0x1049d6cc0() {
   return (neuron0x1049cf6c0()*-0.147743);
}

double mlp::synapse0x1049d6cf0() {
   return (neuron0x1049cfe10()*-0.0532353);
}

double mlp::synapse0x1049d6d20() {
   return (neuron0x1049d0560()*-0.174525);
}

double mlp::synapse0x1049d6d50() {
   return (neuron0x1049d0cb0()*-0.0884381);
}

double mlp::synapse0x1049d6d80() {
   return (neuron0x1049d1400()*0.162719);
}

double mlp::synapse0x1049d6db0() {
   return (neuron0x1049d1b50()*0.214004);
}

double mlp::synapse0x1049d6de0() {
   return (neuron0x1049d23b0()*-0.0693333);
}

double mlp::synapse0x1049d6e10() {
   return (neuron0x1049d2b00()*0.00725875);
}

double mlp::synapse0x1049d6e40() {
   return (neuron0x1049d3250()*0.0838438);
}

double mlp::synapse0x1049d6f70() {
   return (neuron0x1049d4a40()*-0.188917);
}

double mlp::synapse0x1049d6fa0() {
   return (neuron0x1049d4d00()*0.015564);
}

double mlp::synapse0x1049d6fd0() {
   return (neuron0x1049d5450()*-0.0931878);
}

double mlp::synapse0x1049d7000() {
   return (neuron0x1049d5ba0()*-0.156327);
}

double mlp::synapse0x1049d7290() {
   return (neuron0x1049b7090()*-0.0474054);
}

double mlp::synapse0x1049d72c0() {
   return (neuron0x1049ccbb0()*-0.113186);
}

double mlp::synapse0x1049d72f0() {
   return (neuron0x1049cd410()*0.0263406);
}

double mlp::synapse0x1049d7320() {
   return (neuron0x1049cdb60()*0.155908);
}

double mlp::synapse0x1049d7350() {
   return (neuron0x1049ce0d0()*0.134538);
}

double mlp::synapse0x1049d7380() {
   return (neuron0x1049ce820()*0.312005);
}

double mlp::synapse0x1049d73b0() {
   return (neuron0x1049cef70()*-0.134088);
}

double mlp::synapse0x1049d73e0() {
   return (neuron0x1049cf6c0()*0.0111472);
}

double mlp::synapse0x1049d7410() {
   return (neuron0x1049cfe10()*-0.210623);
}

double mlp::synapse0x1049d7440() {
   return (neuron0x1049d0560()*0.0536054);
}

double mlp::synapse0x1049d7470() {
   return (neuron0x1049d0cb0()*-0.026);
}

double mlp::synapse0x1049d74a0() {
   return (neuron0x1049d1400()*0.164508);
}

double mlp::synapse0x1049d74d0() {
   return (neuron0x1049d1b50()*-0.228222);
}

double mlp::synapse0x1049d7500() {
   return (neuron0x1049d23b0()*-0.326475);
}

double mlp::synapse0x1049d7530() {
   return (neuron0x1049d2b00()*0.00499735);
}

double mlp::synapse0x1049d7560() {
   return (neuron0x1049d3250()*-0.257462);
}

double mlp::synapse0x1049d7690() {
   return (neuron0x1049d4a40()*-0.15761);
}

double mlp::synapse0x1049d76c0() {
   return (neuron0x1049d4d00()*-0.184766);
}

double mlp::synapse0x1049d76f0() {
   return (neuron0x1049d5450()*-0.156158);
}

double mlp::synapse0x1049d7720() {
   return (neuron0x1049d5ba0()*0.189915);
}

double mlp::synapse0x1049d79b0() {
   return (neuron0x1049b7090()*-0.0162607);
}

double mlp::synapse0x1049d79e0() {
   return (neuron0x1049ccbb0()*0.281544);
}

double mlp::synapse0x1049d7a10() {
   return (neuron0x1049cd410()*0.180528);
}

double mlp::synapse0x1049d7a40() {
   return (neuron0x1049cdb60()*0.0611887);
}

double mlp::synapse0x1049d7a70() {
   return (neuron0x1049ce0d0()*-0.117595);
}

double mlp::synapse0x1049d7aa0() {
   return (neuron0x1049ce820()*-0.124361);
}

double mlp::synapse0x1049d7ad0() {
   return (neuron0x1049cef70()*-0.0437974);
}

double mlp::synapse0x1049d7b00() {
   return (neuron0x1049cf6c0()*0.0118606);
}

double mlp::synapse0x1049d7b30() {
   return (neuron0x1049cfe10()*-0.207145);
}

double mlp::synapse0x1049d7b60() {
   return (neuron0x1049d0560()*-0.0527783);
}

double mlp::synapse0x1049d7b90() {
   return (neuron0x1049d0cb0()*0.102777);
}

double mlp::synapse0x1049d7bc0() {
   return (neuron0x1049d1400()*-0.190083);
}

double mlp::synapse0x1049d7bf0() {
   return (neuron0x1049d1b50()*-0.113075);
}

double mlp::synapse0x1049d7c20() {
   return (neuron0x1049d23b0()*0.0601733);
}

double mlp::synapse0x1049d7c50() {
   return (neuron0x1049d2b00()*0.394974);
}

double mlp::synapse0x1049d7c80() {
   return (neuron0x1049d3250()*0.0310446);
}

double mlp::synapse0x1049d7db0() {
   return (neuron0x1049d4a40()*-0.0310161);
}

double mlp::synapse0x1049d7de0() {
   return (neuron0x1049d4d00()*0.101105);
}

double mlp::synapse0x1049d7e10() {
   return (neuron0x1049d5450()*0.0226868);
}

double mlp::synapse0x1049d7e40() {
   return (neuron0x1049d5ba0()*-0.143133);
}

double mlp::synapse0x1049b68f0() {
   return (neuron0x1049b7090()*0.407999);
}

double mlp::synapse0x1049d80d0() {
   return (neuron0x1049ccbb0()*-0.287211);
}

double mlp::synapse0x1049d8100() {
   return (neuron0x1049cd410()*0.130633);
}

double mlp::synapse0x1049d8130() {
   return (neuron0x1049cdb60()*-0.131845);
}

double mlp::synapse0x1049d8160() {
   return (neuron0x1049ce0d0()*-0.0097591);
}

double mlp::synapse0x1049d8190() {
   return (neuron0x1049ce820()*-0.0970086);
}

double mlp::synapse0x1049d81c0() {
   return (neuron0x1049cef70()*-0.0475195);
}

double mlp::synapse0x1049d81f0() {
   return (neuron0x1049cf6c0()*0.0836287);
}

double mlp::synapse0x1049d8220() {
   return (neuron0x1049cfe10()*-0.00298029);
}

double mlp::synapse0x1049d8250() {
   return (neuron0x1049d0560()*-0.155627);
}

double mlp::synapse0x1049d8280() {
   return (neuron0x1049d0cb0()*0.0418252);
}

double mlp::synapse0x1049d82b0() {
   return (neuron0x1049d1400()*0.175961);
}

double mlp::synapse0x1049d82e0() {
   return (neuron0x1049d1b50()*-0.2281);
}

double mlp::synapse0x1049d8310() {
   return (neuron0x1049d23b0()*0.13872);
}

double mlp::synapse0x1049d8340() {
   return (neuron0x1049d2b00()*0.0440232);
}

double mlp::synapse0x1049d8370() {
   return (neuron0x1049d3250()*0.717925);
}

double mlp::synapse0x1049d84a0() {
   return (neuron0x1049d4a40()*0.208767);
}

double mlp::synapse0x1049d84d0() {
   return (neuron0x1049d4d00()*0.000276168);
}

double mlp::synapse0x1049d8500() {
   return (neuron0x1049d5450()*-0.295341);
}

double mlp::synapse0x1049d8530() {
   return (neuron0x1049d5ba0()*0.528423);
}

double mlp::synapse0x1049d87c0() {
   return (neuron0x1049b7090()*-0.164893);
}

double mlp::synapse0x1049d87f0() {
   return (neuron0x1049ccbb0()*-0.427408);
}

double mlp::synapse0x1049d8820() {
   return (neuron0x1049cd410()*0.195976);
}

double mlp::synapse0x1049d8850() {
   return (neuron0x1049cdb60()*-0.0180387);
}

double mlp::synapse0x1049d8880() {
   return (neuron0x1049ce0d0()*-0.177387);
}

double mlp::synapse0x1049d88b0() {
   return (neuron0x1049ce820()*-0.237505);
}

double mlp::synapse0x1049d88e0() {
   return (neuron0x1049cef70()*0.290648);
}

double mlp::synapse0x1049d8910() {
   return (neuron0x1049cf6c0()*-0.0526934);
}

double mlp::synapse0x1049d8940() {
   return (neuron0x1049cfe10()*0.0691446);
}

double mlp::synapse0x1049d8970() {
   return (neuron0x1049d0560()*0.39103);
}

double mlp::synapse0x1049d89a0() {
   return (neuron0x1049d0cb0()*0.186881);
}

double mlp::synapse0x1049d89d0() {
   return (neuron0x1049d1400()*-0.261474);
}

double mlp::synapse0x1049d8a00() {
   return (neuron0x1049d1b50()*0.245976);
}

double mlp::synapse0x1049d8a30() {
   return (neuron0x1049d23b0()*0.139121);
}

double mlp::synapse0x1049d8a60() {
   return (neuron0x1049d2b00()*-0.413212);
}

double mlp::synapse0x1049d8a90() {
   return (neuron0x1049d3250()*-0.102013);
}

double mlp::synapse0x1049d8bc0() {
   return (neuron0x1049d4a40()*0.216788);
}

double mlp::synapse0x1049d8bf0() {
   return (neuron0x1049d4d00()*-0.00981102);
}

double mlp::synapse0x1049d8c20() {
   return (neuron0x1049d5450()*0.127991);
}

double mlp::synapse0x1049d8c50() {
   return (neuron0x1049d5ba0()*-0.637022);
}

double mlp::synapse0x1049d8ee0() {
   return (neuron0x1049b7090()*0.146897);
}

double mlp::synapse0x1049d8f10() {
   return (neuron0x1049ccbb0()*0.188828);
}

double mlp::synapse0x1049d8f40() {
   return (neuron0x1049cd410()*-0.178714);
}

double mlp::synapse0x1049d8f70() {
   return (neuron0x1049cdb60()*-0.0524678);
}

double mlp::synapse0x1049d8fa0() {
   return (neuron0x1049ce0d0()*0.118721);
}

double mlp::synapse0x1049d8fd0() {
   return (neuron0x1049ce820()*0.0284801);
}

double mlp::synapse0x1049d9000() {
   return (neuron0x1049cef70()*0.132257);
}

double mlp::synapse0x1049d9030() {
   return (neuron0x1049cf6c0()*-0.0405954);
}

double mlp::synapse0x1049d9060() {
   return (neuron0x1049cfe10()*0.207177);
}

double mlp::synapse0x1049d9090() {
   return (neuron0x1049d0560()*-0.0110457);
}

double mlp::synapse0x1049d90c0() {
   return (neuron0x1049d0cb0()*-0.269828);
}

double mlp::synapse0x1049d90f0() {
   return (neuron0x1049d1400()*0.211143);
}

double mlp::synapse0x1049d9120() {
   return (neuron0x1049d1b50()*0.097289);
}

double mlp::synapse0x1049d9150() {
   return (neuron0x1049d23b0()*-0.0571073);
}

double mlp::synapse0x1049d9180() {
   return (neuron0x1049d2b00()*0.00181615);
}

double mlp::synapse0x1049d91b0() {
   return (neuron0x1049d3250()*0.0711185);
}

double mlp::synapse0x1049d92e0() {
   return (neuron0x1049d4a40()*0.12339);
}

double mlp::synapse0x1049d9310() {
   return (neuron0x1049d4d00()*0.00368423);
}

double mlp::synapse0x1049d9340() {
   return (neuron0x1049d5450()*0.0517084);
}

double mlp::synapse0x1049d9370() {
   return (neuron0x1049d5ba0()*0.0554355);
}

double mlp::synapse0x1049d9600() {
   return (neuron0x1049b7090()*0.127222);
}

double mlp::synapse0x1049d9630() {
   return (neuron0x1049ccbb0()*0.277382);
}

double mlp::synapse0x1049d9660() {
   return (neuron0x1049cd410()*-0.295418);
}

double mlp::synapse0x1049d9690() {
   return (neuron0x1049cdb60()*-0.0563552);
}

double mlp::synapse0x1049d96c0() {
   return (neuron0x1049ce0d0()*0.109268);
}

double mlp::synapse0x1049d96f0() {
   return (neuron0x1049ce820()*0.292858);
}

double mlp::synapse0x1049d9720() {
   return (neuron0x1049cef70()*-0.0212715);
}

double mlp::synapse0x1049d9750() {
   return (neuron0x1049cf6c0()*-0.0719391);
}

double mlp::synapse0x1049d9780() {
   return (neuron0x1049cfe10()*0.18883);
}

double mlp::synapse0x1049d97b0() {
   return (neuron0x1049d0560()*0.190598);
}

double mlp::synapse0x1049d97e0() {
   return (neuron0x1049d0cb0()*-0.303137);
}

double mlp::synapse0x1049d9810() {
   return (neuron0x1049d1400()*0.0424785);
}

double mlp::synapse0x1049d9840() {
   return (neuron0x1049d1b50()*0.102791);
}

double mlp::synapse0x1049d9870() {
   return (neuron0x1049d23b0()*-0.137298);
}

double mlp::synapse0x1049d98a0() {
   return (neuron0x1049d2b00()*-0.330521);
}

double mlp::synapse0x1049d98d0() {
   return (neuron0x1049d3250()*-0.00134898);
}

double mlp::synapse0x1049d9a00() {
   return (neuron0x1049d4a40()*0.225696);
}

double mlp::synapse0x1049d9a30() {
   return (neuron0x1049d4d00()*-0.126946);
}

double mlp::synapse0x1049d9a60() {
   return (neuron0x1049d5450()*-0.0299345);
}

double mlp::synapse0x1049d9a90() {
   return (neuron0x1049d5ba0()*0.202132);
}

double mlp::synapse0x1049d9d20() {
   return (neuron0x1049b7090()*-0.199581);
}

double mlp::synapse0x1049d9d50() {
   return (neuron0x1049ccbb0()*0.483487);
}

double mlp::synapse0x1049d9d80() {
   return (neuron0x1049cd410()*-0.232362);
}

double mlp::synapse0x1049d9db0() {
   return (neuron0x1049cdb60()*-0.0050717);
}

double mlp::synapse0x1049d9de0() {
   return (neuron0x1049ce0d0()*-0.00492062);
}

double mlp::synapse0x1049d9e10() {
   return (neuron0x1049ce820()*-0.25746);
}

double mlp::synapse0x1049d9e40() {
   return (neuron0x1049cef70()*-0.0478372);
}

double mlp::synapse0x1049d9e70() {
   return (neuron0x1049cf6c0()*0.163055);
}

double mlp::synapse0x1049d9ea0() {
   return (neuron0x1049cfe10()*0.427726);
}

double mlp::synapse0x1049d9ed0() {
   return (neuron0x1049d0560()*0.122993);
}

double mlp::synapse0x1049d9f00() {
   return (neuron0x1049d0cb0()*-0.270874);
}

double mlp::synapse0x1049d9f30() {
   return (neuron0x1049d1400()*0.225434);
}

double mlp::synapse0x1049d9f60() {
   return (neuron0x1049d1b50()*-0.0896046);
}

double mlp::synapse0x1049d9f90() {
   return (neuron0x1049d23b0()*-0.143708);
}

double mlp::synapse0x1049d9fc0() {
   return (neuron0x1049d2b00()*0.390167);
}

double mlp::synapse0x1049d9ff0() {
   return (neuron0x1049d3250()*-0.220118);
}

double mlp::synapse0x1049da120() {
   return (neuron0x1049d4a40()*0.0608602);
}

double mlp::synapse0x1049da150() {
   return (neuron0x1049d4d00()*-0.164102);
}

double mlp::synapse0x1049da180() {
   return (neuron0x1049d5450()*0.287853);
}

double mlp::synapse0x1049da1b0() {
   return (neuron0x1049d5ba0()*0.19896);
}

