#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18) {
   input0 = (in0 - 42.1827)/20.8917;
   input1 = (in1 - 48.6411)/73.1473;
   input2 = (in2 - 26.3703)/298.013;
   input3 = (in3 - 2.57257)/0.56415;
   input4 = (in4 - 7.60156e-05)/0.979457;
   input5 = (in5 - -0.00416881)/1.11664;
   input6 = (in6 - 1.03357)/2.85002;
   input7 = (in7 - 0.191235)/1.46727;
   input8 = (in8 - 0.734332)/2.31602;
   input9 = (in9 - -0.0116516)/0.999932;
   input10 = (in10 - 0.00311414)/0.97896;
   input11 = (in11 - -0.361304)/0.909852;
   input12 = (in12 - 1.47458)/1.21032;
   input13 = (in13 - 0.75197)/0.431869;
   input14 = (in14 - 0.610965)/0.487531;
   input15 = (in15 - 0.29953)/0.458052;
   input16 = (in16 - 0.645305)/0.478421;
   input17 = (in17 - 1.60989)/1.0464;
   input18 = (in18 - 34.8216)/33.5541;
   switch(index) {
     case 0:
         return neuron0x1049ae1c0();
     case 1:
         return neuron0x1049ae780();
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
   input9 = (input[9] - -0.0116516)/0.999932;
   input10 = (input[10] - 0.00311414)/0.97896;
   input11 = (input[11] - -0.361304)/0.909852;
   input12 = (input[12] - 1.47458)/1.21032;
   input13 = (input[13] - 0.75197)/0.431869;
   input14 = (input[14] - 0.610965)/0.487531;
   input15 = (input[15] - 0.29953)/0.458052;
   input16 = (input[16] - 0.645305)/0.478421;
   input17 = (input[17] - 1.60989)/1.0464;
   input18 = (input[18] - 34.8216)/33.5541;
   switch(index) {
     case 0:
         return neuron0x1049ae1c0();
     case 1:
         return neuron0x1049ae780();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049a1af0() {
   return input0;
}

double mlp::neuron0x1049a1c50() {
   return input1;
}

double mlp::neuron0x1049a1f30() {
   return input2;
}

double mlp::neuron0x1049a2210() {
   return input3;
}

double mlp::neuron0x1049a24f0() {
   return input4;
}

double mlp::neuron0x1049a27d0() {
   return input5;
}

double mlp::neuron0x1049a2ab0() {
   return input6;
}

double mlp::neuron0x1049a2d90() {
   return input7;
}

double mlp::neuron0x1049a3070() {
   return input8;
}

double mlp::neuron0x1049a3350() {
   return input9;
}

double mlp::neuron0x1049a3630() {
   return input10;
}

double mlp::neuron0x1049a3940() {
   return input11;
}

double mlp::neuron0x1049a3c50() {
   return input12;
}

double mlp::neuron0x1049a3f60() {
   return input13;
}

double mlp::neuron0x1049a4270() {
   return input14;
}

double mlp::neuron0x1049a4580() {
   return input15;
}

double mlp::neuron0x1049a4890() {
   return input16;
}

double mlp::neuron0x1049a4da0() {
   return input17;
}

double mlp::neuron0x1049a5000() {
   return input18;
}

double mlp::input0x104990280() {
   double input = -1.76785;
   input += synapse0x10498f770();
   input += synapse0x10498f670();
   input += synapse0x10498ff30();
   input += synapse0x10498ff60();
   input += synapse0x10498ff90();
   input += synapse0x10498fff0();
   input += synapse0x104990020();
   input += synapse0x104990050();
   input += synapse0x104990080();
   input += synapse0x1049900b0();
   input += synapse0x1049900e0();
   input += synapse0x104990110();
   input += synapse0x104990140();
   input += synapse0x1049a52e0();
   input += synapse0x1049a5310();
   input += synapse0x1049a5340();
   input += synapse0x1049a5470();
   input += synapse0x1049a12b0();
   input += synapse0x1049a12e0();
   return input;
}

double mlp::neuron0x104990280() {
   double input = input0x104990280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a55a0() {
   double input = 0.704376;
   input += synapse0x1049a5830();
   input += synapse0x1049a5860();
   input += synapse0x1049a5890();
   input += synapse0x1049a58c0();
   input += synapse0x1049a58f0();
   input += synapse0x1049a5920();
   input += synapse0x1049a5950();
   input += synapse0x1049a5980();
   input += synapse0x1049a59b0();
   input += synapse0x1049a59e0();
   input += synapse0x1049a5a10();
   input += synapse0x1049a5a40();
   input += synapse0x1049a5a70();
   input += synapse0x1049a5aa0();
   input += synapse0x1049a54a0();
   input += synapse0x1049a54d0();
   input += synapse0x1049a5500();
   input += synapse0x1049a5530();
   input += synapse0x1049a5560();
   return input;
}

double mlp::neuron0x1049a55a0() {
   double input = input0x1049a55a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a5dd0() {
   double input = 0.428337;
   input += synapse0x1049a6060();
   input += synapse0x1049a6090();
   input += synapse0x1049a60c0();
   input += synapse0x1049a60f0();
   input += synapse0x1049a6120();
   input += synapse0x1049a6150();
   input += synapse0x1049a6180();
   input += synapse0x1049a61b0();
   input += synapse0x1049a61e0();
   input += synapse0x1049a6210();
   input += synapse0x1049a6240();
   input += synapse0x1049a6270();
   input += synapse0x1049a62a0();
   input += synapse0x1049a62d0();
   input += synapse0x1049a6300();
   input += synapse0x1049a6330();
   input += synapse0x1049a6460();
   input += synapse0x1049a6490();
   input += synapse0x1049a64c0();
   return input;
}

double mlp::neuron0x1049a5dd0() {
   double input = input0x1049a5dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a64f0() {
   double input = 0.16896;
   input += synapse0x1049a6780();
   input += synapse0x1049a67b0();
   input += synapse0x1049a67e0();
   input += synapse0x1049a6810();
   input += synapse0x1049a6840();
   input += synapse0x1049a6870();
   input += synapse0x1049a68a0();
   input += synapse0x1049a68d0();
   input += synapse0x1049a5ad0();
   input += synapse0x1049a5b00();
   input += synapse0x1049a5b30();
   input += synapse0x1049a5b60();
   input += synapse0x1049a5b90();
   input += synapse0x1049a5bc0();
   input += synapse0x1049a5bf0();
   input += synapse0x1049a5c20();
   input += synapse0x1049a5c50();
   input += synapse0x1049a5c80();
   input += synapse0x1049a6a00();
   return input;
}

double mlp::neuron0x1049a64f0() {
   double input = input0x1049a64f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a6a30() {
   double input = 1.49165;
   input += synapse0x1049a6cc0();
   input += synapse0x1049a6cf0();
   input += synapse0x1049a6d20();
   input += synapse0x1049a6d50();
   input += synapse0x1049a6d80();
   input += synapse0x1049a6db0();
   input += synapse0x1049a6de0();
   input += synapse0x1049a6e10();
   input += synapse0x1049a6e40();
   input += synapse0x1049a6e70();
   input += synapse0x1049a6ea0();
   input += synapse0x1049a6ed0();
   input += synapse0x1049a6f00();
   input += synapse0x1049a6f30();
   input += synapse0x1049a6f60();
   input += synapse0x1049a6f90();
   input += synapse0x1049a70c0();
   input += synapse0x1049a70f0();
   input += synapse0x1049a7120();
   return input;
}

double mlp::neuron0x1049a6a30() {
   double input = input0x1049a6a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a7150() {
   double input = 0.723271;
   input += synapse0x1049a73e0();
   input += synapse0x1049a7410();
   input += synapse0x1049a7440();
   input += synapse0x1049a7470();
   input += synapse0x1049a74a0();
   input += synapse0x1049a74d0();
   input += synapse0x1049a7500();
   input += synapse0x1049a7530();
   input += synapse0x1049a7560();
   input += synapse0x1049a7590();
   input += synapse0x1049a75c0();
   input += synapse0x1049a75f0();
   input += synapse0x1049a7620();
   input += synapse0x1049a7650();
   input += synapse0x1049a7680();
   input += synapse0x1049a76b0();
   input += synapse0x1049a77e0();
   input += synapse0x1049a7810();
   input += synapse0x1049a7840();
   return input;
}

double mlp::neuron0x1049a7150() {
   double input = input0x1049a7150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a7870() {
   double input = 0.210995;
   input += synapse0x1049a7b00();
   input += synapse0x1049a7b30();
   input += synapse0x1049a7b60();
   input += synapse0x1049a7b90();
   input += synapse0x1049a7bc0();
   input += synapse0x1049a7bf0();
   input += synapse0x1049a7c20();
   input += synapse0x1049a7c50();
   input += synapse0x1049a7c80();
   input += synapse0x1049a7cb0();
   input += synapse0x1049a7ce0();
   input += synapse0x1049a7d10();
   input += synapse0x1049a7d40();
   input += synapse0x1049a7d70();
   input += synapse0x1049a7da0();
   input += synapse0x1049a7dd0();
   input += synapse0x1049a7f00();
   input += synapse0x1049a7f30();
   input += synapse0x1049a7f60();
   return input;
}

double mlp::neuron0x1049a7870() {
   double input = input0x1049a7870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a7f90() {
   double input = 0.568128;
   input += synapse0x1049a8220();
   input += synapse0x1049a8250();
   input += synapse0x1049a8280();
   input += synapse0x1049a82b0();
   input += synapse0x1049a82e0();
   input += synapse0x1049a8310();
   input += synapse0x1049a8340();
   input += synapse0x1049a8370();
   input += synapse0x1049a83a0();
   input += synapse0x1049a83d0();
   input += synapse0x1049a8400();
   input += synapse0x1049a8430();
   input += synapse0x1049a8460();
   input += synapse0x1049a8490();
   input += synapse0x1049a84c0();
   input += synapse0x1049a84f0();
   input += synapse0x1049a8620();
   input += synapse0x1049a8650();
   input += synapse0x1049a8680();
   return input;
}

double mlp::neuron0x1049a7f90() {
   double input = input0x1049a7f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a86b0() {
   double input = -0.274446;
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
   input += synapse0x1049a8c10();
   input += synapse0x1049a8d40();
   input += synapse0x1049a8d70();
   input += synapse0x1049a8da0();
   return input;
}

double mlp::neuron0x1049a86b0() {
   double input = input0x1049a86b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a8dd0() {
   double input = 0.1547;
   input += synapse0x1049a9060();
   input += synapse0x1049a9090();
   input += synapse0x1049a90c0();
   input += synapse0x1049a90f0();
   input += synapse0x1049a9120();
   input += synapse0x1049a9150();
   input += synapse0x1049a9180();
   input += synapse0x1049a91b0();
   input += synapse0x1049a91e0();
   input += synapse0x1049a9210();
   input += synapse0x1049a9240();
   input += synapse0x1049a9270();
   input += synapse0x1049a92a0();
   input += synapse0x1049a92d0();
   input += synapse0x1049a9300();
   input += synapse0x1049a9330();
   input += synapse0x1049a9460();
   input += synapse0x1049a9490();
   input += synapse0x1049a94c0();
   return input;
}

double mlp::neuron0x1049a8dd0() {
   double input = input0x1049a8dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a94f0() {
   double input = 0.0198705;
   input += synapse0x1049a9780();
   input += synapse0x1049a97b0();
   input += synapse0x1049a97e0();
   input += synapse0x1049a9810();
   input += synapse0x1049a9840();
   input += synapse0x1049a9870();
   input += synapse0x1049a98a0();
   input += synapse0x1049a98d0();
   input += synapse0x1049a9900();
   input += synapse0x1049a9930();
   input += synapse0x1049a9960();
   input += synapse0x1049a9990();
   input += synapse0x1049a99c0();
   input += synapse0x1049a99f0();
   input += synapse0x1049a9a20();
   input += synapse0x1049a9a50();
   input += synapse0x1049a9b80();
   input += synapse0x1049a9bb0();
   input += synapse0x1049a9be0();
   return input;
}

double mlp::neuron0x1049a94f0() {
   double input = input0x1049a94f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049a9c10() {
   double input = -0.25435;
   input += synapse0x1049a9ea0();
   input += synapse0x1049a9ed0();
   input += synapse0x1049a9f00();
   input += synapse0x1049a9f30();
   input += synapse0x1049a9f60();
   input += synapse0x1049a9f90();
   input += synapse0x1049a9fc0();
   input += synapse0x1049a9ff0();
   input += synapse0x1049aa020();
   input += synapse0x1049aa050();
   input += synapse0x1049aa080();
   input += synapse0x1049aa0b0();
   input += synapse0x1049aa0e0();
   input += synapse0x1049aa110();
   input += synapse0x1049aa140();
   input += synapse0x1049aa170();
   input += synapse0x1049aa2a0();
   input += synapse0x1049aa2d0();
   input += synapse0x1049aa300();
   return input;
}

double mlp::neuron0x1049a9c10() {
   double input = input0x1049a9c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049aa330() {
   double input = 0.223238;
   input += synapse0x1049aa5c0();
   input += synapse0x1049aa5f0();
   input += synapse0x1049aa620();
   input += synapse0x1049aa650();
   input += synapse0x1049aa680();
   input += synapse0x1049aa6b0();
   input += synapse0x1049aa6e0();
   input += synapse0x1049aa710();
   input += synapse0x1049aa740();
   input += synapse0x1049aa770();
   input += synapse0x1049aa7a0();
   input += synapse0x1049aa7d0();
   input += synapse0x1049aa800();
   input += synapse0x1049aa830();
   input += synapse0x1049aa860();
   input += synapse0x1049aa890();
   input += synapse0x1049aa9c0();
   input += synapse0x1049aa9f0();
   input += synapse0x1049aaa20();
   return input;
}

double mlp::neuron0x1049aa330() {
   double input = input0x1049aa330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049aaa50() {
   double input = 0.421285;
   input += synapse0x1049a4ca0();
   input += synapse0x1049a4cd0();
   input += synapse0x1049a4d00();
   input += synapse0x1049a4d30();
   input += synapse0x1049a4d60();
   input += synapse0x1049aaee0();
   input += synapse0x1049aaf10();
   input += synapse0x1049aaf40();
   input += synapse0x1049aaf70();
   input += synapse0x1049aafa0();
   input += synapse0x1049aafd0();
   input += synapse0x1049ab000();
   input += synapse0x1049ab030();
   input += synapse0x1049ab060();
   input += synapse0x1049ab090();
   input += synapse0x1049ab0c0();
   input += synapse0x1049ab1f0();
   input += synapse0x1049ab220();
   input += synapse0x1049ab250();
   return input;
}

double mlp::neuron0x1049aaa50() {
   double input = input0x1049aaa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ab280() {
   double input = 0.226038;
   input += synapse0x1049ab510();
   input += synapse0x1049ab540();
   input += synapse0x1049ab570();
   input += synapse0x1049ab5a0();
   input += synapse0x1049ab5d0();
   input += synapse0x1049ab600();
   input += synapse0x1049ab630();
   input += synapse0x1049ab660();
   input += synapse0x1049ab690();
   input += synapse0x1049ab6c0();
   input += synapse0x1049ab6f0();
   input += synapse0x1049ab720();
   input += synapse0x1049ab750();
   input += synapse0x1049ab780();
   input += synapse0x1049ab7b0();
   input += synapse0x1049ab7e0();
   input += synapse0x1049ab910();
   input += synapse0x1049ab940();
   input += synapse0x1049ab970();
   return input;
}

double mlp::neuron0x1049ab280() {
   double input = input0x1049ab280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ab9a0() {
   double input = -1.62962;
   input += synapse0x1049abc30();
   input += synapse0x1049abd60();
   input += synapse0x104990170();
   input += synapse0x1049901a0();
   input += synapse0x1049a2110();
   input += synapse0x1049a2140();
   input += synapse0x1049a26d0();
   input += synapse0x1049a2700();
   input += synapse0x1049a2c90();
   input += synapse0x1049a2cc0();
   input += synapse0x1049a3250();
   input += synapse0x1049a3280();
   input += synapse0x1049a3840();
   input += synapse0x1049a3870();
   input += synapse0x1049a3e60();
   input += synapse0x1049a3e90();
   input += synapse0x1049a4790();
   input += synapse0x1049a47c0();
   input += synapse0x1049a4aa0();
   return input;
}

double mlp::neuron0x1049ab9a0() {
   double input = input0x1049ab9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ad090() {
   double input = -0.205416;
   input += synapse0x1049a4480();
   input += synapse0x1049a44b0();
   input += synapse0x1049a4170();
   input += synapse0x1049a41a0();
   input += synapse0x1049a3b50();
   input += synapse0x1049a3b80();
   input += synapse0x1049a3530();
   input += synapse0x1049a3560();
   input += synapse0x1049a2f70();
   input += synapse0x1049a2fa0();
   input += synapse0x1049a29b0();
   input += synapse0x1049a29e0();
   input += synapse0x1049a23f0();
   input += synapse0x1049a2420();
   input += synapse0x1049a1e30();
   input += synapse0x1049a1e60();
   input += synapse0x1049ad2f0();
   input += synapse0x1049ad320();
   input += synapse0x1049ad350();
   return input;
}

double mlp::neuron0x1049ad090() {
   double input = input0x1049ad090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ad380() {
   double input = -0.0136106;
   input += synapse0x1049ad610();
   input += synapse0x1049ad640();
   input += synapse0x1049ad670();
   input += synapse0x1049ad6a0();
   input += synapse0x1049ad6d0();
   input += synapse0x1049ad700();
   input += synapse0x1049ad730();
   input += synapse0x1049ad760();
   input += synapse0x1049ad790();
   input += synapse0x1049ad7c0();
   input += synapse0x1049ad7f0();
   input += synapse0x1049ad820();
   input += synapse0x1049ad850();
   input += synapse0x1049ad880();
   input += synapse0x1049ad8b0();
   input += synapse0x1049ad8e0();
   input += synapse0x1049ada10();
   input += synapse0x1049ada40();
   input += synapse0x1049ada70();
   return input;
}

double mlp::neuron0x1049ad380() {
   double input = input0x1049ad380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049adaa0() {
   double input = -0.0477928;
   input += synapse0x1049add30();
   input += synapse0x1049add60();
   input += synapse0x1049add90();
   input += synapse0x1049addc0();
   input += synapse0x1049addf0();
   input += synapse0x1049ade20();
   input += synapse0x1049ade50();
   input += synapse0x1049ade80();
   input += synapse0x1049adeb0();
   input += synapse0x1049adee0();
   input += synapse0x1049adf10();
   input += synapse0x1049adf40();
   input += synapse0x1049adf70();
   input += synapse0x1049adfa0();
   input += synapse0x1049adfd0();
   input += synapse0x1049ae000();
   input += synapse0x1049ae130();
   input += synapse0x1049ae160();
   input += synapse0x1049ae190();
   return input;
}

double mlp::neuron0x1049adaa0() {
   double input = input0x1049adaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ae1c0() {
   double input = 0.571486;
   input += synapse0x1049a1ac0();
   input += synapse0x1049ae320();
   input += synapse0x1049ae350();
   input += synapse0x1049ae380();
   input += synapse0x1049ae3b0();
   input += synapse0x1049ae3e0();
   input += synapse0x1049ae410();
   input += synapse0x1049ae440();
   input += synapse0x1049ae470();
   input += synapse0x1049ae4a0();
   input += synapse0x1049ae4d0();
   input += synapse0x1049ae500();
   input += synapse0x1049ae530();
   input += synapse0x1049ae560();
   input += synapse0x1049ae590();
   input += synapse0x1049ae5c0();
   input += synapse0x1049ae6f0();
   input += synapse0x1049ae720();
   input += synapse0x1049ae750();
   return input;
}

double mlp::neuron0x1049ae1c0() {
   double input = input0x1049ae1c0();
   return (input * 1)+0;
}

double mlp::input0x1049ae780() {
   double input = 0.392911;
   input += synapse0x1049ae9e0();
   input += synapse0x1049aea10();
   input += synapse0x1049aea40();
   input += synapse0x1049aea70();
   input += synapse0x1049aeaa0();
   input += synapse0x1049aead0();
   input += synapse0x1049aeb00();
   input += synapse0x1049aeb30();
   input += synapse0x1049aeb60();
   input += synapse0x1049aeb90();
   input += synapse0x1049aebc0();
   input += synapse0x1049aebf0();
   input += synapse0x1049aec20();
   input += synapse0x1049aec50();
   input += synapse0x1049aec80();
   input += synapse0x1049aecb0();
   input += synapse0x1049aede0();
   input += synapse0x1049aee10();
   input += synapse0x1049aee40();
   return input;
}

double mlp::neuron0x1049ae780() {
   double input = input0x1049ae780();
   return (input * 1)+0;
}

double mlp::synapse0x10498f770() {
   return (neuron0x1049a1af0()*-0.671252);
}

double mlp::synapse0x10498f670() {
   return (neuron0x1049a1c50()*-1.49126);
}

double mlp::synapse0x10498ff30() {
   return (neuron0x1049a1f30()*0.862671);
}

double mlp::synapse0x10498ff60() {
   return (neuron0x1049a2210()*1.44502);
}

double mlp::synapse0x10498ff90() {
   return (neuron0x1049a24f0()*0.0108824);
}

double mlp::synapse0x10498fff0() {
   return (neuron0x1049a27d0()*-0.105989);
}

double mlp::synapse0x104990020() {
   return (neuron0x1049a2ab0()*0.411252);
}

double mlp::synapse0x104990050() {
   return (neuron0x1049a2d90()*0.185421);
}

double mlp::synapse0x104990080() {
   return (neuron0x1049a3070()*-0.0282903);
}

double mlp::synapse0x1049900b0() {
   return (neuron0x1049a3350()*0.165271);
}

double mlp::synapse0x1049900e0() {
   return (neuron0x1049a3630()*0.245319);
}

double mlp::synapse0x104990110() {
   return (neuron0x1049a3940()*-0.0169062);
}

double mlp::synapse0x104990140() {
   return (neuron0x1049a3c50()*0.0375245);
}

double mlp::synapse0x1049a52e0() {
   return (neuron0x1049a3f60()*-0.151572);
}

double mlp::synapse0x1049a5310() {
   return (neuron0x1049a4270()*0.259426);
}

double mlp::synapse0x1049a5340() {
   return (neuron0x1049a4580()*0.139517);
}

double mlp::synapse0x1049a5470() {
   return (neuron0x1049a4890()*0.440807);
}

double mlp::synapse0x1049a12b0() {
   return (neuron0x1049a4da0()*0.243201);
}

double mlp::synapse0x1049a12e0() {
   return (neuron0x1049a5000()*-0.563058);
}

double mlp::synapse0x1049a5830() {
   return (neuron0x1049a1af0()*-0.612848);
}

double mlp::synapse0x1049a5860() {
   return (neuron0x1049a1c50()*0.895255);
}

double mlp::synapse0x1049a5890() {
   return (neuron0x1049a1f30()*-0.191836);
}

double mlp::synapse0x1049a58c0() {
   return (neuron0x1049a2210()*-0.162936);
}

double mlp::synapse0x1049a58f0() {
   return (neuron0x1049a24f0()*-0.0487666);
}

double mlp::synapse0x1049a5920() {
   return (neuron0x1049a27d0()*0.023692);
}

double mlp::synapse0x1049a5950() {
   return (neuron0x1049a2ab0()*-0.227429);
}

double mlp::synapse0x1049a5980() {
   return (neuron0x1049a2d90()*-0.188732);
}

double mlp::synapse0x1049a59b0() {
   return (neuron0x1049a3070()*0.056221);
}

double mlp::synapse0x1049a59e0() {
   return (neuron0x1049a3350()*0.284281);
}

double mlp::synapse0x1049a5a10() {
   return (neuron0x1049a3630()*0.0229462);
}

double mlp::synapse0x1049a5a40() {
   return (neuron0x1049a3940()*0.415043);
}

double mlp::synapse0x1049a5a70() {
   return (neuron0x1049a3c50()*-0.190237);
}

double mlp::synapse0x1049a5aa0() {
   return (neuron0x1049a3f60()*-0.333217);
}

double mlp::synapse0x1049a54a0() {
   return (neuron0x1049a4270()*0.0352553);
}

double mlp::synapse0x1049a54d0() {
   return (neuron0x1049a4580()*-0.427522);
}

double mlp::synapse0x1049a5500() {
   return (neuron0x1049a4890()*0.0436398);
}

double mlp::synapse0x1049a5530() {
   return (neuron0x1049a4da0()*0.406472);
}

double mlp::synapse0x1049a5560() {
   return (neuron0x1049a5000()*0.386189);
}

double mlp::synapse0x1049a6060() {
   return (neuron0x1049a1af0()*-0.265728);
}

double mlp::synapse0x1049a6090() {
   return (neuron0x1049a1c50()*-0.627776);
}

double mlp::synapse0x1049a60c0() {
   return (neuron0x1049a1f30()*-1.54261);
}

double mlp::synapse0x1049a60f0() {
   return (neuron0x1049a2210()*0.0140575);
}

double mlp::synapse0x1049a6120() {
   return (neuron0x1049a24f0()*0.0401118);
}

double mlp::synapse0x1049a6150() {
   return (neuron0x1049a27d0()*0.0884662);
}

double mlp::synapse0x1049a6180() {
   return (neuron0x1049a2ab0()*0.237409);
}

double mlp::synapse0x1049a61b0() {
   return (neuron0x1049a2d90()*-0.0454517);
}

double mlp::synapse0x1049a61e0() {
   return (neuron0x1049a3070()*-0.151261);
}

double mlp::synapse0x1049a6210() {
   return (neuron0x1049a3350()*-0.0226589);
}

double mlp::synapse0x1049a6240() {
   return (neuron0x1049a3630()*0.133122);
}

double mlp::synapse0x1049a6270() {
   return (neuron0x1049a3940()*-0.416993);
}

double mlp::synapse0x1049a62a0() {
   return (neuron0x1049a3c50()*0.280838);
}

double mlp::synapse0x1049a62d0() {
   return (neuron0x1049a3f60()*-0.0373717);
}

double mlp::synapse0x1049a6300() {
   return (neuron0x1049a4270()*0.236623);
}

double mlp::synapse0x1049a6330() {
   return (neuron0x1049a4580()*0.917846);
}

double mlp::synapse0x1049a6460() {
   return (neuron0x1049a4890()*0.311134);
}

double mlp::synapse0x1049a6490() {
   return (neuron0x1049a4da0()*-0.550045);
}

double mlp::synapse0x1049a64c0() {
   return (neuron0x1049a5000()*-0.178616);
}

double mlp::synapse0x1049a6780() {
   return (neuron0x1049a1af0()*1.09341);
}

double mlp::synapse0x1049a67b0() {
   return (neuron0x1049a1c50()*0.368318);
}

double mlp::synapse0x1049a67e0() {
   return (neuron0x1049a1f30()*-1.10645);
}

double mlp::synapse0x1049a6810() {
   return (neuron0x1049a2210()*-0.524658);
}

double mlp::synapse0x1049a6840() {
   return (neuron0x1049a24f0()*0.397235);
}

double mlp::synapse0x1049a6870() {
   return (neuron0x1049a27d0()*-0.391844);
}

double mlp::synapse0x1049a68a0() {
   return (neuron0x1049a2ab0()*0.293529);
}

double mlp::synapse0x1049a68d0() {
   return (neuron0x1049a2d90()*0.0585709);
}

double mlp::synapse0x1049a5ad0() {
   return (neuron0x1049a3070()*-0.151422);
}

double mlp::synapse0x1049a5b00() {
   return (neuron0x1049a3350()*-0.184763);
}

double mlp::synapse0x1049a5b30() {
   return (neuron0x1049a3630()*-0.137281);
}

double mlp::synapse0x1049a5b60() {
   return (neuron0x1049a3940()*0.331627);
}

double mlp::synapse0x1049a5b90() {
   return (neuron0x1049a3c50()*-0.4972);
}

double mlp::synapse0x1049a5bc0() {
   return (neuron0x1049a3f60()*0.104875);
}

double mlp::synapse0x1049a5bf0() {
   return (neuron0x1049a4270()*0.476401);
}

double mlp::synapse0x1049a5c20() {
   return (neuron0x1049a4580()*-0.0174395);
}

double mlp::synapse0x1049a5c50() {
   return (neuron0x1049a4890()*-0.262661);
}

double mlp::synapse0x1049a5c80() {
   return (neuron0x1049a4da0()*-0.534219);
}

double mlp::synapse0x1049a6a00() {
   return (neuron0x1049a5000()*0.692705);
}

double mlp::synapse0x1049a6cc0() {
   return (neuron0x1049a1af0()*-0.0601743);
}

double mlp::synapse0x1049a6cf0() {
   return (neuron0x1049a1c50()*0.288188);
}

double mlp::synapse0x1049a6d20() {
   return (neuron0x1049a1f30()*-1.13691);
}

double mlp::synapse0x1049a6d50() {
   return (neuron0x1049a2210()*0.939194);
}

double mlp::synapse0x1049a6d80() {
   return (neuron0x1049a24f0()*-0.0839076);
}

double mlp::synapse0x1049a6db0() {
   return (neuron0x1049a27d0()*0.0721071);
}

double mlp::synapse0x1049a6de0() {
   return (neuron0x1049a2ab0()*-0.157472);
}

double mlp::synapse0x1049a6e10() {
   return (neuron0x1049a2d90()*-0.0764762);
}

double mlp::synapse0x1049a6e40() {
   return (neuron0x1049a3070()*0.0976375);
}

double mlp::synapse0x1049a6e70() {
   return (neuron0x1049a3350()*0.0115126);
}

double mlp::synapse0x1049a6ea0() {
   return (neuron0x1049a3630()*-0.138953);
}

double mlp::synapse0x1049a6ed0() {
   return (neuron0x1049a3940()*-0.191625);
}

double mlp::synapse0x1049a6f00() {
   return (neuron0x1049a3c50()*-0.0716709);
}

double mlp::synapse0x1049a6f30() {
   return (neuron0x1049a3f60()*0.283975);
}

double mlp::synapse0x1049a6f60() {
   return (neuron0x1049a4270()*0.136914);
}

double mlp::synapse0x1049a6f90() {
   return (neuron0x1049a4580()*0.367925);
}

double mlp::synapse0x1049a70c0() {
   return (neuron0x1049a4890()*-0.0722702);
}

double mlp::synapse0x1049a70f0() {
   return (neuron0x1049a4da0()*1.06777);
}

double mlp::synapse0x1049a7120() {
   return (neuron0x1049a5000()*-0.318605);
}

double mlp::synapse0x1049a73e0() {
   return (neuron0x1049a1af0()*-0.126674);
}

double mlp::synapse0x1049a7410() {
   return (neuron0x1049a1c50()*-0.632147);
}

double mlp::synapse0x1049a7440() {
   return (neuron0x1049a1f30()*0.597018);
}

double mlp::synapse0x1049a7470() {
   return (neuron0x1049a2210()*0.20085);
}

double mlp::synapse0x1049a74a0() {
   return (neuron0x1049a24f0()*-0.296336);
}

double mlp::synapse0x1049a74d0() {
   return (neuron0x1049a27d0()*0.760292);
}

double mlp::synapse0x1049a7500() {
   return (neuron0x1049a2ab0()*-0.239594);
}

double mlp::synapse0x1049a7530() {
   return (neuron0x1049a2d90()*0.141377);
}

double mlp::synapse0x1049a7560() {
   return (neuron0x1049a3070()*-0.262463);
}

double mlp::synapse0x1049a7590() {
   return (neuron0x1049a3350()*0.198579);
}

double mlp::synapse0x1049a75c0() {
   return (neuron0x1049a3630()*-0.103861);
}

double mlp::synapse0x1049a75f0() {
   return (neuron0x1049a3940()*-0.409291);
}

double mlp::synapse0x1049a7620() {
   return (neuron0x1049a3c50()*-0.215469);
}

double mlp::synapse0x1049a7650() {
   return (neuron0x1049a3f60()*0.35781);
}

double mlp::synapse0x1049a7680() {
   return (neuron0x1049a4270()*0.19106);
}

double mlp::synapse0x1049a76b0() {
   return (neuron0x1049a4580()*0.00237029);
}

double mlp::synapse0x1049a77e0() {
   return (neuron0x1049a4890()*-0.463817);
}

double mlp::synapse0x1049a7810() {
   return (neuron0x1049a4da0()*-0.0479496);
}

double mlp::synapse0x1049a7840() {
   return (neuron0x1049a5000()*0.481478);
}

double mlp::synapse0x1049a7b00() {
   return (neuron0x1049a1af0()*0.565289);
}

double mlp::synapse0x1049a7b30() {
   return (neuron0x1049a1c50()*1.09936);
}

double mlp::synapse0x1049a7b60() {
   return (neuron0x1049a1f30()*1.00313);
}

double mlp::synapse0x1049a7b90() {
   return (neuron0x1049a2210()*-0.152083);
}

double mlp::synapse0x1049a7bc0() {
   return (neuron0x1049a24f0()*0.0250234);
}

double mlp::synapse0x1049a7bf0() {
   return (neuron0x1049a27d0()*0.00556248);
}

double mlp::synapse0x1049a7c20() {
   return (neuron0x1049a2ab0()*0.161685);
}

double mlp::synapse0x1049a7c50() {
   return (neuron0x1049a2d90()*-0.280554);
}

double mlp::synapse0x1049a7c80() {
   return (neuron0x1049a3070()*-0.0224896);
}

double mlp::synapse0x1049a7cb0() {
   return (neuron0x1049a3350()*-0.281593);
}

double mlp::synapse0x1049a7ce0() {
   return (neuron0x1049a3630()*-0.217254);
}

double mlp::synapse0x1049a7d10() {
   return (neuron0x1049a3940()*0.147523);
}

double mlp::synapse0x1049a7d40() {
   return (neuron0x1049a3c50()*-0.200152);
}

double mlp::synapse0x1049a7d70() {
   return (neuron0x1049a3f60()*-0.424633);
}

double mlp::synapse0x1049a7da0() {
   return (neuron0x1049a4270()*0.51362);
}

double mlp::synapse0x1049a7dd0() {
   return (neuron0x1049a4580()*0.2792);
}

double mlp::synapse0x1049a7f00() {
   return (neuron0x1049a4890()*1.09572);
}

double mlp::synapse0x1049a7f30() {
   return (neuron0x1049a4da0()*0.537838);
}

double mlp::synapse0x1049a7f60() {
   return (neuron0x1049a5000()*-0.77647);
}

double mlp::synapse0x1049a8220() {
   return (neuron0x1049a1af0()*1.48415);
}

double mlp::synapse0x1049a8250() {
   return (neuron0x1049a1c50()*1.22673);
}

double mlp::synapse0x1049a8280() {
   return (neuron0x1049a1f30()*-0.0945296);
}

double mlp::synapse0x1049a82b0() {
   return (neuron0x1049a2210()*0.317575);
}

double mlp::synapse0x1049a82e0() {
   return (neuron0x1049a24f0()*-0.132377);
}

double mlp::synapse0x1049a8310() {
   return (neuron0x1049a27d0()*0.131133);
}

double mlp::synapse0x1049a8340() {
   return (neuron0x1049a2ab0()*0.368925);
}

double mlp::synapse0x1049a8370() {
   return (neuron0x1049a2d90()*-0.0567443);
}

double mlp::synapse0x1049a83a0() {
   return (neuron0x1049a3070()*-0.0439846);
}

double mlp::synapse0x1049a83d0() {
   return (neuron0x1049a3350()*0.195415);
}

double mlp::synapse0x1049a8400() {
   return (neuron0x1049a3630()*0.384808);
}

double mlp::synapse0x1049a8430() {
   return (neuron0x1049a3940()*0.106398);
}

double mlp::synapse0x1049a8460() {
   return (neuron0x1049a3c50()*-0.0151969);
}

double mlp::synapse0x1049a8490() {
   return (neuron0x1049a3f60()*0.05821);
}

double mlp::synapse0x1049a84c0() {
   return (neuron0x1049a4270()*-0.255299);
}

double mlp::synapse0x1049a84f0() {
   return (neuron0x1049a4580()*-0.405172);
}

double mlp::synapse0x1049a8620() {
   return (neuron0x1049a4890()*-0.317923);
}

double mlp::synapse0x1049a8650() {
   return (neuron0x1049a4da0()*0.135746);
}

double mlp::synapse0x1049a8680() {
   return (neuron0x1049a5000()*0.315769);
}

double mlp::synapse0x1049a8940() {
   return (neuron0x1049a1af0()*0.34522);
}

double mlp::synapse0x1049a8970() {
   return (neuron0x1049a1c50()*0.972466);
}

double mlp::synapse0x1049a89a0() {
   return (neuron0x1049a1f30()*2.16089);
}

double mlp::synapse0x1049a89d0() {
   return (neuron0x1049a2210()*-0.479477);
}

double mlp::synapse0x1049a8a00() {
   return (neuron0x1049a24f0()*0.169776);
}

double mlp::synapse0x1049a8a30() {
   return (neuron0x1049a27d0()*0.0119961);
}

double mlp::synapse0x1049a8a60() {
   return (neuron0x1049a2ab0()*-0.160561);
}

double mlp::synapse0x1049a8a90() {
   return (neuron0x1049a2d90()*-0.17546);
}

double mlp::synapse0x1049a8ac0() {
   return (neuron0x1049a3070()*0.0960843);
}

double mlp::synapse0x1049a8af0() {
   return (neuron0x1049a3350()*0.0725241);
}

double mlp::synapse0x1049a8b20() {
   return (neuron0x1049a3630()*0.0249205);
}

double mlp::synapse0x1049a8b50() {
   return (neuron0x1049a3940()*-0.00204839);
}

double mlp::synapse0x1049a8b80() {
   return (neuron0x1049a3c50()*0.016772);
}

double mlp::synapse0x1049a8bb0() {
   return (neuron0x1049a3f60()*0.162587);
}

double mlp::synapse0x1049a8be0() {
   return (neuron0x1049a4270()*-0.0509313);
}

double mlp::synapse0x1049a8c10() {
   return (neuron0x1049a4580()*0.217325);
}

double mlp::synapse0x1049a8d40() {
   return (neuron0x1049a4890()*0.0575671);
}

double mlp::synapse0x1049a8d70() {
   return (neuron0x1049a4da0()*-0.329217);
}

double mlp::synapse0x1049a8da0() {
   return (neuron0x1049a5000()*1.30536);
}

double mlp::synapse0x1049a9060() {
   return (neuron0x1049a1af0()*-0.218494);
}

double mlp::synapse0x1049a9090() {
   return (neuron0x1049a1c50()*-0.207372);
}

double mlp::synapse0x1049a90c0() {
   return (neuron0x1049a1f30()*0.0954547);
}

double mlp::synapse0x1049a90f0() {
   return (neuron0x1049a2210()*0.542976);
}

double mlp::synapse0x1049a9120() {
   return (neuron0x1049a24f0()*0.0637649);
}

double mlp::synapse0x1049a9150() {
   return (neuron0x1049a27d0()*0.043428);
}

double mlp::synapse0x1049a9180() {
   return (neuron0x1049a2ab0()*-0.303231);
}

double mlp::synapse0x1049a91b0() {
   return (neuron0x1049a2d90()*-0.0862894);
}

double mlp::synapse0x1049a91e0() {
   return (neuron0x1049a3070()*-0.13635);
}

double mlp::synapse0x1049a9210() {
   return (neuron0x1049a3350()*0.0903872);
}

double mlp::synapse0x1049a9240() {
   return (neuron0x1049a3630()*-0.288229);
}

double mlp::synapse0x1049a9270() {
   return (neuron0x1049a3940()*0.0445558);
}

double mlp::synapse0x1049a92a0() {
   return (neuron0x1049a3c50()*0.17182);
}

double mlp::synapse0x1049a92d0() {
   return (neuron0x1049a3f60()*-0.0320428);
}

double mlp::synapse0x1049a9300() {
   return (neuron0x1049a4270()*-0.533501);
}

double mlp::synapse0x1049a9330() {
   return (neuron0x1049a4580()*-0.338124);
}

double mlp::synapse0x1049a9460() {
   return (neuron0x1049a4890()*-0.151022);
}

double mlp::synapse0x1049a9490() {
   return (neuron0x1049a4da0()*0.608015);
}

double mlp::synapse0x1049a94c0() {
   return (neuron0x1049a5000()*-0.339391);
}

double mlp::synapse0x1049a9780() {
   return (neuron0x1049a1af0()*0.493518);
}

double mlp::synapse0x1049a97b0() {
   return (neuron0x1049a1c50()*-0.381133);
}

double mlp::synapse0x1049a97e0() {
   return (neuron0x1049a1f30()*0.279404);
}

double mlp::synapse0x1049a9810() {
   return (neuron0x1049a2210()*-0.0927865);
}

double mlp::synapse0x1049a9840() {
   return (neuron0x1049a24f0()*-0.00695);
}

double mlp::synapse0x1049a9870() {
   return (neuron0x1049a27d0()*-0.109356);
}

double mlp::synapse0x1049a98a0() {
   return (neuron0x1049a2ab0()*-0.264133);
}

double mlp::synapse0x1049a98d0() {
   return (neuron0x1049a2d90()*0.116935);
}

double mlp::synapse0x1049a9900() {
   return (neuron0x1049a3070()*-0.19907);
}

double mlp::synapse0x1049a9930() {
   return (neuron0x1049a3350()*-0.0916648);
}

double mlp::synapse0x1049a9960() {
   return (neuron0x1049a3630()*0.15685);
}

double mlp::synapse0x1049a9990() {
   return (neuron0x1049a3940()*0.248969);
}

double mlp::synapse0x1049a99c0() {
   return (neuron0x1049a3c50()*0.17438);
}

double mlp::synapse0x1049a99f0() {
   return (neuron0x1049a3f60()*-0.0890757);
}

double mlp::synapse0x1049a9a20() {
   return (neuron0x1049a4270()*0.0505943);
}

double mlp::synapse0x1049a9a50() {
   return (neuron0x1049a4580()*-0.509665);
}

double mlp::synapse0x1049a9b80() {
   return (neuron0x1049a4890()*0.160593);
}

double mlp::synapse0x1049a9bb0() {
   return (neuron0x1049a4da0()*-0.297427);
}

double mlp::synapse0x1049a9be0() {
   return (neuron0x1049a5000()*-0.78572);
}

double mlp::synapse0x1049a9ea0() {
   return (neuron0x1049a1af0()*0.177719);
}

double mlp::synapse0x1049a9ed0() {
   return (neuron0x1049a1c50()*0.172046);
}

double mlp::synapse0x1049a9f00() {
   return (neuron0x1049a1f30()*0.424269);
}

double mlp::synapse0x1049a9f30() {
   return (neuron0x1049a2210()*0.206208);
}

double mlp::synapse0x1049a9f60() {
   return (neuron0x1049a24f0()*-0.259476);
}

double mlp::synapse0x1049a9f90() {
   return (neuron0x1049a27d0()*0.0106566);
}

double mlp::synapse0x1049a9fc0() {
   return (neuron0x1049a2ab0()*-0.238074);
}

double mlp::synapse0x1049a9ff0() {
   return (neuron0x1049a2d90()*0.140624);
}

double mlp::synapse0x1049aa020() {
   return (neuron0x1049a3070()*-0.414052);
}

double mlp::synapse0x1049aa050() {
   return (neuron0x1049a3350()*0.267416);
}

double mlp::synapse0x1049aa080() {
   return (neuron0x1049a3630()*-0.274412);
}

double mlp::synapse0x1049aa0b0() {
   return (neuron0x1049a3940()*0.0758082);
}

double mlp::synapse0x1049aa0e0() {
   return (neuron0x1049a3c50()*-0.215362);
}

double mlp::synapse0x1049aa110() {
   return (neuron0x1049a3f60()*0.0796168);
}

double mlp::synapse0x1049aa140() {
   return (neuron0x1049a4270()*-0.288136);
}

double mlp::synapse0x1049aa170() {
   return (neuron0x1049a4580()*-0.0574788);
}

double mlp::synapse0x1049aa2a0() {
   return (neuron0x1049a4890()*0.400193);
}

double mlp::synapse0x1049aa2d0() {
   return (neuron0x1049a4da0()*-0.295422);
}

double mlp::synapse0x1049aa300() {
   return (neuron0x1049a5000()*0.486114);
}

double mlp::synapse0x1049aa5c0() {
   return (neuron0x1049a1af0()*-0.447388);
}

double mlp::synapse0x1049aa5f0() {
   return (neuron0x1049a1c50()*0.209762);
}

double mlp::synapse0x1049aa620() {
   return (neuron0x1049a1f30()*-0.535047);
}

double mlp::synapse0x1049aa650() {
   return (neuron0x1049a2210()*0.0225567);
}

double mlp::synapse0x1049aa680() {
   return (neuron0x1049a24f0()*-0.340255);
}

double mlp::synapse0x1049aa6b0() {
   return (neuron0x1049a27d0()*0.169012);
}

double mlp::synapse0x1049aa6e0() {
   return (neuron0x1049a2ab0()*-0.324813);
}

double mlp::synapse0x1049aa710() {
   return (neuron0x1049a2d90()*0.288579);
}

double mlp::synapse0x1049aa740() {
   return (neuron0x1049a3070()*0.338258);
}

double mlp::synapse0x1049aa770() {
   return (neuron0x1049a3350()*-0.363722);
}

double mlp::synapse0x1049aa7a0() {
   return (neuron0x1049a3630()*0.000298284);
}

double mlp::synapse0x1049aa7d0() {
   return (neuron0x1049a3940()*-0.295892);
}

double mlp::synapse0x1049aa800() {
   return (neuron0x1049a3c50()*0.181354);
}

double mlp::synapse0x1049aa830() {
   return (neuron0x1049a3f60()*0.287853);
}

double mlp::synapse0x1049aa860() {
   return (neuron0x1049a4270()*-0.245165);
}

double mlp::synapse0x1049aa890() {
   return (neuron0x1049a4580()*0.168599);
}

double mlp::synapse0x1049aa9c0() {
   return (neuron0x1049a4890()*-0.575014);
}

double mlp::synapse0x1049aa9f0() {
   return (neuron0x1049a4da0()*-0.268155);
}

double mlp::synapse0x1049aaa20() {
   return (neuron0x1049a5000()*-0.3974);
}

double mlp::synapse0x1049a4ca0() {
   return (neuron0x1049a1af0()*-0.145472);
}

double mlp::synapse0x1049a4cd0() {
   return (neuron0x1049a1c50()*0.470112);
}

double mlp::synapse0x1049a4d00() {
   return (neuron0x1049a1f30()*-0.328017);
}

double mlp::synapse0x1049a4d30() {
   return (neuron0x1049a2210()*-0.00443906);
}

double mlp::synapse0x1049a4d60() {
   return (neuron0x1049a24f0()*-0.292631);
}

double mlp::synapse0x1049aaee0() {
   return (neuron0x1049a27d0()*-0.427378);
}

double mlp::synapse0x1049aaf10() {
   return (neuron0x1049a2ab0()*-0.323353);
}

double mlp::synapse0x1049aaf40() {
   return (neuron0x1049a2d90()*0.399697);
}

double mlp::synapse0x1049aaf70() {
   return (neuron0x1049a3070()*0.374954);
}

double mlp::synapse0x1049aafa0() {
   return (neuron0x1049a3350()*0.150819);
}

double mlp::synapse0x1049aafd0() {
   return (neuron0x1049a3630()*-0.262084);
}

double mlp::synapse0x1049ab000() {
   return (neuron0x1049a3940()*0.124036);
}

double mlp::synapse0x1049ab030() {
   return (neuron0x1049a3c50()*0.262325);
}

double mlp::synapse0x1049ab060() {
   return (neuron0x1049a3f60()*0.000851129);
}

double mlp::synapse0x1049ab090() {
   return (neuron0x1049a4270()*-0.367072);
}

double mlp::synapse0x1049ab0c0() {
   return (neuron0x1049a4580()*0.269821);
}

double mlp::synapse0x1049ab1f0() {
   return (neuron0x1049a4890()*0.0423179);
}

double mlp::synapse0x1049ab220() {
   return (neuron0x1049a4da0()*0.294618);
}

double mlp::synapse0x1049ab250() {
   return (neuron0x1049a5000()*0.0641906);
}

double mlp::synapse0x1049ab510() {
   return (neuron0x1049a1af0()*-0.175468);
}

double mlp::synapse0x1049ab540() {
   return (neuron0x1049a1c50()*0.200765);
}

double mlp::synapse0x1049ab570() {
   return (neuron0x1049a1f30()*2.19546);
}

double mlp::synapse0x1049ab5a0() {
   return (neuron0x1049a2210()*0.0828266);
}

double mlp::synapse0x1049ab5d0() {
   return (neuron0x1049a24f0()*-0.00408421);
}

double mlp::synapse0x1049ab600() {
   return (neuron0x1049a27d0()*-0.187922);
}

double mlp::synapse0x1049ab630() {
   return (neuron0x1049a2ab0()*0.223763);
}

double mlp::synapse0x1049ab660() {
   return (neuron0x1049a2d90()*-0.0101512);
}

double mlp::synapse0x1049ab690() {
   return (neuron0x1049a3070()*-0.0536278);
}

double mlp::synapse0x1049ab6c0() {
   return (neuron0x1049a3350()*0.22075);
}

double mlp::synapse0x1049ab6f0() {
   return (neuron0x1049a3630()*0.185205);
}

double mlp::synapse0x1049ab720() {
   return (neuron0x1049a3940()*0.105086);
}

double mlp::synapse0x1049ab750() {
   return (neuron0x1049a3c50()*-0.00589176);
}

double mlp::synapse0x1049ab780() {
   return (neuron0x1049a3f60()*-0.299222);
}

double mlp::synapse0x1049ab7b0() {
   return (neuron0x1049a4270()*0.33905);
}

double mlp::synapse0x1049ab7e0() {
   return (neuron0x1049a4580()*0.048177);
}

double mlp::synapse0x1049ab910() {
   return (neuron0x1049a4890()*0.399125);
}

double mlp::synapse0x1049ab940() {
   return (neuron0x1049a4da0()*-0.252055);
}

double mlp::synapse0x1049ab970() {
   return (neuron0x1049a5000()*0.323459);
}

double mlp::synapse0x1049abc30() {
   return (neuron0x1049a1af0()*0.85171);
}

double mlp::synapse0x1049abd60() {
   return (neuron0x1049a1c50()*-2.68759);
}

double mlp::synapse0x104990170() {
   return (neuron0x1049a1f30()*-1.19817);
}

double mlp::synapse0x1049901a0() {
   return (neuron0x1049a2210()*-0.122683);
}

double mlp::synapse0x1049a2110() {
   return (neuron0x1049a24f0()*0.0470057);
}

double mlp::synapse0x1049a2140() {
   return (neuron0x1049a27d0()*0.0976778);
}

double mlp::synapse0x1049a26d0() {
   return (neuron0x1049a2ab0()*-0.0355046);
}

double mlp::synapse0x1049a2700() {
   return (neuron0x1049a2d90()*-0.00031807);
}

double mlp::synapse0x1049a2c90() {
   return (neuron0x1049a3070()*-0.0565026);
}

double mlp::synapse0x1049a2cc0() {
   return (neuron0x1049a3350()*0.0507815);
}

double mlp::synapse0x1049a3250() {
   return (neuron0x1049a3630()*-0.0517036);
}

double mlp::synapse0x1049a3280() {
   return (neuron0x1049a3940()*0.150461);
}

double mlp::synapse0x1049a3840() {
   return (neuron0x1049a3c50()*0.751173);
}

double mlp::synapse0x1049a3870() {
   return (neuron0x1049a3f60()*-0.466339);
}

double mlp::synapse0x1049a3e60() {
   return (neuron0x1049a4270()*0.240662);
}

double mlp::synapse0x1049a3e90() {
   return (neuron0x1049a4580()*-0.837293);
}

double mlp::synapse0x1049a4790() {
   return (neuron0x1049a4890()*1.0068);
}

double mlp::synapse0x1049a47c0() {
   return (neuron0x1049a4da0()*-0.0409022);
}

double mlp::synapse0x1049a4aa0() {
   return (neuron0x1049a5000()*-0.214307);
}

double mlp::synapse0x1049a4480() {
   return (neuron0x1049a1af0()*0.460569);
}

double mlp::synapse0x1049a44b0() {
   return (neuron0x1049a1c50()*0.200712);
}

double mlp::synapse0x1049a4170() {
   return (neuron0x1049a1f30()*0.0186322);
}

double mlp::synapse0x1049a41a0() {
   return (neuron0x1049a2210()*-0.435186);
}

double mlp::synapse0x1049a3b50() {
   return (neuron0x1049a24f0()*0.364714);
}

double mlp::synapse0x1049a3b80() {
   return (neuron0x1049a27d0()*-0.680115);
}

double mlp::synapse0x1049a3530() {
   return (neuron0x1049a2ab0()*-0.391914);
}

double mlp::synapse0x1049a3560() {
   return (neuron0x1049a2d90()*-0.282326);
}

double mlp::synapse0x1049a2f70() {
   return (neuron0x1049a3070()*0.286068);
}

double mlp::synapse0x1049a2fa0() {
   return (neuron0x1049a3350()*0.211153);
}

double mlp::synapse0x1049a29b0() {
   return (neuron0x1049a3630()*-0.092845);
}

double mlp::synapse0x1049a29e0() {
   return (neuron0x1049a3940()*0.118925);
}

double mlp::synapse0x1049a23f0() {
   return (neuron0x1049a3c50()*0.0712573);
}

double mlp::synapse0x1049a2420() {
   return (neuron0x1049a3f60()*-0.328836);
}

double mlp::synapse0x1049a1e30() {
   return (neuron0x1049a4270()*0.0609664);
}

double mlp::synapse0x1049a1e60() {
   return (neuron0x1049a4580()*-0.0583978);
}

double mlp::synapse0x1049ad2f0() {
   return (neuron0x1049a4890()*0.451711);
}

double mlp::synapse0x1049ad320() {
   return (neuron0x1049a4da0()*0.301984);
}

double mlp::synapse0x1049ad350() {
   return (neuron0x1049a5000()*-0.055158);
}

double mlp::synapse0x1049ad610() {
   return (neuron0x1049a1af0()*-0.143089);
}

double mlp::synapse0x1049ad640() {
   return (neuron0x1049a1c50()*1.03656);
}

double mlp::synapse0x1049ad670() {
   return (neuron0x1049a1f30()*0.28763);
}

double mlp::synapse0x1049ad6a0() {
   return (neuron0x1049a2210()*-0.179285);
}

double mlp::synapse0x1049ad6d0() {
   return (neuron0x1049a24f0()*-0.13033);
}

double mlp::synapse0x1049ad700() {
   return (neuron0x1049a27d0()*0.347297);
}

double mlp::synapse0x1049ad730() {
   return (neuron0x1049a2ab0()*-0.288085);
}

double mlp::synapse0x1049ad760() {
   return (neuron0x1049a2d90()*0.156264);
}

double mlp::synapse0x1049ad790() {
   return (neuron0x1049a3070()*-0.311754);
}

double mlp::synapse0x1049ad7c0() {
   return (neuron0x1049a3350()*0.326127);
}

double mlp::synapse0x1049ad7f0() {
   return (neuron0x1049a3630()*0.2086);
}

double mlp::synapse0x1049ad820() {
   return (neuron0x1049a3940()*-0.00487248);
}

double mlp::synapse0x1049ad850() {
   return (neuron0x1049a3c50()*0.0742642);
}

double mlp::synapse0x1049ad880() {
   return (neuron0x1049a3f60()*-0.0841961);
}

double mlp::synapse0x1049ad8b0() {
   return (neuron0x1049a4270()*-0.436912);
}

double mlp::synapse0x1049ad8e0() {
   return (neuron0x1049a4580()*0.0295221);
}

double mlp::synapse0x1049ada10() {
   return (neuron0x1049a4890()*0.164251);
}

double mlp::synapse0x1049ada40() {
   return (neuron0x1049a4da0()*0.0836878);
}

double mlp::synapse0x1049ada70() {
   return (neuron0x1049a5000()*0.26928);
}

double mlp::synapse0x1049add30() {
   return (neuron0x1049a1af0()*0.178651);
}

double mlp::synapse0x1049add60() {
   return (neuron0x1049a1c50()*0.550193);
}

double mlp::synapse0x1049add90() {
   return (neuron0x1049a1f30()*0.610245);
}

double mlp::synapse0x1049addc0() {
   return (neuron0x1049a2210()*-0.253375);
}

double mlp::synapse0x1049addf0() {
   return (neuron0x1049a24f0()*-0.223155);
}

double mlp::synapse0x1049ade20() {
   return (neuron0x1049a27d0()*-0.00357914);
}

double mlp::synapse0x1049ade50() {
   return (neuron0x1049a2ab0()*0.0212219);
}

double mlp::synapse0x1049ade80() {
   return (neuron0x1049a2d90()*-0.305897);
}

double mlp::synapse0x1049adeb0() {
   return (neuron0x1049a3070()*0.119446);
}

double mlp::synapse0x1049adee0() {
   return (neuron0x1049a3350()*-0.310795);
}

double mlp::synapse0x1049adf10() {
   return (neuron0x1049a3630()*0.0340441);
}

double mlp::synapse0x1049adf40() {
   return (neuron0x1049a3940()*0.0480882);
}

double mlp::synapse0x1049adf70() {
   return (neuron0x1049a3c50()*-0.129355);
}

double mlp::synapse0x1049adfa0() {
   return (neuron0x1049a3f60()*0.136978);
}

double mlp::synapse0x1049adfd0() {
   return (neuron0x1049a4270()*0.0614768);
}

double mlp::synapse0x1049ae000() {
   return (neuron0x1049a4580()*0.195479);
}

double mlp::synapse0x1049ae130() {
   return (neuron0x1049a4890()*0.260133);
}

double mlp::synapse0x1049ae160() {
   return (neuron0x1049a4da0()*-0.214919);
}

double mlp::synapse0x1049ae190() {
   return (neuron0x1049a5000()*-0.0836841);
}

double mlp::synapse0x1049a1ac0() {
   return (neuron0x104990280()*0.281132);
}

double mlp::synapse0x1049ae320() {
   return (neuron0x1049a55a0()*-0.692739);
}

double mlp::synapse0x1049ae350() {
   return (neuron0x1049a5dd0()*-0.549104);
}

double mlp::synapse0x1049ae380() {
   return (neuron0x1049a64f0()*-0.591735);
}

double mlp::synapse0x1049ae3b0() {
   return (neuron0x1049a6a30()*-0.760208);
}

double mlp::synapse0x1049ae3e0() {
   return (neuron0x1049a7150()*0.392992);
}

double mlp::synapse0x1049ae410() {
   return (neuron0x1049a7870()*0.562724);
}

double mlp::synapse0x1049ae440() {
   return (neuron0x1049a7f90()*-0.350901);
}

double mlp::synapse0x1049ae470() {
   return (neuron0x1049a86b0()*0.81359);
}

double mlp::synapse0x1049ae4a0() {
   return (neuron0x1049a8dd0()*0.594053);
}

double mlp::synapse0x1049ae4d0() {
   return (neuron0x1049a94f0()*0.513224);
}

double mlp::synapse0x1049ae500() {
   return (neuron0x1049a9c10()*-0.240445);
}

double mlp::synapse0x1049ae530() {
   return (neuron0x1049aa330()*0.0417417);
}

double mlp::synapse0x1049ae560() {
   return (neuron0x1049aaa50()*0.117146);
}

double mlp::synapse0x1049ae590() {
   return (neuron0x1049ab280()*0.97668);
}

double mlp::synapse0x1049ae5c0() {
   return (neuron0x1049ab9a0()*-0.712709);
}

double mlp::synapse0x1049ae6f0() {
   return (neuron0x1049ad090()*-0.169505);
}

double mlp::synapse0x1049ae720() {
   return (neuron0x1049ad380()*-0.263499);
}

double mlp::synapse0x1049ae750() {
   return (neuron0x1049adaa0()*-0.183419);
}

double mlp::synapse0x1049ae9e0() {
   return (neuron0x104990280()*-0.278219);
}

double mlp::synapse0x1049aea10() {
   return (neuron0x1049a55a0()*0.679041);
}

double mlp::synapse0x1049aea40() {
   return (neuron0x1049a5dd0()*0.5185);
}

double mlp::synapse0x1049aea70() {
   return (neuron0x1049a64f0()*0.617876);
}

double mlp::synapse0x1049aeaa0() {
   return (neuron0x1049a6a30()*0.768702);
}

double mlp::synapse0x1049aead0() {
   return (neuron0x1049a7150()*-0.381536);
}

double mlp::synapse0x1049aeb00() {
   return (neuron0x1049a7870()*-0.593246);
}

double mlp::synapse0x1049aeb30() {
   return (neuron0x1049a7f90()*0.313911);
}

double mlp::synapse0x1049aeb60() {
   return (neuron0x1049a86b0()*-0.810355);
}

double mlp::synapse0x1049aeb90() {
   return (neuron0x1049a8dd0()*-0.571286);
}

double mlp::synapse0x1049aebc0() {
   return (neuron0x1049a94f0()*-0.507955);
}

double mlp::synapse0x1049aebf0() {
   return (neuron0x1049a9c10()*0.292707);
}

double mlp::synapse0x1049aec20() {
   return (neuron0x1049aa330()*-0.0166075);
}

double mlp::synapse0x1049aec50() {
   return (neuron0x1049aaa50()*-0.17903);
}

double mlp::synapse0x1049aec80() {
   return (neuron0x1049ab280()*-0.969111);
}

double mlp::synapse0x1049aecb0() {
   return (neuron0x1049ab9a0()*0.702558);
}

double mlp::synapse0x1049aede0() {
   return (neuron0x1049ad090()*0.171786);
}

double mlp::synapse0x1049aee10() {
   return (neuron0x1049ad380()*0.296004);
}

double mlp::synapse0x1049aee40() {
   return (neuron0x1049adaa0()*0.248016);
}

