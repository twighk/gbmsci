#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12) {
   input0 = (in0 - 41.5534)/22.8958;
   input1 = (in1 - 54.8156)/58.3418;
   input2 = (in2 - 34.7353)/157.961;
   input3 = (in3 - 2.47483)/0.707002;
   input4 = (in4 - -0.000927224)/0.984594;
   input5 = (in5 - 0.00106349)/1.08698;
   input6 = (in6 - 1.20657)/3.17682;
   input7 = (in7 - 0.306356)/2.11336;
   input8 = (in8 - 0.990672)/3.99141;
   input9 = (in9 - -0.379519)/0.919365;
   input10 = (in10 - 1.56249)/1.0767;
   input11 = (in11 - 40.0493)/36.6139;
   input12 = (in12 - 41.5534)/22.8958;
   switch(index) {
     case 0:
         return neuron0x104b13f10();
     case 1:
         return neuron0x104b14330();
     case 2:
         return neuron0x104b14880();
     case 3:
         return neuron0x104b14dd0();
     case 4:
         return neuron0x104b15320();
     case 5:
         return neuron0x104b15840();
     case 6:
         return neuron0x104b15d90();
     case 7:
         return neuron0x104b162e0();
     case 8:
         return neuron0x104b16830();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 41.5534)/22.8958;
   input1 = (input[1] - 54.8156)/58.3418;
   input2 = (input[2] - 34.7353)/157.961;
   input3 = (input[3] - 2.47483)/0.707002;
   input4 = (input[4] - -0.000927224)/0.984594;
   input5 = (input[5] - 0.00106349)/1.08698;
   input6 = (input[6] - 1.20657)/3.17682;
   input7 = (input[7] - 0.306356)/2.11336;
   input8 = (input[8] - 0.990672)/3.99141;
   input9 = (input[9] - -0.379519)/0.919365;
   input10 = (input[10] - 1.56249)/1.0767;
   input11 = (input[11] - 40.0493)/36.6139;
   input12 = (input[12] - 41.5534)/22.8958;
   switch(index) {
     case 0:
         return neuron0x104b13f10();
     case 1:
         return neuron0x104b14330();
     case 2:
         return neuron0x104b14880();
     case 3:
         return neuron0x104b14dd0();
     case 4:
         return neuron0x104b15320();
     case 5:
         return neuron0x104b15840();
     case 6:
         return neuron0x104b15d90();
     case 7:
         return neuron0x104b162e0();
     case 8:
         return neuron0x104b16830();
     default:
         return 0.;
   }
}

double mlp::neuron0x104b01890() {
   return input0;
}

double mlp::neuron0x104b08e40() {
   return input1;
}

double mlp::neuron0x104b09120() {
   return input2;
}

double mlp::neuron0x104b09400() {
   return input3;
}

double mlp::neuron0x104b096e0() {
   return input4;
}

double mlp::neuron0x104b099c0() {
   return input5;
}

double mlp::neuron0x104b09ca0() {
   return input6;
}

double mlp::neuron0x104b09f80() {
   return input7;
}

double mlp::neuron0x104b0a290() {
   return input8;
}

double mlp::neuron0x104b0a5a0() {
   return input9;
}

double mlp::neuron0x104b0a8b0() {
   return input10;
}

double mlp::neuron0x104b0abc0() {
   return input11;
}

double mlp::neuron0x104b0aed0() {
   return input12;
}

double mlp::input0x104b0b1e0() {
   double input = -0.325236;
   input += synapse0x104b084f0();
   input += synapse0x104b01840();
   input += synapse0x104b08bb0();
   input += synapse0x104b08be0();
   input += synapse0x104b01340();
   input += synapse0x104b01370();
   input += synapse0x104b013a0();
   input += synapse0x104b0b340();
   input += synapse0x104b0b370();
   input += synapse0x104b0b3a0();
   input += synapse0x104b0b3d0();
   input += synapse0x104b0b400();
   input += synapse0x104b0b430();
   return input;
}

