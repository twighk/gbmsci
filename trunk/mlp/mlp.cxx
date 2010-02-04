#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18) {
   input0 = (in0 - -0.687229)/0.77409;
   input1 = (in1 - 0.00773307)/0.99997;
   input2 = (in2 - 1.12943)/2.89596;
   input3 = (in3 - 38.4378)/20.8636;
   input4 = (in4 - 0.000348438)/0.966168;
   input5 = (in5 - 0.270243)/1.80902;
   input6 = (in6 - 1.33411)/1.05176;
   input7 = (in7 - 34.5092)/39.1262;
   input8 = (in8 - 0.00341716)/1.81047;
   input9 = (in9 - 2.58133)/0.658438;
   input10 = (in10 - 2.82519)/0.619415;
   input11 = (in11 - 0.968239)/5.14739;
   input12 = (in12 - 37.5784)/317.151;
   input13 = (in13 - 0.0122313)/1.81745;
   input14 = (in14 - 0.00332142)/1.03513;
   input15 = (in15 - 61.825)/124.405;
   input16 = (in16 - 0.00086832)/1.10506;
   input17 = (in17 - -0.00599084)/1.82153;
   input18 = (in18 - 99.0814)/60.7734;
   switch(index) {
     case 0:
         return neuron0x1049c26a0();
     case 1:
         return neuron0x1049c2c60();
     case 2:
         return neuron0x1049c3350();
     case 3:
         return neuron0x1049c3a40();
     case 4:
         return neuron0x1049c4130();
     case 5:
         return neuron0x1049c47f0();
     case 6:
         return neuron0x1049c4ee0();
     case 7:
         return neuron0x1049c55d0();
     case 8:
         return neuron0x1049c5cc0();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - -0.687229)/0.77409;
   input1 = (input[1] - 0.00773307)/0.99997;
   input2 = (input[2] - 1.12943)/2.89596;
   input3 = (input[3] - 38.4378)/20.8636;
   input4 = (input[4] - 0.000348438)/0.966168;
   input5 = (input[5] - 0.270243)/1.80902;
   input6 = (input[6] - 1.33411)/1.05176;
   input7 = (input[7] - 34.5092)/39.1262;
   input8 = (input[8] - 0.00341716)/1.81047;
   input9 = (input[9] - 2.58133)/0.658438;
   input10 = (input[10] - 2.82519)/0.619415;
   input11 = (input[11] - 0.968239)/5.14739;
   input12 = (input[12] - 37.5784)/317.151;
   input13 = (input[13] - 0.0122313)/1.81745;
   input14 = (input[14] - 0.00332142)/1.03513;
   input15 = (input[15] - 61.825)/124.405;
   input16 = (input[16] - 0.00086832)/1.10506;
   input17 = (input[17] - -0.00599084)/1.82153;
   input18 = (input[18] - 99.0814)/60.7734;
   switch(index) {
     case 0:
         return neuron0x1049c26a0();
     case 1:
         return neuron0x1049c2c60();
     case 2:
         return neuron0x1049c3350();
     case 3:
         return neuron0x1049c3a40();
     case 4:
         return neuron0x1049c4130();
     case 5:
         return neuron0x1049c47f0();
     case 6:
         return neuron0x1049c4ee0();
     case 7:
         return neuron0x1049c55d0();
     case 8:
         return neuron0x1049c5cc0();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049b6050() {
   return input0;
}

double mlp::neuron0x1049b61b0() {
   return input1;
}

double mlp::neuron0x1049b6490() {
   return input2;
}

double mlp::neuron0x1049b6770() {
   return input3;
}

double mlp::neuron0x1049b6a50() {
   return input4;
}

double mlp::neuron0x1049b6d30() {
   return input5;
}

double mlp::neuron0x1049b7010() {
   return input6;
}

double mlp::neuron0x1049b72f0() {
   return input7;
}

double mlp::neuron0x1049b7600() {
   return input8;
}

double mlp::neuron0x1049b7910() {
   return input9;
}

double mlp::neuron0x1049b7c20() {
   return input10;
}

double mlp::neuron0x1049b7f30() {
   return input11;
}

double mlp::neuron0x1049b8240() {
   return input12;
}

double mlp::neuron0x1049b8520() {
   return input13;
}

double mlp::neuron0x1049b8800() {
   return input14;
}

double mlp::neuron0x1049b8b10() {
   return input15;
}

double mlp::neuron0x1049b8df0() {
   return input16;
}

double mlp::neuron0x1049b92d0() {
   return input17;
}

double mlp::neuron0x1049b94b0() {
   return input18;
}

double mlp::input0x1049a4ef0() {
   double input = 0.545392;
   input += synapse0x1049a5050();
   input += synapse0x1049b5ff0();
   input += synapse0x1049b6020();
   input += synapse0x1049b5090();
   input += synapse0x1049b50c0();
   input += synapse0x1049b5ef0();
   input += synapse0x1049b5f20();
   input += synapse0x1049a4cd0();
   input += synapse0x1049a4d00();
   input += synapse0x1049a4d30();
   input += synapse0x1049a4d60();
   input += synapse0x1049a4d90();
   input += synapse0x1049a4dc0();
   input += synapse0x1049b97c0();
   input += synapse0x1049b97f0();
   input += synapse0x1049b9820();
   input += synapse0x1049b9950();
   input += synapse0x1049a50b0();
   input += synapse0x1049a50e0();
   return input;
}

double mlp::neuron0x1049a4ef0() {
   double input = input0x1049a4ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b9a80() {
   double input = -0.481761;
   input += synapse0x1049b9d10();
   input += synapse0x1049b9d40();
   input += synapse0x1049b9d70();
   input += synapse0x1049b9da0();
   input += synapse0x1049b9dd0();
   input += synapse0x1049b9e00();
   input += synapse0x1049b9e30();
   input += synapse0x1049b9e60();
   input += synapse0x1049b9e90();
   input += synapse0x1049b9ec0();
   input += synapse0x1049b9ef0();
   input += synapse0x1049b9f20();
   input += synapse0x1049b9f50();
   input += synapse0x1049b9f80();
   input += synapse0x1049b9980();
   input += synapse0x1049b99b0();
   input += synapse0x1049b99e0();
   input += synapse0x1049b9a10();
   input += synapse0x1049b9a40();
   return input;
}

double mlp::neuron0x1049b9a80() {
   double input = input0x1049b9a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ba2b0() {
   double input = -0.157221;
   input += synapse0x1049ba540();
   input += synapse0x1049ba570();
   input += synapse0x1049ba5a0();
   input += synapse0x1049ba5d0();
   input += synapse0x1049ba600();
   input += synapse0x1049ba630();
   input += synapse0x1049ba660();
   input += synapse0x1049ba690();
   input += synapse0x1049ba6c0();
   input += synapse0x1049ba6f0();
   input += synapse0x1049ba720();
   input += synapse0x1049ba750();
   input += synapse0x1049ba780();
   input += synapse0x1049ba7b0();
   input += synapse0x1049ba7e0();
   input += synapse0x1049ba810();
   input += synapse0x1049ba940();
   input += synapse0x1049ba970();
   input += synapse0x1049ba9a0();
   return input;
}

double mlp::neuron0x1049ba2b0() {
   double input = input0x1049ba2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ba9d0() {
   double input = -0.142342;
   input += synapse0x1049bac60();
   input += synapse0x1049bac90();
   input += synapse0x1049bacc0();
   input += synapse0x1049bacf0();
   input += synapse0x1049bad20();
   input += synapse0x1049bad50();
   input += synapse0x1049bad80();
   input += synapse0x1049badb0();
   input += synapse0x1049b9fb0();
   input += synapse0x1049b9fe0();
   input += synapse0x1049ba010();
   input += synapse0x1049ba040();
   input += synapse0x1049ba070();
   input += synapse0x1049ba0a0();
   input += synapse0x1049ba0d0();
   input += synapse0x1049ba100();
   input += synapse0x1049ba130();
   input += synapse0x1049ba160();
   input += synapse0x1049baee0();
   return input;
}

double mlp::neuron0x1049ba9d0() {
   double input = input0x1049ba9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049baf10() {
   double input = 0.369985;
   input += synapse0x1049bb1a0();
   input += synapse0x1049bb1d0();
   input += synapse0x1049bb200();
   input += synapse0x1049bb230();
   input += synapse0x1049bb260();
   input += synapse0x1049bb290();
   input += synapse0x1049bb2c0();
   input += synapse0x1049bb2f0();
   input += synapse0x1049bb320();
   input += synapse0x1049bb350();
   input += synapse0x1049bb380();
   input += synapse0x1049bb3b0();
   input += synapse0x1049bb3e0();
   input += synapse0x1049bb410();
   input += synapse0x1049bb440();
   input += synapse0x1049bb470();
   input += synapse0x1049bb5a0();
   input += synapse0x1049bb5d0();
   input += synapse0x1049bb600();
   return input;
}

double mlp::neuron0x1049baf10() {
   double input = input0x1049baf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bb630() {
   double input = -0.325681;
   input += synapse0x1049bb8c0();
   input += synapse0x1049bb8f0();
   input += synapse0x1049bb920();
   input += synapse0x1049bb950();
   input += synapse0x1049bb980();
   input += synapse0x1049bb9b0();
   input += synapse0x1049bb9e0();
   input += synapse0x1049bba10();
   input += synapse0x1049bba40();
   input += synapse0x1049bba70();
   input += synapse0x1049bbaa0();
   input += synapse0x1049bbad0();
   input += synapse0x1049bbb00();
   input += synapse0x1049bbb30();
   input += synapse0x1049bbb60();
   input += synapse0x1049bbb90();
   input += synapse0x1049bbcc0();
   input += synapse0x1049bbcf0();
   input += synapse0x1049bbd20();
   return input;
}

double mlp::neuron0x1049bb630() {
   double input = input0x1049bb630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bbd50() {
   double input = 0.18866;
   input += synapse0x1049bbfe0();
   input += synapse0x1049bc010();
   input += synapse0x1049bc040();
   input += synapse0x1049bc070();
   input += synapse0x1049bc0a0();
   input += synapse0x1049bc0d0();
   input += synapse0x1049bc100();
   input += synapse0x1049bc130();
   input += synapse0x1049bc160();
   input += synapse0x1049bc190();
   input += synapse0x1049bc1c0();
   input += synapse0x1049bc1f0();
   input += synapse0x1049bc220();
   input += synapse0x1049bc250();
   input += synapse0x1049bc280();
   input += synapse0x1049bc2b0();
   input += synapse0x1049bc3e0();
   input += synapse0x1049bc410();
   input += synapse0x1049bc440();
   return input;
}

double mlp::neuron0x1049bbd50() {
   double input = input0x1049bbd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bc470() {
   double input = -0.238051;
   input += synapse0x1049bc700();
   input += synapse0x1049bc730();
   input += synapse0x1049bc760();
   input += synapse0x1049bc790();
   input += synapse0x1049bc7c0();
   input += synapse0x1049bc7f0();
   input += synapse0x1049bc820();
   input += synapse0x1049bc850();
   input += synapse0x1049bc880();
   input += synapse0x1049bc8b0();
   input += synapse0x1049bc8e0();
   input += synapse0x1049bc910();
   input += synapse0x1049bc940();
   input += synapse0x1049bc970();
   input += synapse0x1049bc9a0();
   input += synapse0x1049bc9d0();
   input += synapse0x1049bcb00();
   input += synapse0x1049bcb30();
   input += synapse0x1049bcb60();
   return input;
}

double mlp::neuron0x1049bc470() {
   double input = input0x1049bc470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bcb90() {
   double input = -0.159694;
   input += synapse0x1049bce20();
   input += synapse0x1049bce50();
   input += synapse0x1049bce80();
   input += synapse0x1049bceb0();
   input += synapse0x1049bcee0();
   input += synapse0x1049bcf10();
   input += synapse0x1049bcf40();
   input += synapse0x1049bcf70();
   input += synapse0x1049bcfa0();
   input += synapse0x1049bcfd0();
   input += synapse0x1049bd000();
   input += synapse0x1049bd030();
   input += synapse0x1049bd060();
   input += synapse0x1049bd090();
   input += synapse0x1049bd0c0();
   input += synapse0x1049bd0f0();
   input += synapse0x1049bd220();
   input += synapse0x1049bd250();
   input += synapse0x1049bd280();
   return input;
}

double mlp::neuron0x1049bcb90() {
   double input = input0x1049bcb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bd2b0() {
   double input = -0.353508;
   input += synapse0x1049bd540();
   input += synapse0x1049bd570();
   input += synapse0x1049bd5a0();
   input += synapse0x1049bd5d0();
   input += synapse0x1049bd600();
   input += synapse0x1049bd630();
   input += synapse0x1049bd660();
   input += synapse0x1049bd690();
   input += synapse0x1049bd6c0();
   input += synapse0x1049bd6f0();
   input += synapse0x1049bd720();
   input += synapse0x1049bd750();
   input += synapse0x1049bd780();
   input += synapse0x1049bd7b0();
   input += synapse0x1049bd7e0();
   input += synapse0x1049bd810();
   input += synapse0x1049bd940();
   input += synapse0x1049bd970();
   input += synapse0x1049bd9a0();
   return input;
}

double mlp::neuron0x1049bd2b0() {
   double input = input0x1049bd2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bd9d0() {
   double input = 0.365565;
   input += synapse0x1049bdc60();
   input += synapse0x1049bdc90();
   input += synapse0x1049bdcc0();
   input += synapse0x1049bdcf0();
   input += synapse0x1049bdd20();
   input += synapse0x1049bdd50();
   input += synapse0x1049bdd80();
   input += synapse0x1049bddb0();
   input += synapse0x1049bdde0();
   input += synapse0x1049bde10();
   input += synapse0x1049bde40();
   input += synapse0x1049bde70();
   input += synapse0x1049bdea0();
   input += synapse0x1049bded0();
   input += synapse0x1049bdf00();
   input += synapse0x1049bdf30();
   input += synapse0x1049be060();
   input += synapse0x1049be090();
   input += synapse0x1049be0c0();
   return input;
}

double mlp::neuron0x1049bd9d0() {
   double input = input0x1049bd9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049be0f0() {
   double input = 0.2009;
   input += synapse0x1049be380();
   input += synapse0x1049be3b0();
   input += synapse0x1049be3e0();
   input += synapse0x1049be410();
   input += synapse0x1049be440();
   input += synapse0x1049be470();
   input += synapse0x1049be4a0();
   input += synapse0x1049be4d0();
   input += synapse0x1049be500();
   input += synapse0x1049be530();
   input += synapse0x1049be560();
   input += synapse0x1049be590();
   input += synapse0x1049be5c0();
   input += synapse0x1049be5f0();
   input += synapse0x1049be620();
   input += synapse0x1049be650();
   input += synapse0x1049be780();
   input += synapse0x1049be7b0();
   input += synapse0x1049be7e0();
   return input;
}

double mlp::neuron0x1049be0f0() {
   double input = input0x1049be0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049be810() {
   double input = 0.396747;
   input += synapse0x1049beaa0();
   input += synapse0x1049bead0();
   input += synapse0x1049beb00();
   input += synapse0x1049beb30();
   input += synapse0x1049beb60();
   input += synapse0x1049beb90();
   input += synapse0x1049bebc0();
   input += synapse0x1049bebf0();
   input += synapse0x1049bec20();
   input += synapse0x1049bec50();
   input += synapse0x1049bec80();
   input += synapse0x1049becb0();
   input += synapse0x1049bece0();
   input += synapse0x1049bed10();
   input += synapse0x1049bed40();
   input += synapse0x1049bed70();
   input += synapse0x1049beea0();
   input += synapse0x1049beed0();
   input += synapse0x1049bef00();
   return input;
}

double mlp::neuron0x1049be810() {
   double input = input0x1049be810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bef30() {
   double input = 0.0353594;
   input += synapse0x1049b91d0();
   input += synapse0x1049b9200();
   input += synapse0x1049b9230();
   input += synapse0x1049b9260();
   input += synapse0x1049b9290();
   input += synapse0x1049bf3c0();
   input += synapse0x1049bf3f0();
   input += synapse0x1049bf420();
   input += synapse0x1049bf450();
   input += synapse0x1049bf480();
   input += synapse0x1049bf4b0();
   input += synapse0x1049bf4e0();
   input += synapse0x1049bf510();
   input += synapse0x1049bf540();
   input += synapse0x1049bf570();
   input += synapse0x1049bf5a0();
   input += synapse0x1049bf6d0();
   input += synapse0x1049bf700();
   input += synapse0x1049bf730();
   return input;
}

double mlp::neuron0x1049bef30() {
   double input = input0x1049bef30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bf760() {
   double input = 0.368135;
   input += synapse0x1049bf9f0();
   input += synapse0x1049bfa20();
   input += synapse0x1049bfa50();
   input += synapse0x1049bfa80();
   input += synapse0x1049bfab0();
   input += synapse0x1049bfae0();
   input += synapse0x1049bfb10();
   input += synapse0x1049bfb40();
   input += synapse0x1049bfb70();
   input += synapse0x1049bfba0();
   input += synapse0x1049bfbd0();
   input += synapse0x1049bfc00();
   input += synapse0x1049bfc30();
   input += synapse0x1049bfc60();
   input += synapse0x1049bfc90();
   input += synapse0x1049bfcc0();
   input += synapse0x1049bfdf0();
   input += synapse0x1049bfe20();
   input += synapse0x1049bfe50();
   return input;
}

double mlp::neuron0x1049bf760() {
   double input = input0x1049bf760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bfe80() {
   double input = -0.337943;
   input += synapse0x1049c0110();
   input += synapse0x1049c0240();
   input += synapse0x1049b4fe0();
   input += synapse0x1049b5010();
   input += synapse0x1049b6670();
   input += synapse0x1049b66a0();
   input += synapse0x1049b6c30();
   input += synapse0x1049b6c60();
   input += synapse0x1049b71f0();
   input += synapse0x1049b7220();
   input += synapse0x1049b7810();
   input += synapse0x1049b7840();
   input += synapse0x1049b7e30();
   input += synapse0x1049b7e60();
   input += synapse0x1049b8420();
   input += synapse0x1049b8450();
   input += synapse0x1049b8cf0();
   input += synapse0x1049b8d20();
   input += synapse0x1049b8fd0();
   return input;
}

double mlp::neuron0x1049bfe80() {
   double input = input0x1049bfe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c1570() {
   double input = 0.135924;
   input += synapse0x1049b8a10();
   input += synapse0x1049b8a40();
   input += synapse0x1049b8700();
   input += synapse0x1049b8730();
   input += synapse0x1049b8140();
   input += synapse0x1049b8170();
   input += synapse0x1049b7b20();
   input += synapse0x1049b7b50();
   input += synapse0x1049b7500();
   input += synapse0x1049b7530();
   input += synapse0x1049b6f10();
   input += synapse0x1049b6f40();
   input += synapse0x1049b6950();
   input += synapse0x1049b6980();
   input += synapse0x1049b6390();
   input += synapse0x1049b63c0();
   input += synapse0x1049c17d0();
   input += synapse0x1049c1800();
   input += synapse0x1049c1830();
   return input;
}

double mlp::neuron0x1049c1570() {
   double input = input0x1049c1570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c1860() {
   double input = 0.4463;
   input += synapse0x1049c1af0();
   input += synapse0x1049c1b20();
   input += synapse0x1049c1b50();
   input += synapse0x1049c1b80();
   input += synapse0x1049c1bb0();
   input += synapse0x1049c1be0();
   input += synapse0x1049c1c10();
   input += synapse0x1049c1c40();
   input += synapse0x1049c1c70();
   input += synapse0x1049c1ca0();
   input += synapse0x1049c1cd0();
   input += synapse0x1049c1d00();
   input += synapse0x1049c1d30();
   input += synapse0x1049c1d60();
   input += synapse0x1049c1d90();
   input += synapse0x1049c1dc0();
   input += synapse0x1049c1ef0();
   input += synapse0x1049c1f20();
   input += synapse0x1049c1f50();
   return input;
}

double mlp::neuron0x1049c1860() {
   double input = input0x1049c1860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c1f80() {
   double input = 0.0446785;
   input += synapse0x1049c2210();
   input += synapse0x1049c2240();
   input += synapse0x1049c2270();
   input += synapse0x1049c22a0();
   input += synapse0x1049c22d0();
   input += synapse0x1049c2300();
   input += synapse0x1049c2330();
   input += synapse0x1049c2360();
   input += synapse0x1049c2390();
   input += synapse0x1049c23c0();
   input += synapse0x1049c23f0();
   input += synapse0x1049c2420();
   input += synapse0x1049c2450();
   input += synapse0x1049c2480();
   input += synapse0x1049c24b0();
   input += synapse0x1049c24e0();
   input += synapse0x1049c2610();
   input += synapse0x1049c2640();
   input += synapse0x1049c2670();
   return input;
}

double mlp::neuron0x1049c1f80() {
   double input = input0x1049c1f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c26a0() {
   double input = 0.154891;
   input += synapse0x1049a44c0();
   input += synapse0x1049c2800();
   input += synapse0x1049c2830();
   input += synapse0x1049c2860();
   input += synapse0x1049c2890();
   input += synapse0x1049c28c0();
   input += synapse0x1049c28f0();
   input += synapse0x1049c2920();
   input += synapse0x1049c2950();
   input += synapse0x1049c2980();
   input += synapse0x1049c29b0();
   input += synapse0x1049c29e0();
   input += synapse0x1049c2a10();
   input += synapse0x1049c2a40();
   input += synapse0x1049c2a70();
   input += synapse0x1049c2aa0();
   input += synapse0x1049c2bd0();
   input += synapse0x1049c2c00();
   input += synapse0x1049c2c30();
   return input;
}

double mlp::neuron0x1049c26a0() {
   double input = input0x1049c26a0();
   return (input * 1)+0;
}

double mlp::input0x1049c2c60() {
   double input = 0.276146;
   input += synapse0x1049c2ec0();
   input += synapse0x1049c2ef0();
   input += synapse0x1049c2f20();
   input += synapse0x1049c2f50();
   input += synapse0x1049c2f80();
   input += synapse0x1049c2fb0();
   input += synapse0x1049c2fe0();
   input += synapse0x1049c3010();
   input += synapse0x1049c3040();
   input += synapse0x1049c3070();
   input += synapse0x1049c30a0();
   input += synapse0x1049c30d0();
   input += synapse0x1049c3100();
   input += synapse0x1049c3130();
   input += synapse0x1049c3160();
   input += synapse0x1049c3190();
   input += synapse0x1049c32c0();
   input += synapse0x1049c32f0();
   input += synapse0x1049c3320();
   return input;
}

double mlp::neuron0x1049c2c60() {
   double input = input0x1049c2c60();
   return (input * 1)+0;
}

double mlp::input0x1049c3350() {
   double input = -0.208263;
   input += synapse0x1049c35b0();
   input += synapse0x1049c35e0();
   input += synapse0x1049c3610();
   input += synapse0x1049c3640();
   input += synapse0x1049c3670();
   input += synapse0x1049c36a0();
   input += synapse0x1049c36d0();
   input += synapse0x1049c3700();
   input += synapse0x1049c3730();
   input += synapse0x1049c3760();
   input += synapse0x1049c3790();
   input += synapse0x1049c37c0();
   input += synapse0x1049c37f0();
   input += synapse0x1049c3820();
   input += synapse0x1049c3850();
   input += synapse0x1049c3880();
   input += synapse0x1049c39b0();
   input += synapse0x1049c39e0();
   input += synapse0x1049c3a10();
   return input;
}

double mlp::neuron0x1049c3350() {
   double input = input0x1049c3350();
   return (input * 1)+0;
}

double mlp::input0x1049c3a40() {
   double input = -0.0830425;
   input += synapse0x1049c3ca0();
   input += synapse0x1049c3cd0();
   input += synapse0x1049c3d00();
   input += synapse0x1049c3d30();
   input += synapse0x1049c3d60();
   input += synapse0x1049c3d90();
   input += synapse0x1049c3dc0();
   input += synapse0x1049c3df0();
   input += synapse0x1049c3e20();
   input += synapse0x1049c3e50();
   input += synapse0x1049c3e80();
   input += synapse0x1049c3eb0();
   input += synapse0x1049c3ee0();
   input += synapse0x1049c3f10();
   input += synapse0x1049c3f40();
   input += synapse0x1049c3f70();
   input += synapse0x1049c40a0();
   input += synapse0x1049c40d0();
   input += synapse0x1049c4100();
   return input;
}

double mlp::neuron0x1049c3a40() {
   double input = input0x1049c3a40();
   return (input * 1)+0;
}

double mlp::input0x1049c4130() {
   double input = -0.33831;
   input += synapse0x1049a4390();
   input += synapse0x1049c4390();
   input += synapse0x1049c43c0();
   input += synapse0x1049c43f0();
   input += synapse0x1049c4420();
   input += synapse0x1049c4450();
   input += synapse0x1049c4480();
   input += synapse0x1049c44b0();
   input += synapse0x1049c44e0();
   input += synapse0x1049c4510();
   input += synapse0x1049c4540();
   input += synapse0x1049c4570();
   input += synapse0x1049c45a0();
   input += synapse0x1049c45d0();
   input += synapse0x1049c4600();
   input += synapse0x1049c4630();
   input += synapse0x1049c4760();
   input += synapse0x1049c4790();
   input += synapse0x1049c47c0();
   return input;
}

double mlp::neuron0x1049c4130() {
   double input = input0x1049c4130();
   return (input * 1)+0;
}

double mlp::input0x1049c47f0() {
   double input = 0.208506;
   input += synapse0x1049c4a50();
   input += synapse0x1049c4a80();
   input += synapse0x1049c4ab0();
   input += synapse0x1049c4ae0();
   input += synapse0x1049c4b10();
   input += synapse0x1049c4b40();
   input += synapse0x1049c4b70();
   input += synapse0x1049c4ba0();
   input += synapse0x1049c4bd0();
   input += synapse0x1049c4c00();
   input += synapse0x1049c4c30();
   input += synapse0x1049c4c60();
   input += synapse0x1049c4c90();
   input += synapse0x1049c4cc0();
   input += synapse0x1049c4cf0();
   input += synapse0x1049c4d20();
   input += synapse0x1049c4e50();
   input += synapse0x1049c4e80();
   input += synapse0x1049c4eb0();
   return input;
}

double mlp::neuron0x1049c47f0() {
   double input = input0x1049c47f0();
   return (input * 1)+0;
}

double mlp::input0x1049c4ee0() {
   double input = -0.218947;
   input += synapse0x1049c5140();
   input += synapse0x1049c5170();
   input += synapse0x1049c51a0();
   input += synapse0x1049c51d0();
   input += synapse0x1049c5200();
   input += synapse0x1049c5230();
   input += synapse0x1049c5260();
   input += synapse0x1049c5290();
   input += synapse0x1049c52c0();
   input += synapse0x1049c52f0();
   input += synapse0x1049c5320();
   input += synapse0x1049c5350();
   input += synapse0x1049c5380();
   input += synapse0x1049c53b0();
   input += synapse0x1049c53e0();
   input += synapse0x1049c5410();
   input += synapse0x1049c5540();
   input += synapse0x1049c5570();
   input += synapse0x1049c55a0();
   return input;
}

double mlp::neuron0x1049c4ee0() {
   double input = input0x1049c4ee0();
   return (input * 1)+0;
}

double mlp::input0x1049c55d0() {
   double input = 0.227257;
   input += synapse0x1049c5830();
   input += synapse0x1049c5860();
   input += synapse0x1049c5890();
   input += synapse0x1049c58c0();
   input += synapse0x1049c58f0();
   input += synapse0x1049c5920();
   input += synapse0x1049c5950();
   input += synapse0x1049c5980();
   input += synapse0x1049c59b0();
   input += synapse0x1049c59e0();
   input += synapse0x1049c5a10();
   input += synapse0x1049c5a40();
   input += synapse0x1049c5a70();
   input += synapse0x1049c5aa0();
   input += synapse0x1049c5ad0();
   input += synapse0x1049c5b00();
   input += synapse0x1049c5c30();
   input += synapse0x1049c5c60();
   input += synapse0x1049c5c90();
   return input;
}

double mlp::neuron0x1049c55d0() {
   double input = input0x1049c55d0();
   return (input * 1)+0;
}

double mlp::input0x1049c5cc0() {
   double input = 0.140231;
   input += synapse0x1049c5f20();
   input += synapse0x1049c5f50();
   input += synapse0x1049c5f80();
   input += synapse0x1049c5fb0();
   input += synapse0x1049c5fe0();
   input += synapse0x1049c6010();
   input += synapse0x1049c6040();
   input += synapse0x1049c6070();
   input += synapse0x1049c60a0();
   input += synapse0x1049c60d0();
   input += synapse0x1049c6100();
   input += synapse0x1049c6130();
   input += synapse0x1049c6160();
   input += synapse0x1049c6190();
   input += synapse0x1049c61c0();
   input += synapse0x1049c61f0();
   input += synapse0x1049c6320();
   input += synapse0x1049c6350();
   input += synapse0x1049c6380();
   return input;
}

double mlp::neuron0x1049c5cc0() {
   double input = input0x1049c5cc0();
   return (input * 1)+0;
}

double mlp::synapse0x1049a5050() {
   return (neuron0x1049b6050()*-0.348481);
}

double mlp::synapse0x1049b5ff0() {
   return (neuron0x1049b61b0()*-0.296186);
}

double mlp::synapse0x1049b6020() {
   return (neuron0x1049b6490()*-0.205135);
}

double mlp::synapse0x1049b5090() {
   return (neuron0x1049b6770()*0.0795444);
}

double mlp::synapse0x1049b50c0() {
   return (neuron0x1049b6a50()*0.111758);
}

double mlp::synapse0x1049b5ef0() {
   return (neuron0x1049b6d30()*0.114442);
}

double mlp::synapse0x1049b5f20() {
   return (neuron0x1049b7010()*0.349228);
}

double mlp::synapse0x1049a4cd0() {
   return (neuron0x1049b72f0()*0.346724);
}

double mlp::synapse0x1049a4d00() {
   return (neuron0x1049b7600()*-0.32356);
}

double mlp::synapse0x1049a4d30() {
   return (neuron0x1049b7910()*0.235741);
}

double mlp::synapse0x1049a4d60() {
   return (neuron0x1049b7c20()*0.125779);
}

double mlp::synapse0x1049a4d90() {
   return (neuron0x1049b7f30()*-0.424694);
}

double mlp::synapse0x1049a4dc0() {
   return (neuron0x1049b8240()*-0.392331);
}

double mlp::synapse0x1049b97c0() {
   return (neuron0x1049b8520()*0.177362);
}

double mlp::synapse0x1049b97f0() {
   return (neuron0x1049b8800()*0.204919);
}

double mlp::synapse0x1049b9820() {
   return (neuron0x1049b8b10()*-0.42187);
}

double mlp::synapse0x1049b9950() {
   return (neuron0x1049b8df0()*-0.00576509);
}

double mlp::synapse0x1049a50b0() {
   return (neuron0x1049b92d0()*-0.170594);
}

double mlp::synapse0x1049a50e0() {
   return (neuron0x1049b94b0()*-0.304751);
}

double mlp::synapse0x1049b9d10() {
   return (neuron0x1049b6050()*-0.0683202);
}

double mlp::synapse0x1049b9d40() {
   return (neuron0x1049b61b0()*-0.101154);
}

double mlp::synapse0x1049b9d70() {
   return (neuron0x1049b6490()*0.207932);
}

double mlp::synapse0x1049b9da0() {
   return (neuron0x1049b6770()*-0.242295);
}

double mlp::synapse0x1049b9dd0() {
   return (neuron0x1049b6a50()*-0.0800279);
}

double mlp::synapse0x1049b9e00() {
   return (neuron0x1049b6d30()*-0.164268);
}

double mlp::synapse0x1049b9e30() {
   return (neuron0x1049b7010()*-0.0298816);
}

double mlp::synapse0x1049b9e60() {
   return (neuron0x1049b72f0()*0.117704);
}

double mlp::synapse0x1049b9e90() {
   return (neuron0x1049b7600()*-0.096442);
}

double mlp::synapse0x1049b9ec0() {
   return (neuron0x1049b7910()*0.0616857);
}

double mlp::synapse0x1049b9ef0() {
   return (neuron0x1049b7c20()*-0.538638);
}

double mlp::synapse0x1049b9f20() {
   return (neuron0x1049b7f30()*-0.383958);
}

double mlp::synapse0x1049b9f50() {
   return (neuron0x1049b8240()*0.382757);
}

double mlp::synapse0x1049b9f80() {
   return (neuron0x1049b8520()*0.0773773);
}

double mlp::synapse0x1049b9980() {
   return (neuron0x1049b8800()*-0.0521464);
}

double mlp::synapse0x1049b99b0() {
   return (neuron0x1049b8b10()*0.356466);
}

double mlp::synapse0x1049b99e0() {
   return (neuron0x1049b8df0()*0.309146);
}

double mlp::synapse0x1049b9a10() {
   return (neuron0x1049b92d0()*-0.143683);
}

double mlp::synapse0x1049b9a40() {
   return (neuron0x1049b94b0()*0.54731);
}

double mlp::synapse0x1049ba540() {
   return (neuron0x1049b6050()*0.103636);
}

double mlp::synapse0x1049ba570() {
   return (neuron0x1049b61b0()*0.0116101);
}

double mlp::synapse0x1049ba5a0() {
   return (neuron0x1049b6490()*-0.44751);
}

double mlp::synapse0x1049ba5d0() {
   return (neuron0x1049b6770()*0.304241);
}

double mlp::synapse0x1049ba600() {
   return (neuron0x1049b6a50()*-0.145597);
}

double mlp::synapse0x1049ba630() {
   return (neuron0x1049b6d30()*-0.26727);
}

double mlp::synapse0x1049ba660() {
   return (neuron0x1049b7010()*0.311393);
}

double mlp::synapse0x1049ba690() {
   return (neuron0x1049b72f0()*-0.11379);
}

double mlp::synapse0x1049ba6c0() {
   return (neuron0x1049b7600()*-0.0871547);
}

double mlp::synapse0x1049ba6f0() {
   return (neuron0x1049b7910()*-0.234227);
}

double mlp::synapse0x1049ba720() {
   return (neuron0x1049b7c20()*0.153505);
}

double mlp::synapse0x1049ba750() {
   return (neuron0x1049b7f30()*0.362245);
}

double mlp::synapse0x1049ba780() {
   return (neuron0x1049b8240()*-0.11713);
}

double mlp::synapse0x1049ba7b0() {
   return (neuron0x1049b8520()*0.0789033);
}

double mlp::synapse0x1049ba7e0() {
   return (neuron0x1049b8800()*0.0908511);
}

double mlp::synapse0x1049ba810() {
   return (neuron0x1049b8b10()*0.189761);
}

double mlp::synapse0x1049ba940() {
   return (neuron0x1049b8df0()*-0.489869);
}

double mlp::synapse0x1049ba970() {
   return (neuron0x1049b92d0()*-0.213896);
}

double mlp::synapse0x1049ba9a0() {
   return (neuron0x1049b94b0()*-0.126914);
}

double mlp::synapse0x1049bac60() {
   return (neuron0x1049b6050()*-0.0378536);
}

double mlp::synapse0x1049bac90() {
   return (neuron0x1049b61b0()*-0.149417);
}

double mlp::synapse0x1049bacc0() {
   return (neuron0x1049b6490()*0.35311);
}

double mlp::synapse0x1049bacf0() {
   return (neuron0x1049b6770()*-0.0177539);
}

double mlp::synapse0x1049bad20() {
   return (neuron0x1049b6a50()*0.125303);
}

double mlp::synapse0x1049bad50() {
   return (neuron0x1049b6d30()*0.281507);
}

double mlp::synapse0x1049bad80() {
   return (neuron0x1049b7010()*-0.05815);
}

double mlp::synapse0x1049badb0() {
   return (neuron0x1049b72f0()*0.228015);
}

double mlp::synapse0x1049b9fb0() {
   return (neuron0x1049b7600()*0.232445);
}

double mlp::synapse0x1049b9fe0() {
   return (neuron0x1049b7910()*0.538422);
}

double mlp::synapse0x1049ba010() {
   return (neuron0x1049b7c20()*0.673718);
}

double mlp::synapse0x1049ba040() {
   return (neuron0x1049b7f30()*0.180871);
}

double mlp::synapse0x1049ba070() {
   return (neuron0x1049b8240()*0.263345);
}

double mlp::synapse0x1049ba0a0() {
   return (neuron0x1049b8520()*0.333431);
}

double mlp::synapse0x1049ba0d0() {
   return (neuron0x1049b8800()*-0.0544513);
}

double mlp::synapse0x1049ba100() {
   return (neuron0x1049b8b10()*-0.455401);
}

double mlp::synapse0x1049ba130() {
   return (neuron0x1049b8df0()*-0.103642);
}

double mlp::synapse0x1049ba160() {
   return (neuron0x1049b92d0()*0.150454);
}

double mlp::synapse0x1049baee0() {
   return (neuron0x1049b94b0()*-0.121469);
}

double mlp::synapse0x1049bb1a0() {
   return (neuron0x1049b6050()*0.398337);
}

double mlp::synapse0x1049bb1d0() {
   return (neuron0x1049b61b0()*-0.314659);
}

double mlp::synapse0x1049bb200() {
   return (neuron0x1049b6490()*-0.399299);
}

double mlp::synapse0x1049bb230() {
   return (neuron0x1049b6770()*0.101863);
}

double mlp::synapse0x1049bb260() {
   return (neuron0x1049b6a50()*0.121388);
}

double mlp::synapse0x1049bb290() {
   return (neuron0x1049b6d30()*-0.00329691);
}

double mlp::synapse0x1049bb2c0() {
   return (neuron0x1049b7010()*-0.468229);
}

double mlp::synapse0x1049bb2f0() {
   return (neuron0x1049b72f0()*-0.116202);
}

double mlp::synapse0x1049bb320() {
   return (neuron0x1049b7600()*2.66151e-05);
}

double mlp::synapse0x1049bb350() {
   return (neuron0x1049b7910()*0.0900509);
}

double mlp::synapse0x1049bb380() {
   return (neuron0x1049b7c20()*-0.205258);
}

double mlp::synapse0x1049bb3b0() {
   return (neuron0x1049b7f30()*-0.185613);
}

double mlp::synapse0x1049bb3e0() {
   return (neuron0x1049b8240()*0.454943);
}

double mlp::synapse0x1049bb410() {
   return (neuron0x1049b8520()*0.355727);
}

double mlp::synapse0x1049bb440() {
   return (neuron0x1049b8800()*-0.221126);
}

double mlp::synapse0x1049bb470() {
   return (neuron0x1049b8b10()*0.0758647);
}

double mlp::synapse0x1049bb5a0() {
   return (neuron0x1049b8df0()*0.299586);
}

double mlp::synapse0x1049bb5d0() {
   return (neuron0x1049b92d0()*-0.066486);
}

double mlp::synapse0x1049bb600() {
   return (neuron0x1049b94b0()*-0.0239279);
}

double mlp::synapse0x1049bb8c0() {
   return (neuron0x1049b6050()*0.112899);
}

double mlp::synapse0x1049bb8f0() {
   return (neuron0x1049b61b0()*0.0191053);
}

double mlp::synapse0x1049bb920() {
   return (neuron0x1049b6490()*0.357287);
}

double mlp::synapse0x1049bb950() {
   return (neuron0x1049b6770()*0.0316078);
}

double mlp::synapse0x1049bb980() {
   return (neuron0x1049b6a50()*0.338563);
}

double mlp::synapse0x1049bb9b0() {
   return (neuron0x1049b6d30()*0.128476);
}

double mlp::synapse0x1049bb9e0() {
   return (neuron0x1049b7010()*-0.0705143);
}

double mlp::synapse0x1049bba10() {
   return (neuron0x1049b72f0()*0.0933639);
}

double mlp::synapse0x1049bba40() {
   return (neuron0x1049b7600()*-0.161512);
}

double mlp::synapse0x1049bba70() {
   return (neuron0x1049b7910()*-0.312046);
}

double mlp::synapse0x1049bbaa0() {
   return (neuron0x1049b7c20()*0.41764);
}

double mlp::synapse0x1049bbad0() {
   return (neuron0x1049b7f30()*0.151042);
}

double mlp::synapse0x1049bbb00() {
   return (neuron0x1049b8240()*0.0156679);
}

double mlp::synapse0x1049bbb30() {
   return (neuron0x1049b8520()*0.100898);
}

double mlp::synapse0x1049bbb60() {
   return (neuron0x1049b8800()*-0.338525);
}

double mlp::synapse0x1049bbb90() {
   return (neuron0x1049b8b10()*-0.294161);
}

double mlp::synapse0x1049bbcc0() {
   return (neuron0x1049b8df0()*-0.0440326);
}

double mlp::synapse0x1049bbcf0() {
   return (neuron0x1049b92d0()*0.13071);
}

double mlp::synapse0x1049bbd20() {
   return (neuron0x1049b94b0()*0.0805);
}

double mlp::synapse0x1049bbfe0() {
   return (neuron0x1049b6050()*0.523147);
}

double mlp::synapse0x1049bc010() {
   return (neuron0x1049b61b0()*-0.0400634);
}

double mlp::synapse0x1049bc040() {
   return (neuron0x1049b6490()*0.359813);
}

double mlp::synapse0x1049bc070() {
   return (neuron0x1049b6770()*0.329005);
}

double mlp::synapse0x1049bc0a0() {
   return (neuron0x1049b6a50()*-0.0634362);
}

double mlp::synapse0x1049bc0d0() {
   return (neuron0x1049b6d30()*0.328155);
}

double mlp::synapse0x1049bc100() {
   return (neuron0x1049b7010()*0.403812);
}

double mlp::synapse0x1049bc130() {
   return (neuron0x1049b72f0()*0.143283);
}

double mlp::synapse0x1049bc160() {
   return (neuron0x1049b7600()*-0.199645);
}

double mlp::synapse0x1049bc190() {
   return (neuron0x1049b7910()*0.240562);
}

double mlp::synapse0x1049bc1c0() {
   return (neuron0x1049b7c20()*0.493222);
}

double mlp::synapse0x1049bc1f0() {
   return (neuron0x1049b7f30()*-0.0424016);
}

double mlp::synapse0x1049bc220() {
   return (neuron0x1049b8240()*0.445719);
}

double mlp::synapse0x1049bc250() {
   return (neuron0x1049b8520()*-0.239291);
}

double mlp::synapse0x1049bc280() {
   return (neuron0x1049b8800()*0.0210207);
}

double mlp::synapse0x1049bc2b0() {
   return (neuron0x1049b8b10()*0.366026);
}

double mlp::synapse0x1049bc3e0() {
   return (neuron0x1049b8df0()*0.00286024);
}

double mlp::synapse0x1049bc410() {
   return (neuron0x1049b92d0()*-0.310749);
}

double mlp::synapse0x1049bc440() {
   return (neuron0x1049b94b0()*-0.420143);
}

double mlp::synapse0x1049bc700() {
   return (neuron0x1049b6050()*0.207698);
}

double mlp::synapse0x1049bc730() {
   return (neuron0x1049b61b0()*0.180948);
}

double mlp::synapse0x1049bc760() {
   return (neuron0x1049b6490()*0.332331);
}

double mlp::synapse0x1049bc790() {
   return (neuron0x1049b6770()*0.00988345);
}

double mlp::synapse0x1049bc7c0() {
   return (neuron0x1049b6a50()*-0.36358);
}

double mlp::synapse0x1049bc7f0() {
   return (neuron0x1049b6d30()*-0.258396);
}

double mlp::synapse0x1049bc820() {
   return (neuron0x1049b7010()*-0.466798);
}

double mlp::synapse0x1049bc850() {
   return (neuron0x1049b72f0()*-0.505061);
}

double mlp::synapse0x1049bc880() {
   return (neuron0x1049b7600()*0.425043);
}

double mlp::synapse0x1049bc8b0() {
   return (neuron0x1049b7910()*-0.142896);
}

double mlp::synapse0x1049bc8e0() {
   return (neuron0x1049b7c20()*0.130237);
}

double mlp::synapse0x1049bc910() {
   return (neuron0x1049b7f30()*-0.107912);
}

double mlp::synapse0x1049bc940() {
   return (neuron0x1049b8240()*0.345766);
}

double mlp::synapse0x1049bc970() {
   return (neuron0x1049b8520()*-0.0163209);
}

double mlp::synapse0x1049bc9a0() {
   return (neuron0x1049b8800()*-0.207866);
}

double mlp::synapse0x1049bc9d0() {
   return (neuron0x1049b8b10()*0.10799);
}

double mlp::synapse0x1049bcb00() {
   return (neuron0x1049b8df0()*0.0626463);
}

double mlp::synapse0x1049bcb30() {
   return (neuron0x1049b92d0()*-0.151785);
}

double mlp::synapse0x1049bcb60() {
   return (neuron0x1049b94b0()*0.142285);
}

double mlp::synapse0x1049bce20() {
   return (neuron0x1049b6050()*-0.0661808);
}

double mlp::synapse0x1049bce50() {
   return (neuron0x1049b61b0()*-0.142677);
}

double mlp::synapse0x1049bce80() {
   return (neuron0x1049b6490()*-0.0434709);
}

double mlp::synapse0x1049bceb0() {
   return (neuron0x1049b6770()*0.0674023);
}

double mlp::synapse0x1049bcee0() {
   return (neuron0x1049b6a50()*-0.122466);
}

double mlp::synapse0x1049bcf10() {
   return (neuron0x1049b6d30()*-0.104883);
}

double mlp::synapse0x1049bcf40() {
   return (neuron0x1049b7010()*-0.166689);
}

double mlp::synapse0x1049bcf70() {
   return (neuron0x1049b72f0()*0.88146);
}

double mlp::synapse0x1049bcfa0() {
   return (neuron0x1049b7600()*-0.267931);
}

double mlp::synapse0x1049bcfd0() {
   return (neuron0x1049b7910()*-0.160242);
}

double mlp::synapse0x1049bd000() {
   return (neuron0x1049b7c20()*0.00814919);
}

double mlp::synapse0x1049bd030() {
   return (neuron0x1049b7f30()*0.271795);
}

double mlp::synapse0x1049bd060() {
   return (neuron0x1049b8240()*0.486102);
}

double mlp::synapse0x1049bd090() {
   return (neuron0x1049b8520()*-0.138574);
}

double mlp::synapse0x1049bd0c0() {
   return (neuron0x1049b8800()*-0.350743);
}

double mlp::synapse0x1049bd0f0() {
   return (neuron0x1049b8b10()*-0.0612995);
}

double mlp::synapse0x1049bd220() {
   return (neuron0x1049b8df0()*0.154145);
}

double mlp::synapse0x1049bd250() {
   return (neuron0x1049b92d0()*-0.163085);
}

double mlp::synapse0x1049bd280() {
   return (neuron0x1049b94b0()*0.224184);
}

double mlp::synapse0x1049bd540() {
   return (neuron0x1049b6050()*-0.441285);
}

double mlp::synapse0x1049bd570() {
   return (neuron0x1049b61b0()*0.00105286);
}

double mlp::synapse0x1049bd5a0() {
   return (neuron0x1049b6490()*-0.138472);
}

double mlp::synapse0x1049bd5d0() {
   return (neuron0x1049b6770()*-0.0198352);
}

double mlp::synapse0x1049bd600() {
   return (neuron0x1049b6a50()*-0.0865399);
}

double mlp::synapse0x1049bd630() {
   return (neuron0x1049b6d30()*-0.295732);
}

double mlp::synapse0x1049bd660() {
   return (neuron0x1049b7010()*0.106084);
}

double mlp::synapse0x1049bd690() {
   return (neuron0x1049b72f0()*-0.573821);
}

double mlp::synapse0x1049bd6c0() {
   return (neuron0x1049b7600()*0.272072);
}

double mlp::synapse0x1049bd6f0() {
   return (neuron0x1049b7910()*-0.00971743);
}

double mlp::synapse0x1049bd720() {
   return (neuron0x1049b7c20()*0.509884);
}

double mlp::synapse0x1049bd750() {
   return (neuron0x1049b7f30()*-0.159327);
}

double mlp::synapse0x1049bd780() {
   return (neuron0x1049b8240()*-0.315492);
}

double mlp::synapse0x1049bd7b0() {
   return (neuron0x1049b8520()*0.198871);
}

double mlp::synapse0x1049bd7e0() {
   return (neuron0x1049b8800()*0.288239);
}

double mlp::synapse0x1049bd810() {
   return (neuron0x1049b8b10()*-0.277106);
}

double mlp::synapse0x1049bd940() {
   return (neuron0x1049b8df0()*0.182927);
}

double mlp::synapse0x1049bd970() {
   return (neuron0x1049b92d0()*0.0913375);
}

double mlp::synapse0x1049bd9a0() {
   return (neuron0x1049b94b0()*-0.384554);
}

double mlp::synapse0x1049bdc60() {
   return (neuron0x1049b6050()*-0.036211);
}

double mlp::synapse0x1049bdc90() {
   return (neuron0x1049b61b0()*-0.00416405);
}

double mlp::synapse0x1049bdcc0() {
   return (neuron0x1049b6490()*0.121715);
}

double mlp::synapse0x1049bdcf0() {
   return (neuron0x1049b6770()*-0.199808);
}

double mlp::synapse0x1049bdd20() {
   return (neuron0x1049b6a50()*-0.0553987);
}

double mlp::synapse0x1049bdd50() {
   return (neuron0x1049b6d30()*-0.0816413);
}

double mlp::synapse0x1049bdd80() {
   return (neuron0x1049b7010()*0.0371821);
}

double mlp::synapse0x1049bddb0() {
   return (neuron0x1049b72f0()*0.368446);
}

double mlp::synapse0x1049bdde0() {
   return (neuron0x1049b7600()*-0.146298);
}

double mlp::synapse0x1049bde10() {
   return (neuron0x1049b7910()*0.236785);
}

double mlp::synapse0x1049bde40() {
   return (neuron0x1049b7c20()*-0.115666);
}

double mlp::synapse0x1049bde70() {
   return (neuron0x1049b7f30()*0.0507917);
}

double mlp::synapse0x1049bdea0() {
   return (neuron0x1049b8240()*0.521634);
}

double mlp::synapse0x1049bded0() {
   return (neuron0x1049b8520()*-0.17657);
}

double mlp::synapse0x1049bdf00() {
   return (neuron0x1049b8800()*0.00212486);
}

double mlp::synapse0x1049bdf30() {
   return (neuron0x1049b8b10()*0.434311);
}

double mlp::synapse0x1049be060() {
   return (neuron0x1049b8df0()*0.18423);
}

double mlp::synapse0x1049be090() {
   return (neuron0x1049b92d0()*-0.104552);
}

double mlp::synapse0x1049be0c0() {
   return (neuron0x1049b94b0()*0.42048);
}

double mlp::synapse0x1049be380() {
   return (neuron0x1049b6050()*-0.111973);
}

double mlp::synapse0x1049be3b0() {
   return (neuron0x1049b61b0()*-0.0360692);
}

double mlp::synapse0x1049be3e0() {
   return (neuron0x1049b6490()*-0.381031);
}

double mlp::synapse0x1049be410() {
   return (neuron0x1049b6770()*0.153366);
}

double mlp::synapse0x1049be440() {
   return (neuron0x1049b6a50()*-0.203106);
}

double mlp::synapse0x1049be470() {
   return (neuron0x1049b6d30()*-0.0273285);
}

double mlp::synapse0x1049be4a0() {
   return (neuron0x1049b7010()*-0.188143);
}

double mlp::synapse0x1049be4d0() {
   return (neuron0x1049b72f0()*-0.329707);
}

double mlp::synapse0x1049be500() {
   return (neuron0x1049b7600()*0.0773688);
}

double mlp::synapse0x1049be530() {
   return (neuron0x1049b7910()*-0.0665475);
}

double mlp::synapse0x1049be560() {
   return (neuron0x1049b7c20()*0.097484);
}

double mlp::synapse0x1049be590() {
   return (neuron0x1049b7f30()*-0.030764);
}

double mlp::synapse0x1049be5c0() {
   return (neuron0x1049b8240()*0.114467);
}

double mlp::synapse0x1049be5f0() {
   return (neuron0x1049b8520()*-0.0365731);
}

double mlp::synapse0x1049be620() {
   return (neuron0x1049b8800()*-0.257003);
}

double mlp::synapse0x1049be650() {
   return (neuron0x1049b8b10()*0.458514);
}

double mlp::synapse0x1049be780() {
   return (neuron0x1049b8df0()*0.182272);
}

double mlp::synapse0x1049be7b0() {
   return (neuron0x1049b92d0()*0.0187262);
}

double mlp::synapse0x1049be7e0() {
   return (neuron0x1049b94b0()*-0.031678);
}

double mlp::synapse0x1049beaa0() {
   return (neuron0x1049b6050()*0.242278);
}

double mlp::synapse0x1049bead0() {
   return (neuron0x1049b61b0()*-0.244958);
}

double mlp::synapse0x1049beb00() {
   return (neuron0x1049b6490()*0.363704);
}

double mlp::synapse0x1049beb30() {
   return (neuron0x1049b6770()*0.317138);
}

double mlp::synapse0x1049beb60() {
   return (neuron0x1049b6a50()*-0.21575);
}

double mlp::synapse0x1049beb90() {
   return (neuron0x1049b6d30()*-0.0916922);
}

double mlp::synapse0x1049bebc0() {
   return (neuron0x1049b7010()*0.0834916);
}

double mlp::synapse0x1049bebf0() {
   return (neuron0x1049b72f0()*0.355783);
}

double mlp::synapse0x1049bec20() {
   return (neuron0x1049b7600()*0.262936);
}

double mlp::synapse0x1049bec50() {
   return (neuron0x1049b7910()*-0.311919);
}

double mlp::synapse0x1049bec80() {
   return (neuron0x1049b7c20()*-0.231811);
}

double mlp::synapse0x1049becb0() {
   return (neuron0x1049b7f30()*-0.426184);
}

double mlp::synapse0x1049bece0() {
   return (neuron0x1049b8240()*0.0505018);
}

double mlp::synapse0x1049bed10() {
   return (neuron0x1049b8520()*0.12228);
}

double mlp::synapse0x1049bed40() {
   return (neuron0x1049b8800()*-0.0208163);
}

double mlp::synapse0x1049bed70() {
   return (neuron0x1049b8b10()*-0.448508);
}

double mlp::synapse0x1049beea0() {
   return (neuron0x1049b8df0()*-0.191786);
}

double mlp::synapse0x1049beed0() {
   return (neuron0x1049b92d0()*0.0558306);
}

double mlp::synapse0x1049bef00() {
   return (neuron0x1049b94b0()*-0.205272);
}

double mlp::synapse0x1049b91d0() {
   return (neuron0x1049b6050()*0.152193);
}

double mlp::synapse0x1049b9200() {
   return (neuron0x1049b61b0()*-0.2278);
}

double mlp::synapse0x1049b9230() {
   return (neuron0x1049b6490()*-0.421232);
}

double mlp::synapse0x1049b9260() {
   return (neuron0x1049b6770()*-0.0273319);
}

double mlp::synapse0x1049b9290() {
   return (neuron0x1049b6a50()*0.0050738);
}

double mlp::synapse0x1049bf3c0() {
   return (neuron0x1049b6d30()*-0.178065);
}

double mlp::synapse0x1049bf3f0() {
   return (neuron0x1049b7010()*0.0667223);
}

double mlp::synapse0x1049bf420() {
   return (neuron0x1049b72f0()*0.937035);
}

double mlp::synapse0x1049bf450() {
   return (neuron0x1049b7600()*0.00220613);
}

double mlp::synapse0x1049bf480() {
   return (neuron0x1049b7910()*-0.626656);
}

double mlp::synapse0x1049bf4b0() {
   return (neuron0x1049b7c20()*-0.181882);
}

double mlp::synapse0x1049bf4e0() {
   return (neuron0x1049b7f30()*0.227487);
}

double mlp::synapse0x1049bf510() {
   return (neuron0x1049b8240()*-0.329527);
}

double mlp::synapse0x1049bf540() {
   return (neuron0x1049b8520()*0.107394);
}

double mlp::synapse0x1049bf570() {
   return (neuron0x1049b8800()*0.0371338);
}

double mlp::synapse0x1049bf5a0() {
   return (neuron0x1049b8b10()*0.314364);
}

double mlp::synapse0x1049bf6d0() {
   return (neuron0x1049b8df0()*-0.0917074);
}

double mlp::synapse0x1049bf700() {
   return (neuron0x1049b92d0()*0.0023181);
}

double mlp::synapse0x1049bf730() {
   return (neuron0x1049b94b0()*0.3897);
}

double mlp::synapse0x1049bf9f0() {
   return (neuron0x1049b6050()*-0.118176);
}

double mlp::synapse0x1049bfa20() {
   return (neuron0x1049b61b0()*-0.385417);
}

double mlp::synapse0x1049bfa50() {
   return (neuron0x1049b6490()*0.0830316);
}

double mlp::synapse0x1049bfa80() {
   return (neuron0x1049b6770()*0.363815);
}

double mlp::synapse0x1049bfab0() {
   return (neuron0x1049b6a50()*0.173845);
}

double mlp::synapse0x1049bfae0() {
   return (neuron0x1049b6d30()*-0.0220452);
}

double mlp::synapse0x1049bfb10() {
   return (neuron0x1049b7010()*0.643454);
}

double mlp::synapse0x1049bfb40() {
   return (neuron0x1049b72f0()*-0.199924);
}

double mlp::synapse0x1049bfb70() {
   return (neuron0x1049b7600()*-0.165998);
}

double mlp::synapse0x1049bfba0() {
   return (neuron0x1049b7910()*0.189877);
}

double mlp::synapse0x1049bfbd0() {
   return (neuron0x1049b7c20()*0.0357294);
}

double mlp::synapse0x1049bfc00() {
   return (neuron0x1049b7f30()*0.301742);
}

double mlp::synapse0x1049bfc30() {
   return (neuron0x1049b8240()*0.491457);
}

double mlp::synapse0x1049bfc60() {
   return (neuron0x1049b8520()*0.0124736);
}

double mlp::synapse0x1049bfc90() {
   return (neuron0x1049b8800()*-0.303346);
}

double mlp::synapse0x1049bfcc0() {
   return (neuron0x1049b8b10()*0.27865);
}

double mlp::synapse0x1049bfdf0() {
   return (neuron0x1049b8df0()*-0.0432765);
}

double mlp::synapse0x1049bfe20() {
   return (neuron0x1049b92d0()*0.185226);
}

double mlp::synapse0x1049bfe50() {
   return (neuron0x1049b94b0()*0.678413);
}

double mlp::synapse0x1049c0110() {
   return (neuron0x1049b6050()*0.203796);
}

double mlp::synapse0x1049c0240() {
   return (neuron0x1049b61b0()*-0.120746);
}

double mlp::synapse0x1049b4fe0() {
   return (neuron0x1049b6490()*-0.226281);
}

double mlp::synapse0x1049b5010() {
   return (neuron0x1049b6770()*-0.0550888);
}

double mlp::synapse0x1049b6670() {
   return (neuron0x1049b6a50()*-0.00593125);
}

double mlp::synapse0x1049b66a0() {
   return (neuron0x1049b6d30()*0.228168);
}

double mlp::synapse0x1049b6c30() {
   return (neuron0x1049b7010()*-0.701448);
}

double mlp::synapse0x1049b6c60() {
   return (neuron0x1049b72f0()*0.312851);
}

double mlp::synapse0x1049b71f0() {
   return (neuron0x1049b7600()*0.158874);
}

double mlp::synapse0x1049b7220() {
   return (neuron0x1049b7910()*-0.00688079);
}

double mlp::synapse0x1049b7810() {
   return (neuron0x1049b7c20()*-0.69163);
}

double mlp::synapse0x1049b7840() {
   return (neuron0x1049b7f30()*0.3891);
}

double mlp::synapse0x1049b7e30() {
   return (neuron0x1049b8240()*0.585657);
}

double mlp::synapse0x1049b7e60() {
   return (neuron0x1049b8520()*0.091735);
}

double mlp::synapse0x1049b8420() {
   return (neuron0x1049b8800()*-0.167525);
}

double mlp::synapse0x1049b8450() {
   return (neuron0x1049b8b10()*1.34661);
}

double mlp::synapse0x1049b8cf0() {
   return (neuron0x1049b8df0()*0.167327);
}

double mlp::synapse0x1049b8d20() {
   return (neuron0x1049b92d0()*0.0915375);
}

double mlp::synapse0x1049b8fd0() {
   return (neuron0x1049b94b0()*1.02242);
}

double mlp::synapse0x1049b8a10() {
   return (neuron0x1049b6050()*0.184784);
}

double mlp::synapse0x1049b8a40() {
   return (neuron0x1049b61b0()*-0.189627);
}

double mlp::synapse0x1049b8700() {
   return (neuron0x1049b6490()*-0.0828611);
}

double mlp::synapse0x1049b8730() {
   return (neuron0x1049b6770()*0.162036);
}

double mlp::synapse0x1049b8140() {
   return (neuron0x1049b6a50()*0.267096);
}

double mlp::synapse0x1049b8170() {
   return (neuron0x1049b6d30()*0.352);
}

double mlp::synapse0x1049b7b20() {
   return (neuron0x1049b7010()*0.236868);
}

double mlp::synapse0x1049b7b50() {
   return (neuron0x1049b72f0()*-0.296215);
}

double mlp::synapse0x1049b7500() {
   return (neuron0x1049b7600()*-0.192932);
}

double mlp::synapse0x1049b7530() {
   return (neuron0x1049b7910()*0.464232);
}

double mlp::synapse0x1049b6f10() {
   return (neuron0x1049b7c20()*0.218827);
}

double mlp::synapse0x1049b6f40() {
   return (neuron0x1049b7f30()*0.22756);
}

double mlp::synapse0x1049b6950() {
   return (neuron0x1049b8240()*0.196197);
}

double mlp::synapse0x1049b6980() {
   return (neuron0x1049b8520()*0.183004);
}

double mlp::synapse0x1049b6390() {
   return (neuron0x1049b8800()*0.0154442);
}

double mlp::synapse0x1049b63c0() {
   return (neuron0x1049b8b10()*0.0979123);
}

double mlp::synapse0x1049c17d0() {
   return (neuron0x1049b8df0()*0.0157695);
}

double mlp::synapse0x1049c1800() {
   return (neuron0x1049b92d0()*0.0272572);
}

double mlp::synapse0x1049c1830() {
   return (neuron0x1049b94b0()*0.163622);
}

double mlp::synapse0x1049c1af0() {
   return (neuron0x1049b6050()*0.24101);
}

double mlp::synapse0x1049c1b20() {
   return (neuron0x1049b61b0()*0.120657);
}

double mlp::synapse0x1049c1b50() {
   return (neuron0x1049b6490()*0.0438359);
}

double mlp::synapse0x1049c1b80() {
   return (neuron0x1049b6770()*0.385386);
}

double mlp::synapse0x1049c1bb0() {
   return (neuron0x1049b6a50()*-0.0986305);
}

double mlp::synapse0x1049c1be0() {
   return (neuron0x1049b6d30()*0.018368);
}

double mlp::synapse0x1049c1c10() {
   return (neuron0x1049b7010()*-0.0756576);
}

double mlp::synapse0x1049c1c40() {
   return (neuron0x1049b72f0()*0.753758);
}

double mlp::synapse0x1049c1c70() {
   return (neuron0x1049b7600()*0.141398);
}

double mlp::synapse0x1049c1ca0() {
   return (neuron0x1049b7910()*-0.534114);
}

double mlp::synapse0x1049c1cd0() {
   return (neuron0x1049b7c20()*0.42105);
}

double mlp::synapse0x1049c1d00() {
   return (neuron0x1049b7f30()*0.306743);
}

double mlp::synapse0x1049c1d30() {
   return (neuron0x1049b8240()*0.399564);
}

double mlp::synapse0x1049c1d60() {
   return (neuron0x1049b8520()*-0.0641991);
}

double mlp::synapse0x1049c1d90() {
   return (neuron0x1049b8800()*0.0469467);
}

double mlp::synapse0x1049c1dc0() {
   return (neuron0x1049b8b10()*0.453014);
}

double mlp::synapse0x1049c1ef0() {
   return (neuron0x1049b8df0()*0.0943944);
}

double mlp::synapse0x1049c1f20() {
   return (neuron0x1049b92d0()*0.144359);
}

double mlp::synapse0x1049c1f50() {
   return (neuron0x1049b94b0()*0.347222);
}

double mlp::synapse0x1049c2210() {
   return (neuron0x1049b6050()*-0.420459);
}

double mlp::synapse0x1049c2240() {
   return (neuron0x1049b61b0()*0.195758);
}

double mlp::synapse0x1049c2270() {
   return (neuron0x1049b6490()*0.26682);
}

double mlp::synapse0x1049c22a0() {
   return (neuron0x1049b6770()*0.314069);
}

double mlp::synapse0x1049c22d0() {
   return (neuron0x1049b6a50()*-0.0358892);
}

double mlp::synapse0x1049c2300() {
   return (neuron0x1049b6d30()*-0.20703);
}

double mlp::synapse0x1049c2330() {
   return (neuron0x1049b7010()*0.0160689);
}

double mlp::synapse0x1049c2360() {
   return (neuron0x1049b72f0()*0.0843732);
}

double mlp::synapse0x1049c2390() {
   return (neuron0x1049b7600()*-0.279338);
}

double mlp::synapse0x1049c23c0() {
   return (neuron0x1049b7910()*-0.332965);
}

double mlp::synapse0x1049c23f0() {
   return (neuron0x1049b7c20()*0.207067);
}

double mlp::synapse0x1049c2420() {
   return (neuron0x1049b7f30()*-0.0241073);
}

double mlp::synapse0x1049c2450() {
   return (neuron0x1049b8240()*-0.0591129);
}

double mlp::synapse0x1049c2480() {
   return (neuron0x1049b8520()*-0.173454);
}

double mlp::synapse0x1049c24b0() {
   return (neuron0x1049b8800()*-0.141832);
}

double mlp::synapse0x1049c24e0() {
   return (neuron0x1049b8b10()*-0.0632766);
}

double mlp::synapse0x1049c2610() {
   return (neuron0x1049b8df0()*-0.24579);
}

double mlp::synapse0x1049c2640() {
   return (neuron0x1049b92d0()*-0.00318933);
}

double mlp::synapse0x1049c2670() {
   return (neuron0x1049b94b0()*-0.171044);
}

double mlp::synapse0x1049a44c0() {
   return (neuron0x1049a4ef0()*-0.151528);
}

double mlp::synapse0x1049c2800() {
   return (neuron0x1049b9a80()*0.0518095);
}

double mlp::synapse0x1049c2830() {
   return (neuron0x1049ba2b0()*0.0504563);
}

double mlp::synapse0x1049c2860() {
   return (neuron0x1049ba9d0()*5.56663e-05);
}

double mlp::synapse0x1049c2890() {
   return (neuron0x1049baf10()*-0.0356409);
}

double mlp::synapse0x1049c28c0() {
   return (neuron0x1049bb630()*0.0851951);
}

double mlp::synapse0x1049c28f0() {
   return (neuron0x1049bbd50()*-0.0219925);
}

double mlp::synapse0x1049c2920() {
   return (neuron0x1049bc470()*-0.113762);
}

double mlp::synapse0x1049c2950() {
   return (neuron0x1049bcb90()*0.0265049);
}

double mlp::synapse0x1049c2980() {
   return (neuron0x1049bd2b0()*-0.0144548);
}

double mlp::synapse0x1049c29b0() {
   return (neuron0x1049bd9d0()*0.149231);
}

double mlp::synapse0x1049c29e0() {
   return (neuron0x1049be0f0()*0.246263);
}

double mlp::synapse0x1049c2a10() {
   return (neuron0x1049be810()*0.162611);
}

double mlp::synapse0x1049c2a40() {
   return (neuron0x1049bef30()*0.0101708);
}

double mlp::synapse0x1049c2a70() {
   return (neuron0x1049bf760()*-0.111491);
}

double mlp::synapse0x1049c2aa0() {
   return (neuron0x1049bfe80()*-0.0290909);
}

double mlp::synapse0x1049c2bd0() {
   return (neuron0x1049c1570()*0.1536);
}

double mlp::synapse0x1049c2c00() {
   return (neuron0x1049c1860()*-0.351188);
}

double mlp::synapse0x1049c2c30() {
   return (neuron0x1049c1f80()*-0.158196);
}

double mlp::synapse0x1049c2ec0() {
   return (neuron0x1049a4ef0()*-0.142555);
}

double mlp::synapse0x1049c2ef0() {
   return (neuron0x1049b9a80()*-0.194009);
}

double mlp::synapse0x1049c2f20() {
   return (neuron0x1049ba2b0()*-0.0521431);
}

double mlp::synapse0x1049c2f50() {
   return (neuron0x1049ba9d0()*0.152248);
}

double mlp::synapse0x1049c2f80() {
   return (neuron0x1049baf10()*0.0724094);
}

double mlp::synapse0x1049c2fb0() {
   return (neuron0x1049bb630()*-0.0313553);
}

double mlp::synapse0x1049c2fe0() {
   return (neuron0x1049bbd50()*-0.00439377);
}

double mlp::synapse0x1049c3010() {
   return (neuron0x1049bc470()*-0.146798);
}

double mlp::synapse0x1049c3040() {
   return (neuron0x1049bcb90()*-0.0461069);
}

double mlp::synapse0x1049c3070() {
   return (neuron0x1049bd2b0()*-0.102644);
}

double mlp::synapse0x1049c30a0() {
   return (neuron0x1049bd9d0()*0.265447);
}

double mlp::synapse0x1049c30d0() {
   return (neuron0x1049be0f0()*0.219044);
}

double mlp::synapse0x1049c3100() {
   return (neuron0x1049be810()*0.106773);
}

double mlp::synapse0x1049c3130() {
   return (neuron0x1049bef30()*0.0758193);
}

double mlp::synapse0x1049c3160() {
   return (neuron0x1049bf760()*-0.125175);
}

double mlp::synapse0x1049c3190() {
   return (neuron0x1049bfe80()*-0.0528699);
}

double mlp::synapse0x1049c32c0() {
   return (neuron0x1049c1570()*-0.0524878);
}

double mlp::synapse0x1049c32f0() {
   return (neuron0x1049c1860()*-0.378543);
}

double mlp::synapse0x1049c3320() {
   return (neuron0x1049c1f80()*0.0316374);
}

double mlp::synapse0x1049c35b0() {
   return (neuron0x1049a4ef0()*0.0332307);
}

double mlp::synapse0x1049c35e0() {
   return (neuron0x1049b9a80()*-0.0646645);
}

double mlp::synapse0x1049c3610() {
   return (neuron0x1049ba2b0()*-0.00325142);
}

double mlp::synapse0x1049c3640() {
   return (neuron0x1049ba9d0()*0.00114115);
}

double mlp::synapse0x1049c3670() {
   return (neuron0x1049baf10()*0.130692);
}

double mlp::synapse0x1049c36a0() {
   return (neuron0x1049bb630()*-0.127074);
}

double mlp::synapse0x1049c36d0() {
   return (neuron0x1049bbd50()*0.0188525);
}

double mlp::synapse0x1049c3700() {
   return (neuron0x1049bc470()*0.0730256);
}

double mlp::synapse0x1049c3730() {
   return (neuron0x1049bcb90()*-0.229057);
}

double mlp::synapse0x1049c3760() {
   return (neuron0x1049bd2b0()*0.0956147);
}

double mlp::synapse0x1049c3790() {
   return (neuron0x1049bd9d0()*0.134282);
}

double mlp::synapse0x1049c37c0() {
   return (neuron0x1049be0f0()*-0.0035478);
}

double mlp::synapse0x1049c37f0() {
   return (neuron0x1049be810()*-0.107464);
}

double mlp::synapse0x1049c3820() {
   return (neuron0x1049bef30()*0.0162136);
}

double mlp::synapse0x1049c3850() {
   return (neuron0x1049bf760()*0.121664);
}

double mlp::synapse0x1049c3880() {
   return (neuron0x1049bfe80()*0.211737);
}

double mlp::synapse0x1049c39b0() {
   return (neuron0x1049c1570()*-0.0013017);
}

double mlp::synapse0x1049c39e0() {
   return (neuron0x1049c1860()*0.0366901);
}

double mlp::synapse0x1049c3a10() {
   return (neuron0x1049c1f80()*0.254329);
}

double mlp::synapse0x1049c3ca0() {
   return (neuron0x1049a4ef0()*-0.0137579);
}

double mlp::synapse0x1049c3cd0() {
   return (neuron0x1049b9a80()*0.0263046);
}

double mlp::synapse0x1049c3d00() {
   return (neuron0x1049ba2b0()*0.111767);
}

double mlp::synapse0x1049c3d30() {
   return (neuron0x1049ba9d0()*-0.0154841);
}

double mlp::synapse0x1049c3d60() {
   return (neuron0x1049baf10()*0.0742486);
}

double mlp::synapse0x1049c3d90() {
   return (neuron0x1049bb630()*-0.0985617);
}

double mlp::synapse0x1049c3dc0() {
   return (neuron0x1049bbd50()*-0.0700797);
}

double mlp::synapse0x1049c3df0() {
   return (neuron0x1049bc470()*-0.0624909);
}

double mlp::synapse0x1049c3e20() {
   return (neuron0x1049bcb90()*0.00359102);
}

double mlp::synapse0x1049c3e50() {
   return (neuron0x1049bd2b0()*0.135528);
}

double mlp::synapse0x1049c3e80() {
   return (neuron0x1049bd9d0()*0.0555061);
}

double mlp::synapse0x1049c3eb0() {
   return (neuron0x1049be0f0()*0.0630992);
}

double mlp::synapse0x1049c3ee0() {
   return (neuron0x1049be810()*0.0572772);
}

double mlp::synapse0x1049c3f10() {
   return (neuron0x1049bef30()*-0.275786);
}

double mlp::synapse0x1049c3f40() {
   return (neuron0x1049bf760()*0.0414622);
}

double mlp::synapse0x1049c3f70() {
   return (neuron0x1049bfe80()*0.0934601);
}

double mlp::synapse0x1049c40a0() {
   return (neuron0x1049c1570()*0.091617);
}

double mlp::synapse0x1049c40d0() {
   return (neuron0x1049c1860()*0.0613922);
}

double mlp::synapse0x1049c4100() {
   return (neuron0x1049c1f80()*0.0911348);
}

double mlp::synapse0x1049a4390() {
   return (neuron0x1049a4ef0()*0.0122292);
}

double mlp::synapse0x1049c4390() {
   return (neuron0x1049b9a80()*0.00175422);
}

double mlp::synapse0x1049c43c0() {
   return (neuron0x1049ba2b0()*0.157399);
}

double mlp::synapse0x1049c43f0() {
   return (neuron0x1049ba9d0()*0.274724);
}

double mlp::synapse0x1049c4420() {
   return (neuron0x1049baf10()*-0.159579);
}

double mlp::synapse0x1049c4450() {
   return (neuron0x1049bb630()*0.198975);
}

double mlp::synapse0x1049c4480() {
   return (neuron0x1049bbd50()*0.0487158);
}

double mlp::synapse0x1049c44b0() {
   return (neuron0x1049bc470()*-0.343949);
}

double mlp::synapse0x1049c44e0() {
   return (neuron0x1049bcb90()*0.286917);
}

double mlp::synapse0x1049c4510() {
   return (neuron0x1049bd2b0()*0.109173);
}

double mlp::synapse0x1049c4540() {
   return (neuron0x1049bd9d0()*0.429279);
}

double mlp::synapse0x1049c4570() {
   return (neuron0x1049be0f0()*-0.201884);
}

double mlp::synapse0x1049c45a0() {
   return (neuron0x1049be810()*0.212668);
}

double mlp::synapse0x1049c45d0() {
   return (neuron0x1049bef30()*-0.152796);
}

double mlp::synapse0x1049c4600() {
   return (neuron0x1049bf760()*-0.490153);
}

double mlp::synapse0x1049c4630() {
   return (neuron0x1049bfe80()*0.749882);
}

double mlp::synapse0x1049c4760() {
   return (neuron0x1049c1570()*-0.123117);
}

double mlp::synapse0x1049c4790() {
   return (neuron0x1049c1860()*0.0724498);
}

double mlp::synapse0x1049c47c0() {
   return (neuron0x1049c1f80()*0.026242);
}

double mlp::synapse0x1049c4a50() {
   return (neuron0x1049a4ef0()*0.15698);
}

double mlp::synapse0x1049c4a80() {
   return (neuron0x1049b9a80()*-0.00660546);
}

double mlp::synapse0x1049c4ab0() {
   return (neuron0x1049ba2b0()*-0.133942);
}

double mlp::synapse0x1049c4ae0() {
   return (neuron0x1049ba9d0()*0.0758393);
}

double mlp::synapse0x1049c4b10() {
   return (neuron0x1049baf10()*0.0250803);
}

double mlp::synapse0x1049c4b40() {
   return (neuron0x1049bb630()*0.0411527);
}

double mlp::synapse0x1049c4b70() {
   return (neuron0x1049bbd50()*-0.390432);
}

double mlp::synapse0x1049c4ba0() {
   return (neuron0x1049bc470()*0.162788);
}

double mlp::synapse0x1049c4bd0() {
   return (neuron0x1049bcb90()*0.217373);
}

double mlp::synapse0x1049c4c00() {
   return (neuron0x1049bd2b0()*-0.442307);
}

double mlp::synapse0x1049c4c30() {
   return (neuron0x1049bd9d0()*0.112224);
}

double mlp::synapse0x1049c4c60() {
   return (neuron0x1049be0f0()*-0.0812448);
}

double mlp::synapse0x1049c4c90() {
   return (neuron0x1049be810()*0.106385);
}

double mlp::synapse0x1049c4cc0() {
   return (neuron0x1049bef30()*0.297761);
}

double mlp::synapse0x1049c4cf0() {
   return (neuron0x1049bf760()*-0.364601);
}

double mlp::synapse0x1049c4d20() {
   return (neuron0x1049bfe80()*-0.646203);
}

double mlp::synapse0x1049c4e50() {
   return (neuron0x1049c1570()*0.203002);
}

double mlp::synapse0x1049c4e80() {
   return (neuron0x1049c1860()*0.390076);
}

double mlp::synapse0x1049c4eb0() {
   return (neuron0x1049c1f80()*-0.107215);
}

double mlp::synapse0x1049c5140() {
   return (neuron0x1049a4ef0()*-0.140443);
}

double mlp::synapse0x1049c5170() {
   return (neuron0x1049b9a80()*0.034185);
}

double mlp::synapse0x1049c51a0() {
   return (neuron0x1049ba2b0()*0.129678);
}

double mlp::synapse0x1049c51d0() {
   return (neuron0x1049ba9d0()*-0.1033);
}

double mlp::synapse0x1049c5200() {
   return (neuron0x1049baf10()*0.178603);
}

double mlp::synapse0x1049c5230() {
   return (neuron0x1049bb630()*0.15332);
}

double mlp::synapse0x1049c5260() {
   return (neuron0x1049bbd50()*0.0865517);
}

double mlp::synapse0x1049c5290() {
   return (neuron0x1049bc470()*0.013496);
}

double mlp::synapse0x1049c52c0() {
   return (neuron0x1049bcb90()*-0.0697539);
}

double mlp::synapse0x1049c52f0() {
   return (neuron0x1049bd2b0()*0.214382);
}

double mlp::synapse0x1049c5320() {
   return (neuron0x1049bd9d0()*0.202364);
}

double mlp::synapse0x1049c5350() {
   return (neuron0x1049be0f0()*0.0740333);
}

double mlp::synapse0x1049c5380() {
   return (neuron0x1049be810()*0.0437237);
}

double mlp::synapse0x1049c53b0() {
   return (neuron0x1049bef30()*0.0253733);
}

double mlp::synapse0x1049c53e0() {
   return (neuron0x1049bf760()*0.241859);
}

double mlp::synapse0x1049c5410() {
   return (neuron0x1049bfe80()*-0.188057);
}

double mlp::synapse0x1049c5540() {
   return (neuron0x1049c1570()*-0.212881);
}

double mlp::synapse0x1049c5570() {
   return (neuron0x1049c1860()*-0.0599564);
}

double mlp::synapse0x1049c55a0() {
   return (neuron0x1049c1f80()*-0.00813904);
}

double mlp::synapse0x1049c5830() {
   return (neuron0x1049a4ef0()*0.0600818);
}

double mlp::synapse0x1049c5860() {
   return (neuron0x1049b9a80()*0.0534997);
}

double mlp::synapse0x1049c5890() {
   return (neuron0x1049ba2b0()*0.0675587);
}

double mlp::synapse0x1049c58c0() {
   return (neuron0x1049ba9d0()*-0.2917);
}

double mlp::synapse0x1049c58f0() {
   return (neuron0x1049baf10()*-0.151323);
}

double mlp::synapse0x1049c5920() {
   return (neuron0x1049bb630()*0.0896061);
}

double mlp::synapse0x1049c5950() {
   return (neuron0x1049bbd50()*-0.0761919);
}

double mlp::synapse0x1049c5980() {
   return (neuron0x1049bc470()*0.0952587);
}

double mlp::synapse0x1049c59b0() {
   return (neuron0x1049bcb90()*0.022415);
}

double mlp::synapse0x1049c59e0() {
   return (neuron0x1049bd2b0()*0.0393667);
}

double mlp::synapse0x1049c5a10() {
   return (neuron0x1049bd9d0()*-0.1905);
}

double mlp::synapse0x1049c5a40() {
   return (neuron0x1049be0f0()*0.115891);
}

double mlp::synapse0x1049c5a70() {
   return (neuron0x1049be810()*0.094881);
}

double mlp::synapse0x1049c5aa0() {
   return (neuron0x1049bef30()*-0.159612);
}

double mlp::synapse0x1049c5ad0() {
   return (neuron0x1049bf760()*0.168594);
}

double mlp::synapse0x1049c5b00() {
   return (neuron0x1049bfe80()*-0.180212);
}

double mlp::synapse0x1049c5c30() {
   return (neuron0x1049c1570()*0.157191);
}

double mlp::synapse0x1049c5c60() {
   return (neuron0x1049c1860()*0.0853798);
}

double mlp::synapse0x1049c5c90() {
   return (neuron0x1049c1f80()*-0.256385);
}

double mlp::synapse0x1049c5f20() {
   return (neuron0x1049a4ef0()*-0.104487);
}

double mlp::synapse0x1049c5f50() {
   return (neuron0x1049b9a80()*0.077113);
}

double mlp::synapse0x1049c5f80() {
   return (neuron0x1049ba2b0()*0.0743171);
}

double mlp::synapse0x1049c5fb0() {
   return (neuron0x1049ba9d0()*0.0495643);
}

double mlp::synapse0x1049c5fe0() {
   return (neuron0x1049baf10()*0.0341709);
}

double mlp::synapse0x1049c6010() {
   return (neuron0x1049bb630()*-0.048389);
}

double mlp::synapse0x1049c6040() {
   return (neuron0x1049bbd50()*0.25127);
}

double mlp::synapse0x1049c6070() {
   return (neuron0x1049bc470()*-0.0428413);
}

double mlp::synapse0x1049c60a0() {
   return (neuron0x1049bcb90()*-0.11427);
}

double mlp::synapse0x1049c60d0() {
   return (neuron0x1049bd2b0()*0.152027);
}

double mlp::synapse0x1049c6100() {
   return (neuron0x1049bd9d0()*-0.252802);
}

double mlp::synapse0x1049c6130() {
   return (neuron0x1049be0f0()*0.0468348);
}

double mlp::synapse0x1049c6160() {
   return (neuron0x1049be810()*-0.21752);
}

double mlp::synapse0x1049c6190() {
   return (neuron0x1049bef30()*0.0767641);
}

double mlp::synapse0x1049c61c0() {
   return (neuron0x1049bf760()*0.236148);
}

double mlp::synapse0x1049c61f0() {
   return (neuron0x1049bfe80()*-0.0483914);
}

double mlp::synapse0x1049c6320() {
   return (neuron0x1049c1570()*-0.148586);
}

double mlp::synapse0x1049c6350() {
   return (neuron0x1049c1860()*-0.0532885);
}

double mlp::synapse0x1049c6380() {
   return (neuron0x1049c1f80()*0.0463419);
}

