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
         return neuron0x1049d6be0();
     case 1:
         return neuron0x1049d7200();
     case 2:
         return neuron0x1049d7920();
     case 3:
         return neuron0x1049d8040();
     case 4:
         return neuron0x1049d8760();
     case 5:
         return neuron0x1049d8e50();
     case 6:
         return neuron0x1049d9570();
     case 7:
         return neuron0x1049d9c90();
     case 8:
         return neuron0x1049da3b0();
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
         return neuron0x1049d6be0();
     case 1:
         return neuron0x1049d7200();
     case 2:
         return neuron0x1049d7920();
     case 3:
         return neuron0x1049d8040();
     case 4:
         return neuron0x1049d8760();
     case 5:
         return neuron0x1049d8e50();
     case 6:
         return neuron0x1049d9570();
     case 7:
         return neuron0x1049d9c90();
     case 8:
         return neuron0x1049da3b0();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049c9760() {
   return input0;
}

double mlp::neuron0x1049c98c0() {
   return input1;
}

double mlp::neuron0x1049c9b20() {
   return input2;
}

double mlp::neuron0x1049c9e00() {
   return input3;
}

double mlp::neuron0x1049ca0e0() {
   return input4;
}

double mlp::neuron0x1049ca3c0() {
   return input5;
}

double mlp::neuron0x1049ca6a0() {
   return input6;
}

double mlp::neuron0x1049ca980() {
   return input7;
}

double mlp::neuron0x1049cac60() {
   return input8;
}

double mlp::neuron0x1049caf70() {
   return input9;
}

double mlp::neuron0x1049cb280() {
   return input10;
}

double mlp::neuron0x1049cb590() {
   return input11;
}

double mlp::neuron0x1049cb8a0() {
   return input12;
}

double mlp::neuron0x1049cbbb0() {
   return input13;
}

double mlp::neuron0x1049cbec0() {
   return input14;
}

double mlp::neuron0x1049cc1d0() {
   return input15;
}

double mlp::neuron0x1049cc4e0() {
   return input16;
}

double mlp::neuron0x1049cc9f0() {
   return input17;
}

double mlp::neuron0x1049ccc50() {
   return input18;
}

double mlp::neuron0x1049ccf30() {
   return input19;
}

double mlp::input0x1049b7980() {
   double input = 0.11208;
   input += synapse0x1049c8f80();
   input += synapse0x1049b7320();
   input += synapse0x1049c9600();
   input += synapse0x1049c9700();
   input += synapse0x1049c9730();
   input += synapse0x1049b7b60();
   input += synapse0x1049b7b90();
   input += synapse0x1049b7bc0();
   input += synapse0x1049b7bf0();
   input += synapse0x1049b7c20();
   input += synapse0x1049b7c50();
   input += synapse0x1049b7c80();
   input += synapse0x1049b7cb0();
   input += synapse0x1049b7ce0();
   input += synapse0x1049b7d10();
   input += synapse0x1049b7d40();
   input += synapse0x1049cd340();
   input += synapse0x1049c8f00();
   input += synapse0x1049c8f30();
   input += synapse0x1049cd470();
   return input;
}

