#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19) {
   input0 = (in0 - 41.7401)/21.4655;
   input1 = (in1 - 44.9213)/63.7137;
   input2 = (in2 - 38.5786)/181.795;
   input3 = (in3 - 2.17443)/0.814775;
   input4 = (in4 - 0.000575006)/1.06263;
   input5 = (in5 - -0.000984575)/1.07536;
   input6 = (in6 - 1.0851)/2.17544;
   input7 = (in7 - 0.200935)/1.19551;
   input8 = (in8 - 0.78289)/2.45763;
   input9 = (in9 - 0.144716)/0.989473;
   input10 = (in10 - -0.00853833)/0.943117;
   input11 = (in11 - -0.19327)/0.923141;
   input12 = (in12 - 1.47982)/1.23844;
   input13 = (in13 - 0.644501)/0.478664;
   input14 = (in14 - 0.51327)/0.499824;
   input15 = (in15 - 0.10248)/0.303278;
   input16 = (in16 - 0.736712)/0.440417;
   input17 = (in17 - 2.18134)/0.913966;
   input18 = (in18 - 58.5957)/33.2027;
   input19 = (in19 - 89.7481)/57.3759;
   switch(index) {
     case 0:
         return neuron0x1049c7a70();
     case 1:
         return neuron0x1049c8090();
     case 2:
         return neuron0x1049c87b0();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 41.7401)/21.4655;
   input1 = (input[1] - 44.9213)/63.7137;
   input2 = (input[2] - 38.5786)/181.795;
   input3 = (input[3] - 2.17443)/0.814775;
   input4 = (input[4] - 0.000575006)/1.06263;
   input5 = (input[5] - -0.000984575)/1.07536;
   input6 = (input[6] - 1.0851)/2.17544;
   input7 = (input[7] - 0.200935)/1.19551;
   input8 = (input[8] - 0.78289)/2.45763;
   input9 = (input[9] - 0.144716)/0.989473;
   input10 = (input[10] - -0.00853833)/0.943117;
   input11 = (input[11] - -0.19327)/0.923141;
   input12 = (input[12] - 1.47982)/1.23844;
   input13 = (input[13] - 0.644501)/0.478664;
   input14 = (input[14] - 0.51327)/0.499824;
   input15 = (input[15] - 0.10248)/0.303278;
   input16 = (input[16] - 0.736712)/0.440417;
   input17 = (input[17] - 2.18134)/0.913966;
   input18 = (input[18] - 58.5957)/33.2027;
   input19 = (input[19] - 89.7481)/57.3759;
   switch(index) {
     case 0:
         return neuron0x1049c7a70();
     case 1:
         return neuron0x1049c8090();
     case 2:
         return neuron0x1049c87b0();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049ba5d0() {
   return input0;
}

double mlp::neuron0x1049ba730() {
   return input1;
}

double mlp::neuron0x1049baa10() {
   return input2;
}

double mlp::neuron0x1049bacf0() {
   return input3;
}

double mlp::neuron0x1049bafd0() {
   return input4;
}

double mlp::neuron0x1049bb2b0() {
   return input5;
}

double mlp::neuron0x1049bb590() {
   return input6;
}

double mlp::neuron0x1049bb870() {
   return input7;
}

double mlp::neuron0x1049bbb50() {
   return input8;
}

double mlp::neuron0x1049bbe30() {
   return input9;
}

double mlp::neuron0x1049bc110() {
   return input10;
}

double mlp::neuron0x1049bc420() {
   return input11;
}

double mlp::neuron0x1049bc730() {
   return input12;
}

double mlp::neuron0x1049bca40() {
   return input13;
}

double mlp::neuron0x1049bcd50() {
   return input14;
}

double mlp::neuron0x1049bd060() {
   return input15;
}

double mlp::neuron0x1049bd370() {
   return input16;
}

double mlp::neuron0x1049bd880() {
   return input17;
}

double mlp::neuron0x1049bdae0() {
   return input18;
}

double mlp::neuron0x1049bddc0() {
   return input19;
}

double mlp::input0x1049ba470() {
   double input = -0.390262;
   input += synapse0x1049a8910();
   input += synapse0x1049a8940();
   input += synapse0x1049a8970();
   input += synapse0x1049a89a0();
   input += synapse0x1049a89d0();
   input += synapse0x1049a8a00();
   input += synapse0x1049a8a30();
   input += synapse0x1049a8a60();
   input += synapse0x1049a8a90();
   input += synapse0x1049a8ac0();
   input += synapse0x1049a8af0();
   input += synapse0x1049a8b20();
   input += synapse0x1049a8b50();
   input += synapse0x1049a8b80();
   input += synapse0x1049a8bb0();
   input += synapse0x1049a8be0();
   input += synapse0x1049be1d0();
   input += synapse0x1049b9d50();
   input += synapse0x1049b9d80();
   input += synapse0x1049b9db0();
   return input;
}

double mlp::neuron0x1049ba470() {
   double input = input0x1049ba470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049be300() {
   double input = 0.267705;
   input += synapse0x1049be590();
   input += synapse0x1049be5c0();
   input += synapse0x1049be5f0();
   input += synapse0x1049be620();
   input += synapse0x1049be650();
   input += synapse0x1049be680();
   input += synapse0x1049be6b0();
   input += synapse0x1049be6e0();
   input += synapse0x1049be710();
   input += synapse0x1049be740();
   input += synapse0x1049be770();
   input += synapse0x1049be7a0();
   input += synapse0x1049be7d0();
   input += synapse0x1049be200();
   input += synapse0x1049be230();
   input += synapse0x1049be260();
   input += synapse0x1049be290();
   input += synapse0x1049be2c0();
   input += synapse0x1049beb00();
   input += synapse0x1049beb30();
   return input;
}

double mlp::neuron0x1049be300() {
   double input = input0x1049be300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049beb60() {
   double input = -0.0976439;
   input += synapse0x1049bedf0();
   input += synapse0x1049bee20();
   input += synapse0x1049bee50();
   input += synapse0x1049bee80();
   input += synapse0x1049beeb0();
   input += synapse0x1049beee0();
   input += synapse0x1049bef10();
   input += synapse0x1049bef40();
   input += synapse0x1049bef70();
   input += synapse0x1049befa0();
   input += synapse0x1049befd0();
   input += synapse0x1049bf000();
   input += synapse0x1049bf030();
   input += synapse0x1049bf060();
   input += synapse0x1049bf090();
   input += synapse0x1049bf0c0();
   input += synapse0x1049bf1f0();
   input += synapse0x1049bf220();
   input += synapse0x1049bf250();
   input += synapse0x1049bf280();
   return input;
}

double mlp::neuron0x1049beb60() {
   double input = input0x1049beb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bf2b0() {
   double input = 0.000412485;
   input += synapse0x1049bf540();
   input += synapse0x1049bf570();
   input += synapse0x1049bf5a0();
   input += synapse0x1049bf5d0();
   input += synapse0x1049bf600();
   input += synapse0x1049be800();
   input += synapse0x1049be830();
   input += synapse0x1049be860();
   input += synapse0x1049be890();
   input += synapse0x1049be8c0();
   input += synapse0x1049be8f0();
   input += synapse0x1049be920();
   input += synapse0x1049be950();
   input += synapse0x1049be980();
   input += synapse0x1049be9b0();
   input += synapse0x1049bf630();
   input += synapse0x1049bf760();
   input += synapse0x1049bf790();
   input += synapse0x1049bf7c0();
   input += synapse0x1049bf7f0();
   return input;
}

double mlp::neuron0x1049bf2b0() {
   double input = input0x1049bf2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bf820() {
   double input = 0.233408;
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
   input += synapse0x1049bfcf0();
   input += synapse0x1049bfd20();
   input += synapse0x1049bfd50();
   input += synapse0x1049bfd80();
   input += synapse0x1049bfeb0();
   input += synapse0x1049bfee0();
   input += synapse0x1049bff10();
   input += synapse0x1049bff40();
   return input;
}

double mlp::neuron0x1049bf820() {
   double input = input0x1049bf820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bff70() {
   double input = 0.501044;
   input += synapse0x1049c0200();
   input += synapse0x1049c0230();
   input += synapse0x1049c0260();
   input += synapse0x1049c0290();
   input += synapse0x1049c02c0();
   input += synapse0x1049c02f0();
   input += synapse0x1049c0320();
   input += synapse0x1049c0350();
   input += synapse0x1049c0380();
   input += synapse0x1049c03b0();
   input += synapse0x1049c03e0();
   input += synapse0x1049c0410();
   input += synapse0x1049c0440();
   input += synapse0x1049c0470();
   input += synapse0x1049c04a0();
   input += synapse0x1049c04d0();
   input += synapse0x1049c0600();
   input += synapse0x1049c0630();
   input += synapse0x1049c0660();
   input += synapse0x1049c0690();
   return input;
}

double mlp::neuron0x1049bff70() {
   double input = input0x1049bff70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c06c0() {
   double input = 0.0592881;
   input += synapse0x1049c0950();
   input += synapse0x1049c0980();
   input += synapse0x1049c09b0();
   input += synapse0x1049c09e0();
   input += synapse0x1049c0a10();
   input += synapse0x1049c0a40();
   input += synapse0x1049c0a70();
   input += synapse0x1049c0aa0();
   input += synapse0x1049c0ad0();
   input += synapse0x1049c0b00();
   input += synapse0x1049c0b30();
   input += synapse0x1049c0b60();
   input += synapse0x1049c0b90();
   input += synapse0x1049c0bc0();
   input += synapse0x1049c0bf0();
   input += synapse0x1049c0c20();
   input += synapse0x1049c0d50();
   input += synapse0x1049c0d80();
   input += synapse0x1049c0db0();
   input += synapse0x1049c0de0();
   return input;
}

double mlp::neuron0x1049c06c0() {
   double input = input0x1049c06c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c0e10() {
   double input = -0.251184;
   input += synapse0x1049c10a0();
   input += synapse0x1049c10d0();
   input += synapse0x1049c1100();
   input += synapse0x1049c1130();
   input += synapse0x1049c1160();
   input += synapse0x1049c1190();
   input += synapse0x1049c11c0();
   input += synapse0x1049c11f0();
   input += synapse0x1049c1220();
   input += synapse0x1049c1250();
   input += synapse0x1049c1280();
   input += synapse0x1049c12b0();
   input += synapse0x1049c12e0();
   input += synapse0x1049c1310();
   input += synapse0x1049c1340();
   input += synapse0x1049c1370();
   input += synapse0x1049c14a0();
   input += synapse0x1049c14d0();
   input += synapse0x1049c1500();
   input += synapse0x1049c1530();
   return input;
}

double mlp::neuron0x1049c0e10() {
   double input = input0x1049c0e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c1560() {
   double input = -0.33487;
   input += synapse0x1049c17f0();
   input += synapse0x1049c1820();
   input += synapse0x1049c1850();
   input += synapse0x1049c1880();
   input += synapse0x1049c18b0();
   input += synapse0x1049c18e0();
   input += synapse0x1049c1910();
   input += synapse0x1049c1940();
   input += synapse0x1049c1970();
   input += synapse0x1049c19a0();
   input += synapse0x1049c19d0();
   input += synapse0x1049c1a00();
   input += synapse0x1049c1a30();
   input += synapse0x1049c1a60();
   input += synapse0x1049c1a90();
   input += synapse0x1049c1ac0();
   input += synapse0x1049c1bf0();
   input += synapse0x1049c1c20();
   input += synapse0x1049c1c50();
   input += synapse0x1049c1c80();
   return input;
}

double mlp::neuron0x1049c1560() {
   double input = input0x1049c1560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c1cb0() {
   double input = -0.0125765;
   input += synapse0x1049c1f40();
   input += synapse0x1049c1f70();
   input += synapse0x1049c1fa0();
   input += synapse0x1049c1fd0();
   input += synapse0x1049c2000();
   input += synapse0x1049c2030();
   input += synapse0x1049c2060();
   input += synapse0x1049c2090();
   input += synapse0x1049c20c0();
   input += synapse0x1049c20f0();
   input += synapse0x1049c2120();
   input += synapse0x1049c2150();
   input += synapse0x1049c2180();
   input += synapse0x1049c21b0();
   input += synapse0x1049c21e0();
   input += synapse0x1049c2210();
   input += synapse0x1049c2340();
   input += synapse0x1049c2370();
   input += synapse0x1049c23a0();
   input += synapse0x1049c23d0();
   return input;
}

double mlp::neuron0x1049c1cb0() {
   double input = input0x1049c1cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c2400() {
   double input = 0.130019;
   input += synapse0x1049c2690();
   input += synapse0x1049c26c0();
   input += synapse0x1049c26f0();
   input += synapse0x1049c2720();
   input += synapse0x1049c2750();
   input += synapse0x1049c2780();
   input += synapse0x1049c27b0();
   input += synapse0x1049c27e0();
   input += synapse0x1049c2810();
   input += synapse0x1049c2840();
   input += synapse0x1049c2870();
   input += synapse0x1049c28a0();
   input += synapse0x1049c28d0();
   input += synapse0x1049c2900();
   input += synapse0x1049c2930();
   input += synapse0x1049c2960();
   input += synapse0x1049c2a90();
   input += synapse0x1049c2ac0();
   input += synapse0x1049c2af0();
   input += synapse0x1049c2b20();
   return input;
}

double mlp::neuron0x1049c2400() {
   double input = input0x1049c2400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c2b50() {
   double input = -0.112285;
   input += synapse0x1049c2de0();
   input += synapse0x1049c2e10();
   input += synapse0x1049c2e40();
   input += synapse0x1049c2e70();
   input += synapse0x1049c2ea0();
   input += synapse0x1049c2ed0();
   input += synapse0x1049c2f00();
   input += synapse0x1049c2f30();
   input += synapse0x1049c2f60();
   input += synapse0x1049c2f90();
   input += synapse0x1049c2fc0();
   input += synapse0x1049c2ff0();
   input += synapse0x1049c3020();
   input += synapse0x1049c3050();
   input += synapse0x1049c3080();
   input += synapse0x1049c30b0();
   input += synapse0x1049c31e0();
   input += synapse0x1049c3210();
   input += synapse0x1049c3240();
   input += synapse0x1049c3270();
   return input;
}

double mlp::neuron0x1049c2b50() {
   double input = input0x1049c2b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c32a0() {
   double input = 0.252542;
   input += synapse0x1049bd780();
   input += synapse0x1049bd7b0();
   input += synapse0x1049bd7e0();
   input += synapse0x1049bd810();
   input += synapse0x1049bd840();
   input += synapse0x1049c3730();
   input += synapse0x1049c3760();
   input += synapse0x1049c3790();
   input += synapse0x1049c37c0();
   input += synapse0x1049c37f0();
   input += synapse0x1049c3820();
   input += synapse0x1049c3850();
   input += synapse0x1049c3880();
   input += synapse0x1049c38b0();
   input += synapse0x1049c38e0();
   input += synapse0x1049c3910();
   input += synapse0x1049c3a40();
   input += synapse0x1049c3a70();
   input += synapse0x1049c3aa0();
   input += synapse0x1049c3ad0();
   return input;
}

double mlp::neuron0x1049c32a0() {
   double input = input0x1049c32a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c3b00() {
   double input = -0.112116;
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
   input += synapse0x1049c3fa0();
   input += synapse0x1049c3fd0();
   input += synapse0x1049c4000();
   input += synapse0x1049c4030();
   input += synapse0x1049c4060();
   input += synapse0x1049c4190();
   input += synapse0x1049c41c0();
   input += synapse0x1049c41f0();
   input += synapse0x1049c4220();
   return input;
}

double mlp::neuron0x1049c3b00() {
   double input = input0x1049c3b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c4250() {
   double input = 0.162177;
   input += synapse0x1049c44e0();
   input += synapse0x1049c4510();
   input += synapse0x1049c4540();
   input += synapse0x1049c4570();
   input += synapse0x1049c45a0();
   input += synapse0x1049c45d0();
   input += synapse0x1049c4600();
   input += synapse0x1049c4630();
   input += synapse0x1049c4660();
   input += synapse0x1049c4690();
   input += synapse0x1049c46c0();
   input += synapse0x1049c46f0();
   input += synapse0x1049c4720();
   input += synapse0x1049c4750();
   input += synapse0x1049c4780();
   input += synapse0x1049c47b0();
   input += synapse0x1049c48e0();
   input += synapse0x1049c4910();
   input += synapse0x1049c4940();
   input += synapse0x1049c4970();
   return input;
}

double mlp::neuron0x1049c4250() {
   double input = input0x1049c4250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c49a0() {
   double input = 0.240957;
   input += synapse0x1049c4c30();
   input += synapse0x1049c4d60();
   input += synapse0x1049ba300();
   input += synapse0x1049ba330();
   input += synapse0x1049babf0();
   input += synapse0x1049bac20();
   input += synapse0x1049bb1b0();
   input += synapse0x1049bb1e0();
   input += synapse0x1049bb770();
   input += synapse0x1049bb7a0();
   input += synapse0x1049bbd30();
   input += synapse0x1049bbd60();
   input += synapse0x1049bc320();
   input += synapse0x1049bc350();
   input += synapse0x1049bc940();
   input += synapse0x1049bc970();
   input += synapse0x1049bd270();
   input += synapse0x1049bd2a0();
   input += synapse0x1049bd580();
   input += synapse0x1049bd5b0();
   return input;
}

double mlp::neuron0x1049c49a0() {
   double input = input0x1049c49a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c6190() {
   double input = -0.383799;
   input += synapse0x1049bdcf0();
   input += synapse0x1049bcf60();
   input += synapse0x1049bcf90();
   input += synapse0x1049bcc50();
   input += synapse0x1049bcc80();
   input += synapse0x1049bc630();
   input += synapse0x1049bc660();
   input += synapse0x1049bc010();
   input += synapse0x1049bc040();
   input += synapse0x1049bba50();
   input += synapse0x1049bba80();
   input += synapse0x1049bb490();
   input += synapse0x1049bb4c0();
   input += synapse0x1049baed0();
   input += synapse0x1049baf00();
   input += synapse0x1049ba910();
   input += synapse0x1049ba940();
   input += synapse0x1049c63f0();
   input += synapse0x1049c6420();
   input += synapse0x1049c6450();
   return input;
}

double mlp::neuron0x1049c6190() {
   double input = input0x1049c6190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c6480() {
   double input = 0.299411;
   input += synapse0x1049c6710();
   input += synapse0x1049c6740();
   input += synapse0x1049c6770();
   input += synapse0x1049c67a0();
   input += synapse0x1049c67d0();
   input += synapse0x1049c6800();
   input += synapse0x1049c6830();
   input += synapse0x1049c6860();
   input += synapse0x1049c6890();
   input += synapse0x1049c68c0();
   input += synapse0x1049c68f0();
   input += synapse0x1049c6920();
   input += synapse0x1049c6950();
   input += synapse0x1049c6980();
   input += synapse0x1049c69b0();
   input += synapse0x1049c69e0();
   input += synapse0x1049c6b10();
   input += synapse0x1049c6b40();
   input += synapse0x1049c6b70();
   input += synapse0x1049c6ba0();
   return input;
}

double mlp::neuron0x1049c6480() {
   double input = input0x1049c6480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c6bd0() {
   double input = -0.122984;
   input += synapse0x1049c6e60();
   input += synapse0x1049c6e90();
   input += synapse0x1049c6ec0();
   input += synapse0x1049c6ef0();
   input += synapse0x1049c6f20();
   input += synapse0x1049c6f50();
   input += synapse0x1049c6f80();
   input += synapse0x1049c6fb0();
   input += synapse0x1049c6fe0();
   input += synapse0x1049c7010();
   input += synapse0x1049c7040();
   input += synapse0x1049c7070();
   input += synapse0x1049c70a0();
   input += synapse0x1049c70d0();
   input += synapse0x1049c7100();
   input += synapse0x1049c7130();
   input += synapse0x1049c7260();
   input += synapse0x1049c7290();
   input += synapse0x1049c72c0();
   input += synapse0x1049c72f0();
   return input;
}

double mlp::neuron0x1049c6bd0() {
   double input = input0x1049c6bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c7320() {
   double input = -0.0549422;
   input += synapse0x1049c75b0();
   input += synapse0x1049c75e0();
   input += synapse0x1049c7610();
   input += synapse0x1049c7640();
   input += synapse0x1049c7670();
   input += synapse0x1049c76a0();
   input += synapse0x1049c76d0();
   input += synapse0x1049c7700();
   input += synapse0x1049c7730();
   input += synapse0x1049c7760();
   input += synapse0x1049c7790();
   input += synapse0x1049c77c0();
   input += synapse0x1049c77f0();
   input += synapse0x1049c7820();
   input += synapse0x1049c7850();
   input += synapse0x1049c7880();
   input += synapse0x1049c79b0();
   input += synapse0x1049c79e0();
   input += synapse0x1049c7a10();
   input += synapse0x1049c7a40();
   return input;
}

double mlp::neuron0x1049c7320() {
   double input = input0x1049c7320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c7a70() {
   double input = 0.246738;
   input += synapse0x1049c7bd0();
   input += synapse0x1049c7c00();
   input += synapse0x1049c7c30();
   input += synapse0x1049c7c60();
   input += synapse0x1049c7c90();
   input += synapse0x1049c7cc0();
   input += synapse0x1049c7cf0();
   input += synapse0x1049c7d20();
   input += synapse0x1049c7d50();
   input += synapse0x1049c7d80();
   input += synapse0x1049c7db0();
   input += synapse0x1049c7de0();
   input += synapse0x1049c7e10();
   input += synapse0x1049c7e40();
   input += synapse0x1049c7e70();
   input += synapse0x1049c7ea0();
   input += synapse0x1049c7fd0();
   input += synapse0x1049c8000();
   input += synapse0x1049c8030();
   input += synapse0x1049c8060();
   return input;
}

double mlp::neuron0x1049c7a70() {
   double input = input0x1049c7a70();
   return (input * 1)+0;
}

double mlp::input0x1049c8090() {
   double input = 0.411328;
   input += synapse0x1049c82f0();
   input += synapse0x1049c8320();
   input += synapse0x1049c8350();
   input += synapse0x1049c8380();
   input += synapse0x1049c83b0();
   input += synapse0x1049c83e0();
   input += synapse0x1049c8410();
   input += synapse0x1049c8440();
   input += synapse0x1049c8470();
   input += synapse0x1049c84a0();
   input += synapse0x1049c84d0();
   input += synapse0x1049c8500();
   input += synapse0x1049c8530();
   input += synapse0x1049c8560();
   input += synapse0x1049c8590();
   input += synapse0x1049c85c0();
   input += synapse0x1049c86f0();
   input += synapse0x1049c8720();
   input += synapse0x1049c8750();
   input += synapse0x1049c8780();
   return input;
}

double mlp::neuron0x1049c8090() {
   double input = input0x1049c8090();
   return (input * 1)+0;
}

double mlp::input0x1049c87b0() {
   double input = -0.0451231;
   input += synapse0x1049a8090();
   input += synapse0x1049c8a10();
   input += synapse0x1049c8a40();
   input += synapse0x1049c8a70();
   input += synapse0x1049c8aa0();
   input += synapse0x1049c8ad0();
   input += synapse0x1049c8b00();
   input += synapse0x1049c8b30();
   input += synapse0x1049c8b60();
   input += synapse0x1049c8b90();
   input += synapse0x1049c8bc0();
   input += synapse0x1049c8bf0();
   input += synapse0x1049c8c20();
   input += synapse0x1049c8c50();
   input += synapse0x1049c8c80();
   input += synapse0x1049c8cb0();
   input += synapse0x1049c8de0();
   input += synapse0x1049c8e10();
   input += synapse0x1049c8e40();
   input += synapse0x1049c8e70();
   return input;
}

double mlp::neuron0x1049c87b0() {
   double input = input0x1049c87b0();
   return (input * 1)+0;
}

double mlp::synapse0x1049a8910() {
   return (neuron0x1049ba5d0()*-0.368991);
}

double mlp::synapse0x1049a8940() {
   return (neuron0x1049ba730()*0.391318);
}

double mlp::synapse0x1049a8970() {
   return (neuron0x1049baa10()*-0.420141);
}

double mlp::synapse0x1049a89a0() {
   return (neuron0x1049bacf0()*0.316704);
}

double mlp::synapse0x1049a89d0() {
   return (neuron0x1049bafd0()*-0.458838);
}

double mlp::synapse0x1049a8a00() {
   return (neuron0x1049bb2b0()*0.53817);
}

double mlp::synapse0x1049a8a30() {
   return (neuron0x1049bb590()*0.197078);
}

double mlp::synapse0x1049a8a60() {
   return (neuron0x1049bb870()*0.291662);
}

double mlp::synapse0x1049a8a90() {
   return (neuron0x1049bbb50()*0.481926);
}

double mlp::synapse0x1049a8ac0() {
   return (neuron0x1049bbe30()*-0.0434939);
}

double mlp::synapse0x1049a8af0() {
   return (neuron0x1049bc110()*0.476715);
}

double mlp::synapse0x1049a8b20() {
   return (neuron0x1049bc420()*-0.161018);
}

double mlp::synapse0x1049a8b50() {
   return (neuron0x1049bc730()*-0.432496);
}

double mlp::synapse0x1049a8b80() {
   return (neuron0x1049bca40()*0.489453);
}

double mlp::synapse0x1049a8bb0() {
   return (neuron0x1049bcd50()*-0.0693498);
}

double mlp::synapse0x1049a8be0() {
   return (neuron0x1049bd060()*0.223472);
}

double mlp::synapse0x1049be1d0() {
   return (neuron0x1049bd370()*0.163468);
}

double mlp::synapse0x1049b9d50() {
   return (neuron0x1049bd880()*0.38775);
}

double mlp::synapse0x1049b9d80() {
   return (neuron0x1049bdae0()*-0.0975183);
}

double mlp::synapse0x1049b9db0() {
   return (neuron0x1049bddc0()*-0.152892);
}

double mlp::synapse0x1049be590() {
   return (neuron0x1049ba5d0()*0.37268);
}

double mlp::synapse0x1049be5c0() {
   return (neuron0x1049ba730()*0.269149);
}

double mlp::synapse0x1049be5f0() {
   return (neuron0x1049baa10()*-0.211449);
}

double mlp::synapse0x1049be620() {
   return (neuron0x1049bacf0()*-0.0736524);
}

double mlp::synapse0x1049be650() {
   return (neuron0x1049bafd0()*-0.467856);
}

double mlp::synapse0x1049be680() {
   return (neuron0x1049bb2b0()*-0.0839733);
}

double mlp::synapse0x1049be6b0() {
   return (neuron0x1049bb590()*-0.280542);
}

double mlp::synapse0x1049be6e0() {
   return (neuron0x1049bb870()*-0.454298);
}

double mlp::synapse0x1049be710() {
   return (neuron0x1049bbb50()*0.358069);
}

double mlp::synapse0x1049be740() {
   return (neuron0x1049bbe30()*0.263393);
}

double mlp::synapse0x1049be770() {
   return (neuron0x1049bc110()*-0.0448645);
}

double mlp::synapse0x1049be7a0() {
   return (neuron0x1049bc420()*0.366656);
}

double mlp::synapse0x1049be7d0() {
   return (neuron0x1049bc730()*-0.219571);
}

double mlp::synapse0x1049be200() {
   return (neuron0x1049bca40()*-0.134061);
}

double mlp::synapse0x1049be230() {
   return (neuron0x1049bcd50()*0.00733222);
}

double mlp::synapse0x1049be260() {
   return (neuron0x1049bd060()*0.0818884);
}

double mlp::synapse0x1049be290() {
   return (neuron0x1049bd370()*-0.222125);
}

double mlp::synapse0x1049be2c0() {
   return (neuron0x1049bd880()*0.344807);
}

double mlp::synapse0x1049beb00() {
   return (neuron0x1049bdae0()*-0.150702);
}

double mlp::synapse0x1049beb30() {
   return (neuron0x1049bddc0()*0.0462106);
}

double mlp::synapse0x1049bedf0() {
   return (neuron0x1049ba5d0()*0.133959);
}

double mlp::synapse0x1049bee20() {
   return (neuron0x1049ba730()*-0.183813);
}

double mlp::synapse0x1049bee50() {
   return (neuron0x1049baa10()*-0.0306345);
}

double mlp::synapse0x1049bee80() {
   return (neuron0x1049bacf0()*0.164921);
}

double mlp::synapse0x1049beeb0() {
   return (neuron0x1049bafd0()*0.0106521);
}

double mlp::synapse0x1049beee0() {
   return (neuron0x1049bb2b0()*0.358378);
}

double mlp::synapse0x1049bef10() {
   return (neuron0x1049bb590()*0.0927866);
}

double mlp::synapse0x1049bef40() {
   return (neuron0x1049bb870()*-0.232289);
}

double mlp::synapse0x1049bef70() {
   return (neuron0x1049bbb50()*-0.123956);
}

double mlp::synapse0x1049befa0() {
   return (neuron0x1049bbe30()*-0.169816);
}

double mlp::synapse0x1049befd0() {
   return (neuron0x1049bc110()*0.0766717);
}

double mlp::synapse0x1049bf000() {
   return (neuron0x1049bc420()*-0.161321);
}

double mlp::synapse0x1049bf030() {
   return (neuron0x1049bc730()*0.367104);
}

double mlp::synapse0x1049bf060() {
   return (neuron0x1049bca40()*0.484887);
}

double mlp::synapse0x1049bf090() {
   return (neuron0x1049bcd50()*-0.312055);
}

double mlp::synapse0x1049bf0c0() {
   return (neuron0x1049bd060()*0.043568);
}

double mlp::synapse0x1049bf1f0() {
   return (neuron0x1049bd370()*-0.51939);
}

double mlp::synapse0x1049bf220() {
   return (neuron0x1049bd880()*0.413122);
}

double mlp::synapse0x1049bf250() {
   return (neuron0x1049bdae0()*0.326012);
}

double mlp::synapse0x1049bf280() {
   return (neuron0x1049bddc0()*-0.127403);
}

double mlp::synapse0x1049bf540() {
   return (neuron0x1049ba5d0()*0.466688);
}

double mlp::synapse0x1049bf570() {
   return (neuron0x1049ba730()*0.024704);
}

double mlp::synapse0x1049bf5a0() {
   return (neuron0x1049baa10()*0.169959);
}

double mlp::synapse0x1049bf5d0() {
   return (neuron0x1049bacf0()*0.367899);
}

double mlp::synapse0x1049bf600() {
   return (neuron0x1049bafd0()*0.334711);
}

double mlp::synapse0x1049be800() {
   return (neuron0x1049bb2b0()*-0.0822602);
}

double mlp::synapse0x1049be830() {
   return (neuron0x1049bb590()*-0.255749);
}

double mlp::synapse0x1049be860() {
   return (neuron0x1049bb870()*-0.186418);
}

double mlp::synapse0x1049be890() {
   return (neuron0x1049bbb50()*0.35209);
}

double mlp::synapse0x1049be8c0() {
   return (neuron0x1049bbe30()*0.0272404);
}

double mlp::synapse0x1049be8f0() {
   return (neuron0x1049bc110()*0.0122917);
}

double mlp::synapse0x1049be920() {
   return (neuron0x1049bc420()*-0.163924);
}

double mlp::synapse0x1049be950() {
   return (neuron0x1049bc730()*-0.101709);
}

double mlp::synapse0x1049be980() {
   return (neuron0x1049bca40()*-0.325493);
}

double mlp::synapse0x1049be9b0() {
   return (neuron0x1049bcd50()*-0.0733442);
}

double mlp::synapse0x1049bf630() {
   return (neuron0x1049bd060()*0.260382);
}

double mlp::synapse0x1049bf760() {
   return (neuron0x1049bd370()*0.0883581);
}

double mlp::synapse0x1049bf790() {
   return (neuron0x1049bd880()*0.31877);
}

double mlp::synapse0x1049bf7c0() {
   return (neuron0x1049bdae0()*-0.813308);
}

double mlp::synapse0x1049bf7f0() {
   return (neuron0x1049bddc0()*-0.161275);
}

double mlp::synapse0x1049bfab0() {
   return (neuron0x1049ba5d0()*-0.140863);
}

double mlp::synapse0x1049bfae0() {
   return (neuron0x1049ba730()*-0.161077);
}

double mlp::synapse0x1049bfb10() {
   return (neuron0x1049baa10()*-0.0813756);
}

double mlp::synapse0x1049bfb40() {
   return (neuron0x1049bacf0()*0.198141);
}

double mlp::synapse0x1049bfb70() {
   return (neuron0x1049bafd0()*0.0679443);
}

double mlp::synapse0x1049bfba0() {
   return (neuron0x1049bb2b0()*-0.142057);
}

double mlp::synapse0x1049bfbd0() {
   return (neuron0x1049bb590()*0.408364);
}

double mlp::synapse0x1049bfc00() {
   return (neuron0x1049bb870()*-0.0057824);
}

double mlp::synapse0x1049bfc30() {
   return (neuron0x1049bbb50()*-0.390919);
}

double mlp::synapse0x1049bfc60() {
   return (neuron0x1049bbe30()*-0.483519);
}

double mlp::synapse0x1049bfc90() {
   return (neuron0x1049bc110()*0.488839);
}

double mlp::synapse0x1049bfcc0() {
   return (neuron0x1049bc420()*-0.137542);
}

double mlp::synapse0x1049bfcf0() {
   return (neuron0x1049bc730()*0.231977);
}

double mlp::synapse0x1049bfd20() {
   return (neuron0x1049bca40()*-0.177578);
}

double mlp::synapse0x1049bfd50() {
   return (neuron0x1049bcd50()*0.194778);
}

double mlp::synapse0x1049bfd80() {
   return (neuron0x1049bd060()*-0.144999);
}

double mlp::synapse0x1049bfeb0() {
   return (neuron0x1049bd370()*0.438661);
}

double mlp::synapse0x1049bfee0() {
   return (neuron0x1049bd880()*0.301571);
}

double mlp::synapse0x1049bff10() {
   return (neuron0x1049bdae0()*0.119025);
}

double mlp::synapse0x1049bff40() {
   return (neuron0x1049bddc0()*-0.233418);
}

double mlp::synapse0x1049c0200() {
   return (neuron0x1049ba5d0()*-0.160802);
}

double mlp::synapse0x1049c0230() {
   return (neuron0x1049ba730()*0.117801);
}

double mlp::synapse0x1049c0260() {
   return (neuron0x1049baa10()*-0.0818152);
}

double mlp::synapse0x1049c0290() {
   return (neuron0x1049bacf0()*0.0693533);
}

double mlp::synapse0x1049c02c0() {
   return (neuron0x1049bafd0()*0.170663);
}

double mlp::synapse0x1049c02f0() {
   return (neuron0x1049bb2b0()*0.297374);
}

double mlp::synapse0x1049c0320() {
   return (neuron0x1049bb590()*0.31914);
}

double mlp::synapse0x1049c0350() {
   return (neuron0x1049bb870()*-0.402869);
}

double mlp::synapse0x1049c0380() {
   return (neuron0x1049bbb50()*0.166048);
}

double mlp::synapse0x1049c03b0() {
   return (neuron0x1049bbe30()*-0.0331216);
}

double mlp::synapse0x1049c03e0() {
   return (neuron0x1049bc110()*0.0988802);
}

double mlp::synapse0x1049c0410() {
   return (neuron0x1049bc420()*0.0463028);
}

double mlp::synapse0x1049c0440() {
   return (neuron0x1049bc730()*-0.172218);
}

double mlp::synapse0x1049c0470() {
   return (neuron0x1049bca40()*-0.257818);
}

double mlp::synapse0x1049c04a0() {
   return (neuron0x1049bcd50()*-0.362347);
}

double mlp::synapse0x1049c04d0() {
   return (neuron0x1049bd060()*-0.354716);
}

double mlp::synapse0x1049c0600() {
   return (neuron0x1049bd370()*-0.0280046);
}

double mlp::synapse0x1049c0630() {
   return (neuron0x1049bd880()*-0.486535);
}

double mlp::synapse0x1049c0660() {
   return (neuron0x1049bdae0()*0.115944);
}

double mlp::synapse0x1049c0690() {
   return (neuron0x1049bddc0()*0.00151881);
}

double mlp::synapse0x1049c0950() {
   return (neuron0x1049ba5d0()*0.301903);
}

double mlp::synapse0x1049c0980() {
   return (neuron0x1049ba730()*0.270255);
}

double mlp::synapse0x1049c09b0() {
   return (neuron0x1049baa10()*-0.143212);
}

double mlp::synapse0x1049c09e0() {
   return (neuron0x1049bacf0()*0.380462);
}

double mlp::synapse0x1049c0a10() {
   return (neuron0x1049bafd0()*-0.150085);
}

double mlp::synapse0x1049c0a40() {
   return (neuron0x1049bb2b0()*0.352622);
}

double mlp::synapse0x1049c0a70() {
   return (neuron0x1049bb590()*-0.317849);
}

double mlp::synapse0x1049c0aa0() {
   return (neuron0x1049bb870()*0.35509);
}

double mlp::synapse0x1049c0ad0() {
   return (neuron0x1049bbb50()*0.268948);
}

double mlp::synapse0x1049c0b00() {
   return (neuron0x1049bbe30()*-0.16661);
}

double mlp::synapse0x1049c0b30() {
   return (neuron0x1049bc110()*-0.377737);
}

double mlp::synapse0x1049c0b60() {
   return (neuron0x1049bc420()*-0.017065);
}

double mlp::synapse0x1049c0b90() {
   return (neuron0x1049bc730()*-0.361756);
}

double mlp::synapse0x1049c0bc0() {
   return (neuron0x1049bca40()*-0.373053);
}

double mlp::synapse0x1049c0bf0() {
   return (neuron0x1049bcd50()*0.325935);
}

double mlp::synapse0x1049c0c20() {
   return (neuron0x1049bd060()*-0.266536);
}

double mlp::synapse0x1049c0d50() {
   return (neuron0x1049bd370()*0.347654);
}

double mlp::synapse0x1049c0d80() {
   return (neuron0x1049bd880()*0.310584);
}

double mlp::synapse0x1049c0db0() {
   return (neuron0x1049bdae0()*0.115315);
}

double mlp::synapse0x1049c0de0() {
   return (neuron0x1049bddc0()*0.0761288);
}

double mlp::synapse0x1049c10a0() {
   return (neuron0x1049ba5d0()*-0.32897);
}

double mlp::synapse0x1049c10d0() {
   return (neuron0x1049ba730()*-0.295113);
}

double mlp::synapse0x1049c1100() {
   return (neuron0x1049baa10()*0.368098);
}

double mlp::synapse0x1049c1130() {
   return (neuron0x1049bacf0()*-0.506307);
}

double mlp::synapse0x1049c1160() {
   return (neuron0x1049bafd0()*-0.427432);
}

double mlp::synapse0x1049c1190() {
   return (neuron0x1049bb2b0()*0.393316);
}

double mlp::synapse0x1049c11c0() {
   return (neuron0x1049bb590()*0.437825);
}

double mlp::synapse0x1049c11f0() {
   return (neuron0x1049bb870()*-0.0364984);
}

double mlp::synapse0x1049c1220() {
   return (neuron0x1049bbb50()*-0.455002);
}

double mlp::synapse0x1049c1250() {
   return (neuron0x1049bbe30()*-0.163054);
}

double mlp::synapse0x1049c1280() {
   return (neuron0x1049bc110()*-0.0510455);
}

double mlp::synapse0x1049c12b0() {
   return (neuron0x1049bc420()*0.270445);
}

double mlp::synapse0x1049c12e0() {
   return (neuron0x1049bc730()*0.340664);
}

double mlp::synapse0x1049c1310() {
   return (neuron0x1049bca40()*0.159736);
}

double mlp::synapse0x1049c1340() {
   return (neuron0x1049bcd50()*0.321783);
}

double mlp::synapse0x1049c1370() {
   return (neuron0x1049bd060()*0.108359);
}

double mlp::synapse0x1049c14a0() {
   return (neuron0x1049bd370()*-0.410558);
}

double mlp::synapse0x1049c14d0() {
   return (neuron0x1049bd880()*-0.157823);
}

double mlp::synapse0x1049c1500() {
   return (neuron0x1049bdae0()*0.302066);
}

double mlp::synapse0x1049c1530() {
   return (neuron0x1049bddc0()*0.321617);
}

double mlp::synapse0x1049c17f0() {
   return (neuron0x1049ba5d0()*0.243885);
}

double mlp::synapse0x1049c1820() {
   return (neuron0x1049ba730()*0.268937);
}

double mlp::synapse0x1049c1850() {
   return (neuron0x1049baa10()*0.405686);
}

double mlp::synapse0x1049c1880() {
   return (neuron0x1049bacf0()*-0.275831);
}

double mlp::synapse0x1049c18b0() {
   return (neuron0x1049bafd0()*0.0228201);
}

double mlp::synapse0x1049c18e0() {
   return (neuron0x1049bb2b0()*-0.298895);
}

double mlp::synapse0x1049c1910() {
   return (neuron0x1049bb590()*-0.143933);
}

double mlp::synapse0x1049c1940() {
   return (neuron0x1049bb870()*-0.319523);
}

double mlp::synapse0x1049c1970() {
   return (neuron0x1049bbb50()*0.00197411);
}

double mlp::synapse0x1049c19a0() {
   return (neuron0x1049bbe30()*0.0722735);
}

double mlp::synapse0x1049c19d0() {
   return (neuron0x1049bc110()*0.247163);
}

double mlp::synapse0x1049c1a00() {
   return (neuron0x1049bc420()*-0.437349);
}

double mlp::synapse0x1049c1a30() {
   return (neuron0x1049bc730()*0.484401);
}

double mlp::synapse0x1049c1a60() {
   return (neuron0x1049bca40()*0.544559);
}

double mlp::synapse0x1049c1a90() {
   return (neuron0x1049bcd50()*-0.188343);
}

double mlp::synapse0x1049c1ac0() {
   return (neuron0x1049bd060()*0.506613);
}

double mlp::synapse0x1049c1bf0() {
   return (neuron0x1049bd370()*-0.403156);
}

double mlp::synapse0x1049c1c20() {
   return (neuron0x1049bd880()*-0.150122);
}

double mlp::synapse0x1049c1c50() {
   return (neuron0x1049bdae0()*0.0377303);
}

double mlp::synapse0x1049c1c80() {
   return (neuron0x1049bddc0()*0.287273);
}

double mlp::synapse0x1049c1f40() {
   return (neuron0x1049ba5d0()*0.0231149);
}

double mlp::synapse0x1049c1f70() {
   return (neuron0x1049ba730()*-0.0599965);
}

double mlp::synapse0x1049c1fa0() {
   return (neuron0x1049baa10()*0.488988);
}

double mlp::synapse0x1049c1fd0() {
   return (neuron0x1049bacf0()*-0.391082);
}

double mlp::synapse0x1049c2000() {
   return (neuron0x1049bafd0()*0.0608795);
}

double mlp::synapse0x1049c2030() {
   return (neuron0x1049bb2b0()*-0.373848);
}

double mlp::synapse0x1049c2060() {
   return (neuron0x1049bb590()*-0.339443);
}

double mlp::synapse0x1049c2090() {
   return (neuron0x1049bb870()*-0.0961337);
}

double mlp::synapse0x1049c20c0() {
   return (neuron0x1049bbb50()*0.137141);
}

double mlp::synapse0x1049c20f0() {
   return (neuron0x1049bbe30()*0.288978);
}

double mlp::synapse0x1049c2120() {
   return (neuron0x1049bc110()*-0.138939);
}

double mlp::synapse0x1049c2150() {
   return (neuron0x1049bc420()*0.438761);
}

double mlp::synapse0x1049c2180() {
   return (neuron0x1049bc730()*0.194005);
}

double mlp::synapse0x1049c21b0() {
   return (neuron0x1049bca40()*0.147198);
}

double mlp::synapse0x1049c21e0() {
   return (neuron0x1049bcd50()*-0.329025);
}

double mlp::synapse0x1049c2210() {
   return (neuron0x1049bd060()*-0.0174507);
}

double mlp::synapse0x1049c2340() {
   return (neuron0x1049bd370()*0.388554);
}

double mlp::synapse0x1049c2370() {
   return (neuron0x1049bd880()*-0.0120348);
}

double mlp::synapse0x1049c23a0() {
   return (neuron0x1049bdae0()*0.0356818);
}

double mlp::synapse0x1049c23d0() {
   return (neuron0x1049bddc0()*0.340546);
}

double mlp::synapse0x1049c2690() {
   return (neuron0x1049ba5d0()*0.355965);
}

double mlp::synapse0x1049c26c0() {
   return (neuron0x1049ba730()*0.0849431);
}

double mlp::synapse0x1049c26f0() {
   return (neuron0x1049baa10()*-0.494361);
}

double mlp::synapse0x1049c2720() {
   return (neuron0x1049bacf0()*-0.447641);
}

double mlp::synapse0x1049c2750() {
   return (neuron0x1049bafd0()*0.217078);
}

double mlp::synapse0x1049c2780() {
   return (neuron0x1049bb2b0()*0.159161);
}

double mlp::synapse0x1049c27b0() {
   return (neuron0x1049bb590()*0.225194);
}

double mlp::synapse0x1049c27e0() {
   return (neuron0x1049bb870()*-0.384674);
}

double mlp::synapse0x1049c2810() {
   return (neuron0x1049bbb50()*-0.1886);
}

double mlp::synapse0x1049c2840() {
   return (neuron0x1049bbe30()*-0.0110986);
}

double mlp::synapse0x1049c2870() {
   return (neuron0x1049bc110()*0.291374);
}

double mlp::synapse0x1049c28a0() {
   return (neuron0x1049bc420()*-0.3373);
}

double mlp::synapse0x1049c28d0() {
   return (neuron0x1049bc730()*0.190325);
}

double mlp::synapse0x1049c2900() {
   return (neuron0x1049bca40()*-0.237121);
}

double mlp::synapse0x1049c2930() {
   return (neuron0x1049bcd50()*0.140052);
}

double mlp::synapse0x1049c2960() {
   return (neuron0x1049bd060()*0.0648568);
}

double mlp::synapse0x1049c2a90() {
   return (neuron0x1049bd370()*-0.163302);
}

double mlp::synapse0x1049c2ac0() {
   return (neuron0x1049bd880()*-0.0968018);
}

double mlp::synapse0x1049c2af0() {
   return (neuron0x1049bdae0()*-0.128904);
}

double mlp::synapse0x1049c2b20() {
   return (neuron0x1049bddc0()*-0.230719);
}

double mlp::synapse0x1049c2de0() {
   return (neuron0x1049ba5d0()*0.323537);
}

double mlp::synapse0x1049c2e10() {
   return (neuron0x1049ba730()*-0.283697);
}

double mlp::synapse0x1049c2e40() {
   return (neuron0x1049baa10()*0.0565495);
}

double mlp::synapse0x1049c2e70() {
   return (neuron0x1049bacf0()*-0.260546);
}

double mlp::synapse0x1049c2ea0() {
   return (neuron0x1049bafd0()*-0.400857);
}

double mlp::synapse0x1049c2ed0() {
   return (neuron0x1049bb2b0()*-0.346706);
}

double mlp::synapse0x1049c2f00() {
   return (neuron0x1049bb590()*-0.253004);
}

double mlp::synapse0x1049c2f30() {
   return (neuron0x1049bb870()*-0.308184);
}

double mlp::synapse0x1049c2f60() {
   return (neuron0x1049bbb50()*0.312546);
}

double mlp::synapse0x1049c2f90() {
   return (neuron0x1049bbe30()*0.236611);
}

double mlp::synapse0x1049c2fc0() {
   return (neuron0x1049bc110()*-0.0356542);
}

double mlp::synapse0x1049c2ff0() {
   return (neuron0x1049bc420()*-0.538035);
}

double mlp::synapse0x1049c3020() {
   return (neuron0x1049bc730()*0.261231);
}

double mlp::synapse0x1049c3050() {
   return (neuron0x1049bca40()*-0.165092);
}

double mlp::synapse0x1049c3080() {
   return (neuron0x1049bcd50()*-0.279086);
}

double mlp::synapse0x1049c30b0() {
   return (neuron0x1049bd060()*0.209175);
}

double mlp::synapse0x1049c31e0() {
   return (neuron0x1049bd370()*0.276026);
}

double mlp::synapse0x1049c3210() {
   return (neuron0x1049bd880()*0.436547);
}

double mlp::synapse0x1049c3240() {
   return (neuron0x1049bdae0()*0.616156);
}

double mlp::synapse0x1049c3270() {
   return (neuron0x1049bddc0()*0.129527);
}

double mlp::synapse0x1049bd780() {
   return (neuron0x1049ba5d0()*0.0230462);
}

double mlp::synapse0x1049bd7b0() {
   return (neuron0x1049ba730()*-0.0168546);
}

double mlp::synapse0x1049bd7e0() {
   return (neuron0x1049baa10()*-0.454368);
}

double mlp::synapse0x1049bd810() {
   return (neuron0x1049bacf0()*0.403685);
}

double mlp::synapse0x1049bd840() {
   return (neuron0x1049bafd0()*-0.292461);
}

double mlp::synapse0x1049c3730() {
   return (neuron0x1049bb2b0()*-0.193144);
}

double mlp::synapse0x1049c3760() {
   return (neuron0x1049bb590()*0.406219);
}

double mlp::synapse0x1049c3790() {
   return (neuron0x1049bb870()*-0.454023);
}

double mlp::synapse0x1049c37c0() {
   return (neuron0x1049bbb50()*-0.435503);
}

double mlp::synapse0x1049c37f0() {
   return (neuron0x1049bbe30()*-0.181783);
}

double mlp::synapse0x1049c3820() {
   return (neuron0x1049bc110()*0.168594);
}

double mlp::synapse0x1049c3850() {
   return (neuron0x1049bc420()*0.0522208);
}

double mlp::synapse0x1049c3880() {
   return (neuron0x1049bc730()*-0.447662);
}

double mlp::synapse0x1049c38b0() {
   return (neuron0x1049bca40()*-0.256707);
}

double mlp::synapse0x1049c38e0() {
   return (neuron0x1049bcd50()*0.26759);
}

double mlp::synapse0x1049c3910() {
   return (neuron0x1049bd060()*-0.357935);
}

double mlp::synapse0x1049c3a40() {
   return (neuron0x1049bd370()*0.0723324);
}

double mlp::synapse0x1049c3a70() {
   return (neuron0x1049bd880()*0.378066);
}

double mlp::synapse0x1049c3aa0() {
   return (neuron0x1049bdae0()*0.100875);
}

double mlp::synapse0x1049c3ad0() {
   return (neuron0x1049bddc0()*-0.00275817);
}

double mlp::synapse0x1049c3d90() {
   return (neuron0x1049ba5d0()*-0.474356);
}

double mlp::synapse0x1049c3dc0() {
   return (neuron0x1049ba730()*-0.0264502);
}

double mlp::synapse0x1049c3df0() {
   return (neuron0x1049baa10()*-0.346445);
}

double mlp::synapse0x1049c3e20() {
   return (neuron0x1049bacf0()*-0.0609425);
}

double mlp::synapse0x1049c3e50() {
   return (neuron0x1049bafd0()*0.491885);
}

double mlp::synapse0x1049c3e80() {
   return (neuron0x1049bb2b0()*0.00696251);
}

double mlp::synapse0x1049c3eb0() {
   return (neuron0x1049bb590()*0.120304);
}

double mlp::synapse0x1049c3ee0() {
   return (neuron0x1049bb870()*0.0492604);
}

double mlp::synapse0x1049c3f10() {
   return (neuron0x1049bbb50()*0.472998);
}

double mlp::synapse0x1049c3f40() {
   return (neuron0x1049bbe30()*0.111966);
}

double mlp::synapse0x1049c3f70() {
   return (neuron0x1049bc110()*0.09826);
}

double mlp::synapse0x1049c3fa0() {
   return (neuron0x1049bc420()*0.0384402);
}

double mlp::synapse0x1049c3fd0() {
   return (neuron0x1049bc730()*-0.299631);
}

double mlp::synapse0x1049c4000() {
   return (neuron0x1049bca40()*0.340502);
}

double mlp::synapse0x1049c4030() {
   return (neuron0x1049bcd50()*-0.0520412);
}

double mlp::synapse0x1049c4060() {
   return (neuron0x1049bd060()*-0.319308);
}

double mlp::synapse0x1049c4190() {
   return (neuron0x1049bd370()*0.343701);
}

double mlp::synapse0x1049c41c0() {
   return (neuron0x1049bd880()*0.255523);
}

double mlp::synapse0x1049c41f0() {
   return (neuron0x1049bdae0()*-0.157797);
}

double mlp::synapse0x1049c4220() {
   return (neuron0x1049bddc0()*-0.46674);
}

double mlp::synapse0x1049c44e0() {
   return (neuron0x1049ba5d0()*0.196881);
}

double mlp::synapse0x1049c4510() {
   return (neuron0x1049ba730()*-0.0476152);
}

double mlp::synapse0x1049c4540() {
   return (neuron0x1049baa10()*-0.0915556);
}

double mlp::synapse0x1049c4570() {
   return (neuron0x1049bacf0()*0.372763);
}

double mlp::synapse0x1049c45a0() {
   return (neuron0x1049bafd0()*-0.396605);
}

double mlp::synapse0x1049c45d0() {
   return (neuron0x1049bb2b0()*-0.376952);
}

double mlp::synapse0x1049c4600() {
   return (neuron0x1049bb590()*-0.0323636);
}

double mlp::synapse0x1049c4630() {
   return (neuron0x1049bb870()*0.126968);
}

double mlp::synapse0x1049c4660() {
   return (neuron0x1049bbb50()*-0.319614);
}

double mlp::synapse0x1049c4690() {
   return (neuron0x1049bbe30()*0.455429);
}

double mlp::synapse0x1049c46c0() {
   return (neuron0x1049bc110()*0.241091);
}

double mlp::synapse0x1049c46f0() {
   return (neuron0x1049bc420()*-0.107084);
}

double mlp::synapse0x1049c4720() {
   return (neuron0x1049bc730()*-0.0640247);
}

double mlp::synapse0x1049c4750() {
   return (neuron0x1049bca40()*0.376378);
}

double mlp::synapse0x1049c4780() {
   return (neuron0x1049bcd50()*-0.038412);
}

double mlp::synapse0x1049c47b0() {
   return (neuron0x1049bd060()*0.0211965);
}

double mlp::synapse0x1049c48e0() {
   return (neuron0x1049bd370()*-0.271725);
}

double mlp::synapse0x1049c4910() {
   return (neuron0x1049bd880()*0.0254363);
}

double mlp::synapse0x1049c4940() {
   return (neuron0x1049bdae0()*0.214371);
}

double mlp::synapse0x1049c4970() {
   return (neuron0x1049bddc0()*-0.299166);
}

double mlp::synapse0x1049c4c30() {
   return (neuron0x1049ba5d0()*0.488901);
}

double mlp::synapse0x1049c4d60() {
   return (neuron0x1049ba730()*-0.000791518);
}

double mlp::synapse0x1049ba300() {
   return (neuron0x1049baa10()*0.316851);
}

double mlp::synapse0x1049ba330() {
   return (neuron0x1049bacf0()*0.33194);
}

double mlp::synapse0x1049babf0() {
   return (neuron0x1049bafd0()*-0.211577);
}

double mlp::synapse0x1049bac20() {
   return (neuron0x1049bb2b0()*-0.326413);
}

double mlp::synapse0x1049bb1b0() {
   return (neuron0x1049bb590()*-0.275286);
}

double mlp::synapse0x1049bb1e0() {
   return (neuron0x1049bb870()*0.254633);
}

double mlp::synapse0x1049bb770() {
   return (neuron0x1049bbb50()*0.0203843);
}

double mlp::synapse0x1049bb7a0() {
   return (neuron0x1049bbe30()*0.276204);
}

double mlp::synapse0x1049bbd30() {
   return (neuron0x1049bc110()*-0.0304629);
}

double mlp::synapse0x1049bbd60() {
   return (neuron0x1049bc420()*0.0884942);
}

double mlp::synapse0x1049bc320() {
   return (neuron0x1049bc730()*-0.240844);
}

double mlp::synapse0x1049bc350() {
   return (neuron0x1049bca40()*0.175291);
}

double mlp::synapse0x1049bc940() {
   return (neuron0x1049bcd50()*0.240352);
}

double mlp::synapse0x1049bc970() {
   return (neuron0x1049bd060()*0.337312);
}

double mlp::synapse0x1049bd270() {
   return (neuron0x1049bd370()*0.0436188);
}

double mlp::synapse0x1049bd2a0() {
   return (neuron0x1049bd880()*-0.387363);
}

double mlp::synapse0x1049bd580() {
   return (neuron0x1049bdae0()*-0.260057);
}

double mlp::synapse0x1049bd5b0() {
   return (neuron0x1049bddc0()*-0.0742664);
}

double mlp::synapse0x1049bdcf0() {
   return (neuron0x1049ba5d0()*-0.331385);
}

double mlp::synapse0x1049bcf60() {
   return (neuron0x1049ba730()*-0.337723);
}

double mlp::synapse0x1049bcf90() {
   return (neuron0x1049baa10()*0.362877);
}

double mlp::synapse0x1049bcc50() {
   return (neuron0x1049bacf0()*0.0730275);
}

double mlp::synapse0x1049bcc80() {
   return (neuron0x1049bafd0()*-0.0605154);
}

double mlp::synapse0x1049bc630() {
   return (neuron0x1049bb2b0()*0.342898);
}

double mlp::synapse0x1049bc660() {
   return (neuron0x1049bb590()*0.250809);
}

double mlp::synapse0x1049bc010() {
   return (neuron0x1049bb870()*-0.143602);
}

double mlp::synapse0x1049bc040() {
   return (neuron0x1049bbb50()*-0.486382);
}

double mlp::synapse0x1049bba50() {
   return (neuron0x1049bbe30()*0.138644);
}

double mlp::synapse0x1049bba80() {
   return (neuron0x1049bc110()*0.316601);
}

double mlp::synapse0x1049bb490() {
   return (neuron0x1049bc420()*0.247026);
}

double mlp::synapse0x1049bb4c0() {
   return (neuron0x1049bc730()*0.047025);
}

double mlp::synapse0x1049baed0() {
   return (neuron0x1049bca40()*0.0772291);
}

double mlp::synapse0x1049baf00() {
   return (neuron0x1049bcd50()*-0.357519);
}

double mlp::synapse0x1049ba910() {
   return (neuron0x1049bd060()*0.0854774);
}

double mlp::synapse0x1049ba940() {
   return (neuron0x1049bd370()*0.376236);
}

double mlp::synapse0x1049c63f0() {
   return (neuron0x1049bd880()*-0.431178);
}

double mlp::synapse0x1049c6420() {
   return (neuron0x1049bdae0()*0.490527);
}

double mlp::synapse0x1049c6450() {
   return (neuron0x1049bddc0()*0.120149);
}

double mlp::synapse0x1049c6710() {
   return (neuron0x1049ba5d0()*-0.274618);
}

double mlp::synapse0x1049c6740() {
   return (neuron0x1049ba730()*-0.247391);
}

double mlp::synapse0x1049c6770() {
   return (neuron0x1049baa10()*0.00371334);
}

double mlp::synapse0x1049c67a0() {
   return (neuron0x1049bacf0()*0.140461);
}

double mlp::synapse0x1049c67d0() {
   return (neuron0x1049bafd0()*-0.456271);
}

double mlp::synapse0x1049c6800() {
   return (neuron0x1049bb2b0()*-0.241189);
}

double mlp::synapse0x1049c6830() {
   return (neuron0x1049bb590()*-0.457073);
}

double mlp::synapse0x1049c6860() {
   return (neuron0x1049bb870()*0.228524);
}

double mlp::synapse0x1049c6890() {
   return (neuron0x1049bbb50()*0.345131);
}

double mlp::synapse0x1049c68c0() {
   return (neuron0x1049bbe30()*0.347425);
}

double mlp::synapse0x1049c68f0() {
   return (neuron0x1049bc110()*0.282761);
}

double mlp::synapse0x1049c6920() {
   return (neuron0x1049bc420()*0.446097);
}

double mlp::synapse0x1049c6950() {
   return (neuron0x1049bc730()*-0.328646);
}

double mlp::synapse0x1049c6980() {
   return (neuron0x1049bca40()*-0.000820158);
}

double mlp::synapse0x1049c69b0() {
   return (neuron0x1049bcd50()*-0.129445);
}

double mlp::synapse0x1049c69e0() {
   return (neuron0x1049bd060()*-0.121905);
}

double mlp::synapse0x1049c6b10() {
   return (neuron0x1049bd370()*-0.260729);
}

double mlp::synapse0x1049c6b40() {
   return (neuron0x1049bd880()*-0.250398);
}

double mlp::synapse0x1049c6b70() {
   return (neuron0x1049bdae0()*-0.139546);
}

double mlp::synapse0x1049c6ba0() {
   return (neuron0x1049bddc0()*0.191359);
}

double mlp::synapse0x1049c6e60() {
   return (neuron0x1049ba5d0()*0.0384629);
}

double mlp::synapse0x1049c6e90() {
   return (neuron0x1049ba730()*0.325081);
}

double mlp::synapse0x1049c6ec0() {
   return (neuron0x1049baa10()*-0.38663);
}

double mlp::synapse0x1049c6ef0() {
   return (neuron0x1049bacf0()*-0.283998);
}

double mlp::synapse0x1049c6f20() {
   return (neuron0x1049bafd0()*-0.257113);
}

double mlp::synapse0x1049c6f50() {
   return (neuron0x1049bb2b0()*-0.119528);
}

double mlp::synapse0x1049c6f80() {
   return (neuron0x1049bb590()*0.362964);
}

double mlp::synapse0x1049c6fb0() {
   return (neuron0x1049bb870()*-0.127433);
}

double mlp::synapse0x1049c6fe0() {
   return (neuron0x1049bbb50()*-0.0967605);
}

double mlp::synapse0x1049c7010() {
   return (neuron0x1049bbe30()*0.407011);
}

double mlp::synapse0x1049c7040() {
   return (neuron0x1049bc110()*0.535745);
}

double mlp::synapse0x1049c7070() {
   return (neuron0x1049bc420()*-0.328252);
}

double mlp::synapse0x1049c70a0() {
   return (neuron0x1049bc730()*-0.197215);
}

double mlp::synapse0x1049c70d0() {
   return (neuron0x1049bca40()*0.303863);
}

double mlp::synapse0x1049c7100() {
   return (neuron0x1049bcd50()*0.264708);
}

double mlp::synapse0x1049c7130() {
   return (neuron0x1049bd060()*0.032681);
}

double mlp::synapse0x1049c7260() {
   return (neuron0x1049bd370()*-0.167665);
}

double mlp::synapse0x1049c7290() {
   return (neuron0x1049bd880()*0.0798055);
}

double mlp::synapse0x1049c72c0() {
   return (neuron0x1049bdae0()*0.498972);
}

double mlp::synapse0x1049c72f0() {
   return (neuron0x1049bddc0()*0.477718);
}

double mlp::synapse0x1049c75b0() {
   return (neuron0x1049ba5d0()*-0.11223);
}

double mlp::synapse0x1049c75e0() {
   return (neuron0x1049ba730()*0.152982);
}

double mlp::synapse0x1049c7610() {
   return (neuron0x1049baa10()*0.150032);
}

double mlp::synapse0x1049c7640() {
   return (neuron0x1049bacf0()*-0.0996202);
}

double mlp::synapse0x1049c7670() {
   return (neuron0x1049bafd0()*0.239156);
}

double mlp::synapse0x1049c76a0() {
   return (neuron0x1049bb2b0()*0.423039);
}

double mlp::synapse0x1049c76d0() {
   return (neuron0x1049bb590()*0.0884832);
}

double mlp::synapse0x1049c7700() {
   return (neuron0x1049bb870()*0.491259);
}

double mlp::synapse0x1049c7730() {
   return (neuron0x1049bbb50()*0.0594208);
}

double mlp::synapse0x1049c7760() {
   return (neuron0x1049bbe30()*0.120187);
}

double mlp::synapse0x1049c7790() {
   return (neuron0x1049bc110()*0.139053);
}

double mlp::synapse0x1049c77c0() {
   return (neuron0x1049bc420()*-0.252814);
}

double mlp::synapse0x1049c77f0() {
   return (neuron0x1049bc730()*0.273276);
}

double mlp::synapse0x1049c7820() {
   return (neuron0x1049bca40()*-0.12061);
}

double mlp::synapse0x1049c7850() {
   return (neuron0x1049bcd50()*0.272121);
}

double mlp::synapse0x1049c7880() {
   return (neuron0x1049bd060()*-0.449159);
}

double mlp::synapse0x1049c79b0() {
   return (neuron0x1049bd370()*-0.275428);
}

double mlp::synapse0x1049c79e0() {
   return (neuron0x1049bd880()*0.150311);
}

double mlp::synapse0x1049c7a10() {
   return (neuron0x1049bdae0()*0.274967);
}

double mlp::synapse0x1049c7a40() {
   return (neuron0x1049bddc0()*-0.0559048);
}

double mlp::synapse0x1049c7bd0() {
   return (neuron0x1049ba470()*-0.000373994);
}

double mlp::synapse0x1049c7c00() {
   return (neuron0x1049be300()*0.041715);
}

double mlp::synapse0x1049c7c30() {
   return (neuron0x1049beb60()*-0.349537);
}

double mlp::synapse0x1049c7c60() {
   return (neuron0x1049bf2b0()*0.211128);
}

double mlp::synapse0x1049c7c90() {
   return (neuron0x1049bf820()*0.0888245);
}

double mlp::synapse0x1049c7cc0() {
   return (neuron0x1049bff70()*0.149699);
}

double mlp::synapse0x1049c7cf0() {
   return (neuron0x1049c06c0()*0.00602277);
}

double mlp::synapse0x1049c7d20() {
   return (neuron0x1049c0e10()*0.150529);
}

double mlp::synapse0x1049c7d50() {
   return (neuron0x1049c1560()*0.145634);
}

double mlp::synapse0x1049c7d80() {
   return (neuron0x1049c1cb0()*-0.192295);
}

double mlp::synapse0x1049c7db0() {
   return (neuron0x1049c2400()*-0.117641);
}

double mlp::synapse0x1049c7de0() {
   return (neuron0x1049c2b50()*-0.0784763);
}

double mlp::synapse0x1049c7e10() {
   return (neuron0x1049c32a0()*-0.232741);
}

double mlp::synapse0x1049c7e40() {
   return (neuron0x1049c3b00()*-0.0177857);
}

double mlp::synapse0x1049c7e70() {
   return (neuron0x1049c4250()*0.195071);
}

double mlp::synapse0x1049c7ea0() {
   return (neuron0x1049c49a0()*-0.120879);
}

double mlp::synapse0x1049c7fd0() {
   return (neuron0x1049c6190()*0.0813622);
}

double mlp::synapse0x1049c8000() {
   return (neuron0x1049c6480()*-0.125051);
}

double mlp::synapse0x1049c8030() {
   return (neuron0x1049c6bd0()*-0.0618078);
}

double mlp::synapse0x1049c8060() {
   return (neuron0x1049c7320()*-0.118116);
}

double mlp::synapse0x1049c82f0() {
   return (neuron0x1049ba470()*-0.283859);
}

double mlp::synapse0x1049c8320() {
   return (neuron0x1049be300()*-0.220375);
}

double mlp::synapse0x1049c8350() {
   return (neuron0x1049beb60()*0.19088);
}

double mlp::synapse0x1049c8380() {
   return (neuron0x1049bf2b0()*-0.307536);
}

double mlp::synapse0x1049c83b0() {
   return (neuron0x1049bf820()*0.122509);
}

double mlp::synapse0x1049c83e0() {
   return (neuron0x1049bff70()*0.251949);
}

double mlp::synapse0x1049c8410() {
   return (neuron0x1049c06c0()*0.10197);
}

double mlp::synapse0x1049c8440() {
   return (neuron0x1049c0e10()*0.0329706);
}

double mlp::synapse0x1049c8470() {
   return (neuron0x1049c1560()*-0.319873);
}

double mlp::synapse0x1049c84a0() {
   return (neuron0x1049c1cb0()*0.171389);
}

double mlp::synapse0x1049c84d0() {
   return (neuron0x1049c2400()*-0.142896);
}

double mlp::synapse0x1049c8500() {
   return (neuron0x1049c2b50()*0.437117);
}

double mlp::synapse0x1049c8530() {
   return (neuron0x1049c32a0()*-0.0468634);
}

double mlp::synapse0x1049c8560() {
   return (neuron0x1049c3b00()*0.194885);
}

double mlp::synapse0x1049c8590() {
   return (neuron0x1049c4250()*-0.0583179);
}

double mlp::synapse0x1049c85c0() {
   return (neuron0x1049c49a0()*-0.111403);
}

double mlp::synapse0x1049c86f0() {
   return (neuron0x1049c6190()*0.017137);
}

double mlp::synapse0x1049c8720() {
   return (neuron0x1049c6480()*0.17079);
}

double mlp::synapse0x1049c8750() {
   return (neuron0x1049c6bd0()*0.338264);
}

double mlp::synapse0x1049c8780() {
   return (neuron0x1049c7320()*0.0981617);
}

double mlp::synapse0x1049a8090() {
   return (neuron0x1049ba470()*0.0250947);
}

double mlp::synapse0x1049c8a10() {
   return (neuron0x1049be300()*0.0172072);
}

double mlp::synapse0x1049c8a40() {
   return (neuron0x1049beb60()*0.336324);
}

double mlp::synapse0x1049c8a70() {
   return (neuron0x1049bf2b0()*0.436848);
}

double mlp::synapse0x1049c8aa0() {
   return (neuron0x1049bf820()*0.0845062);
}

double mlp::synapse0x1049c8ad0() {
   return (neuron0x1049bff70()*-0.101048);
}

double mlp::synapse0x1049c8b00() {
   return (neuron0x1049c06c0()*-0.00751954);
}

double mlp::synapse0x1049c8b30() {
   return (neuron0x1049c0e10()*0.19907);
}

double mlp::synapse0x1049c8b60() {
   return (neuron0x1049c1560()*-0.173339);
}

double mlp::synapse0x1049c8b90() {
   return (neuron0x1049c1cb0()*0.0736455);
}

double mlp::synapse0x1049c8bc0() {
   return (neuron0x1049c2400()*0.201537);
}

double mlp::synapse0x1049c8bf0() {
   return (neuron0x1049c2b50()*-0.303175);
}

double mlp::synapse0x1049c8c20() {
   return (neuron0x1049c32a0()*-0.172634);
}

double mlp::synapse0x1049c8c50() {
   return (neuron0x1049c3b00()*-0.0540251);
}

double mlp::synapse0x1049c8c80() {
   return (neuron0x1049c4250()*0.0178854);
}

double mlp::synapse0x1049c8cb0() {
   return (neuron0x1049c49a0()*0.273691);
}

double mlp::synapse0x1049c8de0() {
   return (neuron0x1049c6190()*-0.338763);
}

double mlp::synapse0x1049c8e10() {
   return (neuron0x1049c6480()*0.056572);
}

double mlp::synapse0x1049c8e40() {
   return (neuron0x1049c6bd0()*0.122029);
}

double mlp::synapse0x1049c8e70() {
   return (neuron0x1049c7320()*-0.307448);
}

