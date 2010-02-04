#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15) {
   input0 = (in0 - 2.37268)/1.62186;
   input1 = (in1 - -0.69584)/0.743689;
   input2 = (in2 - 1.38702)/3.63106;
   input3 = (in3 - 41.5219)/24.7421;
   input4 = (in4 - 0.413249)/2.40768;
   input5 = (in5 - 1.50594)/0.996833;
   input6 = (in6 - 45.8768)/41.8489;
   input7 = (in7 - 2.27386)/0.798076;
   input8 = (in8 - 2.58192)/0.714008;
   input9 = (in9 - 1.44049)/5.92353;
   input10 = (in10 - 238.338)/11900.2;
   input11 = (in11 - 5.55497)/9.40278;
   input12 = (in12 - 3.91834)/1.61305;
   input13 = (in13 - 43.438)/98.1618;
   input14 = (in14 - 50.5826)/99.7868;
   input15 = (in15 - 88.7971)/52.387;
   switch(index) {
     case 0:
         return neuron0x1049bd390();
     case 1:
         return neuron0x1049bd7f0();
     case 2:
         return neuron0x1049bdcc0();
     case 3:
         return neuron0x1049be320();
     case 4:
         return neuron0x1049be950();
     case 5:
         return neuron0x1049befb0();
     case 6:
         return neuron0x1049bf610();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 2.37268)/1.62186;
   input1 = (input[1] - -0.69584)/0.743689;
   input2 = (input[2] - 1.38702)/3.63106;
   input3 = (input[3] - 41.5219)/24.7421;
   input4 = (input[4] - 0.413249)/2.40768;
   input5 = (input[5] - 1.50594)/0.996833;
   input6 = (input[6] - 45.8768)/41.8489;
   input7 = (input[7] - 2.27386)/0.798076;
   input8 = (input[8] - 2.58192)/0.714008;
   input9 = (input[9] - 1.44049)/5.92353;
   input10 = (input[10] - 238.338)/11900.2;
   input11 = (input[11] - 5.55497)/9.40278;
   input12 = (input[12] - 3.91834)/1.61305;
   input13 = (input[13] - 43.438)/98.1618;
   input14 = (input[14] - 50.5826)/99.7868;
   input15 = (input[15] - 88.7971)/52.387;
   switch(index) {
     case 0:
         return neuron0x1049bd390();
     case 1:
         return neuron0x1049bd7f0();
     case 2:
         return neuron0x1049bdcc0();
     case 3:
         return neuron0x1049be320();
     case 4:
         return neuron0x1049be950();
     case 5:
         return neuron0x1049befb0();
     case 6:
         return neuron0x1049bf610();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049b32d0() {
   return input0;
}

double mlp::neuron0x1049b3430() {
   return input1;
}

double mlp::neuron0x1049b3690() {
   return input2;
}

double mlp::neuron0x1049b3970() {
   return input3;
}

double mlp::neuron0x1049b3c50() {
   return input4;
}

double mlp::neuron0x1049b3f60() {
   return input5;
}

double mlp::neuron0x1049b4270() {
   return input6;
}

double mlp::neuron0x1049b4580() {
   return input7;
}

double mlp::neuron0x1049b4890() {
   return input8;
}

double mlp::neuron0x1049b4ba0() {
   return input9;
}

double mlp::neuron0x1049b4eb0() {
   return input10;
}

double mlp::neuron0x1049b51c0() {
   return input11;
}

double mlp::neuron0x1049b54d0() {
   return input12;
}

double mlp::neuron0x1049b57e0() {
   return input13;
}

double mlp::neuron0x1049b5ac0() {
   return input14;
}

double mlp::neuron0x1049b5da0() {
   return input15;
}

double mlp::input0x1049b3170() {
   double input = -0.765636;
   input += synapse0x1049a2e60();
   input += synapse0x1049b2320();
   input += synapse0x1049b60b0();
   input += synapse0x1049b60e0();
   input += synapse0x1049b6110();
   input += synapse0x1049b6140();
   input += synapse0x1049b6170();
   input += synapse0x1049b61a0();
   input += synapse0x1049b61d0();
   input += synapse0x1049b6200();
   input += synapse0x1049b6230();
   input += synapse0x1049b6260();
   input += synapse0x1049b6290();
   input += synapse0x1049b62c0();
   input += synapse0x1049b62f0();
   input += synapse0x1049b6320();
   return input;
}

double mlp::neuron0x1049b3170() {
   double input = input0x1049b3170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b6450() {
   double input = 0.0797373;
   input += synapse0x104997f70();
   input += synapse0x1049b67b0();
   input += synapse0x1049b67e0();
   input += synapse0x1049b6810();
   input += synapse0x1049b6840();
   input += synapse0x1049b6870();
   input += synapse0x1049b68a0();
   input += synapse0x1049b68d0();
   input += synapse0x1049b6900();
   input += synapse0x1049b6930();
   input += synapse0x1049b6960();
   input += synapse0x1049b6990();
   input += synapse0x1049b69c0();
   input += synapse0x1049b69f0();
   input += synapse0x1049b6a20();
   input += synapse0x1049b6a50();
   return input;
}

double mlp::neuron0x1049b6450() {
   double input = input0x1049b6450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b6b80() {
   double input = -0.209815;
   input += synapse0x1049980f0();
   input += synapse0x1049b66b0();
   input += synapse0x1049b66e0();
   input += synapse0x1049b6710();
   input += synapse0x1049b6740();
   input += synapse0x1049b6770();
   input += synapse0x1049b6fe0();
   input += synapse0x1049b7010();
   input += synapse0x1049b7040();
   input += synapse0x1049b7070();
   input += synapse0x1049b70a0();
   input += synapse0x1049b70d0();
   input += synapse0x1049b7100();
   input += synapse0x1049b7130();
   input += synapse0x1049b7160();
   input += synapse0x1049b7190();
   return input;
}

double mlp::neuron0x1049b6b80() {
   double input = input0x1049b6b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b72c0() {
   double input = 0.675954;
   input += synapse0x1049b7550();
   input += synapse0x1049b7580();
   input += synapse0x1049b75b0();
   input += synapse0x1049b75e0();
   input += synapse0x1049b7610();
   input += synapse0x1049b7640();
   input += synapse0x1049b7670();
   input += synapse0x1049b76a0();
   input += synapse0x1049b76d0();
   input += synapse0x1049b7700();
   input += synapse0x1049b7730();
   input += synapse0x1049b7760();
   input += synapse0x1049b7790();
   input += synapse0x1049b77c0();
   input += synapse0x1049b77f0();
   input += synapse0x1049b7820();
   return input;
}

double mlp::neuron0x1049b72c0() {
   double input = input0x1049b72c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b7950() {
   double input = 0.480979;
   input += synapse0x1049b7be0();
   input += synapse0x1049b6de0();
   input += synapse0x1049b6e10();
   input += synapse0x1049b6e40();
   input += synapse0x1049b6e70();
   input += synapse0x1049b6ea0();
   input += synapse0x1049b6ed0();
   input += synapse0x1049b6f00();
   input += synapse0x1049b6f30();
   input += synapse0x1049b6f60();
   input += synapse0x1049b6f90();
   input += synapse0x1049b7c10();
   input += synapse0x1049b7c40();
   input += synapse0x1049b7c70();
   input += synapse0x1049b7ca0();
   input += synapse0x1049b7cd0();
   return input;
}

double mlp::neuron0x1049b7950() {
   double input = input0x1049b7950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b7e00() {
   double input = -0.412581;
   input += synapse0x1049b8090();
   input += synapse0x1049b80c0();
   input += synapse0x1049b80f0();
   input += synapse0x1049b8120();
   input += synapse0x1049b8150();
   input += synapse0x1049b8180();
   input += synapse0x1049b81b0();
   input += synapse0x1049b81e0();
   input += synapse0x1049b8210();
   input += synapse0x1049b8240();
   input += synapse0x1049b8270();
   input += synapse0x1049b82a0();
   input += synapse0x1049b82d0();
   input += synapse0x1049b8300();
   input += synapse0x1049b8330();
   input += synapse0x1049b8360();
   return input;
}

double mlp::neuron0x1049b7e00() {
   double input = input0x1049b7e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b8490() {
   double input = -0.582718;
   input += synapse0x1049b8720();
   input += synapse0x1049b8750();
   input += synapse0x1049b8780();
   input += synapse0x1049b87b0();
   input += synapse0x1049b87e0();
   input += synapse0x1049b8810();
   input += synapse0x1049b8840();
   input += synapse0x1049b8870();
   input += synapse0x1049b88a0();
   input += synapse0x1049b88d0();
   input += synapse0x1049b8900();
   input += synapse0x1049b8930();
   input += synapse0x1049b8960();
   input += synapse0x1049b8990();
   input += synapse0x1049b89c0();
   input += synapse0x1049b89f0();
   return input;
}

double mlp::neuron0x1049b8490() {
   double input = input0x1049b8490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b8b20() {
   double input = 0.084969;
   input += synapse0x1049b8db0();
   input += synapse0x1049b8de0();
   input += synapse0x1049b8e10();
   input += synapse0x1049b8e40();
   input += synapse0x1049b8e70();
   input += synapse0x1049b8ea0();
   input += synapse0x1049b8ed0();
   input += synapse0x1049b8f00();
   input += synapse0x1049b8f30();
   input += synapse0x1049b8f60();
   input += synapse0x1049b8f90();
   input += synapse0x1049b8fc0();
   input += synapse0x1049b8ff0();
   input += synapse0x1049b9020();
   input += synapse0x1049b9050();
   input += synapse0x1049b9080();
   return input;
}

double mlp::neuron0x1049b8b20() {
   double input = input0x1049b8b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b91b0() {
   double input = -0.140104;
   input += synapse0x1049b9440();
   input += synapse0x1049b9470();
   input += synapse0x1049b94a0();
   input += synapse0x1049b94d0();
   input += synapse0x1049b9500();
   input += synapse0x1049b9530();
   input += synapse0x1049b9560();
   input += synapse0x1049b9590();
   input += synapse0x1049b95c0();
   input += synapse0x1049b95f0();
   input += synapse0x1049b9620();
   input += synapse0x1049b9650();
   input += synapse0x1049b9680();
   input += synapse0x1049b96b0();
   input += synapse0x1049b96e0();
   input += synapse0x1049b9710();
   return input;
}

double mlp::neuron0x1049b91b0() {
   double input = input0x1049b91b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b9840() {
   double input = -0.218651;
   input += synapse0x1049b9ad0();
   input += synapse0x1049b9b00();
   input += synapse0x1049b9b30();
   input += synapse0x1049b9b60();
   input += synapse0x1049b9b90();
   input += synapse0x1049b9bc0();
   input += synapse0x1049b9bf0();
   input += synapse0x1049b9c20();
   input += synapse0x1049b9c50();
   input += synapse0x1049b9c80();
   input += synapse0x1049b9cb0();
   input += synapse0x1049b9ce0();
   input += synapse0x1049b9d10();
   input += synapse0x1049b9d40();
   input += synapse0x1049b9d70();
   input += synapse0x1049b9da0();
   return input;
}

double mlp::neuron0x1049b9840() {
   double input = input0x1049b9840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049b9ed0() {
   double input = 0.325208;
   input += synapse0x1049ba160();
   input += synapse0x1049ba190();
   input += synapse0x1049ba1c0();
   input += synapse0x1049ba1f0();
   input += synapse0x1049ba220();
   input += synapse0x1049ba250();
   input += synapse0x1049ba280();
   input += synapse0x1049ba2b0();
   input += synapse0x1049ba2e0();
   input += synapse0x1049ba310();
   input += synapse0x1049ba340();
   input += synapse0x1049ba370();
   input += synapse0x1049ba3a0();
   input += synapse0x1049ba3d0();
   input += synapse0x1049ba400();
   input += synapse0x1049ba430();
   return input;
}

double mlp::neuron0x1049b9ed0() {
   double input = input0x1049b9ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ba560() {
   double input = 0.405388;
   input += synapse0x1049ba7f0();
   input += synapse0x1049ba820();
   input += synapse0x1049ba850();
   input += synapse0x1049ba880();
   input += synapse0x1049ba8b0();
   input += synapse0x1049ba8e0();
   input += synapse0x1049ba910();
   input += synapse0x1049ba940();
   input += synapse0x1049ba970();
   input += synapse0x1049ba9a0();
   input += synapse0x1049ba9d0();
   input += synapse0x1049baa00();
   input += synapse0x1049baa30();
   input += synapse0x1049baa60();
   input += synapse0x1049baa90();
   input += synapse0x1049baac0();
   return input;
}

double mlp::neuron0x1049ba560() {
   double input = input0x1049ba560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049babf0() {
   double input = 0.397942;
   input += synapse0x1049bae80();
   input += synapse0x1049baeb0();
   input += synapse0x1049baee0();
   input += synapse0x1049baf10();
   input += synapse0x1049baf40();
   input += synapse0x1049baf70();
   input += synapse0x1049bafa0();
   input += synapse0x1049bafd0();
   input += synapse0x1049bb000();
   input += synapse0x1049bb030();
   input += synapse0x1049bb060();
   input += synapse0x1049bb090();
   input += synapse0x1049bb0c0();
   input += synapse0x1049bb0f0();
   input += synapse0x1049bb120();
   input += synapse0x1049bb150();
   return input;
}

double mlp::neuron0x1049babf0() {
   double input = input0x1049babf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bb280() {
   double input = 0.596236;
   input += synapse0x1049bb510();
   input += synapse0x1049bb540();
   input += synapse0x1049bb570();
   input += synapse0x1049bb5a0();
   input += synapse0x1049bb5d0();
   input += synapse0x1049bb600();
   input += synapse0x1049bb630();
   input += synapse0x1049bb660();
   input += synapse0x1049bb690();
   input += synapse0x1049bb6c0();
   input += synapse0x1049bb6f0();
   input += synapse0x1049bb720();
   input += synapse0x1049bb750();
   input += synapse0x1049bb780();
   input += synapse0x1049bb7b0();
   input += synapse0x1049bb7e0();
   return input;
}

double mlp::neuron0x1049bb280() {
   double input = input0x1049bb280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bb910() {
   double input = -0.253691;
   input += synapse0x1049bbba0();
   input += synapse0x1049bbbd0();
   input += synapse0x1049bbc00();
   input += synapse0x1049bbc30();
   input += synapse0x1049bbc60();
   input += synapse0x1049bbc90();
   input += synapse0x1049bbcc0();
   input += synapse0x1049bbcf0();
   input += synapse0x1049bbd20();
   input += synapse0x1049bbd50();
   input += synapse0x1049bbd80();
   input += synapse0x1049bbdb0();
   input += synapse0x1049bbde0();
   input += synapse0x1049bbe10();
   input += synapse0x1049bbe40();
   input += synapse0x1049bbe70();
   return input;
}

double mlp::neuron0x1049bb910() {
   double input = input0x1049bb910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bbfa0() {
   double input = -0.564383;
   input += synapse0x1049bc230();
   input += synapse0x1049bc360();
   input += synapse0x1049b3000();
   input += synapse0x1049b3030();
   input += synapse0x1049b3870();
   input += synapse0x1049b38a0();
   input += synapse0x1049b3e60();
   input += synapse0x1049b3e90();
   input += synapse0x1049b4480();
   input += synapse0x1049b44b0();
   input += synapse0x1049b4aa0();
   input += synapse0x1049b4ad0();
   input += synapse0x1049b50c0();
   input += synapse0x1049b50f0();
   input += synapse0x1049b56e0();
   input += synapse0x1049b5710();
   return input;
}

double mlp::neuron0x1049bbfa0() {
   double input = input0x1049bbfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049bd390() {
   double input = 0.348809;
   input += synapse0x1049b5fe0();
   input += synapse0x1049b53d0();
   input += synapse0x1049b5400();
   input += synapse0x1049b4db0();
   input += synapse0x1049b4de0();
   input += synapse0x1049b4790();
   input += synapse0x1049b47c0();
   input += synapse0x1049b4170();
   input += synapse0x1049b41a0();
   input += synapse0x1049b3b50();
   input += synapse0x1049b3b80();
   input += synapse0x1049b3590();
   input += synapse0x1049b35c0();
   input += synapse0x1049a3770();
   input += synapse0x1049a37a0();
   input += synapse0x1049a37d0();
   return input;
}

double mlp::neuron0x1049bd390() {
   double input = input0x1049bd390();
   return (input * 1)+0;
}

double mlp::input0x1049bd7f0() {
   double input = 0.104027;
   input += synapse0x1049a3880();
   input += synapse0x1049a35c0();
   input += synapse0x1049a35f0();
   input += synapse0x1049bd950();
   input += synapse0x1049bd980();
   input += synapse0x1049bd9b0();
   input += synapse0x1049bd9e0();
   input += synapse0x1049bda10();
   input += synapse0x1049bda40();
   input += synapse0x1049bda70();
   input += synapse0x1049bdaa0();
   input += synapse0x1049bdad0();
   input += synapse0x1049bdb00();
   input += synapse0x1049bdb30();
   input += synapse0x1049bdb60();
   input += synapse0x1049bdb90();
   return input;
}

double mlp::neuron0x1049bd7f0() {
   double input = input0x1049bd7f0();
   return (input * 1)+0;
}

double mlp::input0x1049bdcc0() {
   double input = 0.0589086;
   input += synapse0x1049bdf20();
   input += synapse0x1049bdf50();
   input += synapse0x1049bdf80();
   input += synapse0x1049bdfb0();
   input += synapse0x1049bdfe0();
   input += synapse0x1049be010();
   input += synapse0x1049be040();
   input += synapse0x1049be070();
   input += synapse0x1049be0a0();
   input += synapse0x1049be0d0();
   input += synapse0x1049be100();
   input += synapse0x1049be130();
   input += synapse0x1049be160();
   input += synapse0x1049be190();
   input += synapse0x1049be1c0();
   input += synapse0x1049be1f0();
   return input;
}

double mlp::neuron0x1049bdcc0() {
   double input = input0x1049bdcc0();
   return (input * 1)+0;
}

double mlp::input0x1049be320() {
   double input = 0.528919;
   input += synapse0x1049b5fb0();
   input += synapse0x1049be580();
   input += synapse0x1049be5b0();
   input += synapse0x1049be5e0();
   input += synapse0x1049be610();
   input += synapse0x1049be640();
   input += synapse0x1049be670();
   input += synapse0x1049be6a0();
   input += synapse0x1049be6d0();
   input += synapse0x1049be700();
   input += synapse0x1049be730();
   input += synapse0x1049be760();
   input += synapse0x1049be790();
   input += synapse0x1049be7c0();
   input += synapse0x1049be7f0();
   input += synapse0x1049be820();
   return input;
}

double mlp::neuron0x1049be320() {
   double input = input0x1049be320();
   return (input * 1)+0;
}

double mlp::input0x1049be950() {
   double input = -0.138137;
   input += synapse0x1049bebb0();
   input += synapse0x1049bebe0();
   input += synapse0x1049bec10();
   input += synapse0x1049bec40();
   input += synapse0x1049bec70();
   input += synapse0x1049beca0();
   input += synapse0x1049becd0();
   input += synapse0x1049bed00();
   input += synapse0x1049bed30();
   input += synapse0x1049bed60();
   input += synapse0x1049bed90();
   input += synapse0x1049bedc0();
   input += synapse0x1049bedf0();
   input += synapse0x1049bee20();
   input += synapse0x1049bee50();
   input += synapse0x1049bee80();
   return input;
}

double mlp::neuron0x1049be950() {
   double input = input0x1049be950();
   return (input * 1)+0;
}

double mlp::input0x1049befb0() {
   double input = -0.218261;
   input += synapse0x1049bf210();
   input += synapse0x1049bf240();
   input += synapse0x1049bf270();
   input += synapse0x1049bf2a0();
   input += synapse0x1049bf2d0();
   input += synapse0x1049bf300();
   input += synapse0x1049bf330();
   input += synapse0x1049bf360();
   input += synapse0x1049bf390();
   input += synapse0x1049bf3c0();
   input += synapse0x1049bf3f0();
   input += synapse0x1049bf420();
   input += synapse0x1049bf450();
   input += synapse0x1049bf480();
   input += synapse0x1049bf4b0();
   input += synapse0x1049bf4e0();
   return input;
}

double mlp::neuron0x1049befb0() {
   double input = input0x1049befb0();
   return (input * 1)+0;
}

double mlp::input0x1049bf610() {
   double input = -0.375252;
   input += synapse0x1049bf870();
   input += synapse0x1049bf8a0();
   input += synapse0x1049bf8d0();
   input += synapse0x1049bf900();
   input += synapse0x1049bf930();
   input += synapse0x1049bf960();
   input += synapse0x1049bf990();
   input += synapse0x1049bf9c0();
   input += synapse0x1049bf9f0();
   input += synapse0x1049bfa20();
   input += synapse0x1049bfa50();
   input += synapse0x1049bfa80();
   input += synapse0x1049bfab0();
   input += synapse0x1049bfae0();
   input += synapse0x1049bfb10();
   input += synapse0x1049bfb40();
   return input;
}

double mlp::neuron0x1049bf610() {
   double input = input0x1049bf610();
   return (input * 1)+0;
}

double mlp::synapse0x1049a2e60() {
   return (neuron0x1049b32d0()*0.173714);
}

double mlp::synapse0x1049b2320() {
   return (neuron0x1049b3430()*-0.216182);
}

double mlp::synapse0x1049b60b0() {
   return (neuron0x1049b3690()*-0.0425522);
}

double mlp::synapse0x1049b60e0() {
   return (neuron0x1049b3970()*0.0337246);
}

double mlp::synapse0x1049b6110() {
   return (neuron0x1049b3c50()*0.432292);
}

double mlp::synapse0x1049b6140() {
   return (neuron0x1049b3f60()*0.187948);
}

double mlp::synapse0x1049b6170() {
   return (neuron0x1049b4270()*0.364643);
}

double mlp::synapse0x1049b61a0() {
   return (neuron0x1049b4580()*-0.108925);
}

double mlp::synapse0x1049b61d0() {
   return (neuron0x1049b4890()*0.0663271);
}

double mlp::synapse0x1049b6200() {
   return (neuron0x1049b4ba0()*0.304384);
}

double mlp::synapse0x1049b6230() {
   return (neuron0x1049b4eb0()*0.0857642);
}

double mlp::synapse0x1049b6260() {
   return (neuron0x1049b51c0()*0.484062);
}

double mlp::synapse0x1049b6290() {
   return (neuron0x1049b54d0()*0.278949);
}

double mlp::synapse0x1049b62c0() {
   return (neuron0x1049b57e0()*-0.291399);
}

double mlp::synapse0x1049b62f0() {
   return (neuron0x1049b5ac0()*0.0236841);
}

double mlp::synapse0x1049b6320() {
   return (neuron0x1049b5da0()*-0.155296);
}

double mlp::synapse0x104997f70() {
   return (neuron0x1049b32d0()*-0.815719);
}

double mlp::synapse0x1049b67b0() {
   return (neuron0x1049b3430()*0.0986213);
}

double mlp::synapse0x1049b67e0() {
   return (neuron0x1049b3690()*-0.483611);
}

double mlp::synapse0x1049b6810() {
   return (neuron0x1049b3970()*-0.142622);
}

double mlp::synapse0x1049b6840() {
   return (neuron0x1049b3c50()*0.238704);
}

double mlp::synapse0x1049b6870() {
   return (neuron0x1049b3f60()*0.733807);
}

double mlp::synapse0x1049b68a0() {
   return (neuron0x1049b4270()*0.0359935);
}

double mlp::synapse0x1049b68d0() {
   return (neuron0x1049b4580()*-0.146011);
}

double mlp::synapse0x1049b6900() {
   return (neuron0x1049b4890()*0.185542);
}

double mlp::synapse0x1049b6930() {
   return (neuron0x1049b4ba0()*0.422517);
}

double mlp::synapse0x1049b6960() {
   return (neuron0x1049b4eb0()*-0.155823);
}

double mlp::synapse0x1049b6990() {
   return (neuron0x1049b51c0()*-0.404152);
}

double mlp::synapse0x1049b69c0() {
   return (neuron0x1049b54d0()*0.107128);
}

double mlp::synapse0x1049b69f0() {
   return (neuron0x1049b57e0()*-0.529652);
}

double mlp::synapse0x1049b6a20() {
   return (neuron0x1049b5ac0()*0.563395);
}

double mlp::synapse0x1049b6a50() {
   return (neuron0x1049b5da0()*0.169052);
}

double mlp::synapse0x1049980f0() {
   return (neuron0x1049b32d0()*0.0719806);
}

double mlp::synapse0x1049b66b0() {
   return (neuron0x1049b3430()*0.331076);
}

double mlp::synapse0x1049b66e0() {
   return (neuron0x1049b3690()*0.155957);
}

double mlp::synapse0x1049b6710() {
   return (neuron0x1049b3970()*0.362885);
}

double mlp::synapse0x1049b6740() {
   return (neuron0x1049b3c50()*-0.510485);
}

double mlp::synapse0x1049b6770() {
   return (neuron0x1049b3f60()*0.0300577);
}

double mlp::synapse0x1049b6fe0() {
   return (neuron0x1049b4270()*-0.149893);
}

double mlp::synapse0x1049b7010() {
   return (neuron0x1049b4580()*-0.116833);
}

double mlp::synapse0x1049b7040() {
   return (neuron0x1049b4890()*0.214185);
}

double mlp::synapse0x1049b7070() {
   return (neuron0x1049b4ba0()*0.42613);
}

double mlp::synapse0x1049b70a0() {
   return (neuron0x1049b4eb0()*0.0593252);
}

double mlp::synapse0x1049b70d0() {
   return (neuron0x1049b51c0()*0.0858771);
}

double mlp::synapse0x1049b7100() {
   return (neuron0x1049b54d0()*0.0402085);
}

double mlp::synapse0x1049b7130() {
   return (neuron0x1049b57e0()*-0.431697);
}

double mlp::synapse0x1049b7160() {
   return (neuron0x1049b5ac0()*0.425354);
}

double mlp::synapse0x1049b7190() {
   return (neuron0x1049b5da0()*-0.569767);
}

double mlp::synapse0x1049b7550() {
   return (neuron0x1049b32d0()*0.012318);
}

double mlp::synapse0x1049b7580() {
   return (neuron0x1049b3430()*-0.0925953);
}

double mlp::synapse0x1049b75b0() {
   return (neuron0x1049b3690()*0.323291);
}

double mlp::synapse0x1049b75e0() {
   return (neuron0x1049b3970()*-0.329374);
}

double mlp::synapse0x1049b7610() {
   return (neuron0x1049b3c50()*0.254574);
}

double mlp::synapse0x1049b7640() {
   return (neuron0x1049b3f60()*-0.346714);
}

double mlp::synapse0x1049b7670() {
   return (neuron0x1049b4270()*0.175869);
}

double mlp::synapse0x1049b76a0() {
   return (neuron0x1049b4580()*0.139783);
}

double mlp::synapse0x1049b76d0() {
   return (neuron0x1049b4890()*0.126569);
}

double mlp::synapse0x1049b7700() {
   return (neuron0x1049b4ba0()*-0.236364);
}

double mlp::synapse0x1049b7730() {
   return (neuron0x1049b4eb0()*0.186337);
}

double mlp::synapse0x1049b7760() {
   return (neuron0x1049b51c0()*1.50762);
}

double mlp::synapse0x1049b7790() {
   return (neuron0x1049b54d0()*-0.140461);
}

double mlp::synapse0x1049b77c0() {
   return (neuron0x1049b57e0()*0.31);
}

double mlp::synapse0x1049b77f0() {
   return (neuron0x1049b5ac0()*0.27516);
}

double mlp::synapse0x1049b7820() {
   return (neuron0x1049b5da0()*-0.157747);
}

double mlp::synapse0x1049b7be0() {
   return (neuron0x1049b32d0()*0.0342334);
}

double mlp::synapse0x1049b6de0() {
   return (neuron0x1049b3430()*-0.00441087);
}

double mlp::synapse0x1049b6e10() {
   return (neuron0x1049b3690()*-0.40489);
}

double mlp::synapse0x1049b6e40() {
   return (neuron0x1049b3970()*0.0875015);
}

double mlp::synapse0x1049b6e70() {
   return (neuron0x1049b3c50()*0.348784);
}

double mlp::synapse0x1049b6ea0() {
   return (neuron0x1049b3f60()*0.3326);
}

double mlp::synapse0x1049b6ed0() {
   return (neuron0x1049b4270()*-0.183825);
}

double mlp::synapse0x1049b6f00() {
   return (neuron0x1049b4580()*0.520027);
}

double mlp::synapse0x1049b6f30() {
   return (neuron0x1049b4890()*-0.138683);
}

double mlp::synapse0x1049b6f60() {
   return (neuron0x1049b4ba0()*0.219126);
}

double mlp::synapse0x1049b6f90() {
   return (neuron0x1049b4eb0()*0.148283);
}

double mlp::synapse0x1049b7c10() {
   return (neuron0x1049b51c0()*-0.127455);
}

double mlp::synapse0x1049b7c40() {
   return (neuron0x1049b54d0()*0.626701);
}

double mlp::synapse0x1049b7c70() {
   return (neuron0x1049b57e0()*0.208841);
}

double mlp::synapse0x1049b7ca0() {
   return (neuron0x1049b5ac0()*-0.365969);
}

double mlp::synapse0x1049b7cd0() {
   return (neuron0x1049b5da0()*-0.0459885);
}

double mlp::synapse0x1049b8090() {
   return (neuron0x1049b32d0()*0.494826);
}

double mlp::synapse0x1049b80c0() {
   return (neuron0x1049b3430()*0.225355);
}

double mlp::synapse0x1049b80f0() {
   return (neuron0x1049b3690()*-0.244098);
}

double mlp::synapse0x1049b8120() {
   return (neuron0x1049b3970()*0.270524);
}

double mlp::synapse0x1049b8150() {
   return (neuron0x1049b3c50()*0.195271);
}

double mlp::synapse0x1049b8180() {
   return (neuron0x1049b3f60()*0.50813);
}

double mlp::synapse0x1049b81b0() {
   return (neuron0x1049b4270()*0.244642);
}

double mlp::synapse0x1049b81e0() {
   return (neuron0x1049b4580()*0.253779);
}

double mlp::synapse0x1049b8210() {
   return (neuron0x1049b4890()*0.273685);
}

double mlp::synapse0x1049b8240() {
   return (neuron0x1049b4ba0()*0.237542);
}

double mlp::synapse0x1049b8270() {
   return (neuron0x1049b4eb0()*0.0282515);
}

double mlp::synapse0x1049b82a0() {
   return (neuron0x1049b51c0()*0.100932);
}

double mlp::synapse0x1049b82d0() {
   return (neuron0x1049b54d0()*0.329278);
}

double mlp::synapse0x1049b8300() {
   return (neuron0x1049b57e0()*-0.0393343);
}

double mlp::synapse0x1049b8330() {
   return (neuron0x1049b5ac0()*-0.380566);
}

double mlp::synapse0x1049b8360() {
   return (neuron0x1049b5da0()*0.114242);
}

double mlp::synapse0x1049b8720() {
   return (neuron0x1049b32d0()*-0.109573);
}

double mlp::synapse0x1049b8750() {
   return (neuron0x1049b3430()*0.277079);
}

double mlp::synapse0x1049b8780() {
   return (neuron0x1049b3690()*-0.204012);
}

double mlp::synapse0x1049b87b0() {
   return (neuron0x1049b3970()*-0.254653);
}

double mlp::synapse0x1049b87e0() {
   return (neuron0x1049b3c50()*0.321163);
}

double mlp::synapse0x1049b8810() {
   return (neuron0x1049b3f60()*0.118346);
}

double mlp::synapse0x1049b8840() {
   return (neuron0x1049b4270()*1.00058);
}

double mlp::synapse0x1049b8870() {
   return (neuron0x1049b4580()*-0.19774);
}

double mlp::synapse0x1049b88a0() {
   return (neuron0x1049b4890()*0.189202);
}

double mlp::synapse0x1049b88d0() {
   return (neuron0x1049b4ba0()*0.0168751);
}

double mlp::synapse0x1049b8900() {
   return (neuron0x1049b4eb0()*0.261972);
}

double mlp::synapse0x1049b8930() {
   return (neuron0x1049b51c0()*-0.541158);
}

double mlp::synapse0x1049b8960() {
   return (neuron0x1049b54d0()*-0.148208);
}

double mlp::synapse0x1049b8990() {
   return (neuron0x1049b57e0()*0.884481);
}

double mlp::synapse0x1049b89c0() {
   return (neuron0x1049b5ac0()*0.310979);
}

double mlp::synapse0x1049b89f0() {
   return (neuron0x1049b5da0()*0.78841);
}

double mlp::synapse0x1049b8db0() {
   return (neuron0x1049b32d0()*-0.652964);
}

double mlp::synapse0x1049b8de0() {
   return (neuron0x1049b3430()*-0.0374811);
}

double mlp::synapse0x1049b8e10() {
   return (neuron0x1049b3690()*-0.146449);
}

double mlp::synapse0x1049b8e40() {
   return (neuron0x1049b3970()*-0.424031);
}

double mlp::synapse0x1049b8e70() {
   return (neuron0x1049b3c50()*0.167035);
}

double mlp::synapse0x1049b8ea0() {
   return (neuron0x1049b3f60()*-0.305252);
}

double mlp::synapse0x1049b8ed0() {
   return (neuron0x1049b4270()*-1.07124);
}

double mlp::synapse0x1049b8f00() {
   return (neuron0x1049b4580()*0.0439213);
}

double mlp::synapse0x1049b8f30() {
   return (neuron0x1049b4890()*0.352696);
}

double mlp::synapse0x1049b8f60() {
   return (neuron0x1049b4ba0()*-0.316368);
}

double mlp::synapse0x1049b8f90() {
   return (neuron0x1049b4eb0()*-0.0600712);
}

double mlp::synapse0x1049b8fc0() {
   return (neuron0x1049b51c0()*-0.135911);
}

double mlp::synapse0x1049b8ff0() {
   return (neuron0x1049b54d0()*0.17262);
}

double mlp::synapse0x1049b9020() {
   return (neuron0x1049b57e0()*-0.134744);
}

double mlp::synapse0x1049b9050() {
   return (neuron0x1049b5ac0()*0.608933);
}

double mlp::synapse0x1049b9080() {
   return (neuron0x1049b5da0()*-0.166528);
}

double mlp::synapse0x1049b9440() {
   return (neuron0x1049b32d0()*-0.483536);
}

double mlp::synapse0x1049b9470() {
   return (neuron0x1049b3430()*-0.194656);
}

double mlp::synapse0x1049b94a0() {
   return (neuron0x1049b3690()*-0.25282);
}

double mlp::synapse0x1049b94d0() {
   return (neuron0x1049b3970()*0.687651);
}

double mlp::synapse0x1049b9500() {
   return (neuron0x1049b3c50()*0.213378);
}

double mlp::synapse0x1049b9530() {
   return (neuron0x1049b3f60()*0.406755);
}

double mlp::synapse0x1049b9560() {
   return (neuron0x1049b4270()*0.236514);
}

double mlp::synapse0x1049b9590() {
   return (neuron0x1049b4580()*0.448431);
}

double mlp::synapse0x1049b95c0() {
   return (neuron0x1049b4890()*0.207898);
}

double mlp::synapse0x1049b95f0() {
   return (neuron0x1049b4ba0()*-0.0383043);
}

double mlp::synapse0x1049b9620() {
   return (neuron0x1049b4eb0()*-0.26958);
}

double mlp::synapse0x1049b9650() {
   return (neuron0x1049b51c0()*-0.403305);
}

double mlp::synapse0x1049b9680() {
   return (neuron0x1049b54d0()*0.311921);
}

double mlp::synapse0x1049b96b0() {
   return (neuron0x1049b57e0()*-0.319453);
}

double mlp::synapse0x1049b96e0() {
   return (neuron0x1049b5ac0()*0.356607);
}

double mlp::synapse0x1049b9710() {
   return (neuron0x1049b5da0()*0.865426);
}

double mlp::synapse0x1049b9ad0() {
   return (neuron0x1049b32d0()*0.0485078);
}

double mlp::synapse0x1049b9b00() {
   return (neuron0x1049b3430()*0.231315);
}

double mlp::synapse0x1049b9b30() {
   return (neuron0x1049b3690()*0.161401);
}

double mlp::synapse0x1049b9b60() {
   return (neuron0x1049b3970()*0.324046);
}

double mlp::synapse0x1049b9b90() {
   return (neuron0x1049b3c50()*0.161931);
}

double mlp::synapse0x1049b9bc0() {
   return (neuron0x1049b3f60()*-0.207443);
}

double mlp::synapse0x1049b9bf0() {
   return (neuron0x1049b4270()*0.296374);
}

double mlp::synapse0x1049b9c20() {
   return (neuron0x1049b4580()*-0.542538);
}

double mlp::synapse0x1049b9c50() {
   return (neuron0x1049b4890()*0.0342251);
}

double mlp::synapse0x1049b9c80() {
   return (neuron0x1049b4ba0()*0.371376);
}

double mlp::synapse0x1049b9cb0() {
   return (neuron0x1049b4eb0()*-0.240202);
}

double mlp::synapse0x1049b9ce0() {
   return (neuron0x1049b51c0()*0.185457);
}

double mlp::synapse0x1049b9d10() {
   return (neuron0x1049b54d0()*0.495898);
}

double mlp::synapse0x1049b9d40() {
   return (neuron0x1049b57e0()*0.649877);
}

double mlp::synapse0x1049b9d70() {
   return (neuron0x1049b5ac0()*0.157715);
}

double mlp::synapse0x1049b9da0() {
   return (neuron0x1049b5da0()*0.0830385);
}

double mlp::synapse0x1049ba160() {
   return (neuron0x1049b32d0()*0.223556);
}

double mlp::synapse0x1049ba190() {
   return (neuron0x1049b3430()*0.356443);
}

double mlp::synapse0x1049ba1c0() {
   return (neuron0x1049b3690()*0.427666);
}

double mlp::synapse0x1049ba1f0() {
   return (neuron0x1049b3970()*-0.178634);
}

double mlp::synapse0x1049ba220() {
   return (neuron0x1049b3c50()*-0.211261);
}

double mlp::synapse0x1049ba250() {
   return (neuron0x1049b3f60()*0.459093);
}

double mlp::synapse0x1049ba280() {
   return (neuron0x1049b4270()*-0.273781);
}

double mlp::synapse0x1049ba2b0() {
   return (neuron0x1049b4580()*0.0873299);
}

double mlp::synapse0x1049ba2e0() {
   return (neuron0x1049b4890()*-0.101528);
}

double mlp::synapse0x1049ba310() {
   return (neuron0x1049b4ba0()*-0.415375);
}

double mlp::synapse0x1049ba340() {
   return (neuron0x1049b4eb0()*0.0115428);
}

double mlp::synapse0x1049ba370() {
   return (neuron0x1049b51c0()*-0.49398);
}

double mlp::synapse0x1049ba3a0() {
   return (neuron0x1049b54d0()*0.19968);
}

double mlp::synapse0x1049ba3d0() {
   return (neuron0x1049b57e0()*-0.099955);
}

double mlp::synapse0x1049ba400() {
   return (neuron0x1049b5ac0()*-0.522767);
}

double mlp::synapse0x1049ba430() {
   return (neuron0x1049b5da0()*0.454659);
}

double mlp::synapse0x1049ba7f0() {
   return (neuron0x1049b32d0()*-0.172971);
}

double mlp::synapse0x1049ba820() {
   return (neuron0x1049b3430()*-0.125777);
}

double mlp::synapse0x1049ba850() {
   return (neuron0x1049b3690()*0.114082);
}

double mlp::synapse0x1049ba880() {
   return (neuron0x1049b3970()*-0.334034);
}

double mlp::synapse0x1049ba8b0() {
   return (neuron0x1049b3c50()*-0.122562);
}

double mlp::synapse0x1049ba8e0() {
   return (neuron0x1049b3f60()*-0.326818);
}

double mlp::synapse0x1049ba910() {
   return (neuron0x1049b4270()*-0.385774);
}

double mlp::synapse0x1049ba940() {
   return (neuron0x1049b4580()*-0.401746);
}

double mlp::synapse0x1049ba970() {
   return (neuron0x1049b4890()*-0.0323437);
}

double mlp::synapse0x1049ba9a0() {
   return (neuron0x1049b4ba0()*0.355505);
}

double mlp::synapse0x1049ba9d0() {
   return (neuron0x1049b4eb0()*0.453716);
}

double mlp::synapse0x1049baa00() {
   return (neuron0x1049b51c0()*0.795794);
}

double mlp::synapse0x1049baa30() {
   return (neuron0x1049b54d0()*0.306451);
}

double mlp::synapse0x1049baa60() {
   return (neuron0x1049b57e0()*0.51069);
}

double mlp::synapse0x1049baa90() {
   return (neuron0x1049b5ac0()*0.414035);
}

double mlp::synapse0x1049baac0() {
   return (neuron0x1049b5da0()*-0.202172);
}

double mlp::synapse0x1049bae80() {
   return (neuron0x1049b32d0()*0.352232);
}

double mlp::synapse0x1049baeb0() {
   return (neuron0x1049b3430()*0.425453);
}

double mlp::synapse0x1049baee0() {
   return (neuron0x1049b3690()*-0.344482);
}

double mlp::synapse0x1049baf10() {
   return (neuron0x1049b3970()*0.385815);
}

double mlp::synapse0x1049baf40() {
   return (neuron0x1049b3c50()*0.156219);
}

double mlp::synapse0x1049baf70() {
   return (neuron0x1049b3f60()*0.0179207);
}

double mlp::synapse0x1049bafa0() {
   return (neuron0x1049b4270()*0.701274);
}

double mlp::synapse0x1049bafd0() {
   return (neuron0x1049b4580()*-0.204025);
}

double mlp::synapse0x1049bb000() {
   return (neuron0x1049b4890()*0.0346977);
}

double mlp::synapse0x1049bb030() {
   return (neuron0x1049b4ba0()*0.271419);
}

double mlp::synapse0x1049bb060() {
   return (neuron0x1049b4eb0()*-0.3207);
}

double mlp::synapse0x1049bb090() {
   return (neuron0x1049b51c0()*0.623336);
}

double mlp::synapse0x1049bb0c0() {
   return (neuron0x1049b54d0()*-0.0881647);
}

double mlp::synapse0x1049bb0f0() {
   return (neuron0x1049b57e0()*-0.429062);
}

double mlp::synapse0x1049bb120() {
   return (neuron0x1049b5ac0()*-0.471346);
}

double mlp::synapse0x1049bb150() {
   return (neuron0x1049b5da0()*0.15616);
}

double mlp::synapse0x1049bb510() {
   return (neuron0x1049b32d0()*-0.197554);
}

double mlp::synapse0x1049bb540() {
   return (neuron0x1049b3430()*-0.360732);
}

double mlp::synapse0x1049bb570() {
   return (neuron0x1049b3690()*0.193137);
}

double mlp::synapse0x1049bb5a0() {
   return (neuron0x1049b3970()*-0.0691124);
}

double mlp::synapse0x1049bb5d0() {
   return (neuron0x1049b3c50()*0.259293);
}

double mlp::synapse0x1049bb600() {
   return (neuron0x1049b3f60()*0.204053);
}

double mlp::synapse0x1049bb630() {
   return (neuron0x1049b4270()*-0.765244);
}

double mlp::synapse0x1049bb660() {
   return (neuron0x1049b4580()*0.499683);
}

double mlp::synapse0x1049bb690() {
   return (neuron0x1049b4890()*-0.300786);
}

double mlp::synapse0x1049bb6c0() {
   return (neuron0x1049b4ba0()*-0.0386889);
}

double mlp::synapse0x1049bb6f0() {
   return (neuron0x1049b4eb0()*0.407897);
}

double mlp::synapse0x1049bb720() {
   return (neuron0x1049b51c0()*-0.30095);
}

double mlp::synapse0x1049bb750() {
   return (neuron0x1049b54d0()*-0.290067);
}

double mlp::synapse0x1049bb780() {
   return (neuron0x1049b57e0()*0.0796554);
}

double mlp::synapse0x1049bb7b0() {
   return (neuron0x1049b5ac0()*-0.0715028);
}

double mlp::synapse0x1049bb7e0() {
   return (neuron0x1049b5da0()*-0.407359);
}

double mlp::synapse0x1049bbba0() {
   return (neuron0x1049b32d0()*0.0012009);
}

double mlp::synapse0x1049bbbd0() {
   return (neuron0x1049b3430()*0.127108);
}

double mlp::synapse0x1049bbc00() {
   return (neuron0x1049b3690()*-0.0676725);
}

double mlp::synapse0x1049bbc30() {
   return (neuron0x1049b3970()*-0.1622);
}

double mlp::synapse0x1049bbc60() {
   return (neuron0x1049b3c50()*0.0533541);
}

double mlp::synapse0x1049bbc90() {
   return (neuron0x1049b3f60()*0.242274);
}

double mlp::synapse0x1049bbcc0() {
   return (neuron0x1049b4270()*-0.270287);
}

double mlp::synapse0x1049bbcf0() {
   return (neuron0x1049b4580()*0.140763);
}

double mlp::synapse0x1049bbd20() {
   return (neuron0x1049b4890()*0.149631);
}

double mlp::synapse0x1049bbd50() {
   return (neuron0x1049b4ba0()*-0.387278);
}

double mlp::synapse0x1049bbd80() {
   return (neuron0x1049b4eb0()*-0.0366476);
}

double mlp::synapse0x1049bbdb0() {
   return (neuron0x1049b51c0()*-1.47215);
}

double mlp::synapse0x1049bbde0() {
   return (neuron0x1049b54d0()*-0.465241);
}

double mlp::synapse0x1049bbe10() {
   return (neuron0x1049b57e0()*-0.223512);
}

double mlp::synapse0x1049bbe40() {
   return (neuron0x1049b5ac0()*0.517681);
}

double mlp::synapse0x1049bbe70() {
   return (neuron0x1049b5da0()*-0.042641);
}

double mlp::synapse0x1049bc230() {
   return (neuron0x1049b32d0()*-0.0279634);
}

double mlp::synapse0x1049bc360() {
   return (neuron0x1049b3430()*-0.00671663);
}

double mlp::synapse0x1049b3000() {
   return (neuron0x1049b3690()*0.0571067);
}

double mlp::synapse0x1049b3030() {
   return (neuron0x1049b3970()*0.273708);
}

double mlp::synapse0x1049b3870() {
   return (neuron0x1049b3c50()*0.386905);
}

double mlp::synapse0x1049b38a0() {
   return (neuron0x1049b3f60()*0.356465);
}

double mlp::synapse0x1049b3e60() {
   return (neuron0x1049b4270()*-0.0305632);
}

double mlp::synapse0x1049b3e90() {
   return (neuron0x1049b4580()*-0.00496346);
}

double mlp::synapse0x1049b4480() {
   return (neuron0x1049b4890()*-0.139203);
}

double mlp::synapse0x1049b44b0() {
   return (neuron0x1049b4ba0()*0.0242957);
}

double mlp::synapse0x1049b4aa0() {
   return (neuron0x1049b4eb0()*-0.237439);
}

double mlp::synapse0x1049b4ad0() {
   return (neuron0x1049b51c0()*0.319443);
}

double mlp::synapse0x1049b50c0() {
   return (neuron0x1049b54d0()*-0.0434837);
}

double mlp::synapse0x1049b50f0() {
   return (neuron0x1049b57e0()*-0.115151);
}

double mlp::synapse0x1049b56e0() {
   return (neuron0x1049b5ac0()*0.174232);
}

double mlp::synapse0x1049b5710() {
   return (neuron0x1049b5da0()*-0.140715);
}

double mlp::synapse0x1049b5fe0() {
   return (neuron0x1049b3170()*-0.211034);
}

double mlp::synapse0x1049b53d0() {
   return (neuron0x1049b6450()*-0.344956);
}

double mlp::synapse0x1049b5400() {
   return (neuron0x1049b6b80()*-0.103789);
}

double mlp::synapse0x1049b4db0() {
   return (neuron0x1049b72c0()*-0.279558);
}

double mlp::synapse0x1049b4de0() {
   return (neuron0x1049b7950()*0.000295337);
}

double mlp::synapse0x1049b4790() {
   return (neuron0x1049b7e00()*0.378025);
}

double mlp::synapse0x1049b47c0() {
   return (neuron0x1049b8490()*0.0585935);
}

double mlp::synapse0x1049b4170() {
   return (neuron0x1049b8b20()*0.123387);
}

double mlp::synapse0x1049b41a0() {
   return (neuron0x1049b91b0()*-0.125382);
}

double mlp::synapse0x1049b3b50() {
   return (neuron0x1049b9840()*0.0568687);
}

double mlp::synapse0x1049b3b80() {
   return (neuron0x1049b9ed0()*-0.279626);
}

double mlp::synapse0x1049b3590() {
   return (neuron0x1049ba560()*0.149011);
}

double mlp::synapse0x1049b35c0() {
   return (neuron0x1049babf0()*-0.2746);
}

double mlp::synapse0x1049a3770() {
   return (neuron0x1049bb280()*0.131117);
}

double mlp::synapse0x1049a37a0() {
   return (neuron0x1049bb910()*0.177652);
}

double mlp::synapse0x1049a37d0() {
   return (neuron0x1049bbfa0()*0.245776);
}

double mlp::synapse0x1049a3880() {
   return (neuron0x1049b3170()*0.0197377);
}

double mlp::synapse0x1049a35c0() {
   return (neuron0x1049b6450()*-0.0888909);
}

double mlp::synapse0x1049a35f0() {
   return (neuron0x1049b6b80()*-0.039132);
}

double mlp::synapse0x1049bd950() {
   return (neuron0x1049b72c0()*0.255735);
}

double mlp::synapse0x1049bd980() {
   return (neuron0x1049b7950()*-0.0553333);
}

double mlp::synapse0x1049bd9b0() {
   return (neuron0x1049b7e00()*0.125721);
}

double mlp::synapse0x1049bd9e0() {
   return (neuron0x1049b8490()*-0.0686749);
}

double mlp::synapse0x1049bda10() {
   return (neuron0x1049b8b20()*0.159465);
}

double mlp::synapse0x1049bda40() {
   return (neuron0x1049b91b0()*-0.124338);
}

double mlp::synapse0x1049bda70() {
   return (neuron0x1049b9840()*-0.115182);
}

double mlp::synapse0x1049bdaa0() {
   return (neuron0x1049b9ed0()*-0.1881);
}

double mlp::synapse0x1049bdad0() {
   return (neuron0x1049ba560()*-0.181713);
}

double mlp::synapse0x1049bdb00() {
   return (neuron0x1049babf0()*0.125618);
}

double mlp::synapse0x1049bdb30() {
   return (neuron0x1049bb280()*0.173925);
}

double mlp::synapse0x1049bdb60() {
   return (neuron0x1049bb910()*0.0547109);
}

double mlp::synapse0x1049bdb90() {
   return (neuron0x1049bbfa0()*-0.100965);
}

double mlp::synapse0x1049bdf20() {
   return (neuron0x1049b3170()*0.257488);
}

double mlp::synapse0x1049bdf50() {
   return (neuron0x1049b6450()*-0.368979);
}

double mlp::synapse0x1049bdf80() {
   return (neuron0x1049b6b80()*-0.0570792);
}

double mlp::synapse0x1049bdfb0() {
   return (neuron0x1049b72c0()*0.333314);
}

double mlp::synapse0x1049bdfe0() {
   return (neuron0x1049b7950()*0.22496);
}

double mlp::synapse0x1049be010() {
   return (neuron0x1049b7e00()*0.0498195);
}

double mlp::synapse0x1049be040() {
   return (neuron0x1049b8490()*0.260269);
}

double mlp::synapse0x1049be070() {
   return (neuron0x1049b8b20()*-0.175997);
}

double mlp::synapse0x1049be0a0() {
   return (neuron0x1049b91b0()*-0.00243142);
}

double mlp::synapse0x1049be0d0() {
   return (neuron0x1049b9840()*0.115061);
}

double mlp::synapse0x1049be100() {
   return (neuron0x1049b9ed0()*0.161782);
}

double mlp::synapse0x1049be130() {
   return (neuron0x1049ba560()*0.0238019);
}

double mlp::synapse0x1049be160() {
   return (neuron0x1049babf0()*-0.0598194);
}

double mlp::synapse0x1049be190() {
   return (neuron0x1049bb280()*-0.113534);
}

double mlp::synapse0x1049be1c0() {
   return (neuron0x1049bb910()*-0.179145);
}

double mlp::synapse0x1049be1f0() {
   return (neuron0x1049bbfa0()*-0.0151488);
}

double mlp::synapse0x1049b5fb0() {
   return (neuron0x1049b3170()*-0.19772);
}

double mlp::synapse0x1049be580() {
   return (neuron0x1049b6450()*-0.203068);
}

double mlp::synapse0x1049be5b0() {
   return (neuron0x1049b6b80()*-0.144028);
}

double mlp::synapse0x1049be5e0() {
   return (neuron0x1049b72c0()*-0.255585);
}

double mlp::synapse0x1049be610() {
   return (neuron0x1049b7950()*-0.17124);
}

double mlp::synapse0x1049be640() {
   return (neuron0x1049b7e00()*-0.124441);
}

double mlp::synapse0x1049be670() {
   return (neuron0x1049b8490()*0.546677);
}

double mlp::synapse0x1049be6a0() {
   return (neuron0x1049b8b20()*-0.590731);
}

double mlp::synapse0x1049be6d0() {
   return (neuron0x1049b91b0()*-0.372899);
}

double mlp::synapse0x1049be700() {
   return (neuron0x1049b9840()*-0.404034);
}

double mlp::synapse0x1049be730() {
   return (neuron0x1049b9ed0()*-0.0327252);
}

double mlp::synapse0x1049be760() {
   return (neuron0x1049ba560()*0.0820908);
}

double mlp::synapse0x1049be790() {
   return (neuron0x1049babf0()*0.477299);
}

double mlp::synapse0x1049be7c0() {
   return (neuron0x1049bb280()*0.279885);
}

double mlp::synapse0x1049be7f0() {
   return (neuron0x1049bb910()*0.331992);
}

double mlp::synapse0x1049be820() {
   return (neuron0x1049bbfa0()*-0.033704);
}

double mlp::synapse0x1049bebb0() {
   return (neuron0x1049b3170()*-0.123011);
}

double mlp::synapse0x1049bebe0() {
   return (neuron0x1049b6450()*0.509935);
}

double mlp::synapse0x1049bec10() {
   return (neuron0x1049b6b80()*-0.0141392);
}

double mlp::synapse0x1049bec40() {
   return (neuron0x1049b72c0()*0.156598);
}

double mlp::synapse0x1049bec70() {
   return (neuron0x1049b7950()*-0.131204);
}

double mlp::synapse0x1049beca0() {
   return (neuron0x1049b7e00()*-0.21598);
}

double mlp::synapse0x1049becd0() {
   return (neuron0x1049b8490()*-0.211246);
}

double mlp::synapse0x1049bed00() {
   return (neuron0x1049b8b20()*0.0623144);
}

double mlp::synapse0x1049bed30() {
   return (neuron0x1049b91b0()*0.292023);
}

double mlp::synapse0x1049bed60() {
   return (neuron0x1049b9840()*-0.228014);
}

double mlp::synapse0x1049bed90() {
   return (neuron0x1049b9ed0()*0.201684);
}

double mlp::synapse0x1049bedc0() {
   return (neuron0x1049ba560()*0.274589);
}

double mlp::synapse0x1049bedf0() {
   return (neuron0x1049babf0()*0.352708);
}

double mlp::synapse0x1049bee20() {
   return (neuron0x1049bb280()*0.131302);
}

double mlp::synapse0x1049bee50() {
   return (neuron0x1049bb910()*-0.624183);
}

double mlp::synapse0x1049bee80() {
   return (neuron0x1049bbfa0()*-0.250277);
}

double mlp::synapse0x1049bf210() {
   return (neuron0x1049b3170()*0.195896);
}

double mlp::synapse0x1049bf240() {
   return (neuron0x1049b6450()*0.180574);
}

double mlp::synapse0x1049bf270() {
   return (neuron0x1049b6b80()*-0.0481502);
}

double mlp::synapse0x1049bf2a0() {
   return (neuron0x1049b72c0()*-0.16776);
}

double mlp::synapse0x1049bf2d0() {
   return (neuron0x1049b7950()*-0.107107);
}

double mlp::synapse0x1049bf300() {
   return (neuron0x1049b7e00()*-0.153807);
}

double mlp::synapse0x1049bf330() {
   return (neuron0x1049b8490()*-0.277911);
}

double mlp::synapse0x1049bf360() {
   return (neuron0x1049b8b20()*0.219383);
}

double mlp::synapse0x1049bf390() {
   return (neuron0x1049b91b0()*0.237515);
}

double mlp::synapse0x1049bf3c0() {
   return (neuron0x1049b9840()*0.0751094);
}

double mlp::synapse0x1049bf3f0() {
   return (neuron0x1049b9ed0()*0.223664);
}

double mlp::synapse0x1049bf420() {
   return (neuron0x1049ba560()*0.089265);
}

double mlp::synapse0x1049bf450() {
   return (neuron0x1049babf0()*0.166234);
}

double mlp::synapse0x1049bf480() {
   return (neuron0x1049bb280()*-0.121133);
}

double mlp::synapse0x1049bf4b0() {
   return (neuron0x1049bb910()*0.142103);
}

double mlp::synapse0x1049bf4e0() {
   return (neuron0x1049bbfa0()*0.00428306);
}

double mlp::synapse0x1049bf870() {
   return (neuron0x1049b3170()*0.405297);
}

double mlp::synapse0x1049bf8a0() {
   return (neuron0x1049b6450()*-0.0405524);
}

double mlp::synapse0x1049bf8d0() {
   return (neuron0x1049b6b80()*0.338714);
}

double mlp::synapse0x1049bf900() {
   return (neuron0x1049b72c0()*-0.150003);
}

double mlp::synapse0x1049bf930() {
   return (neuron0x1049b7950()*0.0498885);
}

double mlp::synapse0x1049bf960() {
   return (neuron0x1049b7e00()*-0.104519);
}

double mlp::synapse0x1049bf990() {
   return (neuron0x1049b8490()*-0.134222);
}

double mlp::synapse0x1049bf9c0() {
   return (neuron0x1049b8b20()*0.181019);
}

double mlp::synapse0x1049bf9f0() {
   return (neuron0x1049b91b0()*0.251305);
}

double mlp::synapse0x1049bfa20() {
   return (neuron0x1049b9840()*0.341652);
}

double mlp::synapse0x1049bfa50() {
   return (neuron0x1049b9ed0()*-0.173015);
}

double mlp::synapse0x1049bfa80() {
   return (neuron0x1049ba560()*-0.0361042);
}

double mlp::synapse0x1049bfab0() {
   return (neuron0x1049babf0()*-0.0927851);
}

double mlp::synapse0x1049bfae0() {
   return (neuron0x1049bb280()*-0.0528381);
}

double mlp::synapse0x1049bfb10() {
   return (neuron0x1049bb910()*0.519691);
}

double mlp::synapse0x1049bfb40() {
   return (neuron0x1049bbfa0()*-0.115283);
}

