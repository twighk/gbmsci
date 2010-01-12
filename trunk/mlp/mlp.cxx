#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18) {
   input0 = (in0 - 40.9586)/21.6157;
   input1 = (in1 - 44.9153)/59.9658;
   input2 = (in2 - 42.1224)/190.235;
   input3 = (in3 - 2.09402)/0.837174;
   input4 = (in4 - 0.00035145)/1.07681;
   input5 = (in5 - -0.000511594)/1.06233;
   input6 = (in6 - 1.1018)/2.22729;
   input7 = (in7 - 0.209743)/1.26661;
   input8 = (in8 - 0.800802)/2.55596;
   input9 = (in9 - 0.175556)/0.98447;
   input10 = (in10 - -0.00951656)/0.93833;
   input11 = (in11 - -0.165679)/0.923637;
   input12 = (in12 - 1.49789)/1.26363;
   input13 = (in13 - 0.625274)/0.484052;
   input14 = (in14 - 0.494435)/0.499969;
   input15 = (in15 - 0.06646)/0.249084;
   input16 = (in16 - 0.768844)/0.421572;
   input17 = (in17 - 2.25737)/0.879207;
   input18 = (in18 - 62.5633)/32.0795;
   switch(index) {
     case 0:
         return neuron0x1049b2270();
     case 1:
         return neuron0x1049b2830();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 40.9586)/21.6157;
   input1 = (input[1] - 44.9153)/59.9658;
   input2 = (input[2] - 42.1224)/190.235;
   input3 = (input[3] - 2.09402)/0.837174;
   input4 = (input[4] - 0.00035145)/1.07681;
   input5 = (input[5] - -0.000511594)/1.06233;
   input6 = (input[6] - 1.1018)/2.22729;
   input7 = (input[7] - 0.209743)/1.26661;
   input8 = (input[8] - 0.800802)/2.55596;
   input9 = (input[9] - 0.175556)/0.98447;
   input10 = (input[10] - -0.00951656)/0.93833;
   input11 = (input[11] - -0.165679)/0.923637;
   input12 = (input[12] - 1.49789)/1.26363;
   input13 = (input[13] - 0.625274)/0.484052;
   input14 = (input[14] - 0.494435)/0.499969;
   input15 = (input[15] - 0.06646)/0.249084;
   input16 = (input[16] - 0.768844)/0.421572;
   input17 = (input[17] - 2.25737)/0.879207;
   input18 = (input[18] - 62.5633)/32.0795;
   switch(index) {
     case 0:
         return neuron0x1049b2270();
     case 1:
         return neuron0x1049b2830();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049a5ba0() {
   return input0;
}

double mlp::neuron0x1049a5d00() {
   return input1;
}

double mlp::neuron0x1049a5fe0() {
   return input2;
}

double mlp::neuron0x1049a62c0() {
   return input3;
}

double mlp::neuron0x1049a65a0() {
   return input4;
}

double mlp::neuron0x1049a6880() {
   return input5;
}

double mlp::neuron0x1049a6b60() {
   return input6;
}

double mlp::neuron0x1049a6e40() {
   return input7;
}

double mlp::neuron0x1049a7120() {
   return input8;
}

double mlp::neuron0x1049a7400() {
   return input9;
}

double mlp::neuron0x1049a76e0() {
   return input10;
}

double mlp::neuron0x1049a79f0() {
   return input11;
}

double mlp::neuron0x1049a7d00() {
   return input12;
}

double mlp::neuron0x1049a8010() {
   return input13;
}

double mlp::neuron0x1049a8320() {
   return input14;
}

double mlp::neuron0x1049a8630() {
   return input15;
}

double mlp::neuron0x1049a8940() {
   return input16;
}

double mlp::neuron0x1049a8e50() {
   return input17;
}

double mlp::neuron0x1049a90b0() {
   return input18;
}

double mlp::input0x104994330() {
   double input = 0.405692;
   input += synapse0x1049937d0();
   input += synapse0x1049936d0();
   input += synapse0x104993fe0();
   input += synapse0x104994010();
   input += synapse0x104994040();
   input += synapse0x1049940a0();
   input += synapse0x1049940d0();
   input += synapse0x104994100();
   input += synapse0x104994130();
   input += synapse0x104994160();
   input += synapse0x104994190();
   input += synapse0x1049941c0();
   input += synapse0x1049941f0();
   input += synapse0x1049a9390();
   input += synapse0x1049a93c0();
   input += synapse0x1049a93f0();
   input += synapse0x1049a9520();
   input += synapse0x1049a5360();
   input += synapse0x1049a5390();
   return input;
}

double mlp::neuron0x104994330() {
   double input = input0x104994330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a9650() {
   double input = 0.344873;
   input += synapse0x1049a98e0();
   input += synapse0x1049a9910();
   input += synapse0x1049a9940();
   input += synapse0x1049a9970();
   input += synapse0x1049a99a0();
   input += synapse0x1049a99d0();
   input += synapse0x1049a9a00();
   input += synapse0x1049a9a30();
   input += synapse0x1049a9a60();
   input += synapse0x1049a9a90();
   input += synapse0x1049a9ac0();
   input += synapse0x1049a9af0();
   input += synapse0x1049a9b20();
   input += synapse0x1049a9b50();
   input += synapse0x1049a9550();
   input += synapse0x1049a9580();
   input += synapse0x1049a95b0();
   input += synapse0x1049a95e0();
   input += synapse0x1049a9610();
   return input;
}

double mlp::neuron0x1049a9650() {
   double input = input0x1049a9650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a9e80() {
   double input = 0.00199759;
   input += synapse0x1049aa110();
   input += synapse0x1049aa140();
   input += synapse0x1049aa170();
   input += synapse0x1049aa1a0();
   input += synapse0x1049aa1d0();
   input += synapse0x1049aa200();
   input += synapse0x1049aa230();
   input += synapse0x1049aa260();
   input += synapse0x1049aa290();
   input += synapse0x1049aa2c0();
   input += synapse0x1049aa2f0();
   input += synapse0x1049aa320();
   input += synapse0x1049aa350();
   input += synapse0x1049aa380();
   input += synapse0x1049aa3b0();
   input += synapse0x1049aa3e0();
   input += synapse0x1049aa510();
   input += synapse0x1049aa540();
   input += synapse0x1049aa570();
   return input;
}

double mlp::neuron0x1049a9e80() {
   double input = input0x1049a9e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049aa5a0() {
   double input = -0.842657;
   input += synapse0x1049aa830();
   input += synapse0x1049aa860();
   input += synapse0x1049aa890();
   input += synapse0x1049aa8c0();
   input += synapse0x1049aa8f0();
   input += synapse0x1049aa920();
   input += synapse0x1049aa950();
   input += synapse0x1049aa980();
   input += synapse0x1049a9b80();
   input += synapse0x1049a9bb0();
   input += synapse0x1049a9be0();
   input += synapse0x1049a9c10();
   input += synapse0x1049a9c40();
   input += synapse0x1049a9c70();
   input += synapse0x1049a9ca0();
   input += synapse0x1049a9cd0();
   input += synapse0x1049a9d00();
   input += synapse0x1049a9d30();
   input += synapse0x1049aaab0();
   return input;
}

double mlp::neuron0x1049aa5a0() {
   double input = input0x1049aa5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049aaae0() {
   double input = 0.398785;
   input += synapse0x1049aad70();
   input += synapse0x1049aada0();
   input += synapse0x1049aadd0();
   input += synapse0x1049aae00();
   input += synapse0x1049aae30();
   input += synapse0x1049aae60();
   input += synapse0x1049aae90();
   input += synapse0x1049aaec0();
   input += synapse0x1049aaef0();
   input += synapse0x1049aaf20();
   input += synapse0x1049aaf50();
   input += synapse0x1049aaf80();
   input += synapse0x1049aafb0();
   input += synapse0x1049aafe0();
   input += synapse0x1049ab010();
   input += synapse0x1049ab040();
   input += synapse0x1049ab170();
   input += synapse0x1049ab1a0();
   input += synapse0x1049ab1d0();
   return input;
}

double mlp::neuron0x1049aaae0() {
   double input = input0x1049aaae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ab200() {
   double input = -0.247584;
   input += synapse0x1049ab490();
   input += synapse0x1049ab4c0();
   input += synapse0x1049ab4f0();
   input += synapse0x1049ab520();
   input += synapse0x1049ab550();
   input += synapse0x1049ab580();
   input += synapse0x1049ab5b0();
   input += synapse0x1049ab5e0();
   input += synapse0x1049ab610();
   input += synapse0x1049ab640();
   input += synapse0x1049ab670();
   input += synapse0x1049ab6a0();
   input += synapse0x1049ab6d0();
   input += synapse0x1049ab700();
   input += synapse0x1049ab730();
   input += synapse0x1049ab760();
   input += synapse0x1049ab890();
   input += synapse0x1049ab8c0();
   input += synapse0x1049ab8f0();
   return input;
}

double mlp::neuron0x1049ab200() {
   double input = input0x1049ab200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ab920() {
   double input = -0.039456;
   input += synapse0x1049abbb0();
   input += synapse0x1049abbe0();
   input += synapse0x1049abc10();
   input += synapse0x1049abc40();
   input += synapse0x1049abc70();
   input += synapse0x1049abca0();
   input += synapse0x1049abcd0();
   input += synapse0x1049abd00();
   input += synapse0x1049abd30();
   input += synapse0x1049abd60();
   input += synapse0x1049abd90();
   input += synapse0x1049abdc0();
   input += synapse0x1049abdf0();
   input += synapse0x1049abe20();
   input += synapse0x1049abe50();
   input += synapse0x1049abe80();
   input += synapse0x1049abfb0();
   input += synapse0x1049abfe0();
   input += synapse0x1049ac010();
   return input;
}

double mlp::neuron0x1049ab920() {
   double input = input0x1049ab920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ac040() {
   double input = -0.28844;
   input += synapse0x1049ac2d0();
   input += synapse0x1049ac300();
   input += synapse0x1049ac330();
   input += synapse0x1049ac360();
   input += synapse0x1049ac390();
   input += synapse0x1049ac3c0();
   input += synapse0x1049ac3f0();
   input += synapse0x1049ac420();
   input += synapse0x1049ac450();
   input += synapse0x1049ac480();
   input += synapse0x1049ac4b0();
   input += synapse0x1049ac4e0();
   input += synapse0x1049ac510();
   input += synapse0x1049ac540();
   input += synapse0x1049ac570();
   input += synapse0x1049ac5a0();
   input += synapse0x1049ac6d0();
   input += synapse0x1049ac700();
   input += synapse0x1049ac730();
   return input;
}

double mlp::neuron0x1049ac040() {
   double input = input0x1049ac040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ac760() {
   double input = 1.27043;
   input += synapse0x1049ac9f0();
   input += synapse0x1049aca20();
   input += synapse0x1049aca50();
   input += synapse0x1049aca80();
   input += synapse0x1049acab0();
   input += synapse0x1049acae0();
   input += synapse0x1049acb10();
   input += synapse0x1049acb40();
   input += synapse0x1049acb70();
   input += synapse0x1049acba0();
   input += synapse0x1049acbd0();
   input += synapse0x1049acc00();
   input += synapse0x1049acc30();
   input += synapse0x1049acc60();
   input += synapse0x1049acc90();
   input += synapse0x1049accc0();
   input += synapse0x1049acdf0();
   input += synapse0x1049ace20();
   input += synapse0x1049ace50();
   return input;
}

double mlp::neuron0x1049ac760() {
   double input = input0x1049ac760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ace80() {
   double input = -0.515069;
   input += synapse0x1049ad110();
   input += synapse0x1049ad140();
   input += synapse0x1049ad170();
   input += synapse0x1049ad1a0();
   input += synapse0x1049ad1d0();
   input += synapse0x1049ad200();
   input += synapse0x1049ad230();
   input += synapse0x1049ad260();
   input += synapse0x1049ad290();
   input += synapse0x1049ad2c0();
   input += synapse0x1049ad2f0();
   input += synapse0x1049ad320();
   input += synapse0x1049ad350();
   input += synapse0x1049ad380();
   input += synapse0x1049ad3b0();
   input += synapse0x1049ad3e0();
   input += synapse0x1049ad510();
   input += synapse0x1049ad540();
   input += synapse0x1049ad570();
   return input;
}

double mlp::neuron0x1049ace80() {
   double input = input0x1049ace80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ad5a0() {
   double input = 0.34817;
   input += synapse0x1049ad830();
   input += synapse0x1049ad860();
   input += synapse0x1049ad890();
   input += synapse0x1049ad8c0();
   input += synapse0x1049ad8f0();
   input += synapse0x1049ad920();
   input += synapse0x1049ad950();
   input += synapse0x1049ad980();
   input += synapse0x1049ad9b0();
   input += synapse0x1049ad9e0();
   input += synapse0x1049ada10();
   input += synapse0x1049ada40();
   input += synapse0x1049ada70();
   input += synapse0x1049adaa0();
   input += synapse0x1049adad0();
   input += synapse0x1049adb00();
   input += synapse0x1049adc30();
   input += synapse0x1049adc60();
   input += synapse0x1049adc90();
   return input;
}

double mlp::neuron0x1049ad5a0() {
   double input = input0x1049ad5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049adcc0() {
   double input = -0.0196682;
   input += synapse0x1049adf50();
   input += synapse0x1049adf80();
   input += synapse0x1049adfb0();
   input += synapse0x1049adfe0();
   input += synapse0x1049ae010();
   input += synapse0x1049ae040();
   input += synapse0x1049ae070();
   input += synapse0x1049ae0a0();
   input += synapse0x1049ae0d0();
   input += synapse0x1049ae100();
   input += synapse0x1049ae130();
   input += synapse0x1049ae160();
   input += synapse0x1049ae190();
   input += synapse0x1049ae1c0();
   input += synapse0x1049ae1f0();
   input += synapse0x1049ae220();
   input += synapse0x1049ae350();
   input += synapse0x1049ae380();
   input += synapse0x1049ae3b0();
   return input;
}

double mlp::neuron0x1049adcc0() {
   double input = input0x1049adcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ae3e0() {
   double input = 0.972315;
   input += synapse0x1049ae670();
   input += synapse0x1049ae6a0();
   input += synapse0x1049ae6d0();
   input += synapse0x1049ae700();
   input += synapse0x1049ae730();
   input += synapse0x1049ae760();
   input += synapse0x1049ae790();
   input += synapse0x1049ae7c0();
   input += synapse0x1049ae7f0();
   input += synapse0x1049ae820();
   input += synapse0x1049ae850();
   input += synapse0x1049ae880();
   input += synapse0x1049ae8b0();
   input += synapse0x1049ae8e0();
   input += synapse0x1049ae910();
   input += synapse0x1049ae940();
   input += synapse0x1049aea70();
   input += synapse0x1049aeaa0();
   input += synapse0x1049aead0();
   return input;
}

double mlp::neuron0x1049ae3e0() {
   double input = input0x1049ae3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049aeb00() {
   double input = -0.086106;
   input += synapse0x1049a8d50();
   input += synapse0x1049a8d80();
   input += synapse0x1049a8db0();
   input += synapse0x1049a8de0();
   input += synapse0x1049a8e10();
   input += synapse0x1049aef90();
   input += synapse0x1049aefc0();
   input += synapse0x1049aeff0();
   input += synapse0x1049af020();
   input += synapse0x1049af050();
   input += synapse0x1049af080();
   input += synapse0x1049af0b0();
   input += synapse0x1049af0e0();
   input += synapse0x1049af110();
   input += synapse0x1049af140();
   input += synapse0x1049af170();
   input += synapse0x1049af2a0();
   input += synapse0x1049af2d0();
   input += synapse0x1049af300();
   return input;
}

double mlp::neuron0x1049aeb00() {
   double input = input0x1049aeb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049af330() {
   double input = -0.10959;
   input += synapse0x1049af5c0();
   input += synapse0x1049af5f0();
   input += synapse0x1049af620();
   input += synapse0x1049af650();
   input += synapse0x1049af680();
   input += synapse0x1049af6b0();
   input += synapse0x1049af6e0();
   input += synapse0x1049af710();
   input += synapse0x1049af740();
   input += synapse0x1049af770();
   input += synapse0x1049af7a0();
   input += synapse0x1049af7d0();
   input += synapse0x1049af800();
   input += synapse0x1049af830();
   input += synapse0x1049af860();
   input += synapse0x1049af890();
   input += synapse0x1049af9c0();
   input += synapse0x1049af9f0();
   input += synapse0x1049afa20();
   return input;
}

double mlp::neuron0x1049af330() {
   double input = input0x1049af330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049afa50() {
   double input = 1.00193;
   input += synapse0x1049afce0();
   input += synapse0x1049afe10();
   input += synapse0x104994220();
   input += synapse0x104994250();
   input += synapse0x1049a61c0();
   input += synapse0x1049a61f0();
   input += synapse0x1049a6780();
   input += synapse0x1049a67b0();
   input += synapse0x1049a6d40();
   input += synapse0x1049a6d70();
   input += synapse0x1049a7300();
   input += synapse0x1049a7330();
   input += synapse0x1049a78f0();
   input += synapse0x1049a7920();
   input += synapse0x1049a7f10();
   input += synapse0x1049a7f40();
   input += synapse0x1049a8840();
   input += synapse0x1049a8870();
   input += synapse0x1049a8b50();
   return input;
}

double mlp::neuron0x1049afa50() {
   double input = input0x1049afa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b1140() {
   double input = -3.07309;
   input += synapse0x1049a8530();
   input += synapse0x1049a8560();
   input += synapse0x1049a8220();
   input += synapse0x1049a8250();
   input += synapse0x1049a7c00();
   input += synapse0x1049a7c30();
   input += synapse0x1049a75e0();
   input += synapse0x1049a7610();
   input += synapse0x1049a7020();
   input += synapse0x1049a7050();
   input += synapse0x1049a6a60();
   input += synapse0x1049a6a90();
   input += synapse0x1049a64a0();
   input += synapse0x1049a64d0();
   input += synapse0x1049a5ee0();
   input += synapse0x1049a5f10();
   input += synapse0x1049b13a0();
   input += synapse0x1049b13d0();
   input += synapse0x1049b1400();
   return input;
}

double mlp::neuron0x1049b1140() {
   double input = input0x1049b1140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b1430() {
   double input = 0.0203081;
   input += synapse0x1049b16c0();
   input += synapse0x1049b16f0();
   input += synapse0x1049b1720();
   input += synapse0x1049b1750();
   input += synapse0x1049b1780();
   input += synapse0x1049b17b0();
   input += synapse0x1049b17e0();
   input += synapse0x1049b1810();
   input += synapse0x1049b1840();
   input += synapse0x1049b1870();
   input += synapse0x1049b18a0();
   input += synapse0x1049b18d0();
   input += synapse0x1049b1900();
   input += synapse0x1049b1930();
   input += synapse0x1049b1960();
   input += synapse0x1049b1990();
   input += synapse0x1049b1ac0();
   input += synapse0x1049b1af0();
   input += synapse0x1049b1b20();
   return input;
}

double mlp::neuron0x1049b1430() {
   double input = input0x1049b1430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b1b50() {
   double input = 0.359074;
   input += synapse0x1049b1de0();
   input += synapse0x1049b1e10();
   input += synapse0x1049b1e40();
   input += synapse0x1049b1e70();
   input += synapse0x1049b1ea0();
   input += synapse0x1049b1ed0();
   input += synapse0x1049b1f00();
   input += synapse0x1049b1f30();
   input += synapse0x1049b1f60();
   input += synapse0x1049b1f90();
   input += synapse0x1049b1fc0();
   input += synapse0x1049b1ff0();
   input += synapse0x1049b2020();
   input += synapse0x1049b2050();
   input += synapse0x1049b2080();
   input += synapse0x1049b20b0();
   input += synapse0x1049b21e0();
   input += synapse0x1049b2210();
   input += synapse0x1049b2240();
   return input;
}

double mlp::neuron0x1049b1b50() {
   double input = input0x1049b1b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b2270() {
   double input = 0.129733;
   input += synapse0x1049a5b70();
   input += synapse0x1049b23d0();
   input += synapse0x1049b2400();
   input += synapse0x1049b2430();
   input += synapse0x1049b2460();
   input += synapse0x1049b2490();
   input += synapse0x1049b24c0();
   input += synapse0x1049b24f0();
   input += synapse0x1049b2520();
   input += synapse0x1049b2550();
   input += synapse0x1049b2580();
   input += synapse0x1049b25b0();
   input += synapse0x1049b25e0();
   input += synapse0x1049b2610();
   input += synapse0x1049b2640();
   input += synapse0x1049b2670();
   input += synapse0x1049b27a0();
   input += synapse0x1049b27d0();
   input += synapse0x1049b2800();
   return input;
}

double mlp::neuron0x1049b2270() {
   double input = input0x1049b2270();
   return (input * 1)+0;
}

double mlp::input0x1049b2830() {
   double input = 0.893864;
   input += synapse0x1049b2a90();
   input += synapse0x1049b2ac0();
   input += synapse0x1049b2af0();
   input += synapse0x1049b2b20();
   input += synapse0x1049b2b50();
   input += synapse0x1049b2b80();
   input += synapse0x1049b2bb0();
   input += synapse0x1049b2be0();
   input += synapse0x1049b2c10();
   input += synapse0x1049b2c40();
   input += synapse0x1049b2c70();
   input += synapse0x1049b2ca0();
   input += synapse0x1049b2cd0();
   input += synapse0x1049b2d00();
   input += synapse0x1049b2d30();
   input += synapse0x1049b2d60();
   input += synapse0x1049b2e90();
   input += synapse0x1049b2ec0();
   input += synapse0x1049b2ef0();
   return input;
}

double mlp::neuron0x1049b2830() {
   double input = input0x1049b2830();
   return (input * 1)+0;
}

double mlp::synapse0x1049937d0() {
   return (neuron0x1049a5ba0()*0.0466089);
}

double mlp::synapse0x1049936d0() {
   return (neuron0x1049a5d00()*0.133661);
}

double mlp::synapse0x104993fe0() {
   return (neuron0x1049a5fe0()*-0.342432);
}

double mlp::synapse0x104994010() {
   return (neuron0x1049a62c0()*-0.0854047);
}

double mlp::synapse0x104994040() {
   return (neuron0x1049a65a0()*0.0252618);
}

double mlp::synapse0x1049940a0() {
   return (neuron0x1049a6880()*-0.380051);
}

double mlp::synapse0x1049940d0() {
   return (neuron0x1049a6b60()*0.138041);
}

double mlp::synapse0x104994100() {
   return (neuron0x1049a6e40()*-0.196908);
}

double mlp::synapse0x104994130() {
   return (neuron0x1049a7120()*-0.270785);
}

double mlp::synapse0x104994160() {
   return (neuron0x1049a7400()*-0.143768);
}

double mlp::synapse0x104994190() {
   return (neuron0x1049a76e0()*-0.489773);
}

double mlp::synapse0x1049941c0() {
   return (neuron0x1049a79f0()*0.0792581);
}

double mlp::synapse0x1049941f0() {
   return (neuron0x1049a7d00()*-0.305134);
}

double mlp::synapse0x1049a9390() {
   return (neuron0x1049a8010()*-0.0498254);
}

double mlp::synapse0x1049a93c0() {
   return (neuron0x1049a8320()*-0.178652);
}

double mlp::synapse0x1049a93f0() {
   return (neuron0x1049a8630()*-0.442716);
}

double mlp::synapse0x1049a9520() {
   return (neuron0x1049a8940()*0.158963);
}

double mlp::synapse0x1049a5360() {
   return (neuron0x1049a8e50()*0.00241747);
}

double mlp::synapse0x1049a5390() {
   return (neuron0x1049a90b0()*0.101257);
}

double mlp::synapse0x1049a98e0() {
   return (neuron0x1049a5ba0()*0.319192);
}

double mlp::synapse0x1049a9910() {
   return (neuron0x1049a5d00()*0.586835);
}

double mlp::synapse0x1049a9940() {
   return (neuron0x1049a5fe0()*0.0564533);
}

double mlp::synapse0x1049a9970() {
   return (neuron0x1049a62c0()*0.282973);
}

double mlp::synapse0x1049a99a0() {
   return (neuron0x1049a65a0()*0.281909);
}

double mlp::synapse0x1049a99d0() {
   return (neuron0x1049a6880()*0.377432);
}

double mlp::synapse0x1049a9a00() {
   return (neuron0x1049a6b60()*-0.184878);
}

double mlp::synapse0x1049a9a30() {
   return (neuron0x1049a6e40()*-0.015766);
}

double mlp::synapse0x1049a9a60() {
   return (neuron0x1049a7120()*0.342847);
}

double mlp::synapse0x1049a9a90() {
   return (neuron0x1049a7400()*0.305933);
}

double mlp::synapse0x1049a9ac0() {
   return (neuron0x1049a76e0()*-0.23175);
}

double mlp::synapse0x1049a9af0() {
   return (neuron0x1049a79f0()*-0.445);
}

double mlp::synapse0x1049a9b20() {
   return (neuron0x1049a7d00()*-0.392543);
}

double mlp::synapse0x1049a9b50() {
   return (neuron0x1049a8010()*0.266614);
}

double mlp::synapse0x1049a9550() {
   return (neuron0x1049a8320()*-0.215263);
}

double mlp::synapse0x1049a9580() {
   return (neuron0x1049a8630()*-0.0388428);
}

double mlp::synapse0x1049a95b0() {
   return (neuron0x1049a8940()*0.196849);
}

double mlp::synapse0x1049a95e0() {
   return (neuron0x1049a8e50()*-0.36966);
}

double mlp::synapse0x1049a9610() {
   return (neuron0x1049a90b0()*0.24304);
}

double mlp::synapse0x1049aa110() {
   return (neuron0x1049a5ba0()*0.12935);
}

double mlp::synapse0x1049aa140() {
   return (neuron0x1049a5d00()*0.264374);
}

double mlp::synapse0x1049aa170() {
   return (neuron0x1049a5fe0()*-0.298255);
}

double mlp::synapse0x1049aa1a0() {
   return (neuron0x1049a62c0()*-0.268173);
}

double mlp::synapse0x1049aa1d0() {
   return (neuron0x1049a65a0()*0.085085);
}

double mlp::synapse0x1049aa200() {
   return (neuron0x1049a6880()*0.215429);
}

double mlp::synapse0x1049aa230() {
   return (neuron0x1049a6b60()*-0.412017);
}

double mlp::synapse0x1049aa260() {
   return (neuron0x1049a6e40()*0.465066);
}

double mlp::synapse0x1049aa290() {
   return (neuron0x1049a7120()*-0.455082);
}

double mlp::synapse0x1049aa2c0() {
   return (neuron0x1049a7400()*0.365152);
}

double mlp::synapse0x1049aa2f0() {
   return (neuron0x1049a76e0()*0.28317);
}

double mlp::synapse0x1049aa320() {
   return (neuron0x1049a79f0()*0.0807844);
}

double mlp::synapse0x1049aa350() {
   return (neuron0x1049a7d00()*0.483898);
}

double mlp::synapse0x1049aa380() {
   return (neuron0x1049a8010()*-0.253728);
}

double mlp::synapse0x1049aa3b0() {
   return (neuron0x1049a8320()*-0.257844);
}

double mlp::synapse0x1049aa3e0() {
   return (neuron0x1049a8630()*-0.109742);
}

double mlp::synapse0x1049aa510() {
   return (neuron0x1049a8940()*0.280874);
}

double mlp::synapse0x1049aa540() {
   return (neuron0x1049a8e50()*-0.285289);
}

double mlp::synapse0x1049aa570() {
   return (neuron0x1049a90b0()*-0.385349);
}

double mlp::synapse0x1049aa830() {
   return (neuron0x1049a5ba0()*-0.384728);
}

double mlp::synapse0x1049aa860() {
   return (neuron0x1049a5d00()*-0.155157);
}

double mlp::synapse0x1049aa890() {
   return (neuron0x1049a5fe0()*-0.51691);
}

double mlp::synapse0x1049aa8c0() {
   return (neuron0x1049a62c0()*0.502654);
}

double mlp::synapse0x1049aa8f0() {
   return (neuron0x1049a65a0()*0.23007);
}

double mlp::synapse0x1049aa920() {
   return (neuron0x1049a6880()*-0.355738);
}

double mlp::synapse0x1049aa950() {
   return (neuron0x1049a6b60()*0.257866);
}

double mlp::synapse0x1049aa980() {
   return (neuron0x1049a6e40()*-0.224804);
}

double mlp::synapse0x1049a9b80() {
   return (neuron0x1049a7120()*0.0193385);
}

double mlp::synapse0x1049a9bb0() {
   return (neuron0x1049a7400()*-0.118476);
}

double mlp::synapse0x1049a9be0() {
   return (neuron0x1049a76e0()*0.0345195);
}

double mlp::synapse0x1049a9c10() {
   return (neuron0x1049a79f0()*-0.401245);
}

double mlp::synapse0x1049a9c40() {
   return (neuron0x1049a7d00()*-0.166715);
}

double mlp::synapse0x1049a9c70() {
   return (neuron0x1049a8010()*0.335618);
}

double mlp::synapse0x1049a9ca0() {
   return (neuron0x1049a8320()*0.13037);
}

double mlp::synapse0x1049a9cd0() {
   return (neuron0x1049a8630()*0.0284256);
}

double mlp::synapse0x1049a9d00() {
   return (neuron0x1049a8940()*-0.340008);
}

double mlp::synapse0x1049a9d30() {
   return (neuron0x1049a8e50()*0.471879);
}

double mlp::synapse0x1049aaab0() {
   return (neuron0x1049a90b0()*0.196579);
}

double mlp::synapse0x1049aad70() {
   return (neuron0x1049a5ba0()*0.443437);
}

double mlp::synapse0x1049aada0() {
   return (neuron0x1049a5d00()*-0.140677);
}

double mlp::synapse0x1049aadd0() {
   return (neuron0x1049a5fe0()*0.0992796);
}

double mlp::synapse0x1049aae00() {
   return (neuron0x1049a62c0()*0.35667);
}

double mlp::synapse0x1049aae30() {
   return (neuron0x1049a65a0()*-0.103844);
}

double mlp::synapse0x1049aae60() {
   return (neuron0x1049a6880()*-0.314327);
}

double mlp::synapse0x1049aae90() {
   return (neuron0x1049a6b60()*-0.265477);
}

double mlp::synapse0x1049aaec0() {
   return (neuron0x1049a6e40()*-0.117675);
}

double mlp::synapse0x1049aaef0() {
   return (neuron0x1049a7120()*0.31234);
}

double mlp::synapse0x1049aaf20() {
   return (neuron0x1049a7400()*-0.337977);
}

double mlp::synapse0x1049aaf50() {
   return (neuron0x1049a76e0()*-0.21965);
}

double mlp::synapse0x1049aaf80() {
   return (neuron0x1049a79f0()*0.35547);
}

double mlp::synapse0x1049aafb0() {
   return (neuron0x1049a7d00()*0.0497808);
}

double mlp::synapse0x1049aafe0() {
   return (neuron0x1049a8010()*-0.0666583);
}

double mlp::synapse0x1049ab010() {
   return (neuron0x1049a8320()*0.213469);
}

double mlp::synapse0x1049ab040() {
   return (neuron0x1049a8630()*0.143445);
}

double mlp::synapse0x1049ab170() {
   return (neuron0x1049a8940()*0.299276);
}

double mlp::synapse0x1049ab1a0() {
   return (neuron0x1049a8e50()*-0.175885);
}

double mlp::synapse0x1049ab1d0() {
   return (neuron0x1049a90b0()*-0.212571);
}

double mlp::synapse0x1049ab490() {
   return (neuron0x1049a5ba0()*0.0326746);
}

double mlp::synapse0x1049ab4c0() {
   return (neuron0x1049a5d00()*0.05472);
}

double mlp::synapse0x1049ab4f0() {
   return (neuron0x1049a5fe0()*0.203978);
}

double mlp::synapse0x1049ab520() {
   return (neuron0x1049a62c0()*-0.334862);
}

double mlp::synapse0x1049ab550() {
   return (neuron0x1049a65a0()*-0.607757);
}

double mlp::synapse0x1049ab580() {
   return (neuron0x1049a6880()*-0.0996327);
}

double mlp::synapse0x1049ab5b0() {
   return (neuron0x1049a6b60()*-0.112764);
}

double mlp::synapse0x1049ab5e0() {
   return (neuron0x1049a6e40()*-0.0342812);
}

double mlp::synapse0x1049ab610() {
   return (neuron0x1049a7120()*0.233641);
}

double mlp::synapse0x1049ab640() {
   return (neuron0x1049a7400()*0.0339457);
}

double mlp::synapse0x1049ab670() {
   return (neuron0x1049a76e0()*-0.00127619);
}

double mlp::synapse0x1049ab6a0() {
   return (neuron0x1049a79f0()*0.058473);
}

double mlp::synapse0x1049ab6d0() {
   return (neuron0x1049a7d00()*-0.233136);
}

double mlp::synapse0x1049ab700() {
   return (neuron0x1049a8010()*0.463596);
}

double mlp::synapse0x1049ab730() {
   return (neuron0x1049a8320()*0.234484);
}

double mlp::synapse0x1049ab760() {
   return (neuron0x1049a8630()*-0.108105);
}

double mlp::synapse0x1049ab890() {
   return (neuron0x1049a8940()*-0.34241);
}

double mlp::synapse0x1049ab8c0() {
   return (neuron0x1049a8e50()*0.0392733);
}

double mlp::synapse0x1049ab8f0() {
   return (neuron0x1049a90b0()*-0.245804);
}

double mlp::synapse0x1049abbb0() {
   return (neuron0x1049a5ba0()*0.155357);
}

double mlp::synapse0x1049abbe0() {
   return (neuron0x1049a5d00()*-0.194409);
}

double mlp::synapse0x1049abc10() {
   return (neuron0x1049a5fe0()*0.216373);
}

double mlp::synapse0x1049abc40() {
   return (neuron0x1049a62c0()*-0.2285);
}

double mlp::synapse0x1049abc70() {
   return (neuron0x1049a65a0()*-0.224233);
}

double mlp::synapse0x1049abca0() {
   return (neuron0x1049a6880()*-0.00716241);
}

double mlp::synapse0x1049abcd0() {
   return (neuron0x1049a6b60()*0.138788);
}

double mlp::synapse0x1049abd00() {
   return (neuron0x1049a6e40()*0.300875);
}

double mlp::synapse0x1049abd30() {
   return (neuron0x1049a7120()*0.388331);
}

double mlp::synapse0x1049abd60() {
   return (neuron0x1049a7400()*-0.041258);
}

double mlp::synapse0x1049abd90() {
   return (neuron0x1049a76e0()*0.111273);
}

double mlp::synapse0x1049abdc0() {
   return (neuron0x1049a79f0()*-0.673796);
}

double mlp::synapse0x1049abdf0() {
   return (neuron0x1049a7d00()*-0.136175);
}

double mlp::synapse0x1049abe20() {
   return (neuron0x1049a8010()*-0.225669);
}

double mlp::synapse0x1049abe50() {
   return (neuron0x1049a8320()*0.410973);
}

double mlp::synapse0x1049abe80() {
   return (neuron0x1049a8630()*-0.0567084);
}

double mlp::synapse0x1049abfb0() {
   return (neuron0x1049a8940()*-0.342306);
}

double mlp::synapse0x1049abfe0() {
   return (neuron0x1049a8e50()*0.062713);
}

double mlp::synapse0x1049ac010() {
   return (neuron0x1049a90b0()*-0.3722);
}

double mlp::synapse0x1049ac2d0() {
   return (neuron0x1049a5ba0()*0.393924);
}

double mlp::synapse0x1049ac300() {
   return (neuron0x1049a5d00()*-0.0536008);
}

double mlp::synapse0x1049ac330() {
   return (neuron0x1049a5fe0()*0.397155);
}

double mlp::synapse0x1049ac360() {
   return (neuron0x1049a62c0()*0.121117);
}

double mlp::synapse0x1049ac390() {
   return (neuron0x1049a65a0()*-0.349251);
}

double mlp::synapse0x1049ac3c0() {
   return (neuron0x1049a6880()*-0.328178);
}

double mlp::synapse0x1049ac3f0() {
   return (neuron0x1049a6b60()*0.0341807);
}

double mlp::synapse0x1049ac420() {
   return (neuron0x1049a6e40()*-0.156768);
}

double mlp::synapse0x1049ac450() {
   return (neuron0x1049a7120()*-0.28274);
}

double mlp::synapse0x1049ac480() {
   return (neuron0x1049a7400()*0.316554);
}

double mlp::synapse0x1049ac4b0() {
   return (neuron0x1049a76e0()*-0.102494);
}

double mlp::synapse0x1049ac4e0() {
   return (neuron0x1049a79f0()*0.164852);
}

double mlp::synapse0x1049ac510() {
   return (neuron0x1049a7d00()*0.0429733);
}

double mlp::synapse0x1049ac540() {
   return (neuron0x1049a8010()*0.29624);
}

double mlp::synapse0x1049ac570() {
   return (neuron0x1049a8320()*0.395397);
}

double mlp::synapse0x1049ac5a0() {
   return (neuron0x1049a8630()*-0.176755);
}

double mlp::synapse0x1049ac6d0() {
   return (neuron0x1049a8940()*-0.312086);
}

double mlp::synapse0x1049ac700() {
   return (neuron0x1049a8e50()*-0.607768);
}

double mlp::synapse0x1049ac730() {
   return (neuron0x1049a90b0()*-0.497182);
}

double mlp::synapse0x1049ac9f0() {
   return (neuron0x1049a5ba0()*0.150889);
}

double mlp::synapse0x1049aca20() {
   return (neuron0x1049a5d00()*-0.255798);
}

double mlp::synapse0x1049aca50() {
   return (neuron0x1049a5fe0()*0.0384456);
}

double mlp::synapse0x1049aca80() {
   return (neuron0x1049a62c0()*-0.8003);
}

double mlp::synapse0x1049acab0() {
   return (neuron0x1049a65a0()*0.0143252);
}

double mlp::synapse0x1049acae0() {
   return (neuron0x1049a6880()*0.0580007);
}

double mlp::synapse0x1049acb10() {
   return (neuron0x1049a6b60()*-0.198622);
}

double mlp::synapse0x1049acb40() {
   return (neuron0x1049a6e40()*0.103678);
}

double mlp::synapse0x1049acb70() {
   return (neuron0x1049a7120()*0.102946);
}

double mlp::synapse0x1049acba0() {
   return (neuron0x1049a7400()*-0.118022);
}

double mlp::synapse0x1049acbd0() {
   return (neuron0x1049a76e0()*-0.0505453);
}

double mlp::synapse0x1049acc00() {
   return (neuron0x1049a79f0()*0.442848);
}

double mlp::synapse0x1049acc30() {
   return (neuron0x1049a7d00()*0.63938);
}

double mlp::synapse0x1049acc60() {
   return (neuron0x1049a8010()*-0.0250113);
}

double mlp::synapse0x1049acc90() {
   return (neuron0x1049a8320()*-0.318261);
}

double mlp::synapse0x1049accc0() {
   return (neuron0x1049a8630()*0.361322);
}

double mlp::synapse0x1049acdf0() {
   return (neuron0x1049a8940()*0.198494);
}

double mlp::synapse0x1049ace20() {
   return (neuron0x1049a8e50()*-0.761863);
}

double mlp::synapse0x1049ace50() {
   return (neuron0x1049a90b0()*0.87274);
}

double mlp::synapse0x1049ad110() {
   return (neuron0x1049a5ba0()*0.150357);
}

double mlp::synapse0x1049ad140() {
   return (neuron0x1049a5d00()*-0.487779);
}

double mlp::synapse0x1049ad170() {
   return (neuron0x1049a5fe0()*-0.127292);
}

double mlp::synapse0x1049ad1a0() {
   return (neuron0x1049a62c0()*-0.295987);
}

double mlp::synapse0x1049ad1d0() {
   return (neuron0x1049a65a0()*-0.206136);
}

double mlp::synapse0x1049ad200() {
   return (neuron0x1049a6880()*0.358566);
}

double mlp::synapse0x1049ad230() {
   return (neuron0x1049a6b60()*0.234897);
}

double mlp::synapse0x1049ad260() {
   return (neuron0x1049a6e40()*0.366658);
}

double mlp::synapse0x1049ad290() {
   return (neuron0x1049a7120()*0.0402125);
}

double mlp::synapse0x1049ad2c0() {
   return (neuron0x1049a7400()*0.0686234);
}

double mlp::synapse0x1049ad2f0() {
   return (neuron0x1049a76e0()*-0.00379324);
}

double mlp::synapse0x1049ad320() {
   return (neuron0x1049a79f0()*-0.282977);
}

double mlp::synapse0x1049ad350() {
   return (neuron0x1049a7d00()*0.353365);
}

double mlp::synapse0x1049ad380() {
   return (neuron0x1049a8010()*0.154508);
}

double mlp::synapse0x1049ad3b0() {
   return (neuron0x1049a8320()*0.422045);
}

double mlp::synapse0x1049ad3e0() {
   return (neuron0x1049a8630()*-0.38509);
}

double mlp::synapse0x1049ad510() {
   return (neuron0x1049a8940()*0.38656);
}

double mlp::synapse0x1049ad540() {
   return (neuron0x1049a8e50()*0.0549601);
}

double mlp::synapse0x1049ad570() {
   return (neuron0x1049a90b0()*-0.122967);
}

double mlp::synapse0x1049ad830() {
   return (neuron0x1049a5ba0()*-0.0424768);
}

double mlp::synapse0x1049ad860() {
   return (neuron0x1049a5d00()*0.470783);
}

double mlp::synapse0x1049ad890() {
   return (neuron0x1049a5fe0()*0.148375);
}

double mlp::synapse0x1049ad8c0() {
   return (neuron0x1049a62c0()*0.104603);
}

double mlp::synapse0x1049ad8f0() {
   return (neuron0x1049a65a0()*0.0337226);
}

double mlp::synapse0x1049ad920() {
   return (neuron0x1049a6880()*-0.237466);
}

double mlp::synapse0x1049ad950() {
   return (neuron0x1049a6b60()*0.0103231);
}

double mlp::synapse0x1049ad980() {
   return (neuron0x1049a6e40()*-0.266878);
}

double mlp::synapse0x1049ad9b0() {
   return (neuron0x1049a7120()*-0.426576);
}

double mlp::synapse0x1049ad9e0() {
   return (neuron0x1049a7400()*-0.451724);
}

double mlp::synapse0x1049ada10() {
   return (neuron0x1049a76e0()*-0.154993);
}

double mlp::synapse0x1049ada40() {
   return (neuron0x1049a79f0()*0.314473);
}

double mlp::synapse0x1049ada70() {
   return (neuron0x1049a7d00()*0.586614);
}

double mlp::synapse0x1049adaa0() {
   return (neuron0x1049a8010()*0.0836755);
}

double mlp::synapse0x1049adad0() {
   return (neuron0x1049a8320()*-0.432059);
}

double mlp::synapse0x1049adb00() {
   return (neuron0x1049a8630()*-0.405478);
}

double mlp::synapse0x1049adc30() {
   return (neuron0x1049a8940()*-0.36921);
}

double mlp::synapse0x1049adc60() {
   return (neuron0x1049a8e50()*-0.0935386);
}

double mlp::synapse0x1049adc90() {
   return (neuron0x1049a90b0()*-0.450729);
}

double mlp::synapse0x1049adf50() {
   return (neuron0x1049a5ba0()*0.465002);
}

double mlp::synapse0x1049adf80() {
   return (neuron0x1049a5d00()*0.204676);
}

double mlp::synapse0x1049adfb0() {
   return (neuron0x1049a5fe0()*0.381149);
}

double mlp::synapse0x1049adfe0() {
   return (neuron0x1049a62c0()*0.353545);
}

double mlp::synapse0x1049ae010() {
   return (neuron0x1049a65a0()*-0.165022);
}

double mlp::synapse0x1049ae040() {
   return (neuron0x1049a6880()*0.395065);
}

double mlp::synapse0x1049ae070() {
   return (neuron0x1049a6b60()*0.379889);
}

double mlp::synapse0x1049ae0a0() {
   return (neuron0x1049a6e40()*-0.162686);
}

double mlp::synapse0x1049ae0d0() {
   return (neuron0x1049a7120()*0.386216);
}

double mlp::synapse0x1049ae100() {
   return (neuron0x1049a7400()*0.105878);
}

double mlp::synapse0x1049ae130() {
   return (neuron0x1049a76e0()*0.489696);
}

double mlp::synapse0x1049ae160() {
   return (neuron0x1049a79f0()*0.679547);
}

double mlp::synapse0x1049ae190() {
   return (neuron0x1049a7d00()*-0.28693);
}

double mlp::synapse0x1049ae1c0() {
   return (neuron0x1049a8010()*0.101461);
}

double mlp::synapse0x1049ae1f0() {
   return (neuron0x1049a8320()*-0.188818);
}

double mlp::synapse0x1049ae220() {
   return (neuron0x1049a8630()*-0.0983102);
}

double mlp::synapse0x1049ae350() {
   return (neuron0x1049a8940()*-0.014926);
}

double mlp::synapse0x1049ae380() {
   return (neuron0x1049a8e50()*-0.0151291);
}

double mlp::synapse0x1049ae3b0() {
   return (neuron0x1049a90b0()*0.0454691);
}

double mlp::synapse0x1049ae670() {
   return (neuron0x1049a5ba0()*0.283172);
}

double mlp::synapse0x1049ae6a0() {
   return (neuron0x1049a5d00()*0.206908);
}

double mlp::synapse0x1049ae6d0() {
   return (neuron0x1049a5fe0()*-0.243791);
}

double mlp::synapse0x1049ae700() {
   return (neuron0x1049a62c0()*-0.343702);
}

double mlp::synapse0x1049ae730() {
   return (neuron0x1049a65a0()*0.0879242);
}

double mlp::synapse0x1049ae760() {
   return (neuron0x1049a6880()*-0.22299);
}

double mlp::synapse0x1049ae790() {
   return (neuron0x1049a6b60()*-0.217135);
}

double mlp::synapse0x1049ae7c0() {
   return (neuron0x1049a6e40()*-0.0282415);
}

double mlp::synapse0x1049ae7f0() {
   return (neuron0x1049a7120()*-0.212101);
}

double mlp::synapse0x1049ae820() {
   return (neuron0x1049a7400()*0.276264);
}

double mlp::synapse0x1049ae850() {
   return (neuron0x1049a76e0()*0.281321);
}

double mlp::synapse0x1049ae880() {
   return (neuron0x1049a79f0()*0.240617);
}

double mlp::synapse0x1049ae8b0() {
   return (neuron0x1049a7d00()*0.266259);
}

double mlp::synapse0x1049ae8e0() {
   return (neuron0x1049a8010()*-0.314792);
}

double mlp::synapse0x1049ae910() {
   return (neuron0x1049a8320()*-0.554529);
}

double mlp::synapse0x1049ae940() {
   return (neuron0x1049a8630()*0.0489766);
}

double mlp::synapse0x1049aea70() {
   return (neuron0x1049a8940()*0.115216);
}

double mlp::synapse0x1049aeaa0() {
   return (neuron0x1049a8e50()*-0.210043);
}

double mlp::synapse0x1049aead0() {
   return (neuron0x1049a90b0()*0.640195);
}

double mlp::synapse0x1049a8d50() {
   return (neuron0x1049a5ba0()*-0.513241);
}

double mlp::synapse0x1049a8d80() {
   return (neuron0x1049a5d00()*-0.23858);
}

double mlp::synapse0x1049a8db0() {
   return (neuron0x1049a5fe0()*-0.282635);
}

double mlp::synapse0x1049a8de0() {
   return (neuron0x1049a62c0()*0.114412);
}

double mlp::synapse0x1049a8e10() {
   return (neuron0x1049a65a0()*-0.00850174);
}

double mlp::synapse0x1049aef90() {
   return (neuron0x1049a6880()*0.0861755);
}

double mlp::synapse0x1049aefc0() {
   return (neuron0x1049a6b60()*-0.00675686);
}

double mlp::synapse0x1049aeff0() {
   return (neuron0x1049a6e40()*0.0494086);
}

double mlp::synapse0x1049af020() {
   return (neuron0x1049a7120()*0.357552);
}

double mlp::synapse0x1049af050() {
   return (neuron0x1049a7400()*-0.293697);
}

double mlp::synapse0x1049af080() {
   return (neuron0x1049a76e0()*0.106416);
}

double mlp::synapse0x1049af0b0() {
   return (neuron0x1049a79f0()*-0.546071);
}

double mlp::synapse0x1049af0e0() {
   return (neuron0x1049a7d00()*-0.391436);
}

double mlp::synapse0x1049af110() {
   return (neuron0x1049a8010()*0.117209);
}

double mlp::synapse0x1049af140() {
   return (neuron0x1049a8320()*0.469524);
}

double mlp::synapse0x1049af170() {
   return (neuron0x1049a8630()*0.514151);
}

double mlp::synapse0x1049af2a0() {
   return (neuron0x1049a8940()*-0.176706);
}

double mlp::synapse0x1049af2d0() {
   return (neuron0x1049a8e50()*-0.389017);
}

double mlp::synapse0x1049af300() {
   return (neuron0x1049a90b0()*-0.978265);
}

double mlp::synapse0x1049af5c0() {
   return (neuron0x1049a5ba0()*-0.357624);
}

double mlp::synapse0x1049af5f0() {
   return (neuron0x1049a5d00()*0.127482);
}

double mlp::synapse0x1049af620() {
   return (neuron0x1049a5fe0()*0.26951);
}

double mlp::synapse0x1049af650() {
   return (neuron0x1049a62c0()*-0.12615);
}

double mlp::synapse0x1049af680() {
   return (neuron0x1049a65a0()*-0.324761);
}

double mlp::synapse0x1049af6b0() {
   return (neuron0x1049a6880()*0.00351948);
}

double mlp::synapse0x1049af6e0() {
   return (neuron0x1049a6b60()*-0.473729);
}

double mlp::synapse0x1049af710() {
   return (neuron0x1049a6e40()*0.0456605);
}

double mlp::synapse0x1049af740() {
   return (neuron0x1049a7120()*-0.12773);
}

double mlp::synapse0x1049af770() {
   return (neuron0x1049a7400()*0.109963);
}

double mlp::synapse0x1049af7a0() {
   return (neuron0x1049a76e0()*0.219121);
}

double mlp::synapse0x1049af7d0() {
   return (neuron0x1049a79f0()*-0.0942563);
}

double mlp::synapse0x1049af800() {
   return (neuron0x1049a7d00()*-0.137404);
}

double mlp::synapse0x1049af830() {
   return (neuron0x1049a8010()*0.0117629);
}

double mlp::synapse0x1049af860() {
   return (neuron0x1049a8320()*-0.0263847);
}

double mlp::synapse0x1049af890() {
   return (neuron0x1049a8630()*0.0841418);
}

double mlp::synapse0x1049af9c0() {
   return (neuron0x1049a8940()*-0.339421);
}

double mlp::synapse0x1049af9f0() {
   return (neuron0x1049a8e50()*0.223821);
}

double mlp::synapse0x1049afa20() {
   return (neuron0x1049a90b0()*-0.338526);
}

double mlp::synapse0x1049afce0() {
   return (neuron0x1049a5ba0()*0.180272);
}

double mlp::synapse0x1049afe10() {
   return (neuron0x1049a5d00()*-0.3174);
}

double mlp::synapse0x104994220() {
   return (neuron0x1049a5fe0()*0.373452);
}

double mlp::synapse0x104994250() {
   return (neuron0x1049a62c0()*-0.846375);
}

double mlp::synapse0x1049a61c0() {
   return (neuron0x1049a65a0()*0.0430303);
}

double mlp::synapse0x1049a61f0() {
   return (neuron0x1049a6880()*0.0868728);
}

double mlp::synapse0x1049a6780() {
   return (neuron0x1049a6b60()*-0.157849);
}

double mlp::synapse0x1049a67b0() {
   return (neuron0x1049a6e40()*0.152524);
}

double mlp::synapse0x1049a6d40() {
   return (neuron0x1049a7120()*0.0964353);
}

double mlp::synapse0x1049a6d70() {
   return (neuron0x1049a7400()*-0.0597546);
}

double mlp::synapse0x1049a7300() {
   return (neuron0x1049a76e0()*-0.000690792);
}

double mlp::synapse0x1049a7330() {
   return (neuron0x1049a79f0()*0.468239);
}

double mlp::synapse0x1049a78f0() {
   return (neuron0x1049a7d00()*0.622975);
}

double mlp::synapse0x1049a7920() {
   return (neuron0x1049a8010()*-0.0437742);
}

double mlp::synapse0x1049a7f10() {
   return (neuron0x1049a8320()*-0.426941);
}

double mlp::synapse0x1049a7f40() {
   return (neuron0x1049a8630()*1.43436);
}

double mlp::synapse0x1049a8840() {
   return (neuron0x1049a8940()*0.292716);
}

double mlp::synapse0x1049a8870() {
   return (neuron0x1049a8e50()*-0.637617);
}

double mlp::synapse0x1049a8b50() {
   return (neuron0x1049a90b0()*0.786588);
}

double mlp::synapse0x1049a8530() {
   return (neuron0x1049a5ba0()*-0.344217);
}

double mlp::synapse0x1049a8560() {
   return (neuron0x1049a5d00()*0.365555);
}

double mlp::synapse0x1049a8220() {
   return (neuron0x1049a5fe0()*0.170889);
}

double mlp::synapse0x1049a8250() {
   return (neuron0x1049a62c0()*-0.335207);
}

double mlp::synapse0x1049a7c00() {
   return (neuron0x1049a65a0()*-0.00928009);
}

double mlp::synapse0x1049a7c30() {
   return (neuron0x1049a6880()*0.00921842);
}

double mlp::synapse0x1049a75e0() {
   return (neuron0x1049a6b60()*-0.190124);
}

double mlp::synapse0x1049a7610() {
   return (neuron0x1049a6e40()*0.056209);
}

double mlp::synapse0x1049a7020() {
   return (neuron0x1049a7120()*-0.117134);
}

double mlp::synapse0x1049a7050() {
   return (neuron0x1049a7400()*-0.189414);
}

double mlp::synapse0x1049a6a60() {
   return (neuron0x1049a76e0()*0.0343921);
}

double mlp::synapse0x1049a6a90() {
   return (neuron0x1049a79f0()*-0.0292632);
}

double mlp::synapse0x1049a64a0() {
   return (neuron0x1049a7d00()*-0.0695248);
}

double mlp::synapse0x1049a64d0() {
   return (neuron0x1049a8010()*-0.00773704);
}

double mlp::synapse0x1049a5ee0() {
   return (neuron0x1049a8320()*0.0336763);
}

double mlp::synapse0x1049a5f10() {
   return (neuron0x1049a8630()*0.195177);
}

double mlp::synapse0x1049b13a0() {
   return (neuron0x1049a8940()*-0.0609923);
}

double mlp::synapse0x1049b13d0() {
   return (neuron0x1049a8e50()*-0.431537);
}

double mlp::synapse0x1049b1400() {
   return (neuron0x1049a90b0()*-1.17687);
}

double mlp::synapse0x1049b16c0() {
   return (neuron0x1049a5ba0()*-0.302886);
}

double mlp::synapse0x1049b16f0() {
   return (neuron0x1049a5d00()*-0.142112);
}

double mlp::synapse0x1049b1720() {
   return (neuron0x1049a5fe0()*0.0306112);
}

double mlp::synapse0x1049b1750() {
   return (neuron0x1049a62c0()*-0.386266);
}

double mlp::synapse0x1049b1780() {
   return (neuron0x1049a65a0()*-0.395645);
}

double mlp::synapse0x1049b17b0() {
   return (neuron0x1049a6880()*0.000393938);
}

double mlp::synapse0x1049b17e0() {
   return (neuron0x1049a6b60()*-0.100468);
}

double mlp::synapse0x1049b1810() {
   return (neuron0x1049a6e40()*-0.183572);
}

double mlp::synapse0x1049b1840() {
   return (neuron0x1049a7120()*-0.338024);
}

double mlp::synapse0x1049b1870() {
   return (neuron0x1049a7400()*-0.0684447);
}

double mlp::synapse0x1049b18a0() {
   return (neuron0x1049a76e0()*0.151481);
}

double mlp::synapse0x1049b18d0() {
   return (neuron0x1049a79f0()*0.411495);
}

double mlp::synapse0x1049b1900() {
   return (neuron0x1049a7d00()*-0.185385);
}

double mlp::synapse0x1049b1930() {
   return (neuron0x1049a8010()*0.0287607);
}

double mlp::synapse0x1049b1960() {
   return (neuron0x1049a8320()*-0.0135891);
}

double mlp::synapse0x1049b1990() {
   return (neuron0x1049a8630()*-1.05794);
}

double mlp::synapse0x1049b1ac0() {
   return (neuron0x1049a8940()*-0.223951);
}

double mlp::synapse0x1049b1af0() {
   return (neuron0x1049a8e50()*-0.116297);
}

double mlp::synapse0x1049b1b20() {
   return (neuron0x1049a90b0()*0.0312573);
}

double mlp::synapse0x1049b1de0() {
   return (neuron0x1049a5ba0()*-0.344034);
}

double mlp::synapse0x1049b1e10() {
   return (neuron0x1049a5d00()*0.102707);
}

double mlp::synapse0x1049b1e40() {
   return (neuron0x1049a5fe0()*0.274993);
}

double mlp::synapse0x1049b1e70() {
   return (neuron0x1049a62c0()*0.304429);
}

double mlp::synapse0x1049b1ea0() {
   return (neuron0x1049a65a0()*0.0638809);
}

double mlp::synapse0x1049b1ed0() {
   return (neuron0x1049a6880()*-0.375136);
}

double mlp::synapse0x1049b1f00() {
   return (neuron0x1049a6b60()*-0.437132);
}

double mlp::synapse0x1049b1f30() {
   return (neuron0x1049a6e40()*-0.146794);
}

double mlp::synapse0x1049b1f60() {
   return (neuron0x1049a7120()*-0.210607);
}

double mlp::synapse0x1049b1f90() {
   return (neuron0x1049a7400()*0.123262);
}

double mlp::synapse0x1049b1fc0() {
   return (neuron0x1049a76e0()*0.280563);
}

double mlp::synapse0x1049b1ff0() {
   return (neuron0x1049a79f0()*0.584257);
}

double mlp::synapse0x1049b2020() {
   return (neuron0x1049a7d00()*0.282379);
}

double mlp::synapse0x1049b2050() {
   return (neuron0x1049a8010()*-0.294546);
}

double mlp::synapse0x1049b2080() {
   return (neuron0x1049a8320()*0.382531);
}

double mlp::synapse0x1049b20b0() {
   return (neuron0x1049a8630()*-0.109272);
}

double mlp::synapse0x1049b21e0() {
   return (neuron0x1049a8940()*-0.242498);
}

double mlp::synapse0x1049b2210() {
   return (neuron0x1049a8e50()*-0.0425273);
}

double mlp::synapse0x1049b2240() {
   return (neuron0x1049a90b0()*0.546175);
}

double mlp::synapse0x1049a5b70() {
   return (neuron0x104994330()*-0.152088);
}

double mlp::synapse0x1049b23d0() {
   return (neuron0x1049a9650()*0.111047);
}

double mlp::synapse0x1049b2400() {
   return (neuron0x1049a9e80()*0.0594638);
}

double mlp::synapse0x1049b2430() {
   return (neuron0x1049aa5a0()*0.163827);
}

double mlp::synapse0x1049b2460() {
   return (neuron0x1049aaae0()*0.197469);
}

double mlp::synapse0x1049b2490() {
   return (neuron0x1049ab200()*-0.109426);
}

double mlp::synapse0x1049b24c0() {
   return (neuron0x1049ab920()*0.197703);
}

double mlp::synapse0x1049b24f0() {
   return (neuron0x1049ac040()*0.0525355);
}

double mlp::synapse0x1049b2520() {
   return (neuron0x1049ac760()*-0.789952);
}

double mlp::synapse0x1049b2550() {
   return (neuron0x1049ace80()*-0.105243);
}

double mlp::synapse0x1049b2580() {
   return (neuron0x1049ad5a0()*-0.0222474);
}

double mlp::synapse0x1049b25b0() {
   return (neuron0x1049adcc0()*-0.0668382);
}

double mlp::synapse0x1049b25e0() {
   return (neuron0x1049ae3e0()*-0.245753);
}

double mlp::synapse0x1049b2610() {
   return (neuron0x1049aeb00()*-0.259376);
}

double mlp::synapse0x1049b2640() {
   return (neuron0x1049af330()*-0.0504537);
}

double mlp::synapse0x1049b2670() {
   return (neuron0x1049afa50()*0.758233);
}

double mlp::synapse0x1049b27a0() {
   return (neuron0x1049b1140()*1.04903);
}

double mlp::synapse0x1049b27d0() {
   return (neuron0x1049b1430()*0.242623);
}

double mlp::synapse0x1049b2800() {
   return (neuron0x1049b1b50()*-0.0542801);
}

double mlp::synapse0x1049b2a90() {
   return (neuron0x104994330()*0.149401);
}

double mlp::synapse0x1049b2ac0() {
   return (neuron0x1049a9650()*-0.101427);
}

double mlp::synapse0x1049b2af0() {
   return (neuron0x1049a9e80()*-0.0457116);
}

double mlp::synapse0x1049b2b20() {
   return (neuron0x1049aa5a0()*-0.184648);
}

double mlp::synapse0x1049b2b50() {
   return (neuron0x1049aaae0()*-0.198651);
}

double mlp::synapse0x1049b2b80() {
   return (neuron0x1049ab200()*0.143654);
}

double mlp::synapse0x1049b2bb0() {
   return (neuron0x1049ab920()*-0.183397);
}

double mlp::synapse0x1049b2be0() {
   return (neuron0x1049ac040()*-0.0658952);
}

double mlp::synapse0x1049b2c10() {
   return (neuron0x1049ac760()*0.751854);
}

double mlp::synapse0x1049b2c40() {
   return (neuron0x1049ace80()*0.0874626);
}

double mlp::synapse0x1049b2c70() {
   return (neuron0x1049ad5a0()*0.0258377);
}

double mlp::synapse0x1049b2ca0() {
   return (neuron0x1049adcc0()*0.059167);
}

double mlp::synapse0x1049b2cd0() {
   return (neuron0x1049ae3e0()*0.233388);
}

double mlp::synapse0x1049b2d00() {
   return (neuron0x1049aeb00()*0.264755);
}

double mlp::synapse0x1049b2d30() {
   return (neuron0x1049af330()*-0.00250475);
}

double mlp::synapse0x1049b2d60() {
   return (neuron0x1049afa50()*-0.726281);
}

double mlp::synapse0x1049b2e90() {
   return (neuron0x1049b1140()*-1.05306);
}

double mlp::synapse0x1049b2ec0() {
   return (neuron0x1049b1430()*-0.236909);
}

double mlp::synapse0x1049b2ef0() {
   return (neuron0x1049b1b50()*0.0612047);
}