double mlp::neuron0x1049b7980() {
   double input = input0x1049b7980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cd4a0() {
   double input = 0.184109;
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
   input += synapse0x1049cd370();
   input += synapse0x1049cd3a0();
   input += synapse0x1049cd3d0();
   input += synapse0x1049cd400();
   input += synapse0x1049cd430();
   input += synapse0x1049cdca0();
   input += synapse0x1049cdcd0();
   return input;
}

double mlp::neuron0x1049cd4a0() {
   double input = input0x1049cd4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cdd00() {
   double input = 0.471932;
   input += synapse0x1049cdf90();
   input += synapse0x1049cdfc0();
   input += synapse0x1049cdff0();
   input += synapse0x1049ce020();
   input += synapse0x1049ce050();
   input += synapse0x1049ce080();
   input += synapse0x1049ce0b0();
   input += synapse0x1049ce0e0();
   input += synapse0x1049ce110();
   input += synapse0x1049ce140();
   input += synapse0x1049ce170();
   input += synapse0x1049ce1a0();
   input += synapse0x1049ce1d0();
   input += synapse0x1049ce200();
   input += synapse0x1049ce230();
   input += synapse0x1049ce260();
   input += synapse0x1049ce390();
   input += synapse0x1049ce3c0();
   input += synapse0x1049ce3f0();
   input += synapse0x1049ce420();
   return input;
}

double mlp::neuron0x1049cdd00() {
   double input = input0x1049cdd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ce450() {
   double input = -0.0958944;
   input += synapse0x1049ce6e0();
   input += synapse0x1049ce710();
   input += synapse0x1049ce740();
   input += synapse0x1049ce770();
   input += synapse0x1049ce7a0();
   input += synapse0x1049cd9a0();
   input += synapse0x1049cd9d0();
   input += synapse0x1049cda00();
   input += synapse0x1049cda30();
   input += synapse0x1049cda60();
   input += synapse0x1049cda90();
   input += synapse0x1049cdac0();
   input += synapse0x1049cdaf0();
   input += synapse0x1049cdb20();
   input += synapse0x1049cdb50();
   input += synapse0x1049ce7d0();
   input += synapse0x1049ce900();
   input += synapse0x1049ce930();
   input += synapse0x1049ce960();
   input += synapse0x1049ce990();
   return input;
}

double mlp::neuron0x1049ce450() {
   double input = input0x1049ce450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ce9c0() {
   double input = -0.093387;
   input += synapse0x1049cec50();
   input += synapse0x1049cec80();
   input += synapse0x1049cecb0();
   input += synapse0x1049cece0();
   input += synapse0x1049ced10();
   input += synapse0x1049ced40();
   input += synapse0x1049ced70();
   input += synapse0x1049ceda0();
   input += synapse0x1049cedd0();
   input += synapse0x1049cee00();
   input += synapse0x1049cee30();
   input += synapse0x1049cee60();
   input += synapse0x1049cee90();
   input += synapse0x1049ceec0();
   input += synapse0x1049ceef0();
   input += synapse0x1049cef20();
   input += synapse0x1049cf050();
   input += synapse0x1049cf080();
   input += synapse0x1049cf0b0();
   input += synapse0x1049cf0e0();
   return input;
}

double mlp::neuron0x1049ce9c0() {
   double input = input0x1049ce9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cf110() {
   double input = 0.000647187;
   input += synapse0x1049cf3a0();
   input += synapse0x1049cf3d0();
   input += synapse0x1049cf400();
   input += synapse0x1049cf430();
   input += synapse0x1049cf460();
   input += synapse0x1049cf490();
   input += synapse0x1049cf4c0();
   input += synapse0x1049cf4f0();
   input += synapse0x1049cf520();
   input += synapse0x1049cf550();
   input += synapse0x1049cf580();
   input += synapse0x1049cf5b0();
   input += synapse0x1049cf5e0();
   input += synapse0x1049cf610();
   input += synapse0x1049cf640();
   input += synapse0x1049cf670();
   input += synapse0x1049cf7a0();
   input += synapse0x1049cf7d0();
   input += synapse0x1049cf800();
   input += synapse0x1049cf830();
   return input;
}

double mlp::neuron0x1049cf110() {
   double input = input0x1049cf110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cf860() {
   double input = -0.162124;
   input += synapse0x1049cfaf0();
   input += synapse0x1049cfb20();
   input += synapse0x1049cfb50();
   input += synapse0x1049cfb80();
   input += synapse0x1049cfbb0();
   input += synapse0x1049cfbe0();
   input += synapse0x1049cfc10();
   input += synapse0x1049cfc40();
   input += synapse0x1049cfc70();
   input += synapse0x1049cfca0();
   input += synapse0x1049cfcd0();
   input += synapse0x1049cfd00();
   input += synapse0x1049cfd30();
   input += synapse0x1049cfd60();
   input += synapse0x1049cfd90();
   input += synapse0x1049cfdc0();
   input += synapse0x1049cfef0();
   input += synapse0x1049cff20();
   input += synapse0x1049cff50();
   input += synapse0x1049cff80();
   return input;
}

double mlp::neuron0x1049cf860() {
   double input = input0x1049cf860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049cffb0() {
   double input = -0.09543;
   input += synapse0x1049d0240();
   input += synapse0x1049d0270();
   input += synapse0x1049d02a0();
   input += synapse0x1049d02d0();
   input += synapse0x1049d0300();
   input += synapse0x1049d0330();
   input += synapse0x1049d0360();
   input += synapse0x1049d0390();
   input += synapse0x1049d03c0();
   input += synapse0x1049d03f0();
   input += synapse0x1049d0420();
   input += synapse0x1049d0450();
   input += synapse0x1049d0480();
   input += synapse0x1049d04b0();
   input += synapse0x1049d04e0();
   input += synapse0x1049d0510();
   input += synapse0x1049d0640();
   input += synapse0x1049d0670();
   input += synapse0x1049d06a0();
   input += synapse0x1049d06d0();
   return input;
}

double mlp::neuron0x1049cffb0() {
   double input = input0x1049cffb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d0700() {
   double input = -0.29873;
   input += synapse0x1049d0990();
   input += synapse0x1049d09c0();
   input += synapse0x1049d09f0();
   input += synapse0x1049d0a20();
   input += synapse0x1049d0a50();
   input += synapse0x1049d0a80();
   input += synapse0x1049d0ab0();
   input += synapse0x1049d0ae0();
   input += synapse0x1049d0b10();
   input += synapse0x1049d0b40();
   input += synapse0x1049d0b70();
   input += synapse0x1049d0ba0();
   input += synapse0x1049d0bd0();
   input += synapse0x1049d0c00();
   input += synapse0x1049d0c30();
   input += synapse0x1049d0c60();
   input += synapse0x1049d0d90();
   input += synapse0x1049d0dc0();
   input += synapse0x1049d0df0();
   input += synapse0x1049d0e20();
   return input;
}

double mlp::neuron0x1049d0700() {
   double input = input0x1049d0700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d0e50() {
   double input = 0.351724;
   input += synapse0x1049d10e0();
   input += synapse0x1049d1110();
   input += synapse0x1049d1140();
   input += synapse0x1049d1170();
   input += synapse0x1049d11a0();
   input += synapse0x1049d11d0();
   input += synapse0x1049d1200();
   input += synapse0x1049d1230();
   input += synapse0x1049d1260();
   input += synapse0x1049d1290();
   input += synapse0x1049d12c0();
   input += synapse0x1049d12f0();
   input += synapse0x1049d1320();
   input += synapse0x1049d1350();
   input += synapse0x1049d1380();
   input += synapse0x1049d13b0();
   input += synapse0x1049d14e0();
   input += synapse0x1049d1510();
   input += synapse0x1049d1540();
   input += synapse0x1049d1570();
   return input;
}

double mlp::neuron0x1049d0e50() {
   double input = input0x1049d0e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d15a0() {
   double input = 0.00673967;
   input += synapse0x1049d1830();
   input += synapse0x1049d1860();
   input += synapse0x1049d1890();
   input += synapse0x1049d18c0();
   input += synapse0x1049d18f0();
   input += synapse0x1049d1920();
   input += synapse0x1049d1950();
   input += synapse0x1049d1980();
   input += synapse0x1049d19b0();
   input += synapse0x1049d19e0();
   input += synapse0x1049d1a10();
   input += synapse0x1049d1a40();
   input += synapse0x1049d1a70();
   input += synapse0x1049d1aa0();
   input += synapse0x1049d1ad0();
   input += synapse0x1049d1b00();
   input += synapse0x1049d1c30();
   input += synapse0x1049d1c60();
   input += synapse0x1049d1c90();
   input += synapse0x1049d1cc0();
   return input;
}

double mlp::neuron0x1049d15a0() {
   double input = input0x1049d15a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d1cf0() {
   double input = 0.136848;
   input += synapse0x1049d1f80();
   input += synapse0x1049d1fb0();
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
   input += synapse0x1049d21f0();
   input += synapse0x1049d2220();
   input += synapse0x1049d2250();
   input += synapse0x1049d2380();
   input += synapse0x1049d23b0();
   input += synapse0x1049d23e0();
   input += synapse0x1049d2410();
   return input;
}

double mlp::neuron0x1049d1cf0() {
   double input = input0x1049d1cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d2440() {
   double input = -0.301991;
   input += synapse0x1049cc8f0();
   input += synapse0x1049cc920();
   input += synapse0x1049cc950();
   input += synapse0x1049cc980();
   input += synapse0x1049cc9b0();
   input += synapse0x1049d28d0();
   input += synapse0x1049d2900();
   input += synapse0x1049d2930();
   input += synapse0x1049d2960();
   input += synapse0x1049d2990();
   input += synapse0x1049d29c0();
   input += synapse0x1049d29f0();
   input += synapse0x1049d2a20();
   input += synapse0x1049d2a50();
   input += synapse0x1049d2a80();
   input += synapse0x1049d2ab0();
   input += synapse0x1049d2be0();
   input += synapse0x1049d2c10();
   input += synapse0x1049d2c40();
   input += synapse0x1049d2c70();
   return input;
}

double mlp::neuron0x1049d2440() {
   double input = input0x1049d2440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d2ca0() {
   double input = 0.11165;
   input += synapse0x1049d2f30();
   input += synapse0x1049d2f60();
   input += synapse0x1049d2f90();
   input += synapse0x1049d2fc0();
   input += synapse0x1049d2ff0();
   input += synapse0x1049d3020();
   input += synapse0x1049d3050();
   input += synapse0x1049d3080();
   input += synapse0x1049d30b0();
   input += synapse0x1049d30e0();
   input += synapse0x1049d3110();
   input += synapse0x1049d3140();
   input += synapse0x1049d3170();
   input += synapse0x1049d31a0();
   input += synapse0x1049d31d0();
   input += synapse0x1049d3200();
   input += synapse0x1049d3330();
   input += synapse0x1049d3360();
   input += synapse0x1049d3390();
   input += synapse0x1049d33c0();
   return input;
}

double mlp::neuron0x1049d2ca0() {
   double input = input0x1049d2ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d33f0() {
   double input = 0.333;
   input += synapse0x1049d3680();
   input += synapse0x1049d36b0();
   input += synapse0x1049d36e0();
   input += synapse0x1049d3710();
   input += synapse0x1049d3740();
   input += synapse0x1049d3770();
   input += synapse0x1049d37a0();
   input += synapse0x1049d37d0();
   input += synapse0x1049d3800();
   input += synapse0x1049d3830();
   input += synapse0x1049d3860();
   input += synapse0x1049d3890();
   input += synapse0x1049d38c0();
   input += synapse0x1049d38f0();
   input += synapse0x1049d3920();
   input += synapse0x1049d3950();
   input += synapse0x1049d3a80();
   input += synapse0x1049d3ab0();
   input += synapse0x1049d3ae0();
   input += synapse0x1049d3b10();
   return input;
}

double mlp::neuron0x1049d33f0() {
   double input = input0x1049d33f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d3b40() {
   double input = 0.450884;
   input += synapse0x1049d3dd0();
   input += synapse0x1049d3f00();
   input += synapse0x1049b78c0();
   input += synapse0x1049b78f0();
   input += synapse0x1049b7920();
   input += synapse0x1049c9fe0();
   input += synapse0x1049ca010();
   input += synapse0x1049ca5a0();
   input += synapse0x1049ca5d0();
   input += synapse0x1049cab60();
   input += synapse0x1049cab90();
   input += synapse0x1049cb180();
   input += synapse0x1049cb1b0();
   input += synapse0x1049cb7a0();
   input += synapse0x1049cb7d0();
   input += synapse0x1049cbdc0();
   input += synapse0x1049cbdf0();
   input += synapse0x1049ac580();
   input += synapse0x1049ac5b0();
   input += synapse0x1049ccb50();
   return input;
}

double mlp::neuron0x1049d3b40() {
   double input = input0x1049d3b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d5330() {
   double input = -0.507506;
   input += synapse0x1049cc3e0();
   input += synapse0x1049cc410();
   input += synapse0x1049cc0d0();
   input += synapse0x1049cc100();
   input += synapse0x1049cbab0();
   input += synapse0x1049cbae0();
   input += synapse0x1049cb490();
   input += synapse0x1049cb4c0();
   input += synapse0x1049cae70();
   input += synapse0x1049caea0();
   input += synapse0x1049ca880();
   input += synapse0x1049ca8b0();
   input += synapse0x1049ca2c0();
   input += synapse0x1049ca2f0();
   input += synapse0x1049c9d00();
   input += synapse0x1049c9d30();
   input += synapse0x1049c9a20();
   input += synapse0x1049c9a50();
   input += synapse0x1049d5590();
   input += synapse0x1049d55c0();
   return input;
}

double mlp::neuron0x1049d5330() {
   double input = input0x1049d5330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d55f0() {
   double input = -0.369199;
   input += synapse0x1049d5880();
   input += synapse0x1049d58b0();
   input += synapse0x1049d58e0();
   input += synapse0x1049d5910();
   input += synapse0x1049d5940();
   input += synapse0x1049d5970();
   input += synapse0x1049d59a0();
   input += synapse0x1049d59d0();
   input += synapse0x1049d5a00();
   input += synapse0x1049d5a30();
   input += synapse0x1049d5a60();
   input += synapse0x1049d5a90();
   input += synapse0x1049d5ac0();
   input += synapse0x1049d5af0();
   input += synapse0x1049d5b20();
   input += synapse0x1049d5b50();
   input += synapse0x1049d5c80();
   input += synapse0x1049d5cb0();
   input += synapse0x1049d5ce0();
   input += synapse0x1049d5d10();
   return input;
}

double mlp::neuron0x1049d55f0() {
   double input = input0x1049d55f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d5d40() {
   double input = 0.346029;
   input += synapse0x1049d5fd0();
   input += synapse0x1049d6000();
   input += synapse0x1049d6030();
   input += synapse0x1049d6060();
   input += synapse0x1049d6090();
   input += synapse0x1049d60c0();
   input += synapse0x1049d60f0();
   input += synapse0x1049d6120();
   input += synapse0x1049d6150();
   input += synapse0x1049d6180();
   input += synapse0x1049d61b0();
   input += synapse0x1049d61e0();
   input += synapse0x1049d6210();
   input += synapse0x1049d6240();
   input += synapse0x1049d6270();
   input += synapse0x1049d62a0();
   input += synapse0x1049d63d0();
   input += synapse0x1049d6400();
   input += synapse0x1049d6430();
   input += synapse0x1049d6460();
   return input;
}

double mlp::neuron0x1049d5d40() {
   double input = input0x1049d5d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d6490() {
   double input = -0.42951;
   input += synapse0x1049d6720();
   input += synapse0x1049d6750();
   input += synapse0x1049d6780();
   input += synapse0x1049d67b0();
   input += synapse0x1049d67e0();
   input += synapse0x1049d6810();
   input += synapse0x1049d6840();
   input += synapse0x1049d6870();
   input += synapse0x1049d68a0();
   input += synapse0x1049d68d0();
   input += synapse0x1049d6900();
   input += synapse0x1049d6930();
   input += synapse0x1049d6960();
   input += synapse0x1049d6990();
   input += synapse0x1049d69c0();
   input += synapse0x1049d69f0();
   input += synapse0x1049d6b20();
   input += synapse0x1049d6b50();
   input += synapse0x1049d6b80();
   input += synapse0x1049d6bb0();
   return input;
}

double mlp::neuron0x1049d6490() {
   double input = input0x1049d6490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049d6be0() {
   double input = -0.354421;
   input += synapse0x1049d6d40();
   input += synapse0x1049d6d70();
   input += synapse0x1049d6da0();
   input += synapse0x1049d6dd0();
   input += synapse0x1049d6e00();
   input += synapse0x1049d6e30();
   input += synapse0x1049d6e60();
   input += synapse0x1049d6e90();
   input += synapse0x1049d6ec0();
   input += synapse0x1049d6ef0();
   input += synapse0x1049d6f20();
   input += synapse0x1049d6f50();
   input += synapse0x1049d6f80();
   input += synapse0x1049d6fb0();
   input += synapse0x1049d6fe0();
   input += synapse0x1049d7010();
   input += synapse0x1049d7140();
   input += synapse0x1049d7170();
   input += synapse0x1049d71a0();
   input += synapse0x1049d71d0();
   return input;
}

double mlp::neuron0x1049d6be0() {
   double input = input0x1049d6be0();
   return (input * 1)+0;
}

double mlp::input0x1049d7200() {
   double input = -0.329539;
   input += synapse0x1049d7460();
   input += synapse0x1049d7490();
   input += synapse0x1049d74c0();
   input += synapse0x1049d74f0();
   input += synapse0x1049d7520();
   input += synapse0x1049d7550();
   input += synapse0x1049d7580();
   input += synapse0x1049d75b0();
   input += synapse0x1049d75e0();
   input += synapse0x1049d7610();
   input += synapse0x1049d7640();
   input += synapse0x1049d7670();
   input += synapse0x1049d76a0();
   input += synapse0x1049d76d0();
   input += synapse0x1049d7700();
   input += synapse0x1049d7730();
   input += synapse0x1049d7860();
   input += synapse0x1049d7890();
   input += synapse0x1049d78c0();
   input += synapse0x1049d78f0();
   return input;
}

double mlp::neuron0x1049d7200() {
   double input = input0x1049d7200();
   return (input * 1)+0;
}

double mlp::input0x1049d7920() {
   double input = -0.100815;
   input += synapse0x1049d7b80();
   input += synapse0x1049d7bb0();
   input += synapse0x1049d7be0();
   input += synapse0x1049d7c10();
   input += synapse0x1049d7c40();
   input += synapse0x1049d7c70();
   input += synapse0x1049d7ca0();
   input += synapse0x1049d7cd0();
   input += synapse0x1049d7d00();
   input += synapse0x1049d7d30();
   input += synapse0x1049d7d60();
   input += synapse0x1049d7d90();
   input += synapse0x1049d7dc0();
   input += synapse0x1049d7df0();
   input += synapse0x1049d7e20();
   input += synapse0x1049d7e50();
   input += synapse0x1049d7f80();
   input += synapse0x1049d7fb0();
   input += synapse0x1049d7fe0();
   input += synapse0x1049d8010();
   return input;
}

double mlp::neuron0x1049d7920() {
   double input = input0x1049d7920();
   return (input * 1)+0;
}

double mlp::input0x1049d8040() {
   double input = -0.037665;
   input += synapse0x1049d82a0();
   input += synapse0x1049d82d0();
   input += synapse0x1049d8300();
   input += synapse0x1049d8330();
   input += synapse0x1049d8360();
   input += synapse0x1049d8390();
   input += synapse0x1049d83c0();
   input += synapse0x1049d83f0();
   input += synapse0x1049d8420();
   input += synapse0x1049d8450();
   input += synapse0x1049d8480();
   input += synapse0x1049d84b0();
   input += synapse0x1049d84e0();
   input += synapse0x1049d8510();
   input += synapse0x1049d8540();
   input += synapse0x1049d8570();
   input += synapse0x1049d86a0();
   input += synapse0x1049d86d0();
   input += synapse0x1049d8700();
   input += synapse0x1049d8730();
   return input;
}

double mlp::neuron0x1049d8040() {
   double input = input0x1049d8040();
   return (input * 1)+0;
}

double mlp::input0x1049d8760() {
   double input = 0.106532;
   input += synapse0x1049b71e0();
   input += synapse0x1049d89c0();
   input += synapse0x1049d89f0();
   input += synapse0x1049d8a20();
   input += synapse0x1049d8a50();
   input += synapse0x1049d8a80();
   input += synapse0x1049d8ab0();
   input += synapse0x1049d8ae0();
   input += synapse0x1049d8b10();
   input += synapse0x1049d8b40();
   input += synapse0x1049d8b70();
   input += synapse0x1049d8ba0();
   input += synapse0x1049d8bd0();
   input += synapse0x1049d8c00();
   input += synapse0x1049d8c30();
   input += synapse0x1049d8c60();
   input += synapse0x1049d8d90();
   input += synapse0x1049d8dc0();
   input += synapse0x1049d8df0();
   input += synapse0x1049d8e20();
   return input;
}

double mlp::neuron0x1049d8760() {
   double input = input0x1049d8760();
   return (input * 1)+0;
}

double mlp::input0x1049d8e50() {
   double input = 0.0489553;
   input += synapse0x1049d90b0();
   input += synapse0x1049d90e0();
   input += synapse0x1049d9110();
   input += synapse0x1049d9140();
   input += synapse0x1049d9170();
   input += synapse0x1049d91a0();
   input += synapse0x1049d91d0();
   input += synapse0x1049d9200();
   input += synapse0x1049d9230();
   input += synapse0x1049d9260();
   input += synapse0x1049d9290();
   input += synapse0x1049d92c0();
   input += synapse0x1049d92f0();
   input += synapse0x1049d9320();
   input += synapse0x1049d9350();
   input += synapse0x1049d9380();
   input += synapse0x1049d94b0();
   input += synapse0x1049d94e0();
   input += synapse0x1049d9510();
   input += synapse0x1049d9540();
   return input;
}

double mlp::neuron0x1049d8e50() {
   double input = input0x1049d8e50();
   return (input * 1)+0;
}

double mlp::input0x1049d9570() {
   double input = -0.198405;
   input += synapse0x1049d97d0();
   input += synapse0x1049d9800();
   input += synapse0x1049d9830();
   input += synapse0x1049d9860();
   input += synapse0x1049d9890();
   input += synapse0x1049d98c0();
   input += synapse0x1049d98f0();
   input += synapse0x1049d9920();
   input += synapse0x1049d9950();
   input += synapse0x1049d9980();
   input += synapse0x1049d99b0();
   input += synapse0x1049d99e0();
   input += synapse0x1049d9a10();
   input += synapse0x1049d9a40();
   input += synapse0x1049d9a70();
   input += synapse0x1049d9aa0();
   input += synapse0x1049d9bd0();
   input += synapse0x1049d9c00();
   input += synapse0x1049d9c30();
   input += synapse0x1049d9c60();
   return input;
}

double mlp::neuron0x1049d9570() {
   double input = input0x1049d9570();
   return (input * 1)+0;
}

double mlp::input0x1049d9c90() {
   double input = -0.0158419;
   input += synapse0x1049d9ef0();
   input += synapse0x1049d9f20();
   input += synapse0x1049d9f50();
   input += synapse0x1049d9f80();
   input += synapse0x1049d9fb0();
   input += synapse0x1049d9fe0();
   input += synapse0x1049da010();
   input += synapse0x1049da040();
   input += synapse0x1049da070();
   input += synapse0x1049da0a0();
   input += synapse0x1049da0d0();
   input += synapse0x1049da100();
   input += synapse0x1049da130();
   input += synapse0x1049da160();
   input += synapse0x1049da190();
   input += synapse0x1049da1c0();
   input += synapse0x1049da2f0();
   input += synapse0x1049da320();
   input += synapse0x1049da350();
   input += synapse0x1049da380();
   return input;
}

double mlp::neuron0x1049d9c90() {
   double input = input0x1049d9c90();
   return (input * 1)+0;
}

double mlp::input0x1049da3b0() {
   double input = -0.221929;
   input += synapse0x1049da610();
   input += synapse0x1049da640();
   input += synapse0x1049da670();
   input += synapse0x1049da6a0();
   input += synapse0x1049da6d0();
   input += synapse0x1049da700();
   input += synapse0x1049da730();
   input += synapse0x1049da760();
   input += synapse0x1049da790();
   input += synapse0x1049da7c0();
   input += synapse0x1049da7f0();
   input += synapse0x1049da820();
   input += synapse0x1049da850();
   input += synapse0x1049da880();
   input += synapse0x1049da8b0();
   input += synapse0x1049da8e0();
   input += synapse0x1049daa10();
   input += synapse0x1049daa40();
   input += synapse0x1049daa70();
   input += synapse0x1049daaa0();
   return input;
}

double mlp::neuron0x1049da3b0() {
   double input = input0x1049da3b0();
   return (input * 1)+0;
}

double mlp::synapse0x1049c8f80() {
   return (neuron0x1049c9760()*-0.394879);
}

double mlp::synapse0x1049b7320() {
   return (neuron0x1049c98c0()*-0.280188);
}

double mlp::synapse0x1049c9600() {
   return (neuron0x1049c9b20()*0.050997);
}

double mlp::synapse0x1049c9700() {
   return (neuron0x1049c9e00()*-0.0704683);
}

double mlp::synapse0x1049c9730() {
   return (neuron0x1049ca0e0()*0.113413);
}

double mlp::synapse0x1049b7b60() {
   return (neuron0x1049ca3c0()*-0.306108);
}

double mlp::synapse0x1049b7b90() {
   return (neuron0x1049ca6a0()*0.0390979);
}

double mlp::synapse0x1049b7bc0() {
   return (neuron0x1049ca980()*-0.412505);
}

double mlp::synapse0x1049b7bf0() {
   return (neuron0x1049cac60()*0.0106472);
}

double mlp::synapse0x1049b7c20() {
   return (neuron0x1049caf70()*-0.298476);
}

double mlp::synapse0x1049b7c50() {
   return (neuron0x1049cb280()*0.109033);
}

double mlp::synapse0x1049b7c80() {
   return (neuron0x1049cb590()*0.382762);
}

double mlp::synapse0x1049b7cb0() {
   return (neuron0x1049cb8a0()*0.399468);
}

double mlp::synapse0x1049b7ce0() {
   return (neuron0x1049cbbb0()*0.173662);
}

double mlp::synapse0x1049b7d10() {
   return (neuron0x1049cbec0()*-0.0763576);
}

double mlp::synapse0x1049b7d40() {
   return (neuron0x1049cc1d0()*0.208878);
}

double mlp::synapse0x1049cd340() {
   return (neuron0x1049cc4e0()*0.171705);
}

double mlp::synapse0x1049c8f00() {
   return (neuron0x1049cc9f0()*-0.25907);
}

double mlp::synapse0x1049c8f30() {
   return (neuron0x1049ccc50()*-0.6123);
}

double mlp::synapse0x1049cd470() {
   return (neuron0x1049ccf30()*-0.18184);
}

double mlp::synapse0x1049cd730() {
   return (neuron0x1049c9760()*0.256055);
}

double mlp::synapse0x1049cd760() {
   return (neuron0x1049c98c0()*-0.0316452);
}

double mlp::synapse0x1049cd790() {
   return (neuron0x1049c9b20()*0.0840574);
}

double mlp::synapse0x1049cd7c0() {
   return (neuron0x1049c9e00()*0.0225018);
}

double mlp::synapse0x1049cd7f0() {
   return (neuron0x1049ca0e0()*-0.251039);
}

double mlp::synapse0x1049cd820() {
   return (neuron0x1049ca3c0()*0.132217);
}

double mlp::synapse0x1049cd850() {
   return (neuron0x1049ca6a0()*-0.115655);
}

double mlp::synapse0x1049cd880() {
   return (neuron0x1049ca980()*0.205711);
}

double mlp::synapse0x1049cd8b0() {
   return (neuron0x1049cac60()*0.33864);
}

double mlp::synapse0x1049cd8e0() {
   return (neuron0x1049caf70()*0.218981);
}

double mlp::synapse0x1049cd910() {
   return (neuron0x1049cb280()*0.184735);
}

double mlp::synapse0x1049cd940() {
   return (neuron0x1049cb590()*-0.354585);
}

double mlp::synapse0x1049cd970() {
   return (neuron0x1049cb8a0()*0.206885);
}

double mlp::synapse0x1049cd370() {
   return (neuron0x1049cbbb0()*0.0293135);
}

double mlp::synapse0x1049cd3a0() {
   return (neuron0x1049cbec0()*0.238941);
}

double mlp::synapse0x1049cd3d0() {
   return (neuron0x1049cc1d0()*-0.133691);
}

double mlp::synapse0x1049cd400() {
   return (neuron0x1049cc4e0()*0.13186);
}

double mlp::synapse0x1049cd430() {
   return (neuron0x1049cc9f0()*0.156092);
}

double mlp::synapse0x1049cdca0() {
   return (neuron0x1049ccc50()*0.159358);
}

double mlp::synapse0x1049cdcd0() {
   return (neuron0x1049ccf30()*0.253471);
}

double mlp::synapse0x1049cdf90() {
   return (neuron0x1049c9760()*-0.459734);
}

double mlp::synapse0x1049cdfc0() {
   return (neuron0x1049c98c0()*-0.617717);
}

double mlp::synapse0x1049cdff0() {
   return (neuron0x1049c9b20()*0.301244);
}

double mlp::synapse0x1049ce020() {
   return (neuron0x1049c9e00()*0.286051);
}

double mlp::synapse0x1049ce050() {
   return (neuron0x1049ca0e0()*0.305495);
}

double mlp::synapse0x1049ce080() {
   return (neuron0x1049ca3c0()*-0.317912);
}

double mlp::synapse0x1049ce0b0() {
   return (neuron0x1049ca6a0()*-0.254235);
}

double mlp::synapse0x1049ce0e0() {
   return (neuron0x1049ca980()*-0.00913999);
}

double mlp::synapse0x1049ce110() {
   return (neuron0x1049cac60()*-0.217598);
}

double mlp::synapse0x1049ce140() {
   return (neuron0x1049caf70()*0.307297);
}

double mlp::synapse0x1049ce170() {
   return (neuron0x1049cb280()*-0.00121939);
}

double mlp::synapse0x1049ce1a0() {
   return (neuron0x1049cb590()*-0.102288);
}

double mlp::synapse0x1049ce1d0() {
   return (neuron0x1049cb8a0()*0.131328);
}

double mlp::synapse0x1049ce200() {
   return (neuron0x1049cbbb0()*-0.00615499);
}

double mlp::synapse0x1049ce230() {
   return (neuron0x1049cbec0()*0.0278382);
}

double mlp::synapse0x1049ce260() {
   return (neuron0x1049cc1d0()*-0.29204);
}

double mlp::synapse0x1049ce390() {
   return (neuron0x1049cc4e0()*-0.105771);
}

double mlp::synapse0x1049ce3c0() {
   return (neuron0x1049cc9f0()*0.224696);
}

double mlp::synapse0x1049ce3f0() {
   return (neuron0x1049ccc50()*-0.405184);
}

double mlp::synapse0x1049ce420() {
   return (neuron0x1049ccf30()*0.376162);
}

double mlp::synapse0x1049ce6e0() {
   return (neuron0x1049c9760()*0.379055);
}

double mlp::synapse0x1049ce710() {
   return (neuron0x1049c98c0()*-0.41587);
}

double mlp::synapse0x1049ce740() {
   return (neuron0x1049c9b20()*0.307065);
}

double mlp::synapse0x1049ce770() {
   return (neuron0x1049c9e00()*0.314488);
}

double mlp::synapse0x1049ce7a0() {
   return (neuron0x1049ca0e0()*-0.425359);
}

double mlp::synapse0x1049cd9a0() {
   return (neuron0x1049ca3c0()*-0.0807646);
}

double mlp::synapse0x1049cd9d0() {
   return (neuron0x1049ca6a0()*0.328305);
}

double mlp::synapse0x1049cda00() {
   return (neuron0x1049ca980()*-0.110737);
}

double mlp::synapse0x1049cda30() {
   return (neuron0x1049cac60()*0.205859);
}

double mlp::synapse0x1049cda60() {
   return (neuron0x1049caf70()*-0.367635);
}

double mlp::synapse0x1049cda90() {
   return (neuron0x1049cb280()*0.00539514);
}

double mlp::synapse0x1049cdac0() {
   return (neuron0x1049cb590()*-0.412548);
}

double mlp::synapse0x1049cdaf0() {
   return (neuron0x1049cb8a0()*0.0420569);
}

double mlp::synapse0x1049cdb20() {
   return (neuron0x1049cbbb0()*0.292365);
}

double mlp::synapse0x1049cdb50() {
   return (neuron0x1049cbec0()*-0.358084);
}

double mlp::synapse0x1049ce7d0() {
   return (neuron0x1049cc1d0()*0.382158);
}

double mlp::synapse0x1049ce900() {
   return (neuron0x1049cc4e0()*0.201319);
}

double mlp::synapse0x1049ce930() {
   return (neuron0x1049cc9f0()*-0.0663683);
}

double mlp::synapse0x1049ce960() {
   return (neuron0x1049ccc50()*-0.0969951);
}

double mlp::synapse0x1049ce990() {
   return (neuron0x1049ccf30()*0.0757252);
}

double mlp::synapse0x1049cec50() {
   return (neuron0x1049c9760()*-0.436004);
}

double mlp::synapse0x1049cec80() {
   return (neuron0x1049c98c0()*0.120191);
}

double mlp::synapse0x1049cecb0() {
   return (neuron0x1049c9b20()*0.111523);
}

double mlp::synapse0x1049cece0() {
   return (neuron0x1049c9e00()*0.26704);
}

double mlp::synapse0x1049ced10() {
   return (neuron0x1049ca0e0()*-0.162622);
}

double mlp::synapse0x1049ced40() {
   return (neuron0x1049ca3c0()*-0.405417);
}

double mlp::synapse0x1049ced70() {
   return (neuron0x1049ca6a0()*-0.147375);
}

double mlp::synapse0x1049ceda0() {
   return (neuron0x1049ca980()*-0.0476679);
}

double mlp::synapse0x1049cedd0() {
   return (neuron0x1049cac60()*-0.396382);
}

double mlp::synapse0x1049cee00() {
   return (neuron0x1049caf70()*-0.0394568);
}

double mlp::synapse0x1049cee30() {
   return (neuron0x1049cb280()*-0.0729659);
}

double mlp::synapse0x1049cee60() {
   return (neuron0x1049cb590()*-0.0407794);
}

double mlp::synapse0x1049cee90() {
   return (neuron0x1049cb8a0()*-0.0717293);
}

double mlp::synapse0x1049ceec0() {
   return (neuron0x1049cbbb0()*0.327026);
}

double mlp::synapse0x1049ceef0() {
   return (neuron0x1049cbec0()*-0.281988);
}

double mlp::synapse0x1049cef20() {
   return (neuron0x1049cc1d0()*0.209784);
}

double mlp::synapse0x1049cf050() {
   return (neuron0x1049cc4e0()*-0.340769);
}

double mlp::synapse0x1049cf080() {
   return (neuron0x1049cc9f0()*-0.255238);
}

double mlp::synapse0x1049cf0b0() {
   return (neuron0x1049ccc50()*-0.290555);
}

double mlp::synapse0x1049cf0e0() {
   return (neuron0x1049ccf30()*0.186292);
}

double mlp::synapse0x1049cf3a0() {
   return (neuron0x1049c9760()*0.166986);
}

double mlp::synapse0x1049cf3d0() {
   return (neuron0x1049c98c0()*-0.289649);
}

double mlp::synapse0x1049cf400() {
   return (neuron0x1049c9b20()*0.401854);
}

double mlp::synapse0x1049cf430() {
   return (neuron0x1049c9e00()*-0.36566);
}

double mlp::synapse0x1049cf460() {
   return (neuron0x1049ca0e0()*0.0597326);
}

double mlp::synapse0x1049cf490() {
   return (neuron0x1049ca3c0()*0.089534);
}

double mlp::synapse0x1049cf4c0() {
   return (neuron0x1049ca6a0()*-0.356142);
}

double mlp::synapse0x1049cf4f0() {
   return (neuron0x1049ca980()*-0.172483);
}

double mlp::synapse0x1049cf520() {
   return (neuron0x1049cac60()*-0.372901);
}

double mlp::synapse0x1049cf550() {
   return (neuron0x1049caf70()*0.180385);
}

double mlp::synapse0x1049cf580() {
   return (neuron0x1049cb280()*0.303251);
}

double mlp::synapse0x1049cf5b0() {
   return (neuron0x1049cb590()*-0.136902);
}

double mlp::synapse0x1049cf5e0() {
   return (neuron0x1049cb8a0()*-0.219716);
}

double mlp::synapse0x1049cf610() {
   return (neuron0x1049cbbb0()*0.0149453);
}

double mlp::synapse0x1049cf640() {
   return (neuron0x1049cbec0()*0.111609);
}

double mlp::synapse0x1049cf670() {
   return (neuron0x1049cc1d0()*-0.595628);
}

double mlp::synapse0x1049cf7a0() {
   return (neuron0x1049cc4e0()*0.234221);
}

double mlp::synapse0x1049cf7d0() {
   return (neuron0x1049cc9f0()*0.3405);
}

double mlp::synapse0x1049cf800() {
   return (neuron0x1049ccc50()*0.885896);
}

double mlp::synapse0x1049cf830() {
   return (neuron0x1049ccf30()*0.0645523);
}

double mlp::synapse0x1049cfaf0() {
   return (neuron0x1049c9760()*0.0598964);
}

double mlp::synapse0x1049cfb20() {
   return (neuron0x1049c98c0()*0.293391);
}

double mlp::synapse0x1049cfb50() {
   return (neuron0x1049c9b20()*-0.116387);
}

double mlp::synapse0x1049cfb80() {
   return (neuron0x1049c9e00()*0.326279);
}

double mlp::synapse0x1049cfbb0() {
   return (neuron0x1049ca0e0()*0.000866392);
}

double mlp::synapse0x1049cfbe0() {
   return (neuron0x1049ca3c0()*-0.379676);
}

double mlp::synapse0x1049cfc10() {
   return (neuron0x1049ca6a0()*0.158947);
}

double mlp::synapse0x1049cfc40() {
   return (neuron0x1049ca980()*0.0488693);
}

double mlp::synapse0x1049cfc70() {
   return (neuron0x1049cac60()*0.181006);
}

double mlp::synapse0x1049cfca0() {
   return (neuron0x1049caf70()*-0.137902);
}

double mlp::synapse0x1049cfcd0() {
   return (neuron0x1049cb280()*-0.19764);
}

double mlp::synapse0x1049cfd00() {
   return (neuron0x1049cb590()*0.33531);
}

double mlp::synapse0x1049cfd30() {
   return (neuron0x1049cb8a0()*0.389826);
}

double mlp::synapse0x1049cfd60() {
   return (neuron0x1049cbbb0()*-0.00429409);
}

double mlp::synapse0x1049cfd90() {
   return (neuron0x1049cbec0()*-0.446493);
}

double mlp::synapse0x1049cfdc0() {
   return (neuron0x1049cc1d0()*-0.288621);
}

double mlp::synapse0x1049cfef0() {
   return (neuron0x1049cc4e0()*0.123362);
}

double mlp::synapse0x1049cff20() {
   return (neuron0x1049cc9f0()*-0.237656);
}

double mlp::synapse0x1049cff50() {
   return (neuron0x1049ccc50()*0.0301981);
}

double mlp::synapse0x1049cff80() {
   return (neuron0x1049ccf30()*-0.0675632);
}

double mlp::synapse0x1049d0240() {
   return (neuron0x1049c9760()*0.155436);
}

double mlp::synapse0x1049d0270() {
   return (neuron0x1049c98c0()*0.68884);
}

double mlp::synapse0x1049d02a0() {
   return (neuron0x1049c9b20()*-0.0685594);
}

double mlp::synapse0x1049d02d0() {
   return (neuron0x1049c9e00()*-0.137925);
}

double mlp::synapse0x1049d0300() {
   return (neuron0x1049ca0e0()*0.0369619);
}

double mlp::synapse0x1049d0330() {
   return (neuron0x1049ca3c0()*0.0410412);
}

double mlp::synapse0x1049d0360() {
   return (neuron0x1049ca6a0()*0.370703);
}

double mlp::synapse0x1049d0390() {
   return (neuron0x1049ca980()*-0.0174567);
}

double mlp::synapse0x1049d03c0() {
   return (neuron0x1049cac60()*-0.102485);
}

double mlp::synapse0x1049d03f0() {
   return (neuron0x1049caf70()*-0.265854);
}

double mlp::synapse0x1049d0420() {
   return (neuron0x1049cb280()*-0.0472608);
}

double mlp::synapse0x1049d0450() {
   return (neuron0x1049cb590()*0.31479);
}

double mlp::synapse0x1049d0480() {
   return (neuron0x1049cb8a0()*0.131958);
}

double mlp::synapse0x1049d04b0() {
   return (neuron0x1049cbbb0()*0.0340654);
}

double mlp::synapse0x1049d04e0() {
   return (neuron0x1049cbec0()*-0.035901);
}

double mlp::synapse0x1049d0510() {
   return (neuron0x1049cc1d0()*-0.00646652);
}

double mlp::synapse0x1049d0640() {
   return (neuron0x1049cc4e0()*0.00804157);
}

double mlp::synapse0x1049d0670() {
   return (neuron0x1049cc9f0()*-0.582277);
}

double mlp::synapse0x1049d06a0() {
   return (neuron0x1049ccc50()*0.694163);
}

double mlp::synapse0x1049d06d0() {
   return (neuron0x1049ccf30()*0.137333);
}

double mlp::synapse0x1049d0990() {
   return (neuron0x1049c9760()*-0.544892);
}

double mlp::synapse0x1049d09c0() {
   return (neuron0x1049c98c0()*0.233326);
}

double mlp::synapse0x1049d09f0() {
   return (neuron0x1049c9b20()*-0.119859);
}

double mlp::synapse0x1049d0a20() {
   return (neuron0x1049c9e00()*-0.457524);
}

double mlp::synapse0x1049d0a50() {
   return (neuron0x1049ca0e0()*-0.153689);
}

double mlp::synapse0x1049d0a80() {
   return (neuron0x1049ca3c0()*-0.372712);
}

double mlp::synapse0x1049d0ab0() {
   return (neuron0x1049ca6a0()*0.354794);
}

double mlp::synapse0x1049d0ae0() {
   return (neuron0x1049ca980()*0.337412);
}

double mlp::synapse0x1049d0b10() {
   return (neuron0x1049cac60()*-0.299642);
}

double mlp::synapse0x1049d0b40() {
   return (neuron0x1049caf70()*-0.219734);
}

double mlp::synapse0x1049d0b70() {
   return (neuron0x1049cb280()*0.0186444);
}

double mlp::synapse0x1049d0ba0() {
   return (neuron0x1049cb590()*-0.057508);
}

double mlp::synapse0x1049d0bd0() {
   return (neuron0x1049cb8a0()*-0.18597);
}

double mlp::synapse0x1049d0c00() {
   return (neuron0x1049cbbb0()*-0.293408);
}

double mlp::synapse0x1049d0c30() {
   return (neuron0x1049cbec0()*-0.41593);
}

double mlp::synapse0x1049d0c60() {
   return (neuron0x1049cc1d0()*0.0466377);
}

double mlp::synapse0x1049d0d90() {
   return (neuron0x1049cc4e0()*0.0171363);
}

double mlp::synapse0x1049d0dc0() {
   return (neuron0x1049cc9f0()*0.00766388);
}

double mlp::synapse0x1049d0df0() {
   return (neuron0x1049ccc50()*0.139402);
}

double mlp::synapse0x1049d0e20() {
   return (neuron0x1049ccf30()*0.288531);
}

double mlp::synapse0x1049d10e0() {
   return (neuron0x1049c9760()*-0.00724941);
}

double mlp::synapse0x1049d1110() {
   return (neuron0x1049c98c0()*0.226264);
}

double mlp::synapse0x1049d1140() {
   return (neuron0x1049c9b20()*-0.185061);
}

double mlp::synapse0x1049d1170() {
   return (neuron0x1049c9e00()*-0.233678);
}

double mlp::synapse0x1049d11a0() {
   return (neuron0x1049ca0e0()*0.111259);
}

double mlp::synapse0x1049d11d0() {
   return (neuron0x1049ca3c0()*0.403074);
}

double mlp::synapse0x1049d1200() {
   return (neuron0x1049ca6a0()*-0.0799689);
}

double mlp::synapse0x1049d1230() {
   return (neuron0x1049ca980()*0.175553);
}

double mlp::synapse0x1049d1260() {
   return (neuron0x1049cac60()*0.304478);
}

double mlp::synapse0x1049d1290() {
   return (neuron0x1049caf70()*0.232445);
}

double mlp::synapse0x1049d12c0() {
   return (neuron0x1049cb280()*-0.182781);
}

double mlp::synapse0x1049d12f0() {
   return (neuron0x1049cb590()*-0.447418);
}

double mlp::synapse0x1049d1320() {
   return (neuron0x1049cb8a0()*-0.430939);
}

double mlp::synapse0x1049d1350() {
   return (neuron0x1049cbbb0()*-0.440587);
}

double mlp::synapse0x1049d1380() {
   return (neuron0x1049cbec0()*0.0835354);
}

double mlp::synapse0x1049d13b0() {
   return (neuron0x1049cc1d0()*-0.2841);
}

double mlp::synapse0x1049d14e0() {
   return (neuron0x1049cc4e0()*-0.24102);
}

double mlp::synapse0x1049d1510() {
   return (neuron0x1049cc9f0()*0.254012);
}

double mlp::synapse0x1049d1540() {
   return (neuron0x1049ccc50()*-0.340637);
}

double mlp::synapse0x1049d1570() {
   return (neuron0x1049ccf30()*0.304892);
}

double mlp::synapse0x1049d1830() {
   return (neuron0x1049c9760()*0.0671862);
}

double mlp::synapse0x1049d1860() {
   return (neuron0x1049c98c0()*0.608649);
}

double mlp::synapse0x1049d1890() {
   return (neuron0x1049c9b20()*-0.382943);
}

double mlp::synapse0x1049d18c0() {
   return (neuron0x1049c9e00()*0.132013);
}

double mlp::synapse0x1049d18f0() {
   return (neuron0x1049ca0e0()*0.0859326);
}

double mlp::synapse0x1049d1920() {
   return (neuron0x1049ca3c0()*-0.196247);
}

double mlp::synapse0x1049d1950() {
   return (neuron0x1049ca6a0()*-0.153352);
}

double mlp::synapse0x1049d1980() {
   return (neuron0x1049ca980()*-0.00461315);
}

double mlp::synapse0x1049d19b0() {
   return (neuron0x1049cac60()*-0.139569);
}

double mlp::synapse0x1049d19e0() {
   return (neuron0x1049caf70()*0.146529);
}

double mlp::synapse0x1049d1a10() {
   return (neuron0x1049cb280()*-0.103925);
}

double mlp::synapse0x1049d1a40() {
   return (neuron0x1049cb590()*-0.207147);
}

double mlp::synapse0x1049d1a70() {
   return (neuron0x1049cb8a0()*0.118173);
}

double mlp::synapse0x1049d1aa0() {
   return (neuron0x1049cbbb0()*0.349281);
}

double mlp::synapse0x1049d1ad0() {
   return (neuron0x1049cbec0()*0.00100159);
}

double mlp::synapse0x1049d1b00() {
   return (neuron0x1049cc1d0()*-0.508382);
}

double mlp::synapse0x1049d1c30() {
   return (neuron0x1049cc4e0()*-0.490471);
}

double mlp::synapse0x1049d1c60() {
   return (neuron0x1049cc9f0()*-0.12256);
}

double mlp::synapse0x1049d1c90() {
   return (neuron0x1049ccc50()*0.0508045);
}

double mlp::synapse0x1049d1cc0() {
   return (neuron0x1049ccf30()*0.460182);
}

double mlp::synapse0x1049d1f80() {
   return (neuron0x1049c9760()*0.239328);
}

double mlp::synapse0x1049d1fb0() {
   return (neuron0x1049c98c0()*0.549878);
}

double mlp::synapse0x1049d1fe0() {
   return (neuron0x1049c9b20()*-0.35025);
}

double mlp::synapse0x1049d2010() {
   return (neuron0x1049c9e00()*0.0914291);
}

double mlp::synapse0x1049d2040() {
   return (neuron0x1049ca0e0()*-0.0902724);
}

double mlp::synapse0x1049d2070() {
   return (neuron0x1049ca3c0()*-0.126602);
}

double mlp::synapse0x1049d20a0() {
   return (neuron0x1049ca6a0()*0.0203624);
}

double mlp::synapse0x1049d20d0() {
   return (neuron0x1049ca980()*0.253196);
}

double mlp::synapse0x1049d2100() {
   return (neuron0x1049cac60()*-0.424823);
}

double mlp::synapse0x1049d2130() {
   return (neuron0x1049caf70()*0.275467);
}

double mlp::synapse0x1049d2160() {
   return (neuron0x1049cb280()*0.123561);
}

double mlp::synapse0x1049d2190() {
   return (neuron0x1049cb590()*0.183);
}

double mlp::synapse0x1049d21c0() {
   return (neuron0x1049cb8a0()*0.0251788);
}

double mlp::synapse0x1049d21f0() {
   return (neuron0x1049cbbb0()*-0.265928);
}

double mlp::synapse0x1049d2220() {
   return (neuron0x1049cbec0()*-0.0296292);
}

double mlp::synapse0x1049d2250() {
   return (neuron0x1049cc1d0()*0.300352);
}

double mlp::synapse0x1049d2380() {
   return (neuron0x1049cc4e0()*-0.278363);
}

double mlp::synapse0x1049d23b0() {
   return (neuron0x1049cc9f0()*-0.193704);
}

double mlp::synapse0x1049d23e0() {
   return (neuron0x1049ccc50()*0.383308);
}

double mlp::synapse0x1049d2410() {
   return (neuron0x1049ccf30()*0.246107);
}

double mlp::synapse0x1049cc8f0() {
   return (neuron0x1049c9760()*0.0382183);
}

double mlp::synapse0x1049cc920() {
   return (neuron0x1049c98c0()*-0.48298);
}

double mlp::synapse0x1049cc950() {
   return (neuron0x1049c9b20()*-0.32619);
}

double mlp::synapse0x1049cc980() {
   return (neuron0x1049c9e00()*0.0610525);
}

double mlp::synapse0x1049cc9b0() {
   return (neuron0x1049ca0e0()*0.0555523);
}

double mlp::synapse0x1049d28d0() {
   return (neuron0x1049ca3c0()*0.256981);
}

double mlp::synapse0x1049d2900() {
   return (neuron0x1049ca6a0()*0.0519431);
}

double mlp::synapse0x1049d2930() {
   return (neuron0x1049ca980()*-0.116658);
}

double mlp::synapse0x1049d2960() {
   return (neuron0x1049cac60()*-0.0482121);
}

double mlp::synapse0x1049d2990() {
   return (neuron0x1049caf70()*-0.21196);
}

double mlp::synapse0x1049d29c0() {
   return (neuron0x1049cb280()*-0.22703);
}

double mlp::synapse0x1049d29f0() {
   return (neuron0x1049cb590()*-0.0993718);
}

double mlp::synapse0x1049d2a20() {
   return (neuron0x1049cb8a0()*-0.228196);
}

double mlp::synapse0x1049d2a50() {
   return (neuron0x1049cbbb0()*-0.211427);
}

double mlp::synapse0x1049d2a80() {
   return (neuron0x1049cbec0()*0.292195);
}

double mlp::synapse0x1049d2ab0() {
   return (neuron0x1049cc1d0()*-0.0587072);
}

double mlp::synapse0x1049d2be0() {
   return (neuron0x1049cc4e0()*-0.120378);
}

double mlp::synapse0x1049d2c10() {
   return (neuron0x1049cc9f0()*0.368717);
}

double mlp::synapse0x1049d2c40() {
   return (neuron0x1049ccc50()*-0.0516142);
}

double mlp::synapse0x1049d2c70() {
   return (neuron0x1049ccf30()*0.204295);
}

double mlp::synapse0x1049d2f30() {
   return (neuron0x1049c9760()*0.0616702);
}

double mlp::synapse0x1049d2f60() {
   return (neuron0x1049c98c0()*-0.378157);
}

double mlp::synapse0x1049d2f90() {
   return (neuron0x1049c9b20()*-0.209336);
}

double mlp::synapse0x1049d2fc0() {
   return (neuron0x1049c9e00()*0.39202);
}

double mlp::synapse0x1049d2ff0() {
   return (neuron0x1049ca0e0()*-0.232418);
}

double mlp::synapse0x1049d3020() {
   return (neuron0x1049ca3c0()*-0.304315);
}

double mlp::synapse0x1049d3050() {
   return (neuron0x1049ca6a0()*0.115482);
}

double mlp::synapse0x1049d3080() {
   return (neuron0x1049ca980()*-0.0836526);
}

double mlp::synapse0x1049d30b0() {
   return (neuron0x1049cac60()*-0.302956);
}

double mlp::synapse0x1049d30e0() {
   return (neuron0x1049caf70()*0.132047);
}

double mlp::synapse0x1049d3110() {
   return (neuron0x1049cb280()*-0.239929);
}

double mlp::synapse0x1049d3140() {
   return (neuron0x1049cb590()*0.126188);
}

double mlp::synapse0x1049d3170() {
   return (neuron0x1049cb8a0()*0.0583427);
}

double mlp::synapse0x1049d31a0() {
   return (neuron0x1049cbbb0()*-0.0773981);
}

double mlp::synapse0x1049d31d0() {
   return (neuron0x1049cbec0()*-0.166848);
}

double mlp::synapse0x1049d3200() {
   return (neuron0x1049cc1d0()*0.247188);
}

double mlp::synapse0x1049d3330() {
   return (neuron0x1049cc4e0()*-0.123991);
}

double mlp::synapse0x1049d3360() {
   return (neuron0x1049cc9f0()*-0.418086);
}

double mlp::synapse0x1049d3390() {
   return (neuron0x1049ccc50()*-0.231653);
}

double mlp::synapse0x1049d33c0() {
   return (neuron0x1049ccf30()*-0.0828476);
}

double mlp::synapse0x1049d3680() {
   return (neuron0x1049c9760()*-0.31109);
}

double mlp::synapse0x1049d36b0() {
   return (neuron0x1049c98c0()*0.305359);
}

double mlp::synapse0x1049d36e0() {
   return (neuron0x1049c9b20()*-0.0459256);
}

double mlp::synapse0x1049d3710() {
   return (neuron0x1049c9e00()*-0.500141);
}

double mlp::synapse0x1049d3740() {
   return (neuron0x1049ca0e0()*0.262535);
}

double mlp::synapse0x1049d3770() {
   return (neuron0x1049ca3c0()*0.0296685);
}

double mlp::synapse0x1049d37a0() {
   return (neuron0x1049ca6a0()*0.179422);
}

double mlp::synapse0x1049d37d0() {
   return (neuron0x1049ca980()*0.470176);
}

double mlp::synapse0x1049d3800() {
   return (neuron0x1049cac60()*-0.0223178);
}

double mlp::synapse0x1049d3830() {
   return (neuron0x1049caf70()*-0.10526);
}

double mlp::synapse0x1049d3860() {
   return (neuron0x1049cb280()*-0.199369);
}

double mlp::synapse0x1049d3890() {
   return (neuron0x1049cb590()*-0.0565767);
}

double mlp::synapse0x1049d38c0() {
   return (neuron0x1049cb8a0()*-0.192635);
}

double mlp::synapse0x1049d38f0() {
   return (neuron0x1049cbbb0()*-0.328785);
}

double mlp::synapse0x1049d3920() {
   return (neuron0x1049cbec0()*-0.090863);
}

double mlp::synapse0x1049d3950() {
   return (neuron0x1049cc1d0()*0.186983);
}

double mlp::synapse0x1049d3a80() {
   return (neuron0x1049cc4e0()*-0.0306921);
}

double mlp::synapse0x1049d3ab0() {
   return (neuron0x1049cc9f0()*-0.194194);
}

double mlp::synapse0x1049d3ae0() {
   return (neuron0x1049ccc50()*0.229733);
}

double mlp::synapse0x1049d3b10() {
   return (neuron0x1049ccf30()*-0.0474167);
}

double mlp::synapse0x1049d3dd0() {
   return (neuron0x1049c9760()*-0.222293);
}

double mlp::synapse0x1049d3f00() {
   return (neuron0x1049c98c0()*-0.103725);
}

double mlp::synapse0x1049b78c0() {
   return (neuron0x1049c9b20()*0.613923);
}

double mlp::synapse0x1049b78f0() {
   return (neuron0x1049c9e00()*-0.120871);
}

double mlp::synapse0x1049b7920() {
   return (neuron0x1049ca0e0()*-0.344527);
}

double mlp::synapse0x1049c9fe0() {
   return (neuron0x1049ca3c0()*-0.101302);
}

double mlp::synapse0x1049ca010() {
   return (neuron0x1049ca6a0()*0.267687);
}

double mlp::synapse0x1049ca5a0() {
   return (neuron0x1049ca980()*-0.159479);
}

double mlp::synapse0x1049ca5d0() {
   return (neuron0x1049cac60()*0.414662);
}

double mlp::synapse0x1049cab60() {
   return (neuron0x1049caf70()*-0.220808);
}

double mlp::synapse0x1049cab90() {
   return (neuron0x1049cb280()*-0.0378181);
}

double mlp::synapse0x1049cb180() {
   return (neuron0x1049cb590()*-0.326025);
}

double mlp::synapse0x1049cb1b0() {
   return (neuron0x1049cb8a0()*-0.126048);
}

double mlp::synapse0x1049cb7a0() {
   return (neuron0x1049cbbb0()*-0.423884);
}

double mlp::synapse0x1049cb7d0() {
   return (neuron0x1049cbec0()*-0.427863);
}

double mlp::synapse0x1049cbdc0() {
   return (neuron0x1049cc1d0()*0.380576);
}

double mlp::synapse0x1049cbdf0() {
   return (neuron0x1049cc4e0()*0.377619);
}

double mlp::synapse0x1049ac580() {
   return (neuron0x1049cc9f0()*-0.430572);
}

double mlp::synapse0x1049ac5b0() {
   return (neuron0x1049ccc50()*0.373425);
}

double mlp::synapse0x1049ccb50() {
   return (neuron0x1049ccf30()*0.139462);
}

double mlp::synapse0x1049cc3e0() {
   return (neuron0x1049c9760()*-0.0798077);
}

double mlp::synapse0x1049cc410() {
   return (neuron0x1049c98c0()*-0.136298);
}

double mlp::synapse0x1049cc0d0() {
   return (neuron0x1049c9b20()*-0.449736);
}

double mlp::synapse0x1049cc100() {
   return (neuron0x1049c9e00()*-0.10754);
}

double mlp::synapse0x1049cbab0() {
   return (neuron0x1049ca0e0()*-0.444531);
}

double mlp::synapse0x1049cbae0() {
   return (neuron0x1049ca3c0()*0.138034);
}

double mlp::synapse0x1049cb490() {
   return (neuron0x1049ca6a0()*-0.156102);
}

double mlp::synapse0x1049cb4c0() {
   return (neuron0x1049ca980()*-0.0493157);
}

double mlp::synapse0x1049cae70() {
   return (neuron0x1049cac60()*0.453698);
}

double mlp::synapse0x1049caea0() {
   return (neuron0x1049caf70()*0.023259);
}

double mlp::synapse0x1049ca880() {
   return (neuron0x1049cb280()*0.387166);
}

double mlp::synapse0x1049ca8b0() {
   return (neuron0x1049cb590()*-0.253455);
}

double mlp::synapse0x1049ca2c0() {
   return (neuron0x1049cb8a0()*0.0543664);
}

double mlp::synapse0x1049ca2f0() {
   return (neuron0x1049cbbb0()*-0.385769);
}

double mlp::synapse0x1049c9d00() {
   return (neuron0x1049cbec0()*0.217098);
}

double mlp::synapse0x1049c9d30() {
   return (neuron0x1049cc1d0()*0.31497);
}

double mlp::synapse0x1049c9a20() {
   return (neuron0x1049cc4e0()*0.269221);
}

double mlp::synapse0x1049c9a50() {
   return (neuron0x1049cc9f0()*0.0590121);
}

double mlp::synapse0x1049d5590() {
   return (neuron0x1049ccc50()*-0.185682);
}

double mlp::synapse0x1049d55c0() {
   return (neuron0x1049ccf30()*0.286996);
}

double mlp::synapse0x1049d5880() {
   return (neuron0x1049c9760()*-0.2645);
}

double mlp::synapse0x1049d58b0() {
   return (neuron0x1049c98c0()*-0.116982);
}

double mlp::synapse0x1049d58e0() {
   return (neuron0x1049c9b20()*0.587889);
}

double mlp::synapse0x1049d5910() {
   return (neuron0x1049c9e00()*-0.217396);
}

double mlp::synapse0x1049d5940() {
   return (neuron0x1049ca0e0()*0.349725);
}

double mlp::synapse0x1049d5970() {
   return (neuron0x1049ca3c0()*-0.0932546);
}

double mlp::synapse0x1049d59a0() {
   return (neuron0x1049ca6a0()*-0.0715449);
}

double mlp::synapse0x1049d59d0() {
   return (neuron0x1049ca980()*0.381834);
}

double mlp::synapse0x1049d5a00() {
   return (neuron0x1049cac60()*0.0733465);
}

double mlp::synapse0x1049d5a30() {
   return (neuron0x1049caf70()*-0.316297);
}

double mlp::synapse0x1049d5a60() {
   return (neuron0x1049cb280()*0.221602);
}

double mlp::synapse0x1049d5a90() {
   return (neuron0x1049cb590()*-0.196494);
}

double mlp::synapse0x1049d5ac0() {
   return (neuron0x1049cb8a0()*0.300096);
}

double mlp::synapse0x1049d5af0() {
   return (neuron0x1049cbbb0()*0.107035);
}

double mlp::synapse0x1049d5b20() {
   return (neuron0x1049cbec0()*0.406876);
}

double mlp::synapse0x1049d5b50() {
   return (neuron0x1049cc1d0()*-0.0183315);
}

double mlp::synapse0x1049d5c80() {
   return (neuron0x1049cc4e0()*0.329599);
}

double mlp::synapse0x1049d5cb0() {
   return (neuron0x1049cc9f0()*-0.535353);
}

double mlp::synapse0x1049d5ce0() {
   return (neuron0x1049ccc50()*0.254504);
}

double mlp::synapse0x1049d5d10() {
   return (neuron0x1049ccf30()*-0.236573);
}

double mlp::synapse0x1049d5fd0() {
   return (neuron0x1049c9760()*0.329448);
}

double mlp::synapse0x1049d6000() {
   return (neuron0x1049c98c0()*-0.110004);
}

double mlp::synapse0x1049d6030() {
   return (neuron0x1049c9b20()*0.0434059);
}

double mlp::synapse0x1049d6060() {
   return (neuron0x1049c9e00()*0.442948);
}

double mlp::synapse0x1049d6090() {
   return (neuron0x1049ca0e0()*0.0402313);
}

double mlp::synapse0x1049d60c0() {
   return (neuron0x1049ca3c0()*-0.269459);
}

double mlp::synapse0x1049d60f0() {
   return (neuron0x1049ca6a0()*0.0380426);
}

double mlp::synapse0x1049d6120() {
   return (neuron0x1049ca980()*-0.138252);
}

double mlp::synapse0x1049d6150() {
   return (neuron0x1049cac60()*-0.502297);
}

double mlp::synapse0x1049d6180() {
   return (neuron0x1049caf70()*-0.302877);
}

double mlp::synapse0x1049d61b0() {
   return (neuron0x1049cb280()*0.02202);
}

double mlp::synapse0x1049d61e0() {
   return (neuron0x1049cb590()*0.328885);
}

double mlp::synapse0x1049d6210() {
   return (neuron0x1049cb8a0()*-0.0589476);
}

double mlp::synapse0x1049d6240() {
   return (neuron0x1049cbbb0()*0.118834);
}

double mlp::synapse0x1049d6270() {
   return (neuron0x1049cbec0()*-0.204664);
}

double mlp::synapse0x1049d62a0() {
   return (neuron0x1049cc1d0()*0.368926);
}

double mlp::synapse0x1049d63d0() {
   return (neuron0x1049cc4e0()*-0.0675023);
}

double mlp::synapse0x1049d6400() {
   return (neuron0x1049cc9f0()*-0.205932);
}

double mlp::synapse0x1049d6430() {
   return (neuron0x1049ccc50()*-0.239348);
}

double mlp::synapse0x1049d6460() {
   return (neuron0x1049ccf30()*0.526219);
}

double mlp::synapse0x1049d6720() {
   return (neuron0x1049c9760()*-0.421853);
}

double mlp::synapse0x1049d6750() {
   return (neuron0x1049c98c0()*0.31564);
}

double mlp::synapse0x1049d6780() {
   return (neuron0x1049c9b20()*-0.320193);
}

double mlp::synapse0x1049d67b0() {
   return (neuron0x1049c9e00()*0.0442365);
}

double mlp::synapse0x1049d67e0() {
   return (neuron0x1049ca0e0()*0.166028);
}

double mlp::synapse0x1049d6810() {
   return (neuron0x1049ca3c0()*-0.195238);
}

double mlp::synapse0x1049d6840() {
   return (neuron0x1049ca6a0()*0.308998);
}

double mlp::synapse0x1049d6870() {
   return (neuron0x1049ca980()*0.25385);
}

double mlp::synapse0x1049d68a0() {
   return (neuron0x1049cac60()*0.253884);
}

double mlp::synapse0x1049d68d0() {
   return (neuron0x1049caf70()*-0.445541);
}

double mlp::synapse0x1049d6900() {
   return (neuron0x1049cb280()*-0.125602);
}

double mlp::synapse0x1049d6930() {
   return (neuron0x1049cb590()*0.0432753);
}

double mlp::synapse0x1049d6960() {
   return (neuron0x1049cb8a0()*0.407886);
}

double mlp::synapse0x1049d6990() {
   return (neuron0x1049cbbb0()*-0.424628);
}

double mlp::synapse0x1049d69c0() {
   return (neuron0x1049cbec0()*-0.164436);
}

double mlp::synapse0x1049d69f0() {
   return (neuron0x1049cc1d0()*0.400718);
}

double mlp::synapse0x1049d6b20() {
   return (neuron0x1049cc4e0()*-0.0405331);
}

double mlp::synapse0x1049d6b50() {
   return (neuron0x1049cc9f0()*-0.311892);
}

double mlp::synapse0x1049d6b80() {
   return (neuron0x1049ccc50()*0.0842797);
}

double mlp::synapse0x1049d6bb0() {
   return (neuron0x1049ccf30()*0.396784);
}

double mlp::synapse0x1049d6d40() {
   return (neuron0x1049b7980()*0.0255323);
}

double mlp::synapse0x1049d6d70() {
   return (neuron0x1049cd4a0()*-0.201182);
}

double mlp::synapse0x1049d6da0() {
   return (neuron0x1049cdd00()*-0.00590119);
}

double mlp::synapse0x1049d6dd0() {
   return (neuron0x1049ce450()*0.177075);
}

double mlp::synapse0x1049d6e00() {
   return (neuron0x1049ce9c0()*0.16035);
}

double mlp::synapse0x1049d6e30() {
   return (neuron0x1049cf110()*0.234638);
}

double mlp::synapse0x1049d6e60() {
   return (neuron0x1049cf860()*0.112488);
}

double mlp::synapse0x1049d6e90() {
   return (neuron0x1049cffb0()*0.141755);
}

double mlp::synapse0x1049d6ec0() {
   return (neuron0x1049d0700()*-0.15937);
}

double mlp::synapse0x1049d6ef0() {
   return (neuron0x1049d0e50()*0.244611);
}

double mlp::synapse0x1049d6f20() {
   return (neuron0x1049d15a0()*-0.153152);
}

double mlp::synapse0x1049d6f50() {
   return (neuron0x1049d1cf0()*0.0273042);
}

double mlp::synapse0x1049d6f80() {
   return (neuron0x1049d2440()*-0.0398587);
}

double mlp::synapse0x1049d6fb0() {
   return (neuron0x1049d2ca0()*0.188365);
}

double mlp::synapse0x1049d6fe0() {
   return (neuron0x1049d33f0()*0.0484076);
}

double mlp::synapse0x1049d7010() {
   return (neuron0x1049d3b40()*-0.181773);
}

double mlp::synapse0x1049d7140() {
   return (neuron0x1049d5330()*0.206922);
}

double mlp::synapse0x1049d7170() {
   return (neuron0x1049d55f0()*0.110515);
}

double mlp::synapse0x1049d71a0() {
   return (neuron0x1049d5d40()*-0.121868);
}

double mlp::synapse0x1049d71d0() {
   return (neuron0x1049d6490()*0.0365781);
}

double mlp::synapse0x1049d7460() {
   return (neuron0x1049b7980()*0.145117);
}

double mlp::synapse0x1049d7490() {
   return (neuron0x1049cd4a0()*-0.153281);
}

double mlp::synapse0x1049d74c0() {
   return (neuron0x1049cdd00()*-0.0146837);
}

double mlp::synapse0x1049d74f0() {
   return (neuron0x1049ce450()*0.105482);
}

double mlp::synapse0x1049d7520() {
   return (neuron0x1049ce9c0()*0.0555375);
}

double mlp::synapse0x1049d7550() {
   return (neuron0x1049cf110()*0.10412);
}

double mlp::synapse0x1049d7580() {
   return (neuron0x1049cf860()*0.176624);
}

double mlp::synapse0x1049d75b0() {
   return (neuron0x1049cffb0()*-0.145056);
}

double mlp::synapse0x1049d75e0() {
   return (neuron0x1049d0700()*-0.204843);
}

double mlp::synapse0x1049d7610() {
   return (neuron0x1049d0e50()*0.0194552);
}

double mlp::synapse0x1049d7640() {
   return (neuron0x1049d15a0()*0.041251);
}

double mlp::synapse0x1049d7670() {
   return (neuron0x1049d1cf0()*0.223179);
}

double mlp::synapse0x1049d76a0() {
   return (neuron0x1049d2440()*0.136191);
}

double mlp::synapse0x1049d76d0() {
   return (neuron0x1049d2ca0()*-0.0157295);
}

double mlp::synapse0x1049d7700() {
   return (neuron0x1049d33f0()*0.168111);
}

double mlp::synapse0x1049d7730() {
   return (neuron0x1049d3b40()*0.0495449);
}

double mlp::synapse0x1049d7860() {
   return (neuron0x1049d5330()*0.0486735);
}

double mlp::synapse0x1049d7890() {
   return (neuron0x1049d55f0()*0.0811319);
}

double mlp::synapse0x1049d78c0() {
   return (neuron0x1049d5d40()*-0.114695);
}

double mlp::synapse0x1049d78f0() {
   return (neuron0x1049d6490()*-0.013699);
}

double mlp::synapse0x1049d7b80() {
   return (neuron0x1049b7980()*-0.0957963);
}

double mlp::synapse0x1049d7bb0() {
   return (neuron0x1049cd4a0()*0.0303827);
}

double mlp::synapse0x1049d7be0() {
   return (neuron0x1049cdd00()*0.0226004);
}

double mlp::synapse0x1049d7c10() {
   return (neuron0x1049ce450()*0.0198944);
}

double mlp::synapse0x1049d7c40() {
   return (neuron0x1049ce9c0()*0.205108);
}

double mlp::synapse0x1049d7c70() {
   return (neuron0x1049cf110()*0.271404);
}

double mlp::synapse0x1049d7ca0() {
   return (neuron0x1049cf860()*-0.161258);
}

double mlp::synapse0x1049d7cd0() {
   return (neuron0x1049cffb0()*0.209003);
}

double mlp::synapse0x1049d7d00() {
   return (neuron0x1049d0700()*-0.0895647);
}

double mlp::synapse0x1049d7d30() {
   return (neuron0x1049d0e50()*0.202009);
}

double mlp::synapse0x1049d7d60() {
   return (neuron0x1049d15a0()*-0.219647);
}

double mlp::synapse0x1049d7d90() {
   return (neuron0x1049d1cf0()*-0.242206);
}

double mlp::synapse0x1049d7dc0() {
   return (neuron0x1049d2440()*-0.310845);
}

double mlp::synapse0x1049d7df0() {
   return (neuron0x1049d2ca0()*0.293162);
}

double mlp::synapse0x1049d7e20() {
   return (neuron0x1049d33f0()*-0.0160733);
}

double mlp::synapse0x1049d7e50() {
   return (neuron0x1049d3b40()*-0.200022);
}

double mlp::synapse0x1049d7f80() {
   return (neuron0x1049d5330()*0.0265635);
}

double mlp::synapse0x1049d7fb0() {
   return (neuron0x1049d55f0()*-0.0232348);
}

double mlp::synapse0x1049d7fe0() {
   return (neuron0x1049d5d40()*0.0517598);
}

double mlp::synapse0x1049d8010() {
   return (neuron0x1049d6490()*0.351094);
}

double mlp::synapse0x1049d82a0() {
   return (neuron0x1049b7980()*0.0801191);
}

double mlp::synapse0x1049d82d0() {
   return (neuron0x1049cd4a0()*0.0580773);
}

double mlp::synapse0x1049d8300() {
   return (neuron0x1049cdd00()*-0.0238416);
}

double mlp::synapse0x1049d8330() {
   return (neuron0x1049ce450()*-0.0109563);
}

double mlp::synapse0x1049d8360() {
   return (neuron0x1049ce9c0()*-0.161101);
}

double mlp::synapse0x1049d8390() {
   return (neuron0x1049cf110()*-0.172708);
}

double mlp::synapse0x1049d83c0() {
   return (neuron0x1049cf860()*0.130001);
}

double mlp::synapse0x1049d83f0() {
   return (neuron0x1049cffb0()*-0.285995);
}

double mlp::synapse0x1049d8420() {
   return (neuron0x1049d0700()*-0.109943);
}

double mlp::synapse0x1049d8450() {
   return (neuron0x1049d0e50()*-0.0505822);
}

double mlp::synapse0x1049d8480() {
   return (neuron0x1049d15a0()*0.00817206);
}

double mlp::synapse0x1049d84b0() {
   return (neuron0x1049d1cf0()*0.144182);
}

double mlp::synapse0x1049d84e0() {
   return (neuron0x1049d2440()*0.0868549);
}

double mlp::synapse0x1049d8510() {
   return (neuron0x1049d2ca0()*-0.113906);
}

double mlp::synapse0x1049d8540() {
   return (neuron0x1049d33f0()*0.162788);
}

double mlp::synapse0x1049d8570() {
   return (neuron0x1049d3b40()*0.275571);
}

double mlp::synapse0x1049d86a0() {
   return (neuron0x1049d5330()*-0.0548509);
}

double mlp::synapse0x1049d86d0() {
   return (neuron0x1049d55f0()*0.0926388);
}

double mlp::synapse0x1049d8700() {
   return (neuron0x1049d5d40()*0.156521);
}

double mlp::synapse0x1049d8730() {
   return (neuron0x1049d6490()*-0.219507);
}

double mlp::synapse0x1049b71e0() {
   return (neuron0x1049b7980()*-0.178894);
}

double mlp::synapse0x1049d89c0() {
   return (neuron0x1049cd4a0()*0.105932);
}

double mlp::synapse0x1049d89f0() {
   return (neuron0x1049cdd00()*-0.355905);
}

double mlp::synapse0x1049d8a20() {
   return (neuron0x1049ce450()*-0.130231);
}

double mlp::synapse0x1049d8a50() {
   return (neuron0x1049ce9c0()*0.355301);
}

double mlp::synapse0x1049d8a80() {
   return (neuron0x1049cf110()*-0.108103);
}

double mlp::synapse0x1049d8ab0() {
   return (neuron0x1049cf860()*0.38809);
}

double mlp::synapse0x1049d8ae0() {
   return (neuron0x1049cffb0()*0.471714);
}

double mlp::synapse0x1049d8b10() {
   return (neuron0x1049d0700()*-0.298796);
}

double mlp::synapse0x1049d8b40() {
   return (neuron0x1049d0e50()*-0.136014);
}

double mlp::synapse0x1049d8b70() {
   return (neuron0x1049d15a0()*0.249892);
}

double mlp::synapse0x1049d8ba0() {
   return (neuron0x1049d1cf0()*0.33214);
}

double mlp::synapse0x1049d8bd0() {
   return (neuron0x1049d2440()*-0.170097);
}

double mlp::synapse0x1049d8c00() {
   return (neuron0x1049d2ca0()*-0.408406);
}

double mlp::synapse0x1049d8c30() {
   return (neuron0x1049d33f0()*0.293869);
}

double mlp::synapse0x1049d8c60() {
   return (neuron0x1049d3b40()*0.350061);
}

double mlp::synapse0x1049d8d90() {
   return (neuron0x1049d5330()*-0.0802065);
}

double mlp::synapse0x1049d8dc0() {
   return (neuron0x1049d55f0()*0.184562);
}

double mlp::synapse0x1049d8df0() {
   return (neuron0x1049d5d40()*-0.403583);
}

double mlp::synapse0x1049d8e20() {
   return (neuron0x1049d6490()*-0.11659);
}

double mlp::synapse0x1049d90b0() {
   return (neuron0x1049b7980()*-0.0849513);
}

double mlp::synapse0x1049d90e0() {
   return (neuron0x1049cd4a0()*-0.21936);
}

double mlp::synapse0x1049d9110() {
   return (neuron0x1049cdd00()*0.584178);
}

double mlp::synapse0x1049d9140() {
   return (neuron0x1049ce450()*0.197572);
}

double mlp::synapse0x1049d9170() {
   return (neuron0x1049ce9c0()*-0.0679632);
}

double mlp::synapse0x1049d91a0() {
   return (neuron0x1049cf110()*0.637064);
}

double mlp::synapse0x1049d91d0() {
   return (neuron0x1049cf860()*0.295544);
}

double mlp::synapse0x1049d9200() {
   return (neuron0x1049cffb0()*0.026605);
}

double mlp::synapse0x1049d9230() {
   return (neuron0x1049d0700()*-0.0727466);
}

double mlp::synapse0x1049d9260() {
   return (neuron0x1049d0e50()*-0.132129);
}

double mlp::synapse0x1049d9290() {
   return (neuron0x1049d15a0()*-0.464605);
}

double mlp::synapse0x1049d92c0() {
   return (neuron0x1049d1cf0()*0.0243535);
}

double mlp::synapse0x1049d92f0() {
   return (neuron0x1049d2440()*0.252274);
}

double mlp::synapse0x1049d9320() {
   return (neuron0x1049d2ca0()*0.104757);
}

double mlp::synapse0x1049d9350() {
   return (neuron0x1049d33f0()*-0.0112526);
}

double mlp::synapse0x1049d9380() {
   return (neuron0x1049d3b40()*-0.0326464);
}

double mlp::synapse0x1049d94b0() {
   return (neuron0x1049d5330()*0.0604892);
}

double mlp::synapse0x1049d94e0() {
   return (neuron0x1049d55f0()*-0.11187);
}

double mlp::synapse0x1049d9510() {
   return (neuron0x1049d5d40()*-0.391855);
}

double mlp::synapse0x1049d9540() {
   return (neuron0x1049d6490()*-0.0513884);
}

double mlp::synapse0x1049d97d0() {
   return (neuron0x1049b7980()*0.0192136);
}

double mlp::synapse0x1049d9800() {
   return (neuron0x1049cd4a0()*-0.0420256);
}

double mlp::synapse0x1049d9830() {
   return (neuron0x1049cdd00()*-0.14362);
}

double mlp::synapse0x1049d9860() {
   return (neuron0x1049ce450()*0.0695825);
}

double mlp::synapse0x1049d9890() {
   return (neuron0x1049ce9c0()*-0.113939);
}

double mlp::synapse0x1049d98c0() {
   return (neuron0x1049cf110()*0.0849896);
}

double mlp::synapse0x1049d98f0() {
   return (neuron0x1049cf860()*0.0982146);
}

double mlp::synapse0x1049d9920() {
   return (neuron0x1049cffb0()*-0.185293);
}

double mlp::synapse0x1049d9950() {
   return (neuron0x1049d0700()*-0.0128395);
}

double mlp::synapse0x1049d9980() {
   return (neuron0x1049d0e50()*-0.0142138);
}

double mlp::synapse0x1049d99b0() {
   return (neuron0x1049d15a0()*0.171973);
}

double mlp::synapse0x1049d99e0() {
   return (neuron0x1049d1cf0()*-0.0511799);
}

double mlp::synapse0x1049d9a10() {
   return (neuron0x1049d2440()*0.0531287);
}

double mlp::synapse0x1049d9a40() {
   return (neuron0x1049d2ca0()*0.163267);
}

double mlp::synapse0x1049d9a70() {
   return (neuron0x1049d33f0()*0.30527);
}

double mlp::synapse0x1049d9aa0() {
   return (neuron0x1049d3b40()*-0.178276);
}

double mlp::synapse0x1049d9bd0() {
   return (neuron0x1049d5330()*0.194924);
}

double mlp::synapse0x1049d9c00() {
   return (neuron0x1049d55f0()*0.000357098);
}

double mlp::synapse0x1049d9c30() {
   return (neuron0x1049d5d40()*0.132656);
}

double mlp::synapse0x1049d9c60() {
   return (neuron0x1049d6490()*-0.0260774);
}

double mlp::synapse0x1049d9ef0() {
   return (neuron0x1049b7980()*0.00198276);
}

double mlp::synapse0x1049d9f20() {
   return (neuron0x1049cd4a0()*-0.119512);
}

double mlp::synapse0x1049d9f50() {
   return (neuron0x1049cdd00()*0.174977);
}

double mlp::synapse0x1049d9f80() {
   return (neuron0x1049ce450()*0.042159);
}

double mlp::synapse0x1049d9fb0() {
   return (neuron0x1049ce9c0()*0.0957129);
}

double mlp::synapse0x1049d9fe0() {
   return (neuron0x1049cf110()*-0.165191);
}

double mlp::synapse0x1049da010() {
   return (neuron0x1049cf860()*-0.00185333);
}

double mlp::synapse0x1049da040() {
   return (neuron0x1049cffb0()*0.108633);
}

double mlp::synapse0x1049da070() {
   return (neuron0x1049d0700()*0.0761603);
}

double mlp::synapse0x1049da0a0() {
   return (neuron0x1049d0e50()*-0.08583);
}

double mlp::synapse0x1049da0d0() {
   return (neuron0x1049d15a0()*0.0995552);
}

double mlp::synapse0x1049da100() {
   return (neuron0x1049d1cf0()*0.0233179);
}

double mlp::synapse0x1049da130() {
   return (neuron0x1049d2440()*0.253452);
}

double mlp::synapse0x1049da160() {
   return (neuron0x1049d2ca0()*-0.169);
}

double mlp::synapse0x1049da190() {
   return (neuron0x1049d33f0()*-0.0785108);
}

double mlp::synapse0x1049da1c0() {
   return (neuron0x1049d3b40()*-0.0619991);
}

double mlp::synapse0x1049da2f0() {
   return (neuron0x1049d5330()*0.226367);
}

double mlp::synapse0x1049da320() {
   return (neuron0x1049d55f0()*-0.00855944);
}

double mlp::synapse0x1049da350() {
   return (neuron0x1049d5d40()*-0.0329469);
}

double mlp::synapse0x1049da380() {
   return (neuron0x1049d6490()*-0.115246);
}

double mlp::synapse0x1049da610() {
   return (neuron0x1049b7980()*0.467116);
}

double mlp::synapse0x1049da640() {
   return (neuron0x1049cd4a0()*0.223361);
}

double mlp::synapse0x1049da670() {
   return (neuron0x1049cdd00()*-0.0949493);
}

double mlp::synapse0x1049da6a0() {
   return (neuron0x1049ce450()*0.24483);
}

double mlp::synapse0x1049da6d0() {
   return (neuron0x1049ce9c0()*0.175786);
}

double mlp::synapse0x1049da700() {
   return (neuron0x1049cf110()*-0.232274);
}

double mlp::synapse0x1049da730() {
   return (neuron0x1049cf860()*-0.149859);
}

double mlp::synapse0x1049da760() {
   return (neuron0x1049cffb0()*-0.259751);
}

double mlp::synapse0x1049da790() {
   return (neuron0x1049d0700()*0.139306);
}

double mlp::synapse0x1049da7c0() {
   return (neuron0x1049d0e50()*0.212414);
}

double mlp::synapse0x1049da7f0() {
   return (neuron0x1049d15a0()*0.0918725);
}

double mlp::synapse0x1049da820() {
   return (neuron0x1049d1cf0()*0.261607);
}

double mlp::synapse0x1049da850() {
   return (neuron0x1049d2440()*0.280663);
}

double mlp::synapse0x1049da880() {
   return (neuron0x1049d2ca0()*-0.230233);
}

double mlp::synapse0x1049da8b0() {
   return (neuron0x1049d33f0()*0.129355);
}

double mlp::synapse0x1049da8e0() {
   return (neuron0x1049d3b40()*-0.400558);
}

double mlp::synapse0x1049daa10() {
   return (neuron0x1049d5330()*-0.0383478);
}

double mlp::synapse0x1049daa40() {
   return (neuron0x1049d55f0()*-0.190857);
}

double mlp::synapse0x1049daa70() {
   return (neuron0x1049d5d40()*0.186924);
}

double mlp::synapse0x1049daaa0() {
   return (neuron0x1049d6490()*-0.0230688);
}