double mlp::neuron0x104b0b1e0() {
   double input = input0x104b0b1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0b460() {
   double input = 0.177493;
   input += synapse0x104b0b770();
   input += synapse0x104b0b7a0();
   input += synapse0x104b0b7d0();
   input += synapse0x104b0b800();
   input += synapse0x104b0b930();
   input += synapse0x104b0b960();
   input += synapse0x104b0b990();
   input += synapse0x104b0b9c0();
   input += synapse0x104b0b9f0();
   input += synapse0x104b0ba20();
   input += synapse0x104b0ba50();
   input += synapse0x104b0ba80();
   input += synapse0x104b0bab0();
   return input;
}

double mlp::neuron0x104b0b460() {
   double input = input0x104b0b460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0bae0() {
   double input = -0.894667;
   input += synapse0x104b0bd70();
   input += synapse0x104b0bda0();
   input += synapse0x104b0bdd0();
   input += synapse0x104b0be00();
   input += synapse0x104b0be30();
   input += synapse0x104b0be60();
   input += synapse0x104b0be90();
   input += synapse0x104b0b830();
   input += synapse0x104b0b860();
   input += synapse0x104b0b890();
   input += synapse0x104b0b8c0();
   input += synapse0x104b0b8f0();
   input += synapse0x104b0c0c0();
   return input;
}

double mlp::neuron0x104b0bae0() {
   double input = input0x104b0bae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0c0f0() {
   double input = 0.617036;
   input += synapse0x104b0c500();
   input += synapse0x104b0c530();
   input += synapse0x104b0c560();
   input += synapse0x104b0c590();
   input += synapse0x104b0c5c0();
   input += synapse0x104b0c5f0();
   input += synapse0x104b0c620();
   input += synapse0x104b0c650();
   input += synapse0x104b0c680();
   input += synapse0x104b0c6b0();
   input += synapse0x104b0c6e0();
   input += synapse0x104b0c710();
   input += synapse0x104b0c740();
   return input;
}

double mlp::neuron0x104b0c0f0() {
   double input = input0x104b0c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0c770() {
   double input = -0.620463;
   input += synapse0x104b0ca00();
   input += synapse0x104b0ca30();
   input += synapse0x104b0ca60();
   input += synapse0x104b0ca90();
   input += synapse0x104b0cac0();
   input += synapse0x104b0caf0();
   input += synapse0x104b0cb20();
   input += synapse0x104b0cb50();
   input += synapse0x104b0cb80();
   input += synapse0x104b0cbb0();
   input += synapse0x104b0cbe0();
   input += synapse0x104b0cc10();
   input += synapse0x104b0cc40();
   return input;
}

double mlp::neuron0x104b0c770() {
   double input = input0x104b0c770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0bec0() {
   double input = -0.119064;
   input += synapse0x104b0c050();
   input += synapse0x104b0c080();
   input += synapse0x104b0cdf0();
   input += synapse0x104b0ce20();
   input += synapse0x104b0ce50();
   input += synapse0x104b0ce80();
   input += synapse0x104b0ceb0();
   input += synapse0x104b0cee0();
   input += synapse0x104b0cf10();
   input += synapse0x104b0cf40();
   input += synapse0x104b0cf70();
   input += synapse0x104b0cfa0();
   input += synapse0x104b0cfd0();
   return input;
}

double mlp::neuron0x104b0bec0() {
   double input = input0x104b0bec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0d000() {
   double input = 0.850693;
   input += synapse0x104b0d310();
   input += synapse0x104b0d340();
   input += synapse0x104b0d370();
   input += synapse0x104b0d3a0();
   input += synapse0x104b0d3d0();
   input += synapse0x104b0d400();
   input += synapse0x104b0d430();
   input += synapse0x104b0d460();
   input += synapse0x104b0d490();
   input += synapse0x104b0d4c0();
   input += synapse0x104b0d4f0();
   input += synapse0x104b0d520();
   input += synapse0x104b0d550();
   return input;
}

double mlp::neuron0x104b0d000() {
   double input = input0x104b0d000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0d580() {
   double input = 1.66598;
   input += synapse0x104b0d890();
   input += synapse0x104b0d8c0();
   input += synapse0x104b0d8f0();
   input += synapse0x104b0d920();
   input += synapse0x104b0d950();
   input += synapse0x104b0d980();
   input += synapse0x104b0d9b0();
   input += synapse0x104b0d9e0();
   input += synapse0x104b0da10();
   input += synapse0x104b0da40();
   input += synapse0x104b0da70();
   input += synapse0x104b0daa0();
   input += synapse0x104b0dad0();
   return input;
}

double mlp::neuron0x104b0d580() {
   double input = input0x104b0d580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0db00() {
   double input = -0.479037;
   input += synapse0x104b0de10();
   input += synapse0x104b0de40();
   input += synapse0x104b0de70();
   input += synapse0x104b0dea0();
   input += synapse0x104b0ded0();
   input += synapse0x104b0df00();
   input += synapse0x104b0df30();
   input += synapse0x104b0df60();
   input += synapse0x104b0df90();
   input += synapse0x104b0dfc0();
   input += synapse0x104b0dff0();
   input += synapse0x104b0e020();
   input += synapse0x104b0e050();
   return input;
}

double mlp::neuron0x104b0db00() {
   double input = input0x104b0db00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0e080() {
   double input = -0.238491;
   input += synapse0x104b0e390();
   input += synapse0x104b0e3c0();
   input += synapse0x104b0e3f0();
   input += synapse0x104b0e420();
   input += synapse0x104b0e450();
   input += synapse0x104b0e480();
   input += synapse0x104b0e4b0();
   input += synapse0x104b0e4e0();
   input += synapse0x104b0e510();
   input += synapse0x104b0e540();
   input += synapse0x104b0e570();
   input += synapse0x104b0e5a0();
   input += synapse0x104b0e5d0();
   return input;
}

double mlp::neuron0x104b0e080() {
   double input = input0x104b0e080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0e600() {
   double input = 0.221774;
   input += synapse0x104b0e910();
   input += synapse0x104b0e940();
   input += synapse0x104b0e970();
   input += synapse0x104b0e9a0();
   input += synapse0x104b0e9d0();
   input += synapse0x104b0ea00();
   input += synapse0x104b0ea30();
   input += synapse0x104b0ea60();
   input += synapse0x104b0ea90();
   input += synapse0x104b0eac0();
   input += synapse0x104b0eaf0();
   input += synapse0x104b0eb20();
   input += synapse0x104b0eb50();
   return input;
}

double mlp::neuron0x104b0e600() {
   double input = input0x104b0e600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0eb80() {
   double input = 0.117724;
   input += synapse0x104b0ee90();
   input += synapse0x104b0eec0();
   input += synapse0x104b0eef0();
   input += synapse0x104b0ef20();
   input += synapse0x104b0ef50();
   input += synapse0x104b0ef80();
   input += synapse0x104b0efb0();
   input += synapse0x104b0efe0();
   input += synapse0x104b0f010();
   input += synapse0x104b0f040();
   input += synapse0x104b0f070();
   input += synapse0x104b0f0a0();
   input += synapse0x104b0f0d0();
   return input;
}

double mlp::neuron0x104b0eb80() {
   double input = input0x104b0eb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0f100() {
   double input = -0.902791;
   input += synapse0x104b0f410();
   input += synapse0x104b0f440();
   input += synapse0x104b0f470();
   input += synapse0x104b0f4a0();
   input += synapse0x104b0f4d0();
   input += synapse0x104b0f500();
   input += synapse0x104b0f530();
   input += synapse0x104b0f560();
   input += synapse0x104b0f590();
   input += synapse0x104b0f5c0();
   input += synapse0x104b0f5f0();
   input += synapse0x104b0f620();
   input += synapse0x104b0f650();
   return input;
}

double mlp::neuron0x104b0f100() {
   double input = input0x104b0f100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0f6b0() {
   double input = -0.0198542;
   input += synapse0x104b0f990();
   input += synapse0x104b0f9c0();
   input += synapse0x104b0f9f0();
   input += synapse0x104b0fa20();
   input += synapse0x104b0fa50();
   input += synapse0x104b0fa80();
   input += synapse0x104b0fab0();
   input += synapse0x104b0fae0();
   input += synapse0x104b0fb10();
   input += synapse0x104b0fb40();
   input += synapse0x104b0fb70();
   input += synapse0x104b0fba0();
   input += synapse0x104b0fbd0();
   return input;
}

double mlp::neuron0x104b0f6b0() {
   double input = input0x104b0f6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b0fc00() {
   double input = 0.611545;
   input += synapse0x104b0ff10();
   input += synapse0x104b0ff40();
   input += synapse0x104b0ff70();
   input += synapse0x104b0ffa0();
   input += synapse0x104b0ffd0();
   input += synapse0x104b10000();
   input += synapse0x104b10030();
   input += synapse0x104b10060();
   input += synapse0x104b10090();
   input += synapse0x104b100c0();
   input += synapse0x104b100f0();
   input += synapse0x104b10120();
   input += synapse0x104b10150();
   return input;
}

double mlp::neuron0x104b0fc00() {
   double input = input0x104b0fc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b10180() {
   double input = -0.292465;
   input += synapse0x104b10490();
   input += synapse0x104b104c0();
   input += synapse0x104b104f0();
   input += synapse0x104b10520();
   input += synapse0x104b10550();
   input += synapse0x104b10580();
   input += synapse0x104b105b0();
   input += synapse0x104b105e0();
   input += synapse0x104b10610();
   input += synapse0x104b10640();
   input += synapse0x104b10670();
   input += synapse0x104b106a0();
   input += synapse0x104b106d0();
   return input;
}

double mlp::neuron0x104b10180() {
   double input = input0x104b10180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b10700() {
   double input = 0.413156;
   input += synapse0x104b10a10();
   input += synapse0x104b10a40();
   input += synapse0x104b10a70();
   input += synapse0x104b10aa0();
   input += synapse0x104b10ad0();
   input += synapse0x104b10b00();
   input += synapse0x104b10b30();
   input += synapse0x104b10b60();
   input += synapse0x104b10b90();
   input += synapse0x104b10bc0();
   input += synapse0x104b10bf0();
   input += synapse0x104b10c20();
   input += synapse0x104b10c50();
   return input;
}

double mlp::neuron0x104b10700() {
   double input = input0x104b10700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b10c80() {
   double input = 0.0626403;
   input += synapse0x104b10f90();
   input += synapse0x104b10fc0();
   input += synapse0x104b10ff0();
   input += synapse0x104b11020();
   input += synapse0x104b11050();
   input += synapse0x104b11080();
   input += synapse0x104b110b0();
   input += synapse0x104b110e0();
   input += synapse0x104b11110();
   input += synapse0x104b11140();
   input += synapse0x104b11170();
   input += synapse0x104b111a0();
   input += synapse0x104b111d0();
   return input;
}

double mlp::neuron0x104b10c80() {
   double input = input0x104b10c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b11200() {
   double input = -0.0153342;
   input += synapse0x104b11510();
   input += synapse0x104b11540();
   input += synapse0x104b11570();
   input += synapse0x104b115a0();
   input += synapse0x104b115d0();
   input += synapse0x104b11600();
   input += synapse0x104b11630();
   input += synapse0x104b11660();
   input += synapse0x104b11690();
   input += synapse0x104b116c0();
   input += synapse0x104b116f0();
   input += synapse0x104b11720();
   input += synapse0x104b11750();
   return input;
}

double mlp::neuron0x104b11200() {
   double input = input0x104b11200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b11780() {
   double input = 0.0920669;
   input += synapse0x104b0c400();
   input += synapse0x104b0c430();
   input += synapse0x104b0c460();
   input += synapse0x104b0c490();
   input += synapse0x104b0c4c0();
   input += synapse0x104b11c90();
   input += synapse0x104b11cc0();
   input += synapse0x104b11cf0();
   input += synapse0x104b11d20();
   input += synapse0x104b11d50();
   input += synapse0x104b11d80();
   input += synapse0x104b11db0();
   input += synapse0x104b11de0();
   return input;
}

double mlp::neuron0x104b11780() {
   double input = input0x104b11780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b11e10() {
   double input = -0.604012;
   input += synapse0x104b12120();
   input += synapse0x104b12150();
   input += synapse0x104b12180();
   input += synapse0x104b121b0();
   input += synapse0x104b121e0();
   input += synapse0x104b12210();
   input += synapse0x104b12240();
   input += synapse0x104b12270();
   input += synapse0x104b122a0();
   input += synapse0x104b122d0();
   input += synapse0x104b12300();
   input += synapse0x104b12330();
   input += synapse0x104b12360();
   return input;
}

double mlp::neuron0x104b11e10() {
   double input = input0x104b11e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b12390() {
   double input = -0.307235;
   input += synapse0x104b126a0();
   input += synapse0x104b126d0();
   input += synapse0x104b12700();
   input += synapse0x104b12730();
   input += synapse0x104b12760();
   input += synapse0x104b12790();
   input += synapse0x104b127c0();
   input += synapse0x104b127f0();
   input += synapse0x104b12820();
   input += synapse0x104b12850();
   input += synapse0x104b12880();
   input += synapse0x104b128b0();
   input += synapse0x104b128e0();
   return input;
}

double mlp::neuron0x104b12390() {
   double input = input0x104b12390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b12910() {
   double input = -0.320344;
   input += synapse0x104b12c20();
   input += synapse0x104b12c50();
   input += synapse0x104b12c80();
   input += synapse0x104b12cb0();
   input += synapse0x104b12ce0();
   input += synapse0x104b12d10();
   input += synapse0x104b12d40();
   input += synapse0x104b12d70();
   input += synapse0x104b12da0();
   input += synapse0x104b12dd0();
   input += synapse0x104b12e00();
   input += synapse0x104b12e30();
   input += synapse0x104b12e60();
   return input;
}

double mlp::neuron0x104b12910() {
   double input = input0x104b12910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b12e90() {
   double input = 0.256693;
   input += synapse0x104b131a0();
   input += synapse0x104b131d0();
   input += synapse0x104b13200();
   input += synapse0x104b13230();
   input += synapse0x104b13260();
   input += synapse0x104b13290();
   input += synapse0x104b132c0();
   input += synapse0x104b132f0();
   input += synapse0x104b13320();
   input += synapse0x104b13350();
   input += synapse0x104b13380();
   input += synapse0x104b133b0();
   input += synapse0x104b133e0();
   return input;
}

double mlp::neuron0x104b12e90() {
   double input = input0x104b12e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b13410() {
   double input = -0.914376;
   input += synapse0x104b13720();
   input += synapse0x104b13750();
   input += synapse0x104b13780();
   input += synapse0x104b137b0();
   input += synapse0x104b137e0();
   input += synapse0x104b13810();
   input += synapse0x104b13840();
   input += synapse0x104b13870();
   input += synapse0x104b138a0();
   input += synapse0x104b138d0();
   input += synapse0x104b13900();
   input += synapse0x104b13930();
   input += synapse0x104b13960();
   return input;
}

double mlp::neuron0x104b13410() {
   double input = input0x104b13410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b13990() {
   double input = 0.00492651;
   input += synapse0x104b13ca0();
   input += synapse0x104b13cd0();
   input += synapse0x104b13d00();
   input += synapse0x104b13d30();
   input += synapse0x104b13d60();
   input += synapse0x104b13d90();
   input += synapse0x104b13dc0();
   input += synapse0x104b13df0();
   input += synapse0x104b13e20();
   input += synapse0x104b13e50();
   input += synapse0x104b13e80();
   input += synapse0x104b13eb0();
   input += synapse0x104b13ee0();
   return input;
}

double mlp::neuron0x104b13990() {
   double input = input0x104b13990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x104b13f10() {
   double input = -0.155695;
   input += synapse0x104b01bf0();
   input += synapse0x104b140f0();
   input += synapse0x104b14120();
   input += synapse0x104b14150();
   input += synapse0x104b14180();
   input += synapse0x104b141b0();
   input += synapse0x104b141e0();
   input += synapse0x104b14210();
   input += synapse0x104b14240();
   input += synapse0x104b14270();
   input += synapse0x104b142a0();
   input += synapse0x104b142d0();
   input += synapse0x104b14300();
   return input;
}

double mlp::neuron0x104b13f10() {
   double input = input0x104b13f10();
   return (input * 1)+0;
}

double mlp::input0x104b14330() {
   double input = 0.21585;
   input += synapse0x104b14610();
   input += synapse0x104b14640();
   input += synapse0x104b14670();
   input += synapse0x104b146a0();
   input += synapse0x104b146d0();
   input += synapse0x104b14700();
   input += synapse0x104b14730();
   input += synapse0x104b14760();
   input += synapse0x104b14790();
   input += synapse0x104b147c0();
   input += synapse0x104b147f0();
   input += synapse0x104b14820();
   input += synapse0x104b14850();
   return input;
}

double mlp::neuron0x104b14330() {
   double input = input0x104b14330();
   return (input * 1)+0;
}

double mlp::input0x104b14880() {
   double input = -0.350401;
   input += synapse0x104b14b60();
   input += synapse0x104b14b90();
   input += synapse0x104b14bc0();
   input += synapse0x104b14bf0();
   input += synapse0x104b14c20();
   input += synapse0x104b14c50();
   input += synapse0x104b14c80();
   input += synapse0x104b14cb0();
   input += synapse0x104b14ce0();
   input += synapse0x104b14d10();
   input += synapse0x104b14d40();
   input += synapse0x104b14d70();
   input += synapse0x104b14da0();
   return input;
}

double mlp::neuron0x104b14880() {
   double input = input0x104b14880();
   return (input * 1)+0;
}

double mlp::input0x104b14dd0() {
   double input = -0.581825;
   input += synapse0x104b150b0();
   input += synapse0x104b150e0();
   input += synapse0x104b15110();
   input += synapse0x104b15140();
   input += synapse0x104b15170();
   input += synapse0x104b151a0();
   input += synapse0x104b151d0();
   input += synapse0x104b15200();
   input += synapse0x104b15230();
   input += synapse0x104b15260();
   input += synapse0x104b15290();
   input += synapse0x104b152c0();
   input += synapse0x104b152f0();
   return input;
}

double mlp::neuron0x104b14dd0() {
   double input = input0x104b14dd0();
   return (input * 1)+0;
}

double mlp::input0x104b15320() {
   double input = 0.263251;
   input += synapse0x104b01ac0();
   input += synapse0x104b15600();
   input += synapse0x104b15630();
   input += synapse0x104b15660();
   input += synapse0x104b15690();
   input += synapse0x104b156c0();
   input += synapse0x104b156f0();
   input += synapse0x104b15720();
   input += synapse0x104b15750();
   input += synapse0x104b15780();
   input += synapse0x104b157b0();
   input += synapse0x104b157e0();
   input += synapse0x104b15810();
   return input;
}

double mlp::neuron0x104b15320() {
   double input = input0x104b15320();
   return (input * 1)+0;
}

double mlp::input0x104b15840() {
   double input = 0.346455;
   input += synapse0x104b15b20();
   input += synapse0x104b15b50();
   input += synapse0x104b15b80();
   input += synapse0x104b15bb0();
   input += synapse0x104b15be0();
   input += synapse0x104b15c10();
   input += synapse0x104b15c40();
   input += synapse0x104b15c70();
   input += synapse0x104b15ca0();
   input += synapse0x104b15cd0();
   input += synapse0x104b15d00();
   input += synapse0x104b15d30();
   input += synapse0x104b15d60();
   return input;
}

double mlp::neuron0x104b15840() {
   double input = input0x104b15840();
   return (input * 1)+0;
}

double mlp::input0x104b15d90() {
   double input = -0.148565;
   input += synapse0x104b16070();
   input += synapse0x104b160a0();
   input += synapse0x104b160d0();
   input += synapse0x104b16100();
   input += synapse0x104b16130();
   input += synapse0x104b16160();
   input += synapse0x104b16190();
   input += synapse0x104b161c0();
   input += synapse0x104b161f0();
   input += synapse0x104b16220();
   input += synapse0x104b16250();
   input += synapse0x104b16280();
   input += synapse0x104b162b0();
   return input;
}

double mlp::neuron0x104b15d90() {
   double input = input0x104b15d90();
   return (input * 1)+0;
}

double mlp::input0x104b162e0() {
   double input = 0.247862;
   input += synapse0x104b165c0();
   input += synapse0x104b165f0();
   input += synapse0x104b16620();
   input += synapse0x104b16650();
   input += synapse0x104b16680();
   input += synapse0x104b166b0();
   input += synapse0x104b166e0();
   input += synapse0x104b16710();
   input += synapse0x104b16740();
   input += synapse0x104b16770();
   input += synapse0x104b167a0();
   input += synapse0x104b167d0();
   input += synapse0x104b16800();
   return input;
}

double mlp::neuron0x104b162e0() {
   double input = input0x104b162e0();
   return (input * 1)+0;
}

double mlp::input0x104b16830() {
   double input = -0.0743218;
   input += synapse0x104b16b10();
   input += synapse0x104b16b40();
   input += synapse0x104b16b70();
   input += synapse0x104b16ba0();
   input += synapse0x104b16bd0();
   input += synapse0x104b16c00();
   input += synapse0x104b16c30();
   input += synapse0x104b16c60();
   input += synapse0x104b16c90();
   input += synapse0x104b16cc0();
   input += synapse0x104b16cf0();
   input += synapse0x104b16d20();
   input += synapse0x104b16d50();
   return input;
}

double mlp::neuron0x104b16830() {
   double input = input0x104b16830();
   return (input * 1)+0;
}

double mlp::synapse0x104b084f0() {
   return (neuron0x104b01890()*-0.685422);
}

double mlp::synapse0x104b01840() {
   return (neuron0x104b08e40()*-0.711875);
}

double mlp::synapse0x104b08bb0() {
   return (neuron0x104b09120()*-0.328817);
}

double mlp::synapse0x104b08be0() {
   return (neuron0x104b09400()*0.251684);
}

double mlp::synapse0x104b01340() {
   return (neuron0x104b096e0()*-0.409397);
}

double mlp::synapse0x104b01370() {
   return (neuron0x104b099c0()*0.398915);
}

double mlp::synapse0x104b013a0() {
   return (neuron0x104b09ca0()*-0.147973);
}

double mlp::synapse0x104b0b340() {
   return (neuron0x104b09f80()*-0.515545);
}

double mlp::synapse0x104b0b370() {
   return (neuron0x104b0a290()*-0.0442759);
}

double mlp::synapse0x104b0b3a0() {
   return (neuron0x104b0a5a0()*-0.0931525);
}

double mlp::synapse0x104b0b3d0() {
   return (neuron0x104b0a8b0()*-0.087675);
}

double mlp::synapse0x104b0b400() {
   return (neuron0x104b0abc0()*-0.104032);
}

double mlp::synapse0x104b0b430() {
   return (neuron0x104b0aed0()*-0.247422);
}

double mlp::synapse0x104b0b770() {
   return (neuron0x104b01890()*0.636044);
}

double mlp::synapse0x104b0b7a0() {
   return (neuron0x104b08e40()*0.343347);
}

double mlp::synapse0x104b0b7d0() {
   return (neuron0x104b09120()*0.207705);
}

double mlp::synapse0x104b0b800() {
   return (neuron0x104b09400()*0.222487);
}

double mlp::synapse0x104b0b930() {
   return (neuron0x104b096e0()*0.0712025);
}

double mlp::synapse0x104b0b960() {
   return (neuron0x104b099c0()*0.161817);
}

double mlp::synapse0x104b0b990() {
   return (neuron0x104b09ca0()*-0.143162);
}

double mlp::synapse0x104b0b9c0() {
   return (neuron0x104b09f80()*0.602719);
}

double mlp::synapse0x104b0b9f0() {
   return (neuron0x104b0a290()*0.227887);
}

double mlp::synapse0x104b0ba20() {
   return (neuron0x104b0a5a0()*-0.126838);
}

double mlp::synapse0x104b0ba50() {
   return (neuron0x104b0a8b0()*-0.894597);
}

double mlp::synapse0x104b0ba80() {
   return (neuron0x104b0abc0()*0.411737);
}

double mlp::synapse0x104b0bab0() {
   return (neuron0x104b0aed0()*0.278167);
}

double mlp::synapse0x104b0bd70() {
   return (neuron0x104b01890()*0.162698);
}

double mlp::synapse0x104b0bda0() {
   return (neuron0x104b08e40()*0.728115);
}

double mlp::synapse0x104b0bdd0() {
   return (neuron0x104b09120()*-0.567362);
}

double mlp::synapse0x104b0be00() {
   return (neuron0x104b09400()*0.256484);
}

double mlp::synapse0x104b0be30() {
   return (neuron0x104b096e0()*-0.0935413);
}

double mlp::synapse0x104b0be60() {
   return (neuron0x104b099c0()*-0.245484);
}

double mlp::synapse0x104b0be90() {
   return (neuron0x104b09ca0()*0.0467757);
}

double mlp::synapse0x104b0b830() {
   return (neuron0x104b09f80()*-0.37755);
}

double mlp::synapse0x104b0b860() {
   return (neuron0x104b0a290()*0.0774594);
}

double mlp::synapse0x104b0b890() {
   return (neuron0x104b0a5a0()*0.198267);
}

double mlp::synapse0x104b0b8c0() {
   return (neuron0x104b0a8b0()*-0.131565);
}

double mlp::synapse0x104b0b8f0() {
   return (neuron0x104b0abc0()*-0.573437);
}

double mlp::synapse0x104b0c0c0() {
   return (neuron0x104b0aed0()*0.101448);
}

double mlp::synapse0x104b0c500() {
   return (neuron0x104b01890()*0.926257);
}

double mlp::synapse0x104b0c530() {
   return (neuron0x104b08e40()*-0.264841);
}

double mlp::synapse0x104b0c560() {
   return (neuron0x104b09120()*-0.218595);
}

double mlp::synapse0x104b0c590() {
   return (neuron0x104b09400()*1.05949);
}

double mlp::synapse0x104b0c5c0() {
   return (neuron0x104b096e0()*0.132175);
}

double mlp::synapse0x104b0c5f0() {
   return (neuron0x104b099c0()*-0.0389144);
}

double mlp::synapse0x104b0c620() {
   return (neuron0x104b09ca0()*-0.38655);
}

double mlp::synapse0x104b0c650() {
   return (neuron0x104b09f80()*0.324678);
}

double mlp::synapse0x104b0c680() {
   return (neuron0x104b0a290()*-0.127345);
}

double mlp::synapse0x104b0c6b0() {
   return (neuron0x104b0a5a0()*-0.242269);
}

double mlp::synapse0x104b0c6e0() {
   return (neuron0x104b0a8b0()*0.0160398);
}

double mlp::synapse0x104b0c710() {
   return (neuron0x104b0abc0()*-1.30203);
}

double mlp::synapse0x104b0c740() {
   return (neuron0x104b0aed0()*0.460523);
}

double mlp::synapse0x104b0ca00() {
   return (neuron0x104b01890()*-0.660872);
}

double mlp::synapse0x104b0ca30() {
   return (neuron0x104b08e40()*-1.29564);
}

double mlp::synapse0x104b0ca60() {
   return (neuron0x104b09120()*1.05838);
}

double mlp::synapse0x104b0ca90() {
   return (neuron0x104b09400()*0.429581);
}

double mlp::synapse0x104b0cac0() {
   return (neuron0x104b096e0()*0.0216683);
}

double mlp::synapse0x104b0caf0() {
   return (neuron0x104b099c0()*0.0137519);
}

double mlp::synapse0x104b0cb20() {
   return (neuron0x104b09ca0()*0.147582);
}

double mlp::synapse0x104b0cb50() {
   return (neuron0x104b09f80()*-0.32137);
}

double mlp::synapse0x104b0cb80() {
   return (neuron0x104b0a290()*-0.39034);
}

double mlp::synapse0x104b0cbb0() {
   return (neuron0x104b0a5a0()*-0.181625);
}

double mlp::synapse0x104b0cbe0() {
   return (neuron0x104b0a8b0()*0.465529);
}

double mlp::synapse0x104b0cc10() {
   return (neuron0x104b0abc0()*1.04989);
}

double mlp::synapse0x104b0cc40() {
   return (neuron0x104b0aed0()*-0.0332786);
}

double mlp::synapse0x104b0c050() {
   return (neuron0x104b01890()*-0.502265);
}

double mlp::synapse0x104b0c080() {
   return (neuron0x104b08e40()*-2.38371);
}

double mlp::synapse0x104b0cdf0() {
   return (neuron0x104b09120()*-1.81003);
}

double mlp::synapse0x104b0ce20() {
   return (neuron0x104b09400()*-0.220105);
}

double mlp::synapse0x104b0ce50() {
   return (neuron0x104b096e0()*0.0654692);
}

double mlp::synapse0x104b0ce80() {
   return (neuron0x104b099c0()*0.0781286);
}

double mlp::synapse0x104b0ceb0() {
   return (neuron0x104b09ca0()*0.0716906);
}

double mlp::synapse0x104b0cee0() {
   return (neuron0x104b09f80()*-0.28525);
}

double mlp::synapse0x104b0cf10() {
   return (neuron0x104b0a290()*-0.0292664);
}

double mlp::synapse0x104b0cf40() {
   return (neuron0x104b0a5a0()*0.0637493);
}

double mlp::synapse0x104b0cf70() {
   return (neuron0x104b0a8b0()*0.521162);
}

double mlp::synapse0x104b0cfa0() {
   return (neuron0x104b0abc0()*-0.651343);
}

double mlp::synapse0x104b0cfd0() {
   return (neuron0x104b0aed0()*-0.160047);
}

double mlp::synapse0x104b0d310() {
   return (neuron0x104b01890()*-0.31922);
}

double mlp::synapse0x104b0d340() {
   return (neuron0x104b08e40()*-0.969292);
}

double mlp::synapse0x104b0d370() {
   return (neuron0x104b09120()*-1.19877);
}

double mlp::synapse0x104b0d3a0() {
   return (neuron0x104b09400()*1.29806);
}

double mlp::synapse0x104b0d3d0() {
   return (neuron0x104b096e0()*0.132146);
}

double mlp::synapse0x104b0d400() {
   return (neuron0x104b099c0()*0.0349161);
}

double mlp::synapse0x104b0d430() {
   return (neuron0x104b09ca0()*-0.165999);
}

double mlp::synapse0x104b0d460() {
   return (neuron0x104b09f80()*-0.196501);
}

double mlp::synapse0x104b0d490() {
   return (neuron0x104b0a290()*-0.329779);
}

double mlp::synapse0x104b0d4c0() {
   return (neuron0x104b0a5a0()*-0.291688);
}

double mlp::synapse0x104b0d4f0() {
   return (neuron0x104b0a8b0()*0.602717);
}

double mlp::synapse0x104b0d520() {
   return (neuron0x104b0abc0()*-0.24034);
}

double mlp::synapse0x104b0d550() {
   return (neuron0x104b0aed0()*0.432826);
}

double mlp::synapse0x104b0d890() {
   return (neuron0x104b01890()*0.859977);
}

double mlp::synapse0x104b0d8c0() {
   return (neuron0x104b08e40()*2.31796);
}

double mlp::synapse0x104b0d8f0() {
   return (neuron0x104b09120()*0.336514);
}

double mlp::synapse0x104b0d920() {
   return (neuron0x104b09400()*-0.127893);
}

double mlp::synapse0x104b0d950() {
   return (neuron0x104b096e0()*-0.100042);
}

double mlp::synapse0x104b0d980() {
   return (neuron0x104b099c0()*0.176294);
}

double mlp::synapse0x104b0d9b0() {
   return (neuron0x104b09ca0()*0.170262);
}

double mlp::synapse0x104b0d9e0() {
   return (neuron0x104b09f80()*0.0751553);
}

double mlp::synapse0x104b0da10() {
   return (neuron0x104b0a290()*0.0442032);
}

double mlp::synapse0x104b0da40() {
   return (neuron0x104b0a5a0()*0.0326867);
}

double mlp::synapse0x104b0da70() {
   return (neuron0x104b0a8b0()*-0.206582);
}

double mlp::synapse0x104b0daa0() {
   return (neuron0x104b0abc0()*-0.60705);
}

double mlp::synapse0x104b0dad0() {
   return (neuron0x104b0aed0()*0.715483);
}

double mlp::synapse0x104b0de10() {
   return (neuron0x104b01890()*0.0864811);
}

double mlp::synapse0x104b0de40() {
   return (neuron0x104b08e40()*2.06829);
}

double mlp::synapse0x104b0de70() {
   return (neuron0x104b09120()*1.43622);
}

double mlp::synapse0x104b0dea0() {
   return (neuron0x104b09400()*-0.124926);
}

double mlp::synapse0x104b0ded0() {
   return (neuron0x104b096e0()*0.234759);
}

double mlp::synapse0x104b0df00() {
   return (neuron0x104b099c0()*-0.0275278);
}

double mlp::synapse0x104b0df30() {
   return (neuron0x104b09ca0()*0.296346);
}

double mlp::synapse0x104b0df60() {
   return (neuron0x104b09f80()*0.0180282);
}

double mlp::synapse0x104b0df90() {
   return (neuron0x104b0a290()*0.315835);
}

double mlp::synapse0x104b0dfc0() {
   return (neuron0x104b0a5a0()*0.0436789);
}

double mlp::synapse0x104b0dff0() {
   return (neuron0x104b0a8b0()*-2.10379);
}

double mlp::synapse0x104b0e020() {
   return (neuron0x104b0abc0()*1.11049);
}

double mlp::synapse0x104b0e050() {
   return (neuron0x104b0aed0()*-0.791524);
}

double mlp::synapse0x104b0e390() {
   return (neuron0x104b01890()*0.593185);
}

double mlp::synapse0x104b0e3c0() {
   return (neuron0x104b08e40()*1.36032);
}

double mlp::synapse0x104b0e3f0() {
   return (neuron0x104b09120()*0.673417);
}

double mlp::synapse0x104b0e420() {
   return (neuron0x104b09400()*-0.302345);
}

double mlp::synapse0x104b0e450() {
   return (neuron0x104b096e0()*0.00128945);
}

double mlp::synapse0x104b0e480() {
   return (neuron0x104b099c0()*0.129172);
}

double mlp::synapse0x104b0e4b0() {
   return (neuron0x104b09ca0()*-0.00998794);
}

double mlp::synapse0x104b0e4e0() {
   return (neuron0x104b09f80()*0.0532107);
}

double mlp::synapse0x104b0e510() {
   return (neuron0x104b0a290()*0.0348258);
}

double mlp::synapse0x104b0e540() {
   return (neuron0x104b0a5a0()*0.21155);
}

double mlp::synapse0x104b0e570() {
   return (neuron0x104b0a8b0()*-0.404182);
}

double mlp::synapse0x104b0e5a0() {
   return (neuron0x104b0abc0()*1.44879);
}

double mlp::synapse0x104b0e5d0() {
   return (neuron0x104b0aed0()*0.0330366);
}

double mlp::synapse0x104b0e910() {
   return (neuron0x104b01890()*0.0649074);
}

double mlp::synapse0x104b0e940() {
   return (neuron0x104b08e40()*-0.521535);
}

double mlp::synapse0x104b0e970() {
   return (neuron0x104b09120()*0.33146);
}

double mlp::synapse0x104b0e9a0() {
   return (neuron0x104b09400()*0.0592974);
}

double mlp::synapse0x104b0e9d0() {
   return (neuron0x104b096e0()*-0.376438);
}

double mlp::synapse0x104b0ea00() {
   return (neuron0x104b099c0()*-0.0628414);
}

double mlp::synapse0x104b0ea30() {
   return (neuron0x104b09ca0()*0.0768382);
}

double mlp::synapse0x104b0ea60() {
   return (neuron0x104b09f80()*0.512854);
}

double mlp::synapse0x104b0ea90() {
   return (neuron0x104b0a290()*0.463401);
}

double mlp::synapse0x104b0eac0() {
   return (neuron0x104b0a5a0()*0.295619);
}

double mlp::synapse0x104b0eaf0() {
   return (neuron0x104b0a8b0()*-0.353895);
}

double mlp::synapse0x104b0eb20() {
   return (neuron0x104b0abc0()*0.277254);
}

double mlp::synapse0x104b0eb50() {
   return (neuron0x104b0aed0()*-0.057717);
}

double mlp::synapse0x104b0ee90() {
   return (neuron0x104b01890()*0.715739);
}

double mlp::synapse0x104b0eec0() {
   return (neuron0x104b08e40()*0.310234);
}

double mlp::synapse0x104b0eef0() {
   return (neuron0x104b09120()*0.725064);
}

double mlp::synapse0x104b0ef20() {
   return (neuron0x104b09400()*0.101067);
}

double mlp::synapse0x104b0ef50() {
   return (neuron0x104b096e0()*-0.24988);
}

double mlp::synapse0x104b0ef80() {
   return (neuron0x104b099c0()*0.0780278);
}

double mlp::synapse0x104b0efb0() {
   return (neuron0x104b09ca0()*0.213398);
}

double mlp::synapse0x104b0efe0() {
   return (neuron0x104b09f80()*-0.229044);
}

double mlp::synapse0x104b0f010() {
   return (neuron0x104b0a290()*0.449828);
}

double mlp::synapse0x104b0f040() {
   return (neuron0x104b0a5a0()*-0.316076);
}

double mlp::synapse0x104b0f070() {
   return (neuron0x104b0a8b0()*-0.522176);
}

double mlp::synapse0x104b0f0a0() {
   return (neuron0x104b0abc0()*0.336687);
}

double mlp::synapse0x104b0f0d0() {
   return (neuron0x104b0aed0()*-0.019414);
}

double mlp::synapse0x104b0f410() {
   return (neuron0x104b01890()*-0.166374);
}

double mlp::synapse0x104b0f440() {
   return (neuron0x104b08e40()*0.606334);
}

double mlp::synapse0x104b0f470() {
   return (neuron0x104b09120()*0.00367913);
}

double mlp::synapse0x104b0f4a0() {
   return (neuron0x104b09400()*0.197964);
}

double mlp::synapse0x104b0f4d0() {
   return (neuron0x104b096e0()*0.0178407);
}

double mlp::synapse0x104b0f500() {
   return (neuron0x104b099c0()*0.0792181);
}

double mlp::synapse0x104b0f530() {
   return (neuron0x104b09ca0()*-0.0536323);
}

double mlp::synapse0x104b0f560() {
   return (neuron0x104b09f80()*-0.112538);
}

double mlp::synapse0x104b0f590() {
   return (neuron0x104b0a290()*-0.504281);
}

double mlp::synapse0x104b0f5c0() {
   return (neuron0x104b0a5a0()*-0.205197);
}

double mlp::synapse0x104b0f5f0() {
   return (neuron0x104b0a8b0()*-0.141869);
}

double mlp::synapse0x104b0f620() {
   return (neuron0x104b0abc0()*-1.67292);
}

double mlp::synapse0x104b0f650() {
   return (neuron0x104b0aed0()*-0.456165);
}

double mlp::synapse0x104b0f990() {
   return (neuron0x104b0b1e0()*-0.387406);
}

double mlp::synapse0x104b0f9c0() {
   return (neuron0x104b0b460()*-0.336891);
}

double mlp::synapse0x104b0f9f0() {
   return (neuron0x104b0bae0()*0.00112564);
}

double mlp::synapse0x104b0fa20() {
   return (neuron0x104b0c0f0()*-0.0196904);
}

double mlp::synapse0x104b0fa50() {
   return (neuron0x104b0c770()*0.0106509);
}

double mlp::synapse0x104b0fa80() {
   return (neuron0x104b0bec0()*0.0722804);
}

double mlp::synapse0x104b0fab0() {
   return (neuron0x104b0d000()*0.0312228);
}

double mlp::synapse0x104b0fae0() {
   return (neuron0x104b0d580()*0.602149);
}

double mlp::synapse0x104b0fb10() {
   return (neuron0x104b0db00()*-0.143078);
}

double mlp::synapse0x104b0fb40() {
   return (neuron0x104b0e080()*0.176049);
}

double mlp::synapse0x104b0fb70() {
   return (neuron0x104b0e600()*-0.193916);
}

double mlp::synapse0x104b0fba0() {
   return (neuron0x104b0eb80()*-0.245047);
}

double mlp::synapse0x104b0fbd0() {
   return (neuron0x104b0f100()*0.272072);
}

double mlp::synapse0x104b0ff10() {
   return (neuron0x104b0b1e0()*0.031758);
}

double mlp::synapse0x104b0ff40() {
   return (neuron0x104b0b460()*0.247037);
}

double mlp::synapse0x104b0ff70() {
   return (neuron0x104b0bae0()*0.556157);
}

double mlp::synapse0x104b0ffa0() {
   return (neuron0x104b0c0f0()*0.805728);
}

double mlp::synapse0x104b0ffd0() {
   return (neuron0x104b0c770()*0.100927);
}

double mlp::synapse0x104b10000() {
   return (neuron0x104b0bec0()*1.18452);
}

double mlp::synapse0x104b10030() {
   return (neuron0x104b0d000()*0.284355);
}

double mlp::synapse0x104b10060() {
   return (neuron0x104b0d580()*-0.105068);
}

double mlp::synapse0x104b10090() {
   return (neuron0x104b0db00()*-1.45004);
}

double mlp::synapse0x104b100c0() {
   return (neuron0x104b0e080()*-0.755179);
}

double mlp::synapse0x104b100f0() {
   return (neuron0x104b0e600()*-0.307925);
}

double mlp::synapse0x104b10120() {
   return (neuron0x104b0eb80()*-0.240435);
}

double mlp::synapse0x104b10150() {
   return (neuron0x104b0f100()*1.19021);
}

double mlp::synapse0x104b10490() {
   return (neuron0x104b0b1e0()*-0.359998);
}

double mlp::synapse0x104b104c0() {
   return (neuron0x104b0b460()*-0.583228);
}

double mlp::synapse0x104b104f0() {
   return (neuron0x104b0bae0()*0.0800508);
}

double mlp::synapse0x104b10520() {
   return (neuron0x104b0c0f0()*-0.252995);
}

double mlp::synapse0x104b10550() {
   return (neuron0x104b0c770()*0.361292);
}

double mlp::synapse0x104b10580() {
   return (neuron0x104b0bec0()*-0.657845);
}

double mlp::synapse0x104b105b0() {
   return (neuron0x104b0d000()*-0.265093);
}

double mlp::synapse0x104b105e0() {
   return (neuron0x104b0d580()*0.19785);
}

double mlp::synapse0x104b10610() {
   return (neuron0x104b0db00()*0.192439);
}

double mlp::synapse0x104b10640() {
   return (neuron0x104b0e080()*-0.0938005);
}

double mlp::synapse0x104b10670() {
   return (neuron0x104b0e600()*-0.00161473);
}

double mlp::synapse0x104b106a0() {
   return (neuron0x104b0eb80()*-0.0984098);
}

double mlp::synapse0x104b106d0() {
   return (neuron0x104b0f100()*-0.434628);
}

double mlp::synapse0x104b10a10() {
   return (neuron0x104b0b1e0()*0.0667713);
}

double mlp::synapse0x104b10a40() {
   return (neuron0x104b0b460()*0.187316);
}

double mlp::synapse0x104b10a70() {
   return (neuron0x104b0bae0()*-0.331656);
}

double mlp::synapse0x104b10aa0() {
   return (neuron0x104b0c0f0()*0.780201);
}

double mlp::synapse0x104b10ad0() {
   return (neuron0x104b0c770()*-0.353958);
}

double mlp::synapse0x104b10b00() {
   return (neuron0x104b0bec0()*-0.248435);
}

double mlp::synapse0x104b10b30() {
   return (neuron0x104b0d000()*0.175153);
}

double mlp::synapse0x104b10b60() {
   return (neuron0x104b0d580()*1.59071);
}

double mlp::synapse0x104b10b90() {
   return (neuron0x104b0db00()*0.783288);
}

double mlp::synapse0x104b10bc0() {
   return (neuron0x104b0e080()*-0.349355);
}

double mlp::synapse0x104b10bf0() {
   return (neuron0x104b0e600()*0.694632);
}

double mlp::synapse0x104b10c20() {
   return (neuron0x104b0eb80()*0.040541);
}

double mlp::synapse0x104b10c50() {
   return (neuron0x104b0f100()*0.110442);
}

double mlp::synapse0x104b10f90() {
   return (neuron0x104b0b1e0()*0.193295);
}

double mlp::synapse0x104b10fc0() {
   return (neuron0x104b0b460()*0.196601);
}

double mlp::synapse0x104b10ff0() {
   return (neuron0x104b0bae0()*-0.218949);
}

double mlp::synapse0x104b11020() {
   return (neuron0x104b0c0f0()*0.184684);
}

double mlp::synapse0x104b11050() {
   return (neuron0x104b0c770()*0.214293);
}

double mlp::synapse0x104b11080() {
   return (neuron0x104b0bec0()*-0.755794);
}

double mlp::synapse0x104b110b0() {
   return (neuron0x104b0d000()*-0.128906);
}

double mlp::synapse0x104b110e0() {
   return (neuron0x104b0d580()*0.00994264);
}

double mlp::synapse0x104b11110() {
   return (neuron0x104b0db00()*0.545735);
}

double mlp::synapse0x104b11140() {
   return (neuron0x104b0e080()*0.0832203);
}

double mlp::synapse0x104b11170() {
   return (neuron0x104b0e600()*-0.0767169);
}

double mlp::synapse0x104b111a0() {
   return (neuron0x104b0eb80()*0.0440207);
}

double mlp::synapse0x104b111d0() {
   return (neuron0x104b0f100()*0.087046);
}

double mlp::synapse0x104b11510() {
   return (neuron0x104b0b1e0()*-0.258096);
}

double mlp::synapse0x104b11540() {
   return (neuron0x104b0b460()*-0.158512);
}

double mlp::synapse0x104b11570() {
   return (neuron0x104b0bae0()*0.249529);
}

double mlp::synapse0x104b115a0() {
   return (neuron0x104b0c0f0()*0.118248);
}

double mlp::synapse0x104b115d0() {
   return (neuron0x104b0c770()*-1.02443);
}

double mlp::synapse0x104b11600() {
   return (neuron0x104b0bec0()*0.779692);
}

double mlp::synapse0x104b11630() {
   return (neuron0x104b0d000()*0.155259);
}

double mlp::synapse0x104b11660() {
   return (neuron0x104b0d580()*0.375754);
}

double mlp::synapse0x104b11690() {
   return (neuron0x104b0db00()*-1.14963);
}

double mlp::synapse0x104b116c0() {
   return (neuron0x104b0e080()*-1.01076);
}

double mlp::synapse0x104b116f0() {
   return (neuron0x104b0e600()*-0.255202);
}

double mlp::synapse0x104b11720() {
   return (neuron0x104b0eb80()*-0.358422);
}

double mlp::synapse0x104b11750() {
   return (neuron0x104b0f100()*-0.00842958);
}

double mlp::synapse0x104b0c400() {
   return (neuron0x104b0b1e0()*-0.190798);
}

double mlp::synapse0x104b0c430() {
   return (neuron0x104b0b460()*0.131436);
}

double mlp::synapse0x104b0c460() {
   return (neuron0x104b0bae0()*-0.376031);
}

double mlp::synapse0x104b0c490() {
   return (neuron0x104b0c0f0()*0.00271756);
}

double mlp::synapse0x104b0c4c0() {
   return (neuron0x104b0c770()*-0.332605);
}

double mlp::synapse0x104b11c90() {
   return (neuron0x104b0bec0()*-0.406789);
}

double mlp::synapse0x104b11cc0() {
   return (neuron0x104b0d000()*-0.80845);
}

double mlp::synapse0x104b11cf0() {
   return (neuron0x104b0d580()*-0.287615);
}

double mlp::synapse0x104b11d20() {
   return (neuron0x104b0db00()*-0.0664426);
}

double mlp::synapse0x104b11d50() {
   return (neuron0x104b0e080()*-0.589823);
}

double mlp::synapse0x104b11d80() {
   return (neuron0x104b0e600()*-0.138944);
}

double mlp::synapse0x104b11db0() {
   return (neuron0x104b0eb80()*0.170999);
}

double mlp::synapse0x104b11de0() {
   return (neuron0x104b0f100()*0.25845);
}

double mlp::synapse0x104b12120() {
   return (neuron0x104b0b1e0()*-0.20708);
}

double mlp::synapse0x104b12150() {
   return (neuron0x104b0b460()*-0.349646);
}

double mlp::synapse0x104b12180() {
   return (neuron0x104b0bae0()*0.126451);
}

double mlp::synapse0x104b121b0() {
   return (neuron0x104b0c0f0()*-0.212758);
}

double mlp::synapse0x104b121e0() {
   return (neuron0x104b0c770()*-0.0925457);
}

double mlp::synapse0x104b12210() {
   return (neuron0x104b0bec0()*0.0797409);
}

double mlp::synapse0x104b12240() {
   return (neuron0x104b0d000()*-0.936482);
}

double mlp::synapse0x104b12270() {
   return (neuron0x104b0d580()*0.399643);
}

double mlp::synapse0x104b122a0() {
   return (neuron0x104b0db00()*0.0760419);
}

double mlp::synapse0x104b122d0() {
   return (neuron0x104b0e080()*0.380796);
}

double mlp::synapse0x104b12300() {
   return (neuron0x104b0e600()*-0.0466392);
}

double mlp::synapse0x104b12330() {
   return (neuron0x104b0eb80()*-0.379295);
}

double mlp::synapse0x104b12360() {
   return (neuron0x104b0f100()*0.306964);
}

double mlp::synapse0x104b126a0() {
   return (neuron0x104b0b1e0()*0.134957);
}

double mlp::synapse0x104b126d0() {
   return (neuron0x104b0b460()*0.141794);
}

double mlp::synapse0x104b12700() {
   return (neuron0x104b0bae0()*0.338128);
}

double mlp::synapse0x104b12730() {
   return (neuron0x104b0c0f0()*0.209882);
}

double mlp::synapse0x104b12760() {
   return (neuron0x104b0c770()*-0.470032);
}

double mlp::synapse0x104b12790() {
   return (neuron0x104b0bec0()*-0.00653462);
}

double mlp::synapse0x104b127c0() {
   return (neuron0x104b0d000()*-0.0331382);
}

double mlp::synapse0x104b127f0() {
   return (neuron0x104b0d580()*-0.450555);
}

double mlp::synapse0x104b12820() {
   return (neuron0x104b0db00()*0.406313);
}

double mlp::synapse0x104b12850() {
   return (neuron0x104b0e080()*0.460053);
}

double mlp::synapse0x104b12880() {
   return (neuron0x104b0e600()*-0.150143);
}

double mlp::synapse0x104b128b0() {
   return (neuron0x104b0eb80()*0.00866371);
}

double mlp::synapse0x104b128e0() {
   return (neuron0x104b0f100()*0.0370362);
}

double mlp::synapse0x104b12c20() {
   return (neuron0x104b0b1e0()*-0.0753187);
}

double mlp::synapse0x104b12c50() {
   return (neuron0x104b0b460()*0.127209);
}

double mlp::synapse0x104b12c80() {
   return (neuron0x104b0bae0()*0.224657);
}

double mlp::synapse0x104b12cb0() {
   return (neuron0x104b0c0f0()*-0.155507);
}

double mlp::synapse0x104b12ce0() {
   return (neuron0x104b0c770()*0.426861);
}

double mlp::synapse0x104b12d10() {
   return (neuron0x104b0bec0()*0.329964);
}

double mlp::synapse0x104b12d40() {
   return (neuron0x104b0d000()*-0.104476);
}

double mlp::synapse0x104b12d70() {
   return (neuron0x104b0d580()*-0.609602);
}

double mlp::synapse0x104b12da0() {
   return (neuron0x104b0db00()*-0.0134104);
}

double mlp::synapse0x104b12dd0() {
   return (neuron0x104b0e080()*0.112237);
}

double mlp::synapse0x104b12e00() {
   return (neuron0x104b0e600()*0.542245);
}

double mlp::synapse0x104b12e30() {
   return (neuron0x104b0eb80()*-0.140342);
}

double mlp::synapse0x104b12e60() {
   return (neuron0x104b0f100()*0.394043);
}

double mlp::synapse0x104b131a0() {
   return (neuron0x104b0b1e0()*0.0134745);
}

double mlp::synapse0x104b131d0() {
   return (neuron0x104b0b460()*0.359912);
}

double mlp::synapse0x104b13200() {
   return (neuron0x104b0bae0()*0.290678);
}

double mlp::synapse0x104b13230() {
   return (neuron0x104b0c0f0()*-0.512458);
}

double mlp::synapse0x104b13260() {
   return (neuron0x104b0c770()*-0.426568);
}

double mlp::synapse0x104b13290() {
   return (neuron0x104b0bec0()*0.444834);
}

double mlp::synapse0x104b132c0() {
   return (neuron0x104b0d000()*0.357023);
}

double mlp::synapse0x104b132f0() {
   return (neuron0x104b0d580()*0.0710207);
}

double mlp::synapse0x104b13320() {
   return (neuron0x104b0db00()*-0.144052);
}

double mlp::synapse0x104b13350() {
   return (neuron0x104b0e080()*0.612805);
}

double mlp::synapse0x104b13380() {
   return (neuron0x104b0e600()*-0.148644);
}

double mlp::synapse0x104b133b0() {
   return (neuron0x104b0eb80()*-0.105704);
}

double mlp::synapse0x104b133e0() {
   return (neuron0x104b0f100()*-0.210451);
}

double mlp::synapse0x104b13720() {
   return (neuron0x104b0b1e0()*0.486199);
}

double mlp::synapse0x104b13750() {
   return (neuron0x104b0b460()*-0.334284);
}

double mlp::synapse0x104b13780() {
   return (neuron0x104b0bae0()*-0.120623);
}

double mlp::synapse0x104b137b0() {
   return (neuron0x104b0c0f0()*0.485914);
}

double mlp::synapse0x104b137e0() {
   return (neuron0x104b0c770()*-0.010424);
}

double mlp::synapse0x104b13810() {
   return (neuron0x104b0bec0()*0.297645);
}

double mlp::synapse0x104b13840() {
   return (neuron0x104b0d000()*-0.045625);
}

double mlp::synapse0x104b13870() {
   return (neuron0x104b0d580()*-0.529893);
}

double mlp::synapse0x104b138a0() {
   return (neuron0x104b0db00()*-0.567145);
}

double mlp::synapse0x104b138d0() {
   return (neuron0x104b0e080()*-0.970914);
}

double mlp::synapse0x104b13900() {
   return (neuron0x104b0e600()*-0.0800332);
}

double mlp::synapse0x104b13930() {
   return (neuron0x104b0eb80()*-0.632097);
}

double mlp::synapse0x104b13960() {
   return (neuron0x104b0f100()*0.510842);
}

double mlp::synapse0x104b13ca0() {
   return (neuron0x104b0b1e0()*0.167394);
}

double mlp::synapse0x104b13cd0() {
   return (neuron0x104b0b460()*-0.509265);
}

double mlp::synapse0x104b13d00() {
   return (neuron0x104b0bae0()*-0.0864915);
}

double mlp::synapse0x104b13d30() {
   return (neuron0x104b0c0f0()*-1.13835);
}

double mlp::synapse0x104b13d60() {
   return (neuron0x104b0c770()*0.1753);
}

double mlp::synapse0x104b13d90() {
   return (neuron0x104b0bec0()*-0.196124);
}

double mlp::synapse0x104b13dc0() {
   return (neuron0x104b0d000()*-0.266423);
}

double mlp::synapse0x104b13df0() {
   return (neuron0x104b0d580()*-1.04299);
}

double mlp::synapse0x104b13e20() {
   return (neuron0x104b0db00()*-0.380417);
}

double mlp::synapse0x104b13e50() {
   return (neuron0x104b0e080()*0.30766);
}

double mlp::synapse0x104b13e80() {
   return (neuron0x104b0e600()*-0.163643);
}

double mlp::synapse0x104b13eb0() {
   return (neuron0x104b0eb80()*-0.596743);
}

double mlp::synapse0x104b13ee0() {
   return (neuron0x104b0f100()*-1.08759);
}

double mlp::synapse0x104b01bf0() {
   return (neuron0x104b0f6b0()*0.0442922);
}

double mlp::synapse0x104b140f0() {
   return (neuron0x104b0fc00()*0.158131);
}

double mlp::synapse0x104b14120() {
   return (neuron0x104b10180()*-0.286601);
}

double mlp::synapse0x104b14150() {
   return (neuron0x104b10700()*-0.365582);
}

double mlp::synapse0x104b14180() {
   return (neuron0x104b10c80()*0.0739511);
}

double mlp::synapse0x104b141b0() {
   return (neuron0x104b11200()*-0.192274);
}

double mlp::synapse0x104b141e0() {
   return (neuron0x104b11780()*0.133643);
}

double mlp::synapse0x104b14210() {
   return (neuron0x104b11e10()*0.565447);
}

double mlp::synapse0x104b14240() {
   return (neuron0x104b12390()*0.232822);
}

double mlp::synapse0x104b14270() {
   return (neuron0x104b12910()*0.519696);
}

double mlp::synapse0x104b142a0() {
   return (neuron0x104b12e90()*0.054365);
}

double mlp::synapse0x104b142d0() {
   return (neuron0x104b13410()*0.189124);
}

double mlp::synapse0x104b14300() {
   return (neuron0x104b13990()*-0.704706);
}

double mlp::synapse0x104b14610() {
   return (neuron0x104b0f6b0()*-0.411189);
}

double mlp::synapse0x104b14640() {
   return (neuron0x104b0fc00()*0.03343);
}

double mlp::synapse0x104b14670() {
   return (neuron0x104b10180()*-0.547129);
}

double mlp::synapse0x104b146a0() {
   return (neuron0x104b10700()*-0.0525112);
}

double mlp::synapse0x104b146d0() {
   return (neuron0x104b10c80()*0.152562);
}

double mlp::synapse0x104b14700() {
   return (neuron0x104b11200()*-0.242329);
}

double mlp::synapse0x104b14730() {
   return (neuron0x104b11780()*0.166613);
}

double mlp::synapse0x104b14760() {
   return (neuron0x104b11e10()*0.130489);
}

double mlp::synapse0x104b14790() {
   return (neuron0x104b12390()*0.0183675);
}

double mlp::synapse0x104b147c0() {
   return (neuron0x104b12910()*0.457551);
}

double mlp::synapse0x104b147f0() {
   return (neuron0x104b12e90()*-0.227608);
}

double mlp::synapse0x104b14820() {
   return (neuron0x104b13410()*0.533577);
}

double mlp::synapse0x104b14850() {
   return (neuron0x104b13990()*-0.296184);
}

double mlp::synapse0x104b14b60() {
   return (neuron0x104b0f6b0()*0.232004);
}

double mlp::synapse0x104b14b90() {
   return (neuron0x104b0fc00()*0.455862);
}

double mlp::synapse0x104b14bc0() {
   return (neuron0x104b10180()*-0.0169209);
}

double mlp::synapse0x104b14bf0() {
   return (neuron0x104b10700()*0.0611231);
}

double mlp::synapse0x104b14c20() {
   return (neuron0x104b10c80()*0.388506);
}

double mlp::synapse0x104b14c50() {
   return (neuron0x104b11200()*-0.379921);
}

double mlp::synapse0x104b14c80() {
   return (neuron0x104b11780()*0.160853);
}

double mlp::synapse0x104b14cb0() {
   return (neuron0x104b11e10()*0.515564);
}

double mlp::synapse0x104b14ce0() {
   return (neuron0x104b12390()*0.0917198);
}

double mlp::synapse0x104b14d10() {
   return (neuron0x104b12910()*-0.098092);
}

double mlp::synapse0x104b14d40() {
   return (neuron0x104b12e90()*-0.469604);
}

double mlp::synapse0x104b14d70() {
   return (neuron0x104b13410()*-0.0145212);
}

double mlp::synapse0x104b14da0() {
   return (neuron0x104b13990()*-0.0118455);
}

double mlp::synapse0x104b150b0() {
   return (neuron0x104b0f6b0()*-0.133247);
}

double mlp::synapse0x104b150e0() {
   return (neuron0x104b0fc00()*0.465936);
}

double mlp::synapse0x104b15110() {
   return (neuron0x104b10180()*0.237413);
}

double mlp::synapse0x104b15140() {
   return (neuron0x104b10700()*0.570836);
}

double mlp::synapse0x104b15170() {
   return (neuron0x104b10c80()*0.584557);
}

double mlp::synapse0x104b151a0() {
   return (neuron0x104b11200()*-0.121214);
}

double mlp::synapse0x104b151d0() {
   return (neuron0x104b11780()*0.562222);
}

double mlp::synapse0x104b15200() {
   return (neuron0x104b11e10()*-0.129049);
}

double mlp::synapse0x104b15230() {
   return (neuron0x104b12390()*-0.340705);
}

double mlp::synapse0x104b15260() {
   return (neuron0x104b12910()*0.0769592);
}

double mlp::synapse0x104b15290() {
   return (neuron0x104b12e90()*-0.669841);
}

double mlp::synapse0x104b152c0() {
   return (neuron0x104b13410()*-0.133297);
}

double mlp::synapse0x104b152f0() {
   return (neuron0x104b13990()*0.342264);
}

double mlp::synapse0x104b01ac0() {
   return (neuron0x104b0f6b0()*-0.249484);
}

double mlp::synapse0x104b15600() {
   return (neuron0x104b0fc00()*-1.41638);
}

double mlp::synapse0x104b15630() {
   return (neuron0x104b10180()*0.590722);
}

double mlp::synapse0x104b15660() {
   return (neuron0x104b10700()*0.639271);
}

double mlp::synapse0x104b15690() {
   return (neuron0x104b10c80()*0.284667);
}

double mlp::synapse0x104b156c0() {
   return (neuron0x104b11200()*0.60723);
}

double mlp::synapse0x104b156f0() {
   return (neuron0x104b11780()*-0.132673);
}

double mlp::synapse0x104b15720() {
   return (neuron0x104b11e10()*-0.535005);
}

double mlp::synapse0x104b15750() {
   return (neuron0x104b12390()*0.26329);
}

double mlp::synapse0x104b15780() {
   return (neuron0x104b12910()*-0.463517);
}

double mlp::synapse0x104b157b0() {
   return (neuron0x104b12e90()*0.118922);
}

double mlp::synapse0x104b157e0() {
   return (neuron0x104b13410()*0.755245);
}

double mlp::synapse0x104b15810() {
   return (neuron0x104b13990()*0.730233);
}

double mlp::synapse0x104b15b20() {
   return (neuron0x104b0f6b0()*-0.0228318);
}

double mlp::synapse0x104b15b50() {
   return (neuron0x104b0fc00()*0.501637);
}

double mlp::synapse0x104b15b80() {
   return (neuron0x104b10180()*-0.118679);
}

double mlp::synapse0x104b15bb0() {
   return (neuron0x104b10700()*-1.31589);
}

double mlp::synapse0x104b15be0() {
   return (neuron0x104b10c80()*0.0800661);
}

double mlp::synapse0x104b15c10() {
   return (neuron0x104b11200()*-0.70251);
}

double mlp::synapse0x104b15c40() {
   return (neuron0x104b11780()*-0.148214);
}

double mlp::synapse0x104b15c70() {
   return (neuron0x104b11e10()*-0.344695);
}

double mlp::synapse0x104b15ca0() {
   return (neuron0x104b12390()*0.484694);
}

double mlp::synapse0x104b15cd0() {
   return (neuron0x104b12910()*0.411889);
}

double mlp::synapse0x104b15d00() {
   return (neuron0x104b12e90()*0.800424);
}

double mlp::synapse0x104b15d30() {
   return (neuron0x104b13410()*-0.617847);
}

double mlp::synapse0x104b15d60() {
   return (neuron0x104b13990()*0.893541);
}

double mlp::synapse0x104b16070() {
   return (neuron0x104b0f6b0()*0.239788);
}

double mlp::synapse0x104b160a0() {
   return (neuron0x104b0fc00()*0.0362468);
}

double mlp::synapse0x104b160d0() {
   return (neuron0x104b10180()*0.0904079);
}

double mlp::synapse0x104b16100() {
   return (neuron0x104b10700()*0.173115);
}

double mlp::synapse0x104b16130() {
   return (neuron0x104b10c80()*-0.317072);
}

double mlp::synapse0x104b16160() {
   return (neuron0x104b11200()*0.224734);
}

double mlp::synapse0x104b16190() {
   return (neuron0x104b11780()*-0.240284);
}

double mlp::synapse0x104b161c0() {
   return (neuron0x104b11e10()*-0.207168);
}

double mlp::synapse0x104b161f0() {
   return (neuron0x104b12390()*-0.469218);
}

double mlp::synapse0x104b16220() {
   return (neuron0x104b12910()*0.126805);
}

double mlp::synapse0x104b16250() {
   return (neuron0x104b12e90()*0.659937);
}

double mlp::synapse0x104b16280() {
   return (neuron0x104b13410()*-0.462268);
}

double mlp::synapse0x104b162b0() {
   return (neuron0x104b13990()*-0.450157);
}

double mlp::synapse0x104b165c0() {
   return (neuron0x104b0f6b0()*0.0354248);
}

double mlp::synapse0x104b165f0() {
   return (neuron0x104b0fc00()*-0.0612091);
}

double mlp::synapse0x104b16620() {
   return (neuron0x104b10180()*0.0500251);
}

double mlp::synapse0x104b16650() {
   return (neuron0x104b10700()*0.0757759);
}

double mlp::synapse0x104b16680() {
   return (neuron0x104b10c80()*-0.419989);
}

double mlp::synapse0x104b166b0() {
   return (neuron0x104b11200()*0.716049);
}

double mlp::synapse0x104b166e0() {
   return (neuron0x104b11780()*-0.314902);
}

double mlp::synapse0x104b16710() {
   return (neuron0x104b11e10()*-0.0927069);
}

double mlp::synapse0x104b16740() {
   return (neuron0x104b12390()*-0.0170803);
}

double mlp::synapse0x104b16770() {
   return (neuron0x104b12910()*-0.208752);
}

double mlp::synapse0x104b167a0() {
   return (neuron0x104b12e90()*0.236875);
}

double mlp::synapse0x104b167d0() {
   return (neuron0x104b13410()*-0.565808);
}

double mlp::synapse0x104b16800() {
   return (neuron0x104b13990()*-0.250939);
}

double mlp::synapse0x104b16b10() {
   return (neuron0x104b0f6b0()*0.261789);
}

double mlp::synapse0x104b16b40() {
   return (neuron0x104b0fc00()*-0.171851);
}

double mlp::synapse0x104b16b70() {
   return (neuron0x104b10180()*0.0229898);
}

double mlp::synapse0x104b16ba0() {
   return (neuron0x104b10700()*0.236626);
}

double mlp::synapse0x104b16bd0() {
   return (neuron0x104b10c80()*-0.0370028);
}

double mlp::synapse0x104b16c00() {
   return (neuron0x104b11200()*0.606184);
}

double mlp::synapse0x104b16c30() {
   return (neuron0x104b11780()*-0.162571);
}

double mlp::synapse0x104b16c60() {
   return (neuron0x104b11e10()*-0.0591998);
}

double mlp::synapse0x104b16c90() {
   return (neuron0x104b12390()*-0.356089);
}

double mlp::synapse0x104b16cc0() {
   return (neuron0x104b12910()*-0.260062);
}

double mlp::synapse0x104b16cf0() {
   return (neuron0x104b12e90()*0.211737);
}

double mlp::synapse0x104b16d20() {
   return (neuron0x104b13410()*0.159432);
}

double mlp::synapse0x104b16d50() {
   return (neuron0x104b13990()*-0.269508);
}

