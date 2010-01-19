#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12) {
   input0 = (in0 - 45.1206)/25.7883;
   input1 = (in1 - 59.0016)/112.07;
   input2 = (in2 - 42.0687)/152.315;
   input3 = (in3 - 2.2746)/0.809032;
   input4 = (in4 - -0.000706937)/1.01924;
   input5 = (in5 - 0.00044766)/1.08316;
   input6 = (in6 - 1.39504)/3.72847;
   input7 = (in7 - 0.415149)/2.69898;
   input8 = (in8 - 1.26603)/5.67241;
   input9 = (in9 - -0.257964)/0.968423;
   input10 = (in10 - 1.84464)/1.00211;
   input11 = (in11 - 53.6967)/39.064;
   input12 = (in12 - 45.1206)/25.7883;
   switch(index) {
     case 0:
         return neuron0x1049c42e0();
     case 1:
         return neuron0x1049c4700();
     case 2:
         return neuron0x1049c4c50();
     case 3:
         return neuron0x1049c51a0();
     case 4:
         return neuron0x1049c56f0();
     case 5:
         return neuron0x1049c5c10();
     case 6:
         return neuron0x1049c6160();
     case 7:
         return neuron0x1049c68b0();
     case 8:
         return neuron0x1049c6d00();
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
   input9 = (input[9] - -0.257964)/0.968423;
   input10 = (input[10] - 1.84464)/1.00211;
   input11 = (input[11] - 53.6967)/39.064;
   input12 = (input[12] - 45.1206)/25.7883;
   switch(index) {
     case 0:
         return neuron0x1049c42e0();
     case 1:
         return neuron0x1049c4700();
     case 2:
         return neuron0x1049c4c50();
     case 3:
         return neuron0x1049c51a0();
     case 4:
         return neuron0x1049c56f0();
     case 5:
         return neuron0x1049c5c10();
     case 6:
         return neuron0x1049c6160();
     case 7:
         return neuron0x1049c68b0();
     case 8:
         return neuron0x1049c6d00();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049af1b0() {
   return input0;
}

double mlp::neuron0x1049bdb00() {
   return input1;
}

double mlp::neuron0x1049bdde0() {
   return input2;
}

double mlp::neuron0x1049be0c0() {
   return input3;
}

double mlp::neuron0x1049be3a0() {
   return input4;
}

double mlp::neuron0x1049be680() {
   return input5;
}

double mlp::neuron0x1049be960() {
   return input6;
}

double mlp::neuron0x1049bec40() {
   return input7;
}

double mlp::neuron0x1049bef50() {
   return input8;
}

double mlp::neuron0x1049bf260() {
   return input9;
}

double mlp::neuron0x1049bf570() {
   return input10;
}

double mlp::neuron0x1049bf880() {
   return input11;
}

double mlp::neuron0x1049bfb90() {
   return input12;
}

double mlp::input0x1049bfea0() {
   double input = -0.00349614;
   input += synapse0x1049aef00();
   input += synapse0x1049bd130();
   input += synapse0x1049bd7f0();
   input += synapse0x1049bd820();
   input += synapse0x1049aeb80();
   input += synapse0x1049aebb0();
   input += synapse0x1049aebe0();
   input += synapse0x1049aec10();
   input += synapse0x1049aec40();
   input += synapse0x1049c0000();
   input += synapse0x1049c0030();
   input += synapse0x1049c0060();
   input += synapse0x1049c0090();
   return input;
}

double mlp::neuron0x1049bfea0() {
   double input = input0x1049bfea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c00c0() {
   double input = 0.402204;
   input += synapse0x1049c03d0();
   input += synapse0x1049c0400();
   input += synapse0x1049c0430();
   input += synapse0x1049c0460();
   input += synapse0x1049c0590();
   input += synapse0x1049c05c0();
   input += synapse0x1049c05f0();
   input += synapse0x1049c0620();
   input += synapse0x1049c0650();
   input += synapse0x1049c0680();
   input += synapse0x1049c06b0();
   input += synapse0x1049c06e0();
   input += synapse0x1049c0710();
   return input;
}

double mlp::neuron0x1049c00c0() {
   double input = input0x1049c00c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c0740() {
   double input = 0.140707;
   input += synapse0x1049c09d0();
   input += synapse0x1049c0a00();
   input += synapse0x1049c0a30();
   input += synapse0x1049c0a60();
   input += synapse0x1049c0a90();
   input += synapse0x1049c0ac0();
   input += synapse0x1049c0af0();
   input += synapse0x1049c0490();
   input += synapse0x1049c04c0();
   input += synapse0x1049c04f0();
   input += synapse0x1049c0520();
   input += synapse0x1049c0550();
   input += synapse0x1049c0d20();
   return input;
}

double mlp::neuron0x1049c0740() {
   double input = input0x1049c0740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c0d50() {
   double input = 0.0322605;
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
   input += synapse0x1049c13a0();
   return input;
}

double mlp::neuron0x1049c0d50() {
   double input = input0x1049c0d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c13d0() {
   double input = -0.148939;
   input += synapse0x1049c1660();
   input += synapse0x1049c1690();
   input += synapse0x1049c16c0();
   input += synapse0x1049c16f0();
   input += synapse0x1049c1720();
   input += synapse0x1049c1750();
   input += synapse0x1049c1780();
   input += synapse0x1049c17b0();
   input += synapse0x1049c17e0();
   input += synapse0x1049c1810();
   input += synapse0x1049c1840();
   input += synapse0x1049c1870();
   input += synapse0x1049c18a0();
   return input;
}

double mlp::neuron0x1049c13d0() {
   double input = input0x1049c13d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c0b20() {
   double input = -0.457682;
   input += synapse0x1049c0cb0();
   input += synapse0x1049c0ce0();
   input += synapse0x1049c1a50();
   input += synapse0x1049c1a80();
   input += synapse0x1049c1ab0();
   input += synapse0x1049c1ae0();
   input += synapse0x1049c1b10();
   input += synapse0x1049c1b40();
   input += synapse0x1049c1b70();
   input += synapse0x1049c1ba0();
   input += synapse0x1049c1bd0();
   input += synapse0x1049c1c00();
   input += synapse0x1049c1c30();
   return input;
}

double mlp::neuron0x1049c0b20() {
   double input = input0x1049c0b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c1c60() {
   double input = 0.00589015;
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
   return input;
}

double mlp::neuron0x1049c1c60() {
   double input = input0x1049c1c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c21e0() {
   double input = -0.298772;
   input += synapse0x1049c24f0();
   input += synapse0x1049c2520();
   input += synapse0x1049c2550();
   input += synapse0x1049c2580();
   input += synapse0x1049c25b0();
   input += synapse0x1049c25e0();
   input += synapse0x1049c2610();
   input += synapse0x1049c2640();
   input += synapse0x1049c2670();
   input += synapse0x1049c26a0();
   input += synapse0x1049c26d0();
   input += synapse0x1049c2700();
   input += synapse0x1049c2730();
   return input;
}

double mlp::neuron0x1049c21e0() {
   double input = input0x1049c21e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c2760() {
   double input = 0.0596438;
   input += synapse0x1049c2a70();
   input += synapse0x1049c2aa0();
   input += synapse0x1049c2ad0();
   input += synapse0x1049c2b00();
   input += synapse0x1049c2b30();
   input += synapse0x1049c2b60();
   input += synapse0x1049c2b90();
   input += synapse0x1049c2bc0();
   input += synapse0x1049c2bf0();
   input += synapse0x1049c2c20();
   input += synapse0x1049c2c50();
   input += synapse0x1049c2c80();
   input += synapse0x1049c2cb0();
   return input;
}

double mlp::neuron0x1049c2760() {
   double input = input0x1049c2760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c2ce0() {
   double input = -0.362152;
   input += synapse0x1049c2ff0();
   input += synapse0x1049c3020();
   input += synapse0x1049c3050();
   input += synapse0x1049c3080();
   input += synapse0x1049c30b0();
   input += synapse0x1049c30e0();
   input += synapse0x1049c3110();
   input += synapse0x1049c3140();
   input += synapse0x1049c3170();
   input += synapse0x1049c31a0();
   input += synapse0x1049c31d0();
   input += synapse0x1049c3200();
   input += synapse0x1049c3230();
   return input;
}

double mlp::neuron0x1049c2ce0() {
   double input = input0x1049c2ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c3260() {
   double input = 0.223988;
   input += synapse0x1049c3570();
   input += synapse0x1049c35a0();
   input += synapse0x1049c35d0();
   input += synapse0x1049c3600();
   input += synapse0x1049c3630();
   input += synapse0x1049c3660();
   input += synapse0x1049c3690();
   input += synapse0x1049c36c0();
   input += synapse0x1049c36f0();
   input += synapse0x1049c3720();
   input += synapse0x1049c3750();
   input += synapse0x1049c3780();
   input += synapse0x1049c37b0();
   return input;
}

double mlp::neuron0x1049c3260() {
   double input = input0x1049c3260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c37e0() {
   double input = 0.329178;
   input += synapse0x1049c3af0();
   input += synapse0x1049c3b20();
   input += synapse0x1049c3b50();
   input += synapse0x1049c3b80();
   input += synapse0x1049c3bb0();
   input += synapse0x1049c3be0();
   input += synapse0x1049c3c10();
   input += synapse0x1049c3c40();
   input += synapse0x1049c3c70();
   input += synapse0x1049c3ca0();
   input += synapse0x1049c3cd0();
   input += synapse0x1049c3d00();
   input += synapse0x1049c3d30();
   return input;
}

double mlp::neuron0x1049c37e0() {
   double input = input0x1049c37e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c3d60() {
   double input = 0.217653;
   input += synapse0x1049c4070();
   input += synapse0x1049c40a0();
   input += synapse0x1049c40d0();
   input += synapse0x1049c4100();
   input += synapse0x1049c4130();
   input += synapse0x1049c4160();
   input += synapse0x1049c4190();
   input += synapse0x1049c41c0();
   input += synapse0x1049c41f0();
   input += synapse0x1049c4220();
   input += synapse0x1049c4250();
   input += synapse0x1049c4280();
   input += synapse0x1049c42b0();
   return input;
}

double mlp::neuron0x1049c3d60() {
   double input = input0x1049c3d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049c42e0() {
   double input = -0.164299;
   input += synapse0x1049af4b0();
   input += synapse0x1049c44c0();
   input += synapse0x1049c44f0();
   input += synapse0x1049c4520();
   input += synapse0x1049c4550();
   input += synapse0x1049c4580();
   input += synapse0x1049c45b0();
   input += synapse0x1049c45e0();
   input += synapse0x1049c4610();
   input += synapse0x1049c4640();
   input += synapse0x1049c4670();
   input += synapse0x1049c46a0();
   input += synapse0x1049c46d0();
   return input;
}

double mlp::neuron0x1049c42e0() {
   double input = input0x1049c42e0();
   return (input * 1)+0;
}

double mlp::input0x1049c4700() {
   double input = 0.012419;
   input += synapse0x1049c49e0();
   input += synapse0x1049c4a10();
   input += synapse0x1049c4a40();
   input += synapse0x1049c4a70();
   input += synapse0x1049c4aa0();
   input += synapse0x1049c4ad0();
   input += synapse0x1049c4b00();
   input += synapse0x1049c4b30();
   input += synapse0x1049c4b60();
   input += synapse0x1049c4b90();
   input += synapse0x1049c4bc0();
   input += synapse0x1049c4bf0();
   input += synapse0x1049c4c20();
   return input;
}

double mlp::neuron0x1049c4700() {
   double input = input0x1049c4700();
   return (input * 1)+0;
}

double mlp::input0x1049c4c50() {
   double input = -0.352063;
   input += synapse0x1049c4f30();
   input += synapse0x1049c4f60();
   input += synapse0x1049c4f90();
   input += synapse0x1049c4fc0();
   input += synapse0x1049c4ff0();
   input += synapse0x1049c5020();
   input += synapse0x1049c5050();
   input += synapse0x1049c5080();
   input += synapse0x1049c50b0();
   input += synapse0x1049c50e0();
   input += synapse0x1049c5110();
   input += synapse0x1049c5140();
   input += synapse0x1049c5170();
   return input;
}

double mlp::neuron0x1049c4c50() {
   double input = input0x1049c4c50();
   return (input * 1)+0;
}

double mlp::input0x1049c51a0() {
   double input = -0.0998158;
   input += synapse0x1049c5480();
   input += synapse0x1049c54b0();
   input += synapse0x1049c54e0();
   input += synapse0x1049c5510();
   input += synapse0x1049c5540();
   input += synapse0x1049c5570();
   input += synapse0x1049c55a0();
   input += synapse0x1049c55d0();
   input += synapse0x1049c5600();
   input += synapse0x1049c5630();
   input += synapse0x1049c5660();
   input += synapse0x1049c5690();
   input += synapse0x1049c56c0();
   return input;
}

double mlp::neuron0x1049c51a0() {
   double input = input0x1049c51a0();
   return (input * 1)+0;
}

double mlp::input0x1049c56f0() {
   double input = 0.0712373;
   input += synapse0x1049af380();
   input += synapse0x1049c59d0();
   input += synapse0x1049c5a00();
   input += synapse0x1049c5a30();
   input += synapse0x1049c5a60();
   input += synapse0x1049c5a90();
   input += synapse0x1049c5ac0();
   input += synapse0x1049c5af0();
   input += synapse0x1049c5b20();
   input += synapse0x1049c5b50();
   input += synapse0x1049c5b80();
   input += synapse0x1049c5bb0();
   input += synapse0x1049c5be0();
   return input;
}

double mlp::neuron0x1049c56f0() {
   double input = input0x1049c56f0();
   return (input * 1)+0;
}

double mlp::input0x1049c5c10() {
   double input = 0.536907;
   input += synapse0x1049c5ef0();
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
   return input;
}

double mlp::neuron0x1049c5c10() {
   double input = input0x1049c5c10();
   return (input * 1)+0;
}

double mlp::input0x1049c6160() {
   double input = 0.0915846;
   input += synapse0x1049c6440();
   input += synapse0x1049c6470();
   input += synapse0x1049c64a0();
   input += synapse0x1049c64d0();
   input += synapse0x1049c6500();
   input += synapse0x1049c6530();
   input += synapse0x1049c6560();
   input += synapse0x1049c6590();
   input += synapse0x1049c65c0();
   input += synapse0x1049c65f0();
   input += synapse0x1049c6620();
   input += synapse0x1049c6650();
   input += synapse0x1049c6680();
   return input;
}

double mlp::neuron0x1049c6160() {
   double input = input0x1049c6160();
   return (input * 1)+0;
}

double mlp::input0x1049c68b0() {
   double input = -0.0267916;
   input += synapse0x1049c6a90();
   input += synapse0x1049c6ac0();
   input += synapse0x1049c6af0();
   input += synapse0x1049c6b20();
   input += synapse0x1049c6b50();
   input += synapse0x1049c6b80();
   input += synapse0x1049c6bb0();
   input += synapse0x1049c6be0();
   input += synapse0x1049c6c10();
   input += synapse0x1049c6c40();
   input += synapse0x1049c6c70();
   input += synapse0x1049c6ca0();
   input += synapse0x1049c6cd0();
   return input;
}

double mlp::neuron0x1049c68b0() {
   double input = input0x1049c68b0();
   return (input * 1)+0;
}

double mlp::input0x1049c6d00() {
   double input = 0.13134;
   input += synapse0x1049c6fe0();
   input += synapse0x1049c7010();
   input += synapse0x1049c7040();
   input += synapse0x1049c7070();
   input += synapse0x1049c70a0();
   input += synapse0x1049c70d0();
   input += synapse0x1049c7100();
   input += synapse0x1049c7130();
   input += synapse0x1049c7160();
   input += synapse0x1049c7190();
   input += synapse0x1049c71c0();
   input += synapse0x1049c71f0();
   input += synapse0x1049c7220();
   return input;
}

double mlp::neuron0x1049c6d00() {
   double input = input0x1049c6d00();
   return (input * 1)+0;
}

double mlp::synapse0x1049aef00() {
   return (neuron0x1049af1b0()*-0.298853);
}

double mlp::synapse0x1049bd130() {
   return (neuron0x1049bdb00()*0.280214);
}

double mlp::synapse0x1049bd7f0() {
   return (neuron0x1049bdde0()*-0.000306169);
}

double mlp::synapse0x1049bd820() {
   return (neuron0x1049be0c0()*-0.163552);
}

double mlp::synapse0x1049aeb80() {
   return (neuron0x1049be3a0()*0.417113);
}

double mlp::synapse0x1049aebb0() {
   return (neuron0x1049be680()*0.10585);
}

double mlp::synapse0x1049aebe0() {
   return (neuron0x1049be960()*0.289222);
}

double mlp::synapse0x1049aec10() {
   return (neuron0x1049bec40()*0.186438);
}

double mlp::synapse0x1049aec40() {
   return (neuron0x1049bef50()*0.107743);
}

double mlp::synapse0x1049c0000() {
   return (neuron0x1049bf260()*0.382844);
}

double mlp::synapse0x1049c0030() {
   return (neuron0x1049bf570()*-0.226919);
}

double mlp::synapse0x1049c0060() {
   return (neuron0x1049bf880()*0.188141);
}

double mlp::synapse0x1049c0090() {
   return (neuron0x1049bfb90()*0.343433);
}

double mlp::synapse0x1049c03d0() {
   return (neuron0x1049af1b0()*0.53244);
}

double mlp::synapse0x1049c0400() {
   return (neuron0x1049bdb00()*0.0410483);
}

double mlp::synapse0x1049c0430() {
   return (neuron0x1049bdde0()*0.382055);
}

double mlp::synapse0x1049c0460() {
   return (neuron0x1049be0c0()*0.369554);
}

double mlp::synapse0x1049c0590() {
   return (neuron0x1049be3a0()*-0.0185318);
}

double mlp::synapse0x1049c05c0() {
   return (neuron0x1049be680()*0.252345);
}

double mlp::synapse0x1049c05f0() {
   return (neuron0x1049be960()*0.238342);
}

double mlp::synapse0x1049c0620() {
   return (neuron0x1049bec40()*0.0440897);
}

double mlp::synapse0x1049c0650() {
   return (neuron0x1049bef50()*-0.184542);
}

double mlp::synapse0x1049c0680() {
   return (neuron0x1049bf260()*-0.0107245);
}

double mlp::synapse0x1049c06b0() {
   return (neuron0x1049bf570()*0.26889);
}

double mlp::synapse0x1049c06e0() {
   return (neuron0x1049bf880()*0.31527);
}

double mlp::synapse0x1049c0710() {
   return (neuron0x1049bfb90()*-0.308939);
}

double mlp::synapse0x1049c09d0() {
   return (neuron0x1049af1b0()*0.344475);
}

double mlp::synapse0x1049c0a00() {
   return (neuron0x1049bdb00()*0.550553);
}

double mlp::synapse0x1049c0a30() {
   return (neuron0x1049bdde0()*0.311667);
}

double mlp::synapse0x1049c0a60() {
   return (neuron0x1049be0c0()*0.17099);
}

double mlp::synapse0x1049c0a90() {
   return (neuron0x1049be3a0()*0.178294);
}

double mlp::synapse0x1049c0ac0() {
   return (neuron0x1049be680()*0.13631);
}

double mlp::synapse0x1049c0af0() {
   return (neuron0x1049be960()*-0.411228);
}

double mlp::synapse0x1049c0490() {
   return (neuron0x1049bec40()*0.262929);
}

double mlp::synapse0x1049c04c0() {
   return (neuron0x1049bef50()*-0.284718);
}

double mlp::synapse0x1049c04f0() {
   return (neuron0x1049bf260()*-0.0318837);
}

double mlp::synapse0x1049c0520() {
   return (neuron0x1049bf570()*0.0136728);
}

double mlp::synapse0x1049c0550() {
   return (neuron0x1049bf880()*-0.173802);
}

double mlp::synapse0x1049c0d20() {
   return (neuron0x1049bfb90()*0.0785845);
}

double mlp::synapse0x1049c1160() {
   return (neuron0x1049af1b0()*-0.199486);
}

double mlp::synapse0x1049c1190() {
   return (neuron0x1049bdb00()*0.178504);
}

double mlp::synapse0x1049c11c0() {
   return (neuron0x1049bdde0()*-0.390625);
}

double mlp::synapse0x1049c11f0() {
   return (neuron0x1049be0c0()*0.478705);
}

double mlp::synapse0x1049c1220() {
   return (neuron0x1049be3a0()*0.10249);
}

double mlp::synapse0x1049c1250() {
   return (neuron0x1049be680()*0.289201);
}

double mlp::synapse0x1049c1280() {
   return (neuron0x1049be960()*-0.333913);
}

double mlp::synapse0x1049c12b0() {
   return (neuron0x1049bec40()*0.118192);
}

double mlp::synapse0x1049c12e0() {
   return (neuron0x1049bef50()*-0.0439153);
}

double mlp::synapse0x1049c1310() {
   return (neuron0x1049bf260()*-0.0421929);
}

double mlp::synapse0x1049c1340() {
   return (neuron0x1049bf570()*0.0695092);
}

double mlp::synapse0x1049c1370() {
   return (neuron0x1049bf880()*0.321831);
}

double mlp::synapse0x1049c13a0() {
   return (neuron0x1049bfb90()*0.349738);
}

double mlp::synapse0x1049c1660() {
   return (neuron0x1049af1b0()*0.395739);
}

double mlp::synapse0x1049c1690() {
   return (neuron0x1049bdb00()*0.361007);
}

double mlp::synapse0x1049c16c0() {
   return (neuron0x1049bdde0()*-0.276095);
}

double mlp::synapse0x1049c16f0() {
   return (neuron0x1049be0c0()*-0.388788);
}

double mlp::synapse0x1049c1720() {
   return (neuron0x1049be3a0()*0.277944);
}

double mlp::synapse0x1049c1750() {
   return (neuron0x1049be680()*0.39117);
}

double mlp::synapse0x1049c1780() {
   return (neuron0x1049be960()*0.128247);
}

double mlp::synapse0x1049c17b0() {
   return (neuron0x1049bec40()*0.333026);
}

double mlp::synapse0x1049c17e0() {
   return (neuron0x1049bef50()*0.121551);
}

double mlp::synapse0x1049c1810() {
   return (neuron0x1049bf260()*0.000872588);
}

double mlp::synapse0x1049c1840() {
   return (neuron0x1049bf570()*0.111705);
}

double mlp::synapse0x1049c1870() {
   return (neuron0x1049bf880()*-0.346835);
}

double mlp::synapse0x1049c18a0() {
   return (neuron0x1049bfb90()*0.189182);
}

double mlp::synapse0x1049c0cb0() {
   return (neuron0x1049af1b0()*-0.341056);
}

double mlp::synapse0x1049c0ce0() {
   return (neuron0x1049bdb00()*0.546429);
}

double mlp::synapse0x1049c1a50() {
   return (neuron0x1049bdde0()*0.221113);
}

double mlp::synapse0x1049c1a80() {
   return (neuron0x1049be0c0()*-0.196446);
}

double mlp::synapse0x1049c1ab0() {
   return (neuron0x1049be3a0()*-0.104862);
}

double mlp::synapse0x1049c1ae0() {
   return (neuron0x1049be680()*0.105754);
}

double mlp::synapse0x1049c1b10() {
   return (neuron0x1049be960()*-0.296998);
}

double mlp::synapse0x1049c1b40() {
   return (neuron0x1049bec40()*-0.236277);
}

double mlp::synapse0x1049c1b70() {
   return (neuron0x1049bef50()*0.121231);
}

double mlp::synapse0x1049c1ba0() {
   return (neuron0x1049bf260()*-0.1868);
}

double mlp::synapse0x1049c1bd0() {
   return (neuron0x1049bf570()*-0.435328);
}

double mlp::synapse0x1049c1c00() {
   return (neuron0x1049bf880()*0.277434);
}

double mlp::synapse0x1049c1c30() {
   return (neuron0x1049bfb90()*0.42303);
}

double mlp::synapse0x1049c1f70() {
   return (neuron0x1049af1b0()*0.0900436);
}

double mlp::synapse0x1049c1fa0() {
   return (neuron0x1049bdb00()*-0.12457);
}

double mlp::synapse0x1049c1fd0() {
   return (neuron0x1049bdde0()*0.436105);
}

double mlp::synapse0x1049c2000() {
   return (neuron0x1049be0c0()*0.199008);
}

double mlp::synapse0x1049c2030() {
   return (neuron0x1049be3a0()*0.0308075);
}

double mlp::synapse0x1049c2060() {
   return (neuron0x1049be680()*-0.154655);
}

double mlp::synapse0x1049c2090() {
   return (neuron0x1049be960()*-0.135106);
}

double mlp::synapse0x1049c20c0() {
   return (neuron0x1049bec40()*-0.380192);
}

double mlp::synapse0x1049c20f0() {
   return (neuron0x1049bef50()*-0.183179);
}

double mlp::synapse0x1049c2120() {
   return (neuron0x1049bf260()*0.229873);
}

double mlp::synapse0x1049c2150() {
   return (neuron0x1049bf570()*-0.102383);
}

double mlp::synapse0x1049c2180() {
   return (neuron0x1049bf880()*0.456766);
}

double mlp::synapse0x1049c21b0() {
   return (neuron0x1049bfb90()*-0.302755);
}

double mlp::synapse0x1049c24f0() {
   return (neuron0x1049af1b0()*0.24793);
}

double mlp::synapse0x1049c2520() {
   return (neuron0x1049bdb00()*0.279166);
}

double mlp::synapse0x1049c2550() {
   return (neuron0x1049bdde0()*0.561422);
}

double mlp::synapse0x1049c2580() {
   return (neuron0x1049be0c0()*0.134079);
}

double mlp::synapse0x1049c25b0() {
   return (neuron0x1049be3a0()*0.104614);
}

double mlp::synapse0x1049c25e0() {
   return (neuron0x1049be680()*-0.265623);
}

double mlp::synapse0x1049c2610() {
   return (neuron0x1049be960()*0.233541);
}

double mlp::synapse0x1049c2640() {
   return (neuron0x1049bec40()*0.325853);
}

double mlp::synapse0x1049c2670() {
   return (neuron0x1049bef50()*0.250441);
}

double mlp::synapse0x1049c26a0() {
   return (neuron0x1049bf260()*0.293401);
}

double mlp::synapse0x1049c26d0() {
   return (neuron0x1049bf570()*-0.506521);
}

double mlp::synapse0x1049c2700() {
   return (neuron0x1049bf880()*0.307569);
}

double mlp::synapse0x1049c2730() {
   return (neuron0x1049bfb90()*-0.522349);
}

double mlp::synapse0x1049c2a70() {
   return (neuron0x1049af1b0()*0.386145);
}

double mlp::synapse0x1049c2aa0() {
   return (neuron0x1049bdb00()*-0.729085);
}

double mlp::synapse0x1049c2ad0() {
   return (neuron0x1049bdde0()*-0.111103);
}

double mlp::synapse0x1049c2b00() {
   return (neuron0x1049be0c0()*-0.0105464);
}

double mlp::synapse0x1049c2b30() {
   return (neuron0x1049be3a0()*0.101482);
}

double mlp::synapse0x1049c2b60() {
   return (neuron0x1049be680()*-0.140441);
}

double mlp::synapse0x1049c2b90() {
   return (neuron0x1049be960()*0.0389583);
}

double mlp::synapse0x1049c2bc0() {
   return (neuron0x1049bec40()*-0.286594);
}

double mlp::synapse0x1049c2bf0() {
   return (neuron0x1049bef50()*-0.20137);
}

double mlp::synapse0x1049c2c20() {
   return (neuron0x1049bf260()*0.132643);
}

double mlp::synapse0x1049c2c50() {
   return (neuron0x1049bf570()*0.0645017);
}

double mlp::synapse0x1049c2c80() {
   return (neuron0x1049bf880()*-0.687431);
}

double mlp::synapse0x1049c2cb0() {
   return (neuron0x1049bfb90()*-0.52188);
}

double mlp::synapse0x1049c2ff0() {
   return (neuron0x1049af1b0()*-0.207959);
}

double mlp::synapse0x1049c3020() {
   return (neuron0x1049bdb00()*0.37523);
}

double mlp::synapse0x1049c3050() {
   return (neuron0x1049bdde0()*-0.123488);
}

double mlp::synapse0x1049c3080() {
   return (neuron0x1049be0c0()*-0.00931623);
}

double mlp::synapse0x1049c30b0() {
   return (neuron0x1049be3a0()*0.149538);
}

double mlp::synapse0x1049c30e0() {
   return (neuron0x1049be680()*0.228553);
}

double mlp::synapse0x1049c3110() {
   return (neuron0x1049be960()*-0.172849);
}

double mlp::synapse0x1049c3140() {
   return (neuron0x1049bec40()*0.242616);
}

double mlp::synapse0x1049c3170() {
   return (neuron0x1049bef50()*-0.373541);
}

double mlp::synapse0x1049c31a0() {
   return (neuron0x1049bf260()*-0.0899571);
}

double mlp::synapse0x1049c31d0() {
   return (neuron0x1049bf570()*-0.0491715);
}

double mlp::synapse0x1049c3200() {
   return (neuron0x1049bf880()*-0.438906);
}

double mlp::synapse0x1049c3230() {
   return (neuron0x1049bfb90()*0.325152);
}

double mlp::synapse0x1049c3570() {
   return (neuron0x1049af1b0()*0.0530916);
}

double mlp::synapse0x1049c35a0() {
   return (neuron0x1049bdb00()*0.672801);
}

double mlp::synapse0x1049c35d0() {
   return (neuron0x1049bdde0()*0.27853);
}

double mlp::synapse0x1049c3600() {
   return (neuron0x1049be0c0()*0.191854);
}

double mlp::synapse0x1049c3630() {
   return (neuron0x1049be3a0()*0.190485);
}

double mlp::synapse0x1049c3660() {
   return (neuron0x1049be680()*-0.029601);
}

double mlp::synapse0x1049c3690() {
   return (neuron0x1049be960()*-0.074836);
}

double mlp::synapse0x1049c36c0() {
   return (neuron0x1049bec40()*-0.11687);
}

double mlp::synapse0x1049c36f0() {
   return (neuron0x1049bef50()*-0.181488);
}

double mlp::synapse0x1049c3720() {
   return (neuron0x1049bf260()*0.128707);
}

double mlp::synapse0x1049c3750() {
   return (neuron0x1049bf570()*0.16075);
}

double mlp::synapse0x1049c3780() {
   return (neuron0x1049bf880()*-0.294505);
}

double mlp::synapse0x1049c37b0() {
   return (neuron0x1049bfb90()*0.472842);
}

double mlp::synapse0x1049c3af0() {
   return (neuron0x1049af1b0()*0.134168);
}

double mlp::synapse0x1049c3b20() {
   return (neuron0x1049bdb00()*0.404646);
}

double mlp::synapse0x1049c3b50() {
   return (neuron0x1049bdde0()*0.26322);
}

double mlp::synapse0x1049c3b80() {
   return (neuron0x1049be0c0()*0.506631);
}

double mlp::synapse0x1049c3bb0() {
   return (neuron0x1049be3a0()*-0.141273);
}

double mlp::synapse0x1049c3be0() {
   return (neuron0x1049be680()*-0.138271);
}

double mlp::synapse0x1049c3c10() {
   return (neuron0x1049be960()*0.272595);
}

double mlp::synapse0x1049c3c40() {
   return (neuron0x1049bec40()*0.00987342);
}

double mlp::synapse0x1049c3c70() {
   return (neuron0x1049bef50()*0.28694);
}

double mlp::synapse0x1049c3ca0() {
   return (neuron0x1049bf260()*-0.0988413);
}

double mlp::synapse0x1049c3cd0() {
   return (neuron0x1049bf570()*-0.463514);
}

double mlp::synapse0x1049c3d00() {
   return (neuron0x1049bf880()*-0.118424);
}

double mlp::synapse0x1049c3d30() {
   return (neuron0x1049bfb90()*-0.0726599);
}

double mlp::synapse0x1049c4070() {
   return (neuron0x1049af1b0()*-0.0198437);
}

double mlp::synapse0x1049c40a0() {
   return (neuron0x1049bdb00()*-0.354326);
}

double mlp::synapse0x1049c40d0() {
   return (neuron0x1049bdde0()*0.00333011);
}

double mlp::synapse0x1049c4100() {
   return (neuron0x1049be0c0()*0.380889);
}

double mlp::synapse0x1049c4130() {
   return (neuron0x1049be3a0()*0.400113);
}

double mlp::synapse0x1049c4160() {
   return (neuron0x1049be680()*-0.157832);
}

double mlp::synapse0x1049c4190() {
   return (neuron0x1049be960()*-0.459699);
}

double mlp::synapse0x1049c41c0() {
   return (neuron0x1049bec40()*0.151965);
}

double mlp::synapse0x1049c41f0() {
   return (neuron0x1049bef50()*-0.0771412);
}

double mlp::synapse0x1049c4220() {
   return (neuron0x1049bf260()*0.206035);
}

double mlp::synapse0x1049c4250() {
   return (neuron0x1049bf570()*0.128563);
}

double mlp::synapse0x1049c4280() {
   return (neuron0x1049bf880()*-0.421118);
}

double mlp::synapse0x1049c42b0() {
   return (neuron0x1049bfb90()*0.256939);
}

double mlp::synapse0x1049af4b0() {
   return (neuron0x1049bfea0()*-0.0309054);
}

double mlp::synapse0x1049c44c0() {
   return (neuron0x1049c00c0()*0.228735);
}

double mlp::synapse0x1049c44f0() {
   return (neuron0x1049c0740()*0.000971981);
}

double mlp::synapse0x1049c4520() {
   return (neuron0x1049c0d50()*-0.294308);
}

double mlp::synapse0x1049c4550() {
   return (neuron0x1049c13d0()*0.0714546);
}

double mlp::synapse0x1049c4580() {
   return (neuron0x1049c0b20()*0.0968133);
}

double mlp::synapse0x1049c45b0() {
   return (neuron0x1049c1c60()*0.128707);
}

double mlp::synapse0x1049c45e0() {
   return (neuron0x1049c21e0()*-0.0564208);
}

double mlp::synapse0x1049c4610() {
   return (neuron0x1049c2760()*-0.0831984);
}

double mlp::synapse0x1049c4640() {
   return (neuron0x1049c2ce0()*0.224102);
}

double mlp::synapse0x1049c4670() {
   return (neuron0x1049c3260()*-0.292775);
}

double mlp::synapse0x1049c46a0() {
   return (neuron0x1049c37e0()*0.125751);
}

double mlp::synapse0x1049c46d0() {
   return (neuron0x1049c3d60()*0.280484);
}

double mlp::synapse0x1049c49e0() {
   return (neuron0x1049bfea0()*-0.0531909);
}

double mlp::synapse0x1049c4a10() {
   return (neuron0x1049c00c0()*-0.0013471);
}

double mlp::synapse0x1049c4a40() {
   return (neuron0x1049c0740()*0.415537);
}

double mlp::synapse0x1049c4a70() {
   return (neuron0x1049c0d50()*0.010652);
}

double mlp::synapse0x1049c4aa0() {
   return (neuron0x1049c13d0()*-0.0781073);
}

double mlp::synapse0x1049c4ad0() {
   return (neuron0x1049c0b20()*-0.0809861);
}

double mlp::synapse0x1049c4b00() {
   return (neuron0x1049c1c60()*-0.088533);
}

double mlp::synapse0x1049c4b30() {
   return (neuron0x1049c21e0()*0.091913);
}

double mlp::synapse0x1049c4b60() {
   return (neuron0x1049c2760()*0.211611);
}

double mlp::synapse0x1049c4b90() {
   return (neuron0x1049c2ce0()*-0.131277);
}

double mlp::synapse0x1049c4bc0() {
   return (neuron0x1049c3260()*-0.159254);
}

double mlp::synapse0x1049c4bf0() {
   return (neuron0x1049c37e0()*-0.0510484);
}

double mlp::synapse0x1049c4c20() {
   return (neuron0x1049c3d60()*-0.108959);
}

double mlp::synapse0x1049c4f30() {
   return (neuron0x1049bfea0()*-0.202452);
}

double mlp::synapse0x1049c4f60() {
   return (neuron0x1049c00c0()*0.142188);
}

double mlp::synapse0x1049c4f90() {
   return (neuron0x1049c0740()*-0.0808767);
}

double mlp::synapse0x1049c4fc0() {
   return (neuron0x1049c0d50()*-0.160328);
}

double mlp::synapse0x1049c4ff0() {
   return (neuron0x1049c13d0()*0.273505);
}

double mlp::synapse0x1049c5020() {
   return (neuron0x1049c0b20()*0.136286);
}

double mlp::synapse0x1049c5050() {
   return (neuron0x1049c1c60()*0.371937);
}

double mlp::synapse0x1049c5080() {
   return (neuron0x1049c21e0()*0.00718773);
}

double mlp::synapse0x1049c50b0() {
   return (neuron0x1049c2760()*0.0106028);
}

double mlp::synapse0x1049c50e0() {
   return (neuron0x1049c2ce0()*0.20146);
}

double mlp::synapse0x1049c5110() {
   return (neuron0x1049c3260()*-0.275521);
}

double mlp::synapse0x1049c5140() {
   return (neuron0x1049c37e0()*0.179819);
}

double mlp::synapse0x1049c5170() {
   return (neuron0x1049c3d60()*0.217191);
}

double mlp::synapse0x1049c5480() {
   return (neuron0x1049bfea0()*0.193716);
}

double mlp::synapse0x1049c54b0() {
   return (neuron0x1049c00c0()*-0.00379323);
}

double mlp::synapse0x1049c54e0() {
   return (neuron0x1049c0740()*-0.014815);
}

double mlp::synapse0x1049c5510() {
   return (neuron0x1049c0d50()*-0.0528852);
}

double mlp::synapse0x1049c5540() {
   return (neuron0x1049c13d0()*-0.127924);
}

double mlp::synapse0x1049c5570() {
   return (neuron0x1049c0b20()*0.125379);
}

double mlp::synapse0x1049c55a0() {
   return (neuron0x1049c1c60()*0.0656595);
}

double mlp::synapse0x1049c55d0() {
   return (neuron0x1049c21e0()*-0.2494);
}

double mlp::synapse0x1049c5600() {
   return (neuron0x1049c2760()*0.050931);
}

double mlp::synapse0x1049c5630() {
   return (neuron0x1049c2ce0()*0.0982416);
}

double mlp::synapse0x1049c5660() {
   return (neuron0x1049c3260()*-0.143061);
}

double mlp::synapse0x1049c5690() {
   return (neuron0x1049c37e0()*0.17793);
}

double mlp::synapse0x1049c56c0() {
   return (neuron0x1049c3d60()*0.117375);
}

double mlp::synapse0x1049af380() {
   return (neuron0x1049bfea0()*0.202067);
}

double mlp::synapse0x1049c59d0() {
   return (neuron0x1049c00c0()*-0.0346245);
}

double mlp::synapse0x1049c5a00() {
   return (neuron0x1049c0740()*0.295646);
}

double mlp::synapse0x1049c5a30() {
   return (neuron0x1049c0d50()*-0.393274);
}

double mlp::synapse0x1049c5a60() {
   return (neuron0x1049c13d0()*0.0888647);
}

double mlp::synapse0x1049c5a90() {
   return (neuron0x1049c0b20()*0.465779);
}

double mlp::synapse0x1049c5ac0() {
   return (neuron0x1049c1c60()*0.121078);
}

double mlp::synapse0x1049c5af0() {
   return (neuron0x1049c21e0()*0.620649);
}

double mlp::synapse0x1049c5b20() {
   return (neuron0x1049c2760()*-0.626832);
}

double mlp::synapse0x1049c5b50() {
   return (neuron0x1049c2ce0()*0.00926155);
}

double mlp::synapse0x1049c5b80() {
   return (neuron0x1049c3260()*0.321011);
}

double mlp::synapse0x1049c5bb0() {
   return (neuron0x1049c37e0()*-0.0415217);
}

double mlp::synapse0x1049c5be0() {
   return (neuron0x1049c3d60()*-0.424244);
}

double mlp::synapse0x1049c5ef0() {
   return (neuron0x1049bfea0()*-0.0741147);
}

double mlp::synapse0x1049c5f20() {
   return (neuron0x1049c00c0()*0.411829);
}

double mlp::synapse0x1049c5f50() {
   return (neuron0x1049c0740()*-0.259661);
}

double mlp::synapse0x1049c5f80() {
   return (neuron0x1049c0d50()*-0.129057);
}

double mlp::synapse0x1049c5fb0() {
   return (neuron0x1049c13d0()*0.14092);
}

double mlp::synapse0x1049c5fe0() {
   return (neuron0x1049c0b20()*0.00452976);
}

double mlp::synapse0x1049c6010() {
   return (neuron0x1049c1c60()*0.404713);
}

double mlp::synapse0x1049c6040() {
   return (neuron0x1049c21e0()*-0.158256);
}

double mlp::synapse0x1049c6070() {
   return (neuron0x1049c2760()*0.0414945);
}

double mlp::synapse0x1049c60a0() {
   return (neuron0x1049c2ce0()*-0.289682);
}

double mlp::synapse0x1049c60d0() {
   return (neuron0x1049c3260()*-0.311084);
}

double mlp::synapse0x1049c6100() {
   return (neuron0x1049c37e0()*-0.511991);
}

double mlp::synapse0x1049c6130() {
   return (neuron0x1049c3d60()*0.24169);
}

double mlp::synapse0x1049c6440() {
   return (neuron0x1049bfea0()*-0.120928);
}

double mlp::synapse0x1049c6470() {
   return (neuron0x1049c00c0()*-0.283535);
}

double mlp::synapse0x1049c64a0() {
   return (neuron0x1049c0740()*0.0842255);
}

double mlp::synapse0x1049c64d0() {
   return (neuron0x1049c0d50()*0.083145);
}

double mlp::synapse0x1049c6500() {
   return (neuron0x1049c13d0()*0.221141);
}

double mlp::synapse0x1049c6530() {
   return (neuron0x1049c0b20()*-0.181702);
}

double mlp::synapse0x1049c6560() {
   return (neuron0x1049c1c60()*0.287247);
}

double mlp::synapse0x1049c6590() {
   return (neuron0x1049c21e0()*-0.186243);
}

double mlp::synapse0x1049c65c0() {
   return (neuron0x1049c2760()*-0.0741884);
}

double mlp::synapse0x1049c65f0() {
   return (neuron0x1049c2ce0()*-0.159521);
}

double mlp::synapse0x1049c6620() {
   return (neuron0x1049c3260()*-0.0187044);
}

double mlp::synapse0x1049c6650() {
   return (neuron0x1049c37e0()*0.166237);
}

double mlp::synapse0x1049c6680() {
   return (neuron0x1049c3d60()*0.02674);
}

double mlp::synapse0x1049c6a90() {
   return (neuron0x1049bfea0()*-0.0849447);
}

double mlp::synapse0x1049c6ac0() {
   return (neuron0x1049c00c0()*-0.115699);
}

double mlp::synapse0x1049c6af0() {
   return (neuron0x1049c0740()*0.192334);
}

double mlp::synapse0x1049c6b20() {
   return (neuron0x1049c0d50()*-0.100749);
}

double mlp::synapse0x1049c6b50() {
   return (neuron0x1049c13d0()*0.293939);
}

double mlp::synapse0x1049c6b80() {
   return (neuron0x1049c0b20()*-0.321126);
}

double mlp::synapse0x1049c6bb0() {
   return (neuron0x1049c1c60()*0.311236);
}

double mlp::synapse0x1049c6be0() {
   return (neuron0x1049c21e0()*-0.26438);
}

double mlp::synapse0x1049c6c10() {
   return (neuron0x1049c2760()*0.0715952);
}

double mlp::synapse0x1049c6c40() {
   return (neuron0x1049c2ce0()*-0.0858773);
}

double mlp::synapse0x1049c6c70() {
   return (neuron0x1049c3260()*-0.113565);
}

double mlp::synapse0x1049c6ca0() {
   return (neuron0x1049c37e0()*0.305435);
}

double mlp::synapse0x1049c6cd0() {
   return (neuron0x1049c3d60()*-0.0206125);
}

double mlp::synapse0x1049c6fe0() {
   return (neuron0x1049bfea0()*-0.316637);
}

double mlp::synapse0x1049c7010() {
   return (neuron0x1049c00c0()*-0.0342257);
}

double mlp::synapse0x1049c7040() {
   return (neuron0x1049c0740()*0.00798887);
}

double mlp::synapse0x1049c7070() {
   return (neuron0x1049c0d50()*0.205053);
}

double mlp::synapse0x1049c70a0() {
   return (neuron0x1049c13d0()*0.116467);
}

double mlp::synapse0x1049c70d0() {
   return (neuron0x1049c0b20()*-0.362791);
}

double mlp::synapse0x1049c7100() {
   return (neuron0x1049c1c60()*-0.259108);
}

double mlp::synapse0x1049c7130() {
   return (neuron0x1049c21e0()*-0.102023);
}

double mlp::synapse0x1049c7160() {
   return (neuron0x1049c2760()*0.364496);
}

double mlp::synapse0x1049c7190() {
   return (neuron0x1049c2ce0()*-0.024458);
}

double mlp::synapse0x1049c71c0() {
   return (neuron0x1049c3260()*0.111752);
}

double mlp::synapse0x1049c71f0() {
   return (neuron0x1049c37e0()*0.193989);
}

double mlp::synapse0x1049c7220() {
   return (neuron0x1049c3d60()*0.0626692);
}

