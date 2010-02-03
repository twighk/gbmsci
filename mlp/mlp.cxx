#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18) {
   input0 = (in0 - -0.819905)/0.586601;
   input1 = (in1 - 0.0174954)/0.999847;
   input2 = (in2 - 1.08577)/2.7008;
   input3 = (in3 - 37.6418)/20.0951;
   input4 = (in4 - -0.00104854)/0.969025;
   input5 = (in5 - 0.240178)/1.59485;
   input6 = (in6 - 1.39863)/1.05065;
   input7 = (in7 - 35.1621)/34.8828;
   input8 = (in8 - 0.00624031)/1.81554;
   input9 = (in9 - 2.50356)/0.704229;
   input10 = (in10 - 2.7701)/0.629652;
   input11 = (in11 - 0.882073)/4.74797;
   input12 = (in12 - 34.9894)/96.266;
   input13 = (in13 - 0.0090624)/1.81795;
   input14 = (in14 - -0.00928484)/1.0081;
   input15 = (in15 - 50.1115)/94.7607;
   input16 = (in16 - 0.0138086)/1.13611;
   input17 = (in17 - -0.00321258)/1.81196;
   input18 = (in18 - 87.0124)/43.769;
   switch(index) {
     case 0:
         return neuron0x43344c0();
     case 1:
         return neuron0x4343ed0();
     case 2:
         return neuron0x4344480();
     case 3:
         return neuron0x4344a30();
     case 4:
         return neuron0x4344fe0();
     case 5:
         return neuron0x4345570();
     case 6:
         return neuron0x4345b00();
     case 7:
         return neuron0x4346090();
     case 8:
         return neuron0x4346620();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - -0.819905)/0.586601;
   input1 = (input[1] - 0.0174954)/0.999847;
   input2 = (input[2] - 1.08577)/2.7008;
   input3 = (input[3] - 37.6418)/20.0951;
   input4 = (input[4] - -0.00104854)/0.969025;
   input5 = (input[5] - 0.240178)/1.59485;
   input6 = (input[6] - 1.39863)/1.05065;
   input7 = (input[7] - 35.1621)/34.8828;
   input8 = (input[8] - 0.00624031)/1.81554;
   input9 = (input[9] - 2.50356)/0.704229;
   input10 = (input[10] - 2.7701)/0.629652;
   input11 = (input[11] - 0.882073)/4.74797;
   input12 = (input[12] - 34.9894)/96.266;
   input13 = (input[13] - 0.0090624)/1.81795;
   input14 = (input[14] - -0.00928484)/1.0081;
   input15 = (input[15] - 50.1115)/94.7607;
   input16 = (input[16] - 0.0138086)/1.13611;
   input17 = (input[17] - -0.00321258)/1.81196;
   input18 = (input[18] - 87.0124)/43.769;
   switch(index) {
     case 0:
         return neuron0x43344c0();
     case 1:
         return neuron0x4343ed0();
     case 2:
         return neuron0x4344480();
     case 3:
         return neuron0x4344a30();
     case 4:
         return neuron0x4344fe0();
     case 5:
         return neuron0x4345570();
     case 6:
         return neuron0x4345b00();
     case 7:
         return neuron0x4346090();
     case 8:
         return neuron0x4346620();
     default:
         return 0.;
   }
}

double mlp::neuron0x4334de0() {
   return input0;
}

double mlp::neuron0x433aaa0() {
   return input1;
}

double mlp::neuron0x433ac20() {
   return input2;
}

double mlp::neuron0x433ae10() {
   return input3;
}

double mlp::neuron0x433afd0() {
   return input4;
}

double mlp::neuron0x433b190() {
   return input5;
}

double mlp::neuron0x433b380() {
   return input6;
}

double mlp::neuron0x433b570() {
   return input7;
}

double mlp::neuron0x433b730() {
   return input8;
}

double mlp::neuron0x433b910() {
   return input9;
}

double mlp::neuron0x433bb00() {
   return input10;
}

double mlp::neuron0x433bce0() {
   return input11;
}

double mlp::neuron0x433bed0() {
   return input12;
}

double mlp::neuron0x433c0b0() {
   return input13;
}

double mlp::neuron0x433c290() {
   return input14;
}

double mlp::neuron0x433c470() {
   return input15;
}

double mlp::neuron0x433c650() {
   return input16;
}

double mlp::neuron0x433c930() {
   return input17;
}

double mlp::neuron0x433cab0() {
   return input18;
}

double mlp::input0x433a0c0() {
   double input = -0.161431;
   input += synapse0x433a860();
   input += synapse0x433a890();
   input += synapse0x4334b50();
   input += synapse0x4334b80();
   input += synapse0x4334bb0();
   input += synapse0x4334be0();
   input += synapse0x4334c10();
   input += synapse0x4334c40();
   input += synapse0x433a940();
   input += synapse0x433a970();
   input += synapse0x433a9a0();
   input += synapse0x433a9d0();
   input += synapse0x433aa00();
   input += synapse0x433aa30();
   input += synapse0x433aa60();
   input += synapse0x433cc70();
   input += synapse0x433cd20();
   input += synapse0x4334d60();
   input += synapse0x433cdd0();
   return input;
}

double mlp::neuron0x433a0c0() {
   double input = input0x433a0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433ce00() {
   double input = -0.673869;
   input += synapse0x433cf80();
   input += synapse0x433cfb0();
   input += synapse0x433cfe0();
   input += synapse0x433d010();
   input += synapse0x433d040();
   input += synapse0x433d070();
   input += synapse0x433d0a0();
   input += synapse0x433d0d0();
   input += synapse0x433d100();
   input += synapse0x433d130();
   input += synapse0x433d160();
   input += synapse0x433d190();
   input += synapse0x433d1c0();
   input += synapse0x433d1f0();
   input += synapse0x433d320();
   input += synapse0x433d350();
   input += synapse0x433d380();
   input += synapse0x433d3b0();
   input += synapse0x433d3e0();
   return input;
}

double mlp::neuron0x433ce00() {
   double input = input0x433ce00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433d410() {
   double input = 0.111161;
   input += synapse0x433d5b0();
   input += synapse0x433d5e0();
   input += synapse0x433d610();
   input += synapse0x433d640();
   input += synapse0x433d670();
   input += synapse0x433d6a0();
   input += synapse0x433d6d0();
   input += synapse0x433d700();
   input += synapse0x433d730();
   input += synapse0x433d760();
   input += synapse0x433d790();
   input += synapse0x433d7c0();
   input += synapse0x433d7f0();
   input += synapse0x433d820();
   input += synapse0x433d850();
   input += synapse0x433d880();
   input += synapse0x433d930();
   input += synapse0x433d960();
   input += synapse0x433d990();
   return input;
}

double mlp::neuron0x433d410() {
   double input = input0x433d410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433d9c0() {
   double input = -0.539319;
   input += synapse0x433db60();
   input += synapse0x433db90();
   input += synapse0x433dbc0();
   input += synapse0x433dbf0();
   input += synapse0x433dc20();
   input += synapse0x433dc50();
   input += synapse0x433dc80();
   input += synapse0x433dcb0();
   input += synapse0x433d220();
   input += synapse0x433d250();
   input += synapse0x433d280();
   input += synapse0x433d2b0();
   input += synapse0x433d2e0();
   input += synapse0x433dce0();
   input += synapse0x433dd10();
   input += synapse0x433dd40();
   input += synapse0x433ddf0();
   input += synapse0x433de20();
   input += synapse0x433de50();
   return input;
}

double mlp::neuron0x433d9c0() {
   double input = input0x433d9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433de80() {
   double input = -0.01534;
   input += synapse0x433e020();
   input += synapse0x433e050();
   input += synapse0x433e080();
   input += synapse0x433e0b0();
   input += synapse0x433e0e0();
   input += synapse0x433e110();
   input += synapse0x433e140();
   input += synapse0x433e170();
   input += synapse0x433e1a0();
   input += synapse0x433e1d0();
   input += synapse0x433e200();
   input += synapse0x433e230();
   input += synapse0x433e260();
   input += synapse0x433e290();
   input += synapse0x433e2c0();
   input += synapse0x433e2f0();
   input += synapse0x433e3a0();
   input += synapse0x433e3d0();
   input += synapse0x433e400();
   return input;
}

double mlp::neuron0x433de80() {
   double input = input0x433de80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433e430() {
   double input = 0.171263;
   input += synapse0x433e5d0();
   input += synapse0x433e600();
   input += synapse0x433e630();
   input += synapse0x433e660();
   input += synapse0x433e690();
   input += synapse0x433e6c0();
   input += synapse0x433e6f0();
   input += synapse0x433e720();
   input += synapse0x433e750();
   input += synapse0x433e780();
   input += synapse0x433e7b0();
   input += synapse0x433e7e0();
   input += synapse0x433e810();
   input += synapse0x433e840();
   input += synapse0x433e870();
   input += synapse0x433e8a0();
   input += synapse0x433e950();
   input += synapse0x433e980();
   input += synapse0x433e9b0();
   return input;
}

double mlp::neuron0x433e430() {
   double input = input0x433e430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433e9e0() {
   double input = -0.418693;
   input += synapse0x433eb80();
   input += synapse0x433ebb0();
   input += synapse0x433ebe0();
   input += synapse0x433ec10();
   input += synapse0x433ec40();
   input += synapse0x433ec70();
   input += synapse0x433eca0();
   input += synapse0x433ecd0();
   input += synapse0x433ed00();
   input += synapse0x433ed30();
   input += synapse0x433ed60();
   input += synapse0x433ed90();
   input += synapse0x433edc0();
   input += synapse0x433edf0();
   input += synapse0x433ee20();
   input += synapse0x433ee50();
   input += synapse0x433ef00();
   input += synapse0x433ef30();
   input += synapse0x433ef60();
   return input;
}

double mlp::neuron0x433e9e0() {
   double input = input0x433e9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433ef90() {
   double input = 0.24139;
   input += synapse0x433f130();
   input += synapse0x433f160();
   input += synapse0x433f190();
   input += synapse0x433f1c0();
   input += synapse0x433f1f0();
   input += synapse0x433f220();
   input += synapse0x433f250();
   input += synapse0x433f280();
   input += synapse0x433f2b0();
   input += synapse0x433f2e0();
   input += synapse0x433f310();
   input += synapse0x433f340();
   input += synapse0x433f370();
   input += synapse0x433f3a0();
   input += synapse0x433f3d0();
   input += synapse0x433f400();
   input += synapse0x433f4b0();
   input += synapse0x433f4e0();
   input += synapse0x433f510();
   return input;
}

double mlp::neuron0x433ef90() {
   double input = input0x433ef90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433f540() {
   double input = 0.2223;
   input += synapse0x433f6e0();
   input += synapse0x433f710();
   input += synapse0x433f740();
   input += synapse0x433f770();
   input += synapse0x433f7a0();
   input += synapse0x433f7d0();
   input += synapse0x433f800();
   input += synapse0x433f830();
   input += synapse0x433f860();
   input += synapse0x433f890();
   input += synapse0x433f8c0();
   input += synapse0x433f8f0();
   input += synapse0x433f920();
   input += synapse0x433f950();
   input += synapse0x433f980();
   input += synapse0x433f9b0();
   input += synapse0x433fa60();
   input += synapse0x433fa90();
   input += synapse0x433fac0();
   return input;
}

double mlp::neuron0x433f540() {
   double input = input0x433f540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x433faf0() {
   double input = -0.795191;
   input += synapse0x433fc90();
   input += synapse0x433fcc0();
   input += synapse0x433fcf0();
   input += synapse0x433fd20();
   input += synapse0x433fd50();
   input += synapse0x433fd80();
   input += synapse0x433fdb0();
   input += synapse0x433fde0();
   input += synapse0x433fe10();
   input += synapse0x433fe40();
   input += synapse0x433fe70();
   input += synapse0x433fea0();
   input += synapse0x433fed0();
   input += synapse0x433ff00();
   input += synapse0x433ff30();
   input += synapse0x433ff60();
   input += synapse0x4340010();
   input += synapse0x4340040();
   input += synapse0x4340070();
   return input;
}

double mlp::neuron0x433faf0() {
   double input = input0x433faf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x43400a0() {
   double input = 0.434024;
   input += synapse0x4340240();
   input += synapse0x4340270();
   input += synapse0x43402a0();
   input += synapse0x43402d0();
   input += synapse0x4340300();
   input += synapse0x4340330();
   input += synapse0x4340360();
   input += synapse0x4340390();
   input += synapse0x43403c0();
   input += synapse0x43403f0();
   input += synapse0x4340420();
   input += synapse0x4340450();
   input += synapse0x4340480();
   input += synapse0x43404b0();
   input += synapse0x43404e0();
   input += synapse0x4340510();
   input += synapse0x43405c0();
   input += synapse0x43405f0();
   input += synapse0x4340620();
   return input;
}

double mlp::neuron0x43400a0() {
   double input = input0x43400a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x4340650() {
   double input = 0.198553;
   input += synapse0x43407f0();
   input += synapse0x4340820();
   input += synapse0x4340850();
   input += synapse0x4340880();
   input += synapse0x43408b0();
   input += synapse0x43408e0();
   input += synapse0x4340910();
   input += synapse0x4340940();
   input += synapse0x4340970();
   input += synapse0x43409a0();
   input += synapse0x43409d0();
   input += synapse0x4340a00();
   input += synapse0x4340a30();
   input += synapse0x4340a60();
   input += synapse0x4340a90();
   input += synapse0x4340ac0();
   input += synapse0x4340b70();
   input += synapse0x4340ba0();
   input += synapse0x4340bd0();
   return input;
}

double mlp::neuron0x4340650() {
   double input = input0x4340650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x4340c00() {
   double input = 0.448001;
   input += synapse0x4340da0();
   input += synapse0x4340dd0();
   input += synapse0x4340e00();
   input += synapse0x4340e30();
   input += synapse0x4340e60();
   input += synapse0x4340e90();
   input += synapse0x4340ec0();
   input += synapse0x4340ef0();
   input += synapse0x4340f20();
   input += synapse0x4340f50();
   input += synapse0x4340f80();
   input += synapse0x4340fb0();
   input += synapse0x4340fe0();
   input += synapse0x4341010();
   input += synapse0x4341040();
   input += synapse0x4341070();
   input += synapse0x4341120();
   input += synapse0x4341150();
   input += synapse0x4341180();
   return input;
}

double mlp::neuron0x4340c00() {
   double input = input0x4340c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x43411b0() {
   double input = -0.0334833;
   input += synapse0x4341450();
   input += synapse0x4341480();
   input += synapse0x43414b0();
   input += synapse0x43414e0();
   input += synapse0x4341510();
   input += synapse0x4341540();
   input += synapse0x4341570();
   input += synapse0x43415a0();
   input += synapse0x43415d0();
   input += synapse0x4341600();
   input += synapse0x4341630();
   input += synapse0x4341660();
   input += synapse0x4341690();
   input += synapse0x43416c0();
   input += synapse0x43416f0();
   input += synapse0x4341720();
   input += synapse0x4341750();
   input += synapse0x4341780();
   input += synapse0x43417b0();
   return input;
}

double mlp::neuron0x43411b0() {
   double input = input0x43411b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x43417e0() {
   double input = -0.811385;
   input += synapse0x4341980();
   input += synapse0x43419b0();
   input += synapse0x43419e0();
   input += synapse0x4341a10();
   input += synapse0x4341a40();
   input += synapse0x4341a70();
   input += synapse0x4341aa0();
   input += synapse0x4341ad0();
   input += synapse0x4341b00();
   input += synapse0x4341b30();
   input += synapse0x4341b60();
   input += synapse0x4341b90();
   input += synapse0x4341bc0();
   input += synapse0x4341bf0();
   input += synapse0x4341c20();
   input += synapse0x4341c50();
   input += synapse0x4341d00();
   input += synapse0x4341d30();
   input += synapse0x4341d60();
   return input;
}

double mlp::neuron0x43417e0() {
   double input = input0x43417e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x4341d90() {
   double input = -1.34549;
   input += synapse0x4341f30();
   input += synapse0x4341fe0();
   input += synapse0x4334c80();
   input += synapse0x433aba0();
   input += synapse0x433ad90();
   input += synapse0x433af50();
   input += synapse0x433b110();
   input += synapse0x433b300();
   input += synapse0x433b4f0();
   input += synapse0x433b6b0();
   input += synapse0x433b890();
   input += synapse0x433ba80();
   input += synapse0x433bc60();
   input += synapse0x433be50();
   input += synapse0x433c030();
   input += synapse0x433c210();
   input += synapse0x433c5d0();
   input += synapse0x432ce20();
   input += synapse0x433c7b0();
   return input;
}

double mlp::neuron0x4341d90() {
   double input = input0x4341d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x4342990() {
   double input = 0.260146;
   input += synapse0x4342ad0();
   input += synapse0x4342b00();
   input += synapse0x4342b30();
   input += synapse0x4342b60();
   input += synapse0x4342b90();
   input += synapse0x4342bc0();
   input += synapse0x4342bf0();
   input += synapse0x4342c20();
   input += synapse0x4342c50();
   input += synapse0x4342c80();
   input += synapse0x4342cb0();
   input += synapse0x4342ce0();
   input += synapse0x4342d10();
   input += synapse0x4342d40();
   input += synapse0x4342d70();
   input += synapse0x4342da0();
   input += synapse0x4342e50();
   input += synapse0x4342e80();
   input += synapse0x4342eb0();
   return input;
}

double mlp::neuron0x4342990() {
   double input = input0x4342990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x4342ee0() {
   double input = -0.384861;
   input += synapse0x4343060();
   input += synapse0x4343090();
   input += synapse0x43430c0();
   input += synapse0x43430f0();
   input += synapse0x4343120();
   input += synapse0x4343150();
   input += synapse0x4343180();
   input += synapse0x43431b0();
   input += synapse0x43431e0();
   input += synapse0x4343210();
   input += synapse0x4343240();
   input += synapse0x4343270();
   input += synapse0x43432a0();
   input += synapse0x43432d0();
   input += synapse0x4343300();
   input += synapse0x4343330();
   input += synapse0x43433e0();
   input += synapse0x4343410();
   input += synapse0x4343440();
   return input;
}

double mlp::neuron0x4342ee0() {
   double input = input0x4342ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x4343470() {
   double input = 0.758553;
   input += synapse0x4343610();
   input += synapse0x4343640();
   input += synapse0x4343670();
   input += synapse0x43436a0();
   input += synapse0x43436d0();
   input += synapse0x4343700();
   input += synapse0x4343730();
   input += synapse0x4343760();
   input += synapse0x4343790();
   input += synapse0x43437c0();
   input += synapse0x43437f0();
   input += synapse0x4343820();
   input += synapse0x4343850();
   input += synapse0x4343880();
   input += synapse0x43438b0();
   input += synapse0x43438e0();
   input += synapse0x4343990();
   input += synapse0x43439c0();
   input += synapse0x43439f0();
   return input;
}

double mlp::neuron0x4343470() {
   double input = input0x4343470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x43344c0() {
   double input = -0.264638;
   input += synapse0x4343ac0();
   input += synapse0x4343af0();
   input += synapse0x4343b20();
   input += synapse0x4343b50();
   input += synapse0x4343b80();
   input += synapse0x4343bb0();
   input += synapse0x4343be0();
   input += synapse0x4343c10();
   input += synapse0x4343c40();
   input += synapse0x4343c70();
   input += synapse0x4343ca0();
   input += synapse0x4343cd0();
   input += synapse0x4343d00();
   input += synapse0x4343d30();
   input += synapse0x4343d60();
   input += synapse0x4343d90();
   input += synapse0x4343e40();
   input += synapse0x4343e70();
   input += synapse0x4343ea0();
   return input;
}

double mlp::neuron0x43344c0() {
   double input = input0x43344c0();
   return (input * 1)+0;
}

double mlp::input0x4343ed0() {
   double input = -0.178809;
   input += synapse0x4344070();
   input += synapse0x43440a0();
   input += synapse0x43440d0();
   input += synapse0x4344100();
   input += synapse0x4344130();
   input += synapse0x4344160();
   input += synapse0x4344190();
   input += synapse0x43441c0();
   input += synapse0x43441f0();
   input += synapse0x4344220();
   input += synapse0x4344250();
   input += synapse0x4344280();
   input += synapse0x43442b0();
   input += synapse0x43442e0();
   input += synapse0x4344310();
   input += synapse0x4344340();
   input += synapse0x43443f0();
   input += synapse0x4344420();
   input += synapse0x4344450();
   return input;
}

double mlp::neuron0x4343ed0() {
   double input = input0x4343ed0();
   return (input * 1)+0;
}

double mlp::input0x4344480() {
   double input = 0.0343021;
   input += synapse0x4344620();
   input += synapse0x4344650();
   input += synapse0x4344680();
   input += synapse0x43446b0();
   input += synapse0x43446e0();
   input += synapse0x4344710();
   input += synapse0x4344740();
   input += synapse0x4344770();
   input += synapse0x43447a0();
   input += synapse0x43447d0();
   input += synapse0x4344800();
   input += synapse0x4344830();
   input += synapse0x4344860();
   input += synapse0x4344890();
   input += synapse0x43448c0();
   input += synapse0x43448f0();
   input += synapse0x43449a0();
   input += synapse0x43449d0();
   input += synapse0x4344a00();
   return input;
}

double mlp::neuron0x4344480() {
   double input = input0x4344480();
   return (input * 1)+0;
}

double mlp::input0x4344a30() {
   double input = 0.112322;
   input += synapse0x4344bd0();
   input += synapse0x4344c00();
   input += synapse0x4344c30();
   input += synapse0x4344c60();
   input += synapse0x4344c90();
   input += synapse0x4344cc0();
   input += synapse0x4344cf0();
   input += synapse0x4344d20();
   input += synapse0x4344d50();
   input += synapse0x4344d80();
   input += synapse0x4344db0();
   input += synapse0x4344de0();
   input += synapse0x4344e10();
   input += synapse0x4344e40();
   input += synapse0x4344e70();
   input += synapse0x4344ea0();
   input += synapse0x4344f50();
   input += synapse0x4344f80();
   input += synapse0x4344fb0();
   return input;
}

double mlp::neuron0x4344a30() {
   double input = input0x4344a30();
   return (input * 1)+0;
}

double mlp::input0x4344fe0() {
   double input = 0.560209;
   input += synapse0x4345160();
   input += synapse0x4345190();
   input += synapse0x43451c0();
   input += synapse0x43451f0();
   input += synapse0x4345220();
   input += synapse0x4345250();
   input += synapse0x4345280();
   input += synapse0x43452b0();
   input += synapse0x43452e0();
   input += synapse0x4345310();
   input += synapse0x4345340();
   input += synapse0x4345370();
   input += synapse0x43453a0();
   input += synapse0x43453d0();
   input += synapse0x4345400();
   input += synapse0x4345430();
   input += synapse0x43454e0();
   input += synapse0x4345510();
   input += synapse0x4345540();
   return input;
}

double mlp::neuron0x4344fe0() {
   double input = input0x4344fe0();
   return (input * 1)+0;
}

double mlp::input0x4345570() {
   double input = 0.891679;
   input += synapse0x43456f0();
   input += synapse0x4345720();
   input += synapse0x4345750();
   input += synapse0x4345780();
   input += synapse0x43457b0();
   input += synapse0x43457e0();
   input += synapse0x4345810();
   input += synapse0x4345840();
   input += synapse0x4345870();
   input += synapse0x43458a0();
   input += synapse0x43458d0();
   input += synapse0x4345900();
   input += synapse0x4345930();
   input += synapse0x4345960();
   input += synapse0x4345990();
   input += synapse0x43459c0();
   input += synapse0x4345a70();
   input += synapse0x4345aa0();
   input += synapse0x4345ad0();
   return input;
}

double mlp::neuron0x4345570() {
   double input = input0x4345570();
   return (input * 1)+0;
}

double mlp::input0x4345b00() {
   double input = -0.069955;
   input += synapse0x4345c80();
   input += synapse0x4345cb0();
   input += synapse0x4345ce0();
   input += synapse0x4345d10();
   input += synapse0x4345d40();
   input += synapse0x4345d70();
   input += synapse0x4345da0();
   input += synapse0x4345dd0();
   input += synapse0x4345e00();
   input += synapse0x4345e30();
   input += synapse0x4345e60();
   input += synapse0x4345e90();
   input += synapse0x4345ec0();
   input += synapse0x4345ef0();
   input += synapse0x4345f20();
   input += synapse0x4345f50();
   input += synapse0x4346000();
   input += synapse0x4346030();
   input += synapse0x4346060();
   return input;
}

double mlp::neuron0x4345b00() {
   double input = input0x4345b00();
   return (input * 1)+0;
}

double mlp::input0x4346090() {
   double input = 0.0922307;
   input += synapse0x4346210();
   input += synapse0x4346240();
   input += synapse0x4346270();
   input += synapse0x43462a0();
   input += synapse0x43462d0();
   input += synapse0x4346300();
   input += synapse0x4346330();
   input += synapse0x4346360();
   input += synapse0x4346390();
   input += synapse0x43463c0();
   input += synapse0x43463f0();
   input += synapse0x4346420();
   input += synapse0x4346450();
   input += synapse0x4346480();
   input += synapse0x43464b0();
   input += synapse0x43464e0();
   input += synapse0x4346590();
   input += synapse0x43465c0();
   input += synapse0x43465f0();
   return input;
}

double mlp::neuron0x4346090() {
   double input = input0x4346090();
   return (input * 1)+0;
}

double mlp::input0x4346620() {
   double input = -0.104066;
   input += synapse0x43467a0();
   input += synapse0x43467d0();
   input += synapse0x4346800();
   input += synapse0x4346830();
   input += synapse0x4346860();
   input += synapse0x4346890();
   input += synapse0x43468c0();
   input += synapse0x43468f0();
   input += synapse0x4346920();
   input += synapse0x4346950();
   input += synapse0x4346980();
   input += synapse0x43469b0();
   input += synapse0x43469e0();
   input += synapse0x4346a10();
   input += synapse0x4346a40();
   input += synapse0x4346a70();
   input += synapse0x4346b20();
   input += synapse0x4346b50();
   input += synapse0x4346b80();
   return input;
}

double mlp::neuron0x4346620() {
   double input = input0x4346620();
   return (input * 1)+0;
}

double mlp::synapse0x433a860() {
   return (neuron0x4334de0()*-0.0357943);
}

double mlp::synapse0x433a890() {
   return (neuron0x433aaa0()*-0.0759529);
}

double mlp::synapse0x4334b50() {
   return (neuron0x433ac20()*0.236537);
}

double mlp::synapse0x4334b80() {
   return (neuron0x433ae10()*0.471291);
}

double mlp::synapse0x4334bb0() {
   return (neuron0x433afd0()*0.0243545);
}

double mlp::synapse0x4334be0() {
   return (neuron0x433b190()*-0.0653039);
}

double mlp::synapse0x4334c10() {
   return (neuron0x433b380()*1.00995);
}

double mlp::synapse0x4334c40() {
   return (neuron0x433b570()*0.53071);
}

double mlp::synapse0x433a940() {
   return (neuron0x433b730()*0.0936865);
}

double mlp::synapse0x433a970() {
   return (neuron0x433b910()*0.375967);
}

double mlp::synapse0x433a9a0() {
   return (neuron0x433bb00()*0.591627);
}

double mlp::synapse0x433a9d0() {
   return (neuron0x433bce0()*0.212688);
}

double mlp::synapse0x433aa00() {
   return (neuron0x433bed0()*0.374491);
}

double mlp::synapse0x433aa30() {
   return (neuron0x433c0b0()*-0.12187);
}

double mlp::synapse0x433aa60() {
   return (neuron0x433c290()*0.0135006);
}

double mlp::synapse0x433cc70() {
   return (neuron0x433c470()*0.3087);
}

double mlp::synapse0x433cd20() {
   return (neuron0x433c650()*-0.206725);
}

double mlp::synapse0x4334d60() {
   return (neuron0x433c930()*-0.210398);
}

double mlp::synapse0x433cdd0() {
   return (neuron0x433cab0()*0.738721);
}

double mlp::synapse0x433cf80() {
   return (neuron0x4334de0()*0.271764);
}

double mlp::synapse0x433cfb0() {
   return (neuron0x433aaa0()*0.244587);
}

double mlp::synapse0x433cfe0() {
   return (neuron0x433ac20()*-0.511956);
}

double mlp::synapse0x433d010() {
   return (neuron0x433ae10()*-0.126257);
}

double mlp::synapse0x433d040() {
   return (neuron0x433afd0()*-0.0773595);
}

double mlp::synapse0x433d070() {
   return (neuron0x433b190()*0.0481456);
}

double mlp::synapse0x433d0a0() {
   return (neuron0x433b380()*0.880983);
}

double mlp::synapse0x433d0d0() {
   return (neuron0x433b570()*0.315469);
}

double mlp::synapse0x433d100() {
   return (neuron0x433b730()*0.0599163);
}

double mlp::synapse0x433d130() {
   return (neuron0x433b910()*0.195391);
}

double mlp::synapse0x433d160() {
   return (neuron0x433bb00()*0.355872);
}

double mlp::synapse0x433d190() {
   return (neuron0x433bce0()*-0.328555);
}

double mlp::synapse0x433d1c0() {
   return (neuron0x433bed0()*-0.355076);
}

double mlp::synapse0x433d1f0() {
   return (neuron0x433c0b0()*-0.0561709);
}

double mlp::synapse0x433d320() {
   return (neuron0x433c290()*0.147636);
}

double mlp::synapse0x433d350() {
   return (neuron0x433c470()*0.283169);
}

double mlp::synapse0x433d380() {
   return (neuron0x433c650()*-0.191962);
}

double mlp::synapse0x433d3b0() {
   return (neuron0x433c930()*-0.280087);
}

double mlp::synapse0x433d3e0() {
   return (neuron0x433cab0()*0.107648);
}

double mlp::synapse0x433d5b0() {
   return (neuron0x4334de0()*0.137322);
}

double mlp::synapse0x433d5e0() {
   return (neuron0x433aaa0()*-0.133693);
}

double mlp::synapse0x433d610() {
   return (neuron0x433ac20()*-0.177042);
}

double mlp::synapse0x433d640() {
   return (neuron0x433ae10()*0.208747);
}

double mlp::synapse0x433d670() {
   return (neuron0x433afd0()*-0.124583);
}

double mlp::synapse0x433d6a0() {
   return (neuron0x433b190()*-0.169058);
}

double mlp::synapse0x433d6d0() {
   return (neuron0x433b380()*-0.342042);
}

double mlp::synapse0x433d700() {
   return (neuron0x433b570()*0.240942);
}

double mlp::synapse0x433d730() {
   return (neuron0x433b730()*0.0430473);
}

double mlp::synapse0x433d760() {
   return (neuron0x433b910()*0.166637);
}

double mlp::synapse0x433d790() {
   return (neuron0x433bb00()*0.384946);
}

double mlp::synapse0x433d7c0() {
   return (neuron0x433bce0()*0.368069);
}

double mlp::synapse0x433d7f0() {
   return (neuron0x433bed0()*0.450654);
}

double mlp::synapse0x433d820() {
   return (neuron0x433c0b0()*-0.251893);
}

double mlp::synapse0x433d850() {
   return (neuron0x433c290()*-0.0350422);
}

double mlp::synapse0x433d880() {
   return (neuron0x433c470()*0.302575);
}

double mlp::synapse0x433d930() {
   return (neuron0x433c650()*0.072546);
}

double mlp::synapse0x433d960() {
   return (neuron0x433c930()*0.0160075);
}

double mlp::synapse0x433d990() {
   return (neuron0x433cab0()*-0.329204);
}

double mlp::synapse0x433db60() {
   return (neuron0x4334de0()*-0.292434);
}

double mlp::synapse0x433db90() {
   return (neuron0x433aaa0()*0.281373);
}

double mlp::synapse0x433dbc0() {
   return (neuron0x433ac20()*-0.249595);
}

double mlp::synapse0x433dbf0() {
   return (neuron0x433ae10()*-0.868169);
}

double mlp::synapse0x433dc20() {
   return (neuron0x433afd0()*-0.415174);
}

double mlp::synapse0x433dc50() {
   return (neuron0x433b190()*-0.271996);
}

double mlp::synapse0x433dc80() {
   return (neuron0x433b380()*0.408451);
}

double mlp::synapse0x433dcb0() {
   return (neuron0x433b570()*0.184937);
}

double mlp::synapse0x433d220() {
   return (neuron0x433b730()*-0.206177);
}

double mlp::synapse0x433d250() {
   return (neuron0x433b910()*0.286764);
}

double mlp::synapse0x433d280() {
   return (neuron0x433bb00()*0.283357);
}

double mlp::synapse0x433d2b0() {
   return (neuron0x433bce0()*0.0275589);
}

double mlp::synapse0x433d2e0() {
   return (neuron0x433bed0()*-0.462339);
}

double mlp::synapse0x433dce0() {
   return (neuron0x433c0b0()*0.285531);
}

double mlp::synapse0x433dd10() {
   return (neuron0x433c290()*0.175793);
}

double mlp::synapse0x433dd40() {
   return (neuron0x433c470()*-0.815796);
}

double mlp::synapse0x433ddf0() {
   return (neuron0x433c650()*0.158985);
}

double mlp::synapse0x433de20() {
   return (neuron0x433c930()*0.0957898);
}

double mlp::synapse0x433de50() {
   return (neuron0x433cab0()*-0.952196);
}

double mlp::synapse0x433e020() {
   return (neuron0x4334de0()*-0.0739729);
}

double mlp::synapse0x433e050() {
   return (neuron0x433aaa0()*0.0273463);
}

double mlp::synapse0x433e080() {
   return (neuron0x433ac20()*0.408787);
}

double mlp::synapse0x433e0b0() {
   return (neuron0x433ae10()*-0.46195);
}

double mlp::synapse0x433e0e0() {
   return (neuron0x433afd0()*-0.0035413);
}

double mlp::synapse0x433e110() {
   return (neuron0x433b190()*0.0877502);
}

double mlp::synapse0x433e140() {
   return (neuron0x433b380()*-0.188839);
}

double mlp::synapse0x433e170() {
   return (neuron0x433b570()*0.205987);
}

double mlp::synapse0x433e1a0() {
   return (neuron0x433b730()*-0.24811);
}

double mlp::synapse0x433e1d0() {
   return (neuron0x433b910()*0.130712);
}

double mlp::synapse0x433e200() {
   return (neuron0x433bb00()*-0.0576879);
}

double mlp::synapse0x433e230() {
   return (neuron0x433bce0()*0.0446398);
}

double mlp::synapse0x433e260() {
   return (neuron0x433bed0()*0.226783);
}

double mlp::synapse0x433e290() {
   return (neuron0x433c0b0()*0.0908169);
}

double mlp::synapse0x433e2c0() {
   return (neuron0x433c290()*-0.287033);
}

double mlp::synapse0x433e2f0() {
   return (neuron0x433c470()*0.405368);
}

double mlp::synapse0x433e3a0() {
   return (neuron0x433c650()*-0.364373);
}

double mlp::synapse0x433e3d0() {
   return (neuron0x433c930()*-0.338482);
}

double mlp::synapse0x433e400() {
   return (neuron0x433cab0()*-0.322052);
}

double mlp::synapse0x433e5d0() {
   return (neuron0x4334de0()*-0.405215);
}

double mlp::synapse0x433e600() {
   return (neuron0x433aaa0()*-0.199223);
}

double mlp::synapse0x433e630() {
   return (neuron0x433ac20()*0.491523);
}

double mlp::synapse0x433e660() {
   return (neuron0x433ae10()*-0.0333437);
}

double mlp::synapse0x433e690() {
   return (neuron0x433afd0()*0.160851);
}

double mlp::synapse0x433e6c0() {
   return (neuron0x433b190()*0.313186);
}

double mlp::synapse0x433e6f0() {
   return (neuron0x433b380()*-0.0446669);
}

double mlp::synapse0x433e720() {
   return (neuron0x433b570()*-0.295989);
}

double mlp::synapse0x433e750() {
   return (neuron0x433b730()*0.275);
}

double mlp::synapse0x433e780() {
   return (neuron0x433b910()*-0.597472);
}

double mlp::synapse0x433e7b0() {
   return (neuron0x433bb00()*-0.745479);
}

double mlp::synapse0x433e7e0() {
   return (neuron0x433bce0()*0.0469084);
}

double mlp::synapse0x433e810() {
   return (neuron0x433bed0()*-0.713364);
}

double mlp::synapse0x433e840() {
   return (neuron0x433c0b0()*-0.398998);
}

double mlp::synapse0x433e870() {
   return (neuron0x433c290()*-0.24733);
}

double mlp::synapse0x433e8a0() {
   return (neuron0x433c470()*0.323807);
}

double mlp::synapse0x433e950() {
   return (neuron0x433c650()*0.0952649);
}

double mlp::synapse0x433e980() {
   return (neuron0x433c930()*0.220407);
}

double mlp::synapse0x433e9b0() {
   return (neuron0x433cab0()*-0.859936);
}

double mlp::synapse0x433eb80() {
   return (neuron0x4334de0()*-0.140174);
}

double mlp::synapse0x433ebb0() {
   return (neuron0x433aaa0()*-0.178003);
}

double mlp::synapse0x433ebe0() {
   return (neuron0x433ac20()*-0.201176);
}

double mlp::synapse0x433ec10() {
   return (neuron0x433ae10()*0.140486);
}

double mlp::synapse0x433ec40() {
   return (neuron0x433afd0()*-0.400328);
}

double mlp::synapse0x433ec70() {
   return (neuron0x433b190()*-0.188083);
}

double mlp::synapse0x433eca0() {
   return (neuron0x433b380()*-0.458007);
}

double mlp::synapse0x433ecd0() {
   return (neuron0x433b570()*-0.0616952);
}

double mlp::synapse0x433ed00() {
   return (neuron0x433b730()*0.156662);
}

double mlp::synapse0x433ed30() {
   return (neuron0x433b910()*-0.0504927);
}

double mlp::synapse0x433ed60() {
   return (neuron0x433bb00()*0.186666);
}

double mlp::synapse0x433ed90() {
   return (neuron0x433bce0()*0.365935);
}

double mlp::synapse0x433edc0() {
   return (neuron0x433bed0()*-0.528799);
}

double mlp::synapse0x433edf0() {
   return (neuron0x433c0b0()*-0.0803903);
}

double mlp::synapse0x433ee20() {
   return (neuron0x433c290()*0.0508768);
}

double mlp::synapse0x433ee50() {
   return (neuron0x433c470()*0.284568);
}

double mlp::synapse0x433ef00() {
   return (neuron0x433c650()*0.503068);
}

double mlp::synapse0x433ef30() {
   return (neuron0x433c930()*0.381298);
}

double mlp::synapse0x433ef60() {
   return (neuron0x433cab0()*-0.665205);
}

double mlp::synapse0x433f130() {
   return (neuron0x4334de0()*0.0544584);
}

double mlp::synapse0x433f160() {
   return (neuron0x433aaa0()*0.07963);
}

double mlp::synapse0x433f190() {
   return (neuron0x433ac20()*-0.072935);
}

double mlp::synapse0x433f1c0() {
   return (neuron0x433ae10()*-1.08764);
}

double mlp::synapse0x433f1f0() {
   return (neuron0x433afd0()*0.191899);
}

double mlp::synapse0x433f220() {
   return (neuron0x433b190()*0.603768);
}

double mlp::synapse0x433f250() {
   return (neuron0x433b380()*-0.248991);
}

double mlp::synapse0x433f280() {
   return (neuron0x433b570()*0.500392);
}

double mlp::synapse0x433f2b0() {
   return (neuron0x433b730()*-0.100329);
}

double mlp::synapse0x433f2e0() {
   return (neuron0x433b910()*0.174279);
}

double mlp::synapse0x433f310() {
   return (neuron0x433bb00()*-0.426393);
}

double mlp::synapse0x433f340() {
   return (neuron0x433bce0()*-0.407825);
}

double mlp::synapse0x433f370() {
   return (neuron0x433bed0()*0.533002);
}

double mlp::synapse0x433f3a0() {
   return (neuron0x433c0b0()*0.00793393);
}

double mlp::synapse0x433f3d0() {
   return (neuron0x433c290()*0.0735145);
}

double mlp::synapse0x433f400() {
   return (neuron0x433c470()*-0.277293);
}

double mlp::synapse0x433f4b0() {
   return (neuron0x433c650()*-0.00712594);
}

double mlp::synapse0x433f4e0() {
   return (neuron0x433c930()*-0.178705);
}

double mlp::synapse0x433f510() {
   return (neuron0x433cab0()*-1.3209);
}

double mlp::synapse0x433f6e0() {
   return (neuron0x4334de0()*-0.412808);
}

double mlp::synapse0x433f710() {
   return (neuron0x433aaa0()*0.429119);
}

double mlp::synapse0x433f740() {
   return (neuron0x433ac20()*0.123651);
}

double mlp::synapse0x433f770() {
   return (neuron0x433ae10()*-0.519198);
}

double mlp::synapse0x433f7a0() {
   return (neuron0x433afd0()*-0.196557);
}

double mlp::synapse0x433f7d0() {
   return (neuron0x433b190()*0.227367);
}

double mlp::synapse0x433f800() {
   return (neuron0x433b380()*0.257131);
}

double mlp::synapse0x433f830() {
   return (neuron0x433b570()*-0.122862);
}

double mlp::synapse0x433f860() {
   return (neuron0x433b730()*-0.261732);
}

double mlp::synapse0x433f890() {
   return (neuron0x433b910()*0.114224);
}

double mlp::synapse0x433f8c0() {
   return (neuron0x433bb00()*0.178504);
}

double mlp::synapse0x433f8f0() {
   return (neuron0x433bce0()*-0.114088);
}

double mlp::synapse0x433f920() {
   return (neuron0x433bed0()*0.339438);
}

double mlp::synapse0x433f950() {
   return (neuron0x433c0b0()*0.235849);
}

double mlp::synapse0x433f980() {
   return (neuron0x433c290()*0.39232);
}

double mlp::synapse0x433f9b0() {
   return (neuron0x433c470()*-0.58625);
}

double mlp::synapse0x433fa60() {
   return (neuron0x433c650()*0.0340633);
}

double mlp::synapse0x433fa90() {
   return (neuron0x433c930()*-0.117396);
}

double mlp::synapse0x433fac0() {
   return (neuron0x433cab0()*-0.588327);
}

double mlp::synapse0x433fc90() {
   return (neuron0x4334de0()*0.00915555);
}

double mlp::synapse0x433fcc0() {
   return (neuron0x433aaa0()*0.101247);
}

double mlp::synapse0x433fcf0() {
   return (neuron0x433ac20()*0.26984);
}

double mlp::synapse0x433fd20() {
   return (neuron0x433ae10()*0.183151);
}

double mlp::synapse0x433fd50() {
   return (neuron0x433afd0()*0.0109405);
}

double mlp::synapse0x433fd80() {
   return (neuron0x433b190()*0.0855344);
}

double mlp::synapse0x433fdb0() {
   return (neuron0x433b380()*-0.820579);
}

double mlp::synapse0x433fde0() {
   return (neuron0x433b570()*0.562348);
}

double mlp::synapse0x433fe10() {
   return (neuron0x433b730()*0.181976);
}

double mlp::synapse0x433fe40() {
   return (neuron0x433b910()*0.0727325);
}

double mlp::synapse0x433fe70() {
   return (neuron0x433bb00()*-0.0904922);
}

double mlp::synapse0x433fea0() {
   return (neuron0x433bce0()*-0.0704937);
}

double mlp::synapse0x433fed0() {
   return (neuron0x433bed0()*-0.647815);
}

double mlp::synapse0x433ff00() {
   return (neuron0x433c0b0()*-0.0254173);
}

double mlp::synapse0x433ff30() {
   return (neuron0x433c290()*0.0905123);
}

double mlp::synapse0x433ff60() {
   return (neuron0x433c470()*-1.04538);
}

double mlp::synapse0x4340010() {
   return (neuron0x433c650()*-0.0077791);
}

double mlp::synapse0x4340040() {
   return (neuron0x433c930()*0.219741);
}

double mlp::synapse0x4340070() {
   return (neuron0x433cab0()*0.181704);
}

double mlp::synapse0x4340240() {
   return (neuron0x4334de0()*-0.132258);
}

double mlp::synapse0x4340270() {
   return (neuron0x433aaa0()*0.135778);
}

double mlp::synapse0x43402a0() {
   return (neuron0x433ac20()*-0.010073);
}

double mlp::synapse0x43402d0() {
   return (neuron0x433ae10()*0.176008);
}

double mlp::synapse0x4340300() {
   return (neuron0x433afd0()*-0.0958275);
}

double mlp::synapse0x4340330() {
   return (neuron0x433b190()*-0.138107);
}

double mlp::synapse0x4340360() {
   return (neuron0x433b380()*0.187658);
}

double mlp::synapse0x4340390() {
   return (neuron0x433b570()*-0.925713);
}

double mlp::synapse0x43403c0() {
   return (neuron0x433b730()*-0.0595222);
}

double mlp::synapse0x43403f0() {
   return (neuron0x433b910()*-0.0998141);
}

double mlp::synapse0x4340420() {
   return (neuron0x433bb00()*-0.337061);
}

double mlp::synapse0x4340450() {
   return (neuron0x433bce0()*-0.223719);
}

double mlp::synapse0x4340480() {
   return (neuron0x433bed0()*-0.127426);
}

double mlp::synapse0x43404b0() {
   return (neuron0x433c0b0()*0.174784);
}

double mlp::synapse0x43404e0() {
   return (neuron0x433c290()*0.00810871);
}

double mlp::synapse0x4340510() {
   return (neuron0x433c470()*-0.110979);
}

double mlp::synapse0x43405c0() {
   return (neuron0x433c650()*-0.055161);
}

double mlp::synapse0x43405f0() {
   return (neuron0x433c930()*-0.0306498);
}

double mlp::synapse0x4340620() {
   return (neuron0x433cab0()*-1.27499);
}

double mlp::synapse0x43407f0() {
   return (neuron0x4334de0()*-0.44252);
}

double mlp::synapse0x4340820() {
   return (neuron0x433aaa0()*-0.219626);
}

double mlp::synapse0x4340850() {
   return (neuron0x433ac20()*-0.223228);
}

double mlp::synapse0x4340880() {
   return (neuron0x433ae10()*-0.835062);
}

double mlp::synapse0x43408b0() {
   return (neuron0x433afd0()*-0.00425307);
}

double mlp::synapse0x43408e0() {
   return (neuron0x433b190()*0.239979);
}

double mlp::synapse0x4340910() {
   return (neuron0x433b380()*-0.985134);
}

double mlp::synapse0x4340940() {
   return (neuron0x433b570()*-0.454673);
}

double mlp::synapse0x4340970() {
   return (neuron0x433b730()*0.0110647);
}

double mlp::synapse0x43409a0() {
   return (neuron0x433b910()*0.24359);
}

double mlp::synapse0x43409d0() {
   return (neuron0x433bb00()*0.0095388);
}

double mlp::synapse0x4340a00() {
   return (neuron0x433bce0()*0.0514804);
}

double mlp::synapse0x4340a30() {
   return (neuron0x433bed0()*0.40897);
}

double mlp::synapse0x4340a60() {
   return (neuron0x433c0b0()*0.165957);
}

double mlp::synapse0x4340a90() {
   return (neuron0x433c290()*-0.124751);
}

double mlp::synapse0x4340ac0() {
   return (neuron0x433c470()*0.60093);
}

double mlp::synapse0x4340b70() {
   return (neuron0x433c650()*0.121443);
}

double mlp::synapse0x4340ba0() {
   return (neuron0x433c930()*0.332581);
}

double mlp::synapse0x4340bd0() {
   return (neuron0x433cab0()*-0.0703792);
}

double mlp::synapse0x4340da0() {
   return (neuron0x4334de0()*-0.0938809);
}

double mlp::synapse0x4340dd0() {
   return (neuron0x433aaa0()*0.117497);
}

double mlp::synapse0x4340e00() {
   return (neuron0x433ac20()*0.0692682);
}

double mlp::synapse0x4340e30() {
   return (neuron0x433ae10()*0.178537);
}

double mlp::synapse0x4340e60() {
   return (neuron0x433afd0()*-0.0756785);
}

double mlp::synapse0x4340e90() {
   return (neuron0x433b190()*0.106506);
}

double mlp::synapse0x4340ec0() {
   return (neuron0x433b380()*0.441206);
}

double mlp::synapse0x4340ef0() {
   return (neuron0x433b570()*-0.606235);
}

double mlp::synapse0x4340f20() {
   return (neuron0x433b730()*0.167245);
}

double mlp::synapse0x4340f50() {
   return (neuron0x433b910()*0.391096);
}

double mlp::synapse0x4340f80() {
   return (neuron0x433bb00()*0.479734);
}

double mlp::synapse0x4340fb0() {
   return (neuron0x433bce0()*-0.21426);
}

double mlp::synapse0x4340fe0() {
   return (neuron0x433bed0()*-1.50635);
}

double mlp::synapse0x4341010() {
   return (neuron0x433c0b0()*0.0118182);
}

double mlp::synapse0x4341040() {
   return (neuron0x433c290()*0.120669);
}

double mlp::synapse0x4341070() {
   return (neuron0x433c470()*0.293419);
}

double mlp::synapse0x4341120() {
   return (neuron0x433c650()*-0.018011);
}

double mlp::synapse0x4341150() {
   return (neuron0x433c930()*0.151333);
}

double mlp::synapse0x4341180() {
   return (neuron0x433cab0()*-0.328026);
}

double mlp::synapse0x4341450() {
   return (neuron0x4334de0()*0.0253787);
}

double mlp::synapse0x4341480() {
   return (neuron0x433aaa0()*0.0999254);
}

double mlp::synapse0x43414b0() {
   return (neuron0x433ac20()*-0.105772);
}

double mlp::synapse0x43414e0() {
   return (neuron0x433ae10()*0.120174);
}

double mlp::synapse0x4341510() {
   return (neuron0x433afd0()*0.0676902);
}

double mlp::synapse0x4341540() {
   return (neuron0x433b190()*0.00871689);
}

double mlp::synapse0x4341570() {
   return (neuron0x433b380()*0.39844);
}

double mlp::synapse0x43415a0() {
   return (neuron0x433b570()*-0.870264);
}

double mlp::synapse0x43415d0() {
   return (neuron0x433b730()*0.00513053);
}

double mlp::synapse0x4341600() {
   return (neuron0x433b910()*-0.228844);
}

double mlp::synapse0x4341630() {
   return (neuron0x433bb00()*-0.683638);
}

double mlp::synapse0x4341660() {
   return (neuron0x433bce0()*-0.229077);
}

double mlp::synapse0x4341690() {
   return (neuron0x433bed0()*-2.18401);
}

double mlp::synapse0x43416c0() {
   return (neuron0x433c0b0()*0.0788012);
}

double mlp::synapse0x43416f0() {
   return (neuron0x433c290()*0.0234376);
}

double mlp::synapse0x4341720() {
   return (neuron0x433c470()*-1.53533);
}

double mlp::synapse0x4341750() {
   return (neuron0x433c650()*-0.0818757);
}

double mlp::synapse0x4341780() {
   return (neuron0x433c930()*-0.03171);
}

double mlp::synapse0x43417b0() {
   return (neuron0x433cab0()*-1.75802);
}

double mlp::synapse0x4341980() {
   return (neuron0x4334de0()*0.112744);
}

double mlp::synapse0x43419b0() {
   return (neuron0x433aaa0()*0.0446294);
}

double mlp::synapse0x43419e0() {
   return (neuron0x433ac20()*0.387726);
}

double mlp::synapse0x4341a10() {
   return (neuron0x433ae10()*-0.637708);
}

double mlp::synapse0x4341a40() {
   return (neuron0x433afd0()*0.0649546);
}

double mlp::synapse0x4341a70() {
   return (neuron0x433b190()*0.317152);
}

double mlp::synapse0x4341aa0() {
   return (neuron0x433b380()*0.618336);
}

double mlp::synapse0x4341ad0() {
   return (neuron0x433b570()*1.55721);
}

double mlp::synapse0x4341b00() {
   return (neuron0x433b730()*0.121811);
}

double mlp::synapse0x4341b30() {
   return (neuron0x433b910()*0.283057);
}

double mlp::synapse0x4341b60() {
   return (neuron0x433bb00()*0.291858);
}

double mlp::synapse0x4341b90() {
   return (neuron0x433bce0()*0.116911);
}

double mlp::synapse0x4341bc0() {
   return (neuron0x433bed0()*0.597467);
}

double mlp::synapse0x4341bf0() {
   return (neuron0x433c0b0()*-0.124288);
}

double mlp::synapse0x4341c20() {
   return (neuron0x433c290()*0.026101);
}

double mlp::synapse0x4341c50() {
   return (neuron0x433c470()*-0.778481);
}

double mlp::synapse0x4341d00() {
   return (neuron0x433c650()*-0.10633);
}

double mlp::synapse0x4341d30() {
   return (neuron0x433c930()*-0.0820181);
}

double mlp::synapse0x4341d60() {
   return (neuron0x433cab0()*-0.696085);
}

double mlp::synapse0x4341f30() {
   return (neuron0x4334de0()*-0.431916);
}

double mlp::synapse0x4341fe0() {
   return (neuron0x433aaa0()*-0.0619996);
}

double mlp::synapse0x4334c80() {
   return (neuron0x433ac20()*-0.300792);
}

double mlp::synapse0x433aba0() {
   return (neuron0x433ae10()*-0.27157);
}

double mlp::synapse0x433ad90() {
   return (neuron0x433afd0()*0.0260047);
}

double mlp::synapse0x433af50() {
   return (neuron0x433b190()*0.184108);
}

double mlp::synapse0x433b110() {
   return (neuron0x433b380()*1.3004);
}

double mlp::synapse0x433b300() {
   return (neuron0x433b570()*-1.02944);
}

double mlp::synapse0x433b4f0() {
   return (neuron0x433b730()*0.0847073);
}

double mlp::synapse0x433b6b0() {
   return (neuron0x433b910()*0.544469);
}

double mlp::synapse0x433b890() {
   return (neuron0x433bb00()*0.248092);
}

double mlp::synapse0x433ba80() {
   return (neuron0x433bce0()*-0.102925);
}

double mlp::synapse0x433bc60() {
   return (neuron0x433bed0()*-0.42282);
}

double mlp::synapse0x433be50() {
   return (neuron0x433c0b0()*-0.0565731);
}

double mlp::synapse0x433c030() {
   return (neuron0x433c290()*-0.053476);
}

double mlp::synapse0x433c210() {
   return (neuron0x433c470()*0.676723);
}

double mlp::synapse0x433c5d0() {
   return (neuron0x433c650()*-0.0297571);
}

double mlp::synapse0x432ce20() {
   return (neuron0x433c930()*0.00515307);
}

double mlp::synapse0x433c7b0() {
   return (neuron0x433cab0()*-0.493901);
}

double mlp::synapse0x4342ad0() {
   return (neuron0x4334de0()*0.559114);
}

double mlp::synapse0x4342b00() {
   return (neuron0x433aaa0()*-0.0632476);
}

double mlp::synapse0x4342b30() {
   return (neuron0x433ac20()*-0.0707543);
}

double mlp::synapse0x4342b60() {
   return (neuron0x433ae10()*-0.200869);
}

double mlp::synapse0x4342b90() {
   return (neuron0x433afd0()*-0.327047);
}

double mlp::synapse0x4342bc0() {
   return (neuron0x433b190()*-0.198017);
}

double mlp::synapse0x4342bf0() {
   return (neuron0x433b380()*0.377394);
}

double mlp::synapse0x4342c20() {
   return (neuron0x433b570()*0.799497);
}

double mlp::synapse0x4342c50() {
   return (neuron0x433b730()*0.491285);
}

double mlp::synapse0x4342c80() {
   return (neuron0x433b910()*-0.266053);
}

double mlp::synapse0x4342cb0() {
   return (neuron0x433bb00()*0.357778);
}

double mlp::synapse0x4342ce0() {
   return (neuron0x433bce0()*-0.0645859);
}

double mlp::synapse0x4342d10() {
   return (neuron0x433bed0()*-0.476191);
}

double mlp::synapse0x4342d40() {
   return (neuron0x433c0b0()*-0.338523);
}

double mlp::synapse0x4342d70() {
   return (neuron0x433c290()*-0.104313);
}

double mlp::synapse0x4342da0() {
   return (neuron0x433c470()*-0.518342);
}

double mlp::synapse0x4342e50() {
   return (neuron0x433c650()*0.331487);
}

double mlp::synapse0x4342e80() {
   return (neuron0x433c930()*0.300251);
}

double mlp::synapse0x4342eb0() {
   return (neuron0x433cab0()*-0.284627);
}

double mlp::synapse0x4343060() {
   return (neuron0x4334de0()*-0.218946);
}

double mlp::synapse0x4343090() {
   return (neuron0x433aaa0()*-0.17453);
}

double mlp::synapse0x43430c0() {
   return (neuron0x433ac20()*-0.26362);
}

double mlp::synapse0x43430f0() {
   return (neuron0x433ae10()*0.083655);
}

double mlp::synapse0x4343120() {
   return (neuron0x433afd0()*-0.229831);
}

double mlp::synapse0x4343150() {
   return (neuron0x433b190()*0.0880272);
}

double mlp::synapse0x4343180() {
   return (neuron0x433b380()*-0.122299);
}

double mlp::synapse0x43431b0() {
   return (neuron0x433b570()*-0.799877);
}

double mlp::synapse0x43431e0() {
   return (neuron0x433b730()*0.434174);
}

double mlp::synapse0x4343210() {
   return (neuron0x433b910()*0.307075);
}

double mlp::synapse0x4343240() {
   return (neuron0x433bb00()*0.496431);
}

double mlp::synapse0x4343270() {
   return (neuron0x433bce0()*0.29246);
}

double mlp::synapse0x43432a0() {
   return (neuron0x433bed0()*0.266923);
}

double mlp::synapse0x43432d0() {
   return (neuron0x433c0b0()*-0.421725);
}

double mlp::synapse0x4343300() {
   return (neuron0x433c290()*-0.0520446);
}

double mlp::synapse0x4343330() {
   return (neuron0x433c470()*0.387932);
}

double mlp::synapse0x43433e0() {
   return (neuron0x433c650()*0.0717589);
}

double mlp::synapse0x4343410() {
   return (neuron0x433c930()*0.356351);
}

double mlp::synapse0x4343440() {
   return (neuron0x433cab0()*0.462011);
}

double mlp::synapse0x4343610() {
   return (neuron0x4334de0()*-0.0121372);
}

double mlp::synapse0x4343640() {
   return (neuron0x433aaa0()*0.326029);
}

double mlp::synapse0x4343670() {
   return (neuron0x433ac20()*-0.163363);
}

double mlp::synapse0x43436a0() {
   return (neuron0x433ae10()*-0.0938466);
}

double mlp::synapse0x43436d0() {
   return (neuron0x433afd0()*-0.362459);
}

double mlp::synapse0x4343700() {
   return (neuron0x433b190()*-0.0786726);
}

double mlp::synapse0x4343730() {
   return (neuron0x433b380()*0.306187);
}

double mlp::synapse0x4343760() {
   return (neuron0x433b570()*0.224877);
}

double mlp::synapse0x4343790() {
   return (neuron0x433b730()*-0.160773);
}

double mlp::synapse0x43437c0() {
   return (neuron0x433b910()*0.264099);
}

double mlp::synapse0x43437f0() {
   return (neuron0x433bb00()*0.254032);
}

double mlp::synapse0x4343820() {
   return (neuron0x433bce0()*0.445787);
}

double mlp::synapse0x4343850() {
   return (neuron0x433bed0()*0.396542);
}

double mlp::synapse0x4343880() {
   return (neuron0x433c0b0()*-0.0196222);
}

double mlp::synapse0x43438b0() {
   return (neuron0x433c290()*-0.0552604);
}

double mlp::synapse0x43438e0() {
   return (neuron0x433c470()*0.043678);
}

double mlp::synapse0x4343990() {
   return (neuron0x433c650()*-0.650449);
}

double mlp::synapse0x43439c0() {
   return (neuron0x433c930()*-0.46002);
}

double mlp::synapse0x43439f0() {
   return (neuron0x433cab0()*0.523247);
}

double mlp::synapse0x4343ac0() {
   return (neuron0x433a0c0()*0.155787);
}

double mlp::synapse0x4343af0() {
   return (neuron0x433ce00()*0.13044);
}

double mlp::synapse0x4343b20() {
   return (neuron0x433d410()*0.167639);
}

double mlp::synapse0x4343b50() {
   return (neuron0x433d9c0()*-0.100246);
}

double mlp::synapse0x4343b80() {
   return (neuron0x433de80()*-0.066847);
}

double mlp::synapse0x4343bb0() {
   return (neuron0x433e430()*0.0439108);
}

double mlp::synapse0x4343be0() {
   return (neuron0x433e9e0()*0.0879403);
}

double mlp::synapse0x4343c10() {
   return (neuron0x433ef90()*0.16599);
}

double mlp::synapse0x4343c40() {
   return (neuron0x433f540()*0.0868809);
}

double mlp::synapse0x4343c70() {
   return (neuron0x433faf0()*0.128208);
}

double mlp::synapse0x4343ca0() {
   return (neuron0x43400a0()*0.00266413);
}

double mlp::synapse0x4343cd0() {
   return (neuron0x4340650()*0.141866);
}

double mlp::synapse0x4343d00() {
   return (neuron0x4340c00()*-0.0161532);
}

double mlp::synapse0x4343d30() {
   return (neuron0x43411b0()*0.123138);
}

double mlp::synapse0x4343d60() {
   return (neuron0x43417e0()*-0.174833);
}

double mlp::synapse0x4343d90() {
   return (neuron0x4341d90()*0.095401);
}

double mlp::synapse0x4343e40() {
   return (neuron0x4342990()*-0.0674973);
}

double mlp::synapse0x4343e70() {
   return (neuron0x4342ee0()*-0.14702);
}

double mlp::synapse0x4343ea0() {
   return (neuron0x4343470()*0.00230231);
}

double mlp::synapse0x4344070() {
   return (neuron0x433a0c0()*0.0352196);
}

double mlp::synapse0x43440a0() {
   return (neuron0x433ce00()*0.0515574);
}

double mlp::synapse0x43440d0() {
   return (neuron0x433d410()*0.125989);
}

double mlp::synapse0x4344100() {
   return (neuron0x433d9c0()*0.234653);
}

double mlp::synapse0x4344130() {
   return (neuron0x433de80()*0.134357);
}

double mlp::synapse0x4344160() {
   return (neuron0x433e430()*0.0737104);
}

double mlp::synapse0x4344190() {
   return (neuron0x433e9e0()*0.0696289);
}

double mlp::synapse0x43441c0() {
   return (neuron0x433ef90()*0.119292);
}

double mlp::synapse0x43441f0() {
   return (neuron0x433f540()*-0.260628);
}

double mlp::synapse0x4344220() {
   return (neuron0x433faf0()*0.208052);
}

double mlp::synapse0x4344250() {
   return (neuron0x43400a0()*-0.198927);
}

double mlp::synapse0x4344280() {
   return (neuron0x4340650()*0.0775076);
}

double mlp::synapse0x43442b0() {
   return (neuron0x4340c00()*0.127254);
}

double mlp::synapse0x43442e0() {
   return (neuron0x43411b0()*0.152696);
}

double mlp::synapse0x4344310() {
   return (neuron0x43417e0()*-0.159684);
}

double mlp::synapse0x4344340() {
   return (neuron0x4341d90()*0.122933);
}

double mlp::synapse0x43443f0() {
   return (neuron0x4342990()*-0.091555);
}

double mlp::synapse0x4344420() {
   return (neuron0x4342ee0()*-0.161211);
}

double mlp::synapse0x4344450() {
   return (neuron0x4343470()*0.0367619);
}

double mlp::synapse0x4344620() {
   return (neuron0x433a0c0()*-0.128717);
}

double mlp::synapse0x4344650() {
   return (neuron0x433ce00()*0.121373);
}

double mlp::synapse0x4344680() {
   return (neuron0x433d410()*0.135319);
}

double mlp::synapse0x43446b0() {
   return (neuron0x433d9c0()*-0.179997);
}

double mlp::synapse0x43446e0() {
   return (neuron0x433de80()*-0.191141);
}

double mlp::synapse0x4344710() {
   return (neuron0x433e430()*0.171596);
}

double mlp::synapse0x4344740() {
   return (neuron0x433e9e0()*-0.00948763);
}

double mlp::synapse0x4344770() {
   return (neuron0x433ef90()*-0.132047);
}

double mlp::synapse0x43447a0() {
   return (neuron0x433f540()*0.0489114);
}

double mlp::synapse0x43447d0() {
   return (neuron0x433faf0()*-0.117654);
}

double mlp::synapse0x4344800() {
   return (neuron0x43400a0()*0.805695);
}

double mlp::synapse0x4344830() {
   return (neuron0x4340650()*0.0235538);
}

double mlp::synapse0x4344860() {
   return (neuron0x4340c00()*0.0778086);
}

double mlp::synapse0x4344890() {
   return (neuron0x43411b0()*-0.678195);
}

double mlp::synapse0x43448c0() {
   return (neuron0x43417e0()*0.205031);
}

double mlp::synapse0x43448f0() {
   return (neuron0x4341d90()*0.0615072);
}

double mlp::synapse0x43449a0() {
   return (neuron0x4342990()*-0.172578);
}

double mlp::synapse0x43449d0() {
   return (neuron0x4342ee0()*-0.0121227);
}

double mlp::synapse0x4344a00() {
   return (neuron0x4343470()*0.0425505);
}

double mlp::synapse0x4344bd0() {
   return (neuron0x433a0c0()*-0.167918);
}

double mlp::synapse0x4344c00() {
   return (neuron0x433ce00()*0.0481892);
}

double mlp::synapse0x4344c30() {
   return (neuron0x433d410()*-0.0140393);
}

double mlp::synapse0x4344c60() {
   return (neuron0x433d9c0()*-0.319752);
}

double mlp::synapse0x4344c90() {
   return (neuron0x433de80()*-0.0534085);
}

double mlp::synapse0x4344cc0() {
   return (neuron0x433e430()*-0.0290844);
}

double mlp::synapse0x4344cf0() {
   return (neuron0x433e9e0()*0.18107);
}

double mlp::synapse0x4344d20() {
   return (neuron0x433ef90()*0.0358306);
}

double mlp::synapse0x4344d50() {
   return (neuron0x433f540()*0.104826);
}

double mlp::synapse0x4344d80() {
   return (neuron0x433faf0()*-0.137655);
}

double mlp::synapse0x4344db0() {
   return (neuron0x43400a0()*0.436201);
}

double mlp::synapse0x4344de0() {
   return (neuron0x4340650()*-0.10181);
}

double mlp::synapse0x4344e10() {
   return (neuron0x4340c00()*0.27759);
}

double mlp::synapse0x4344e40() {
   return (neuron0x43411b0()*-0.495689);
}

double mlp::synapse0x4344e70() {
   return (neuron0x43417e0()*0.151713);
}

double mlp::synapse0x4344ea0() {
   return (neuron0x4341d90()*0.0278713);
}

double mlp::synapse0x4344f50() {
   return (neuron0x4342990()*-0.121449);
}

double mlp::synapse0x4344f80() {
   return (neuron0x4342ee0()*0.0219506);
}

double mlp::synapse0x4344fb0() {
   return (neuron0x4343470()*0.0441435);
}

double mlp::synapse0x4345160() {
   return (neuron0x433a0c0()*0.0618236);
}

double mlp::synapse0x4345190() {
   return (neuron0x433ce00()*-0.82811);
}

double mlp::synapse0x43451c0() {
   return (neuron0x433d410()*-0.246886);
}

double mlp::synapse0x43451f0() {
   return (neuron0x433d9c0()*-0.17406);
}

double mlp::synapse0x4345220() {
   return (neuron0x433de80()*0.101442);
}

double mlp::synapse0x4345250() {
   return (neuron0x433e430()*-0.50072);
}

double mlp::synapse0x4345280() {
   return (neuron0x433e9e0()*0.237534);
}

double mlp::synapse0x43452b0() {
   return (neuron0x433ef90()*0.503161);
}

double mlp::synapse0x43452e0() {
   return (neuron0x433f540()*-0.186546);
}

double mlp::synapse0x4345310() {
   return (neuron0x433faf0()*0.743146);
}

double mlp::synapse0x4345340() {
   return (neuron0x43400a0()*-0.184049);
}

double mlp::synapse0x4345370() {
   return (neuron0x4340650()*-0.346552);
}

double mlp::synapse0x43453a0() {
   return (neuron0x4340c00()*-0.784629);
}

double mlp::synapse0x43453d0() {
   return (neuron0x43411b0()*-0.0708977);
}

double mlp::synapse0x4345400() {
   return (neuron0x43417e0()*-0.0450477);
}

double mlp::synapse0x4345430() {
   return (neuron0x4341d90()*0.837016);
}

double mlp::synapse0x43454e0() {
   return (neuron0x4342990()*0.291153);
}

double mlp::synapse0x4345510() {
   return (neuron0x4342ee0()*-0.0602644);
}

double mlp::synapse0x4345540() {
   return (neuron0x4343470()*0.312347);
}

double mlp::synapse0x43456f0() {
   return (neuron0x433a0c0()*-0.462519);
}

double mlp::synapse0x4345720() {
   return (neuron0x433ce00()*0.33164);
}

double mlp::synapse0x4345750() {
   return (neuron0x433d410()*-0.490755);
}

double mlp::synapse0x4345780() {
   return (neuron0x433d9c0()*0.59639);
}

double mlp::synapse0x43457b0() {
   return (neuron0x433de80()*-0.171387);
}

double mlp::synapse0x43457e0() {
   return (neuron0x433e430()*-0.0171948);
}

double mlp::synapse0x4345810() {
   return (neuron0x433e9e0()*-0.0810646);
}

double mlp::synapse0x4345840() {
   return (neuron0x433ef90()*-0.0358248);
}

double mlp::synapse0x4345870() {
   return (neuron0x433f540()*-0.367251);
}

double mlp::synapse0x43458a0() {
   return (neuron0x433faf0()*-0.385059);
}

double mlp::synapse0x43458d0() {
   return (neuron0x43400a0()*-0.169431);
}

double mlp::synapse0x4345900() {
   return (neuron0x4340650()*-0.384999);
}

double mlp::synapse0x4345930() {
   return (neuron0x4340c00()*0.133943);
}

double mlp::synapse0x4345960() {
   return (neuron0x43411b0()*0.119632);
}

double mlp::synapse0x4345990() {
   return (neuron0x43417e0()*0.693098);
}

double mlp::synapse0x43459c0() {
   return (neuron0x4341d90()*-1.00481);
}

double mlp::synapse0x4345a70() {
   return (neuron0x4342990()*-0.403457);
}

double mlp::synapse0x4345aa0() {
   return (neuron0x4342ee0()*0.625692);
}

double mlp::synapse0x4345ad0() {
   return (neuron0x4343470()*-0.13506);
}

double mlp::synapse0x4345c80() {
   return (neuron0x433a0c0()*0.198265);
}

double mlp::synapse0x4345cb0() {
   return (neuron0x433ce00()*0.0961161);
}

double mlp::synapse0x4345ce0() {
   return (neuron0x433d410()*-0.000820506);
}

double mlp::synapse0x4345d10() {
   return (neuron0x433d9c0()*0.0479184);
}

double mlp::synapse0x4345d40() {
   return (neuron0x433de80()*0.0587247);
}

double mlp::synapse0x4345d70() {
   return (neuron0x433e430()*0.223482);
}

double mlp::synapse0x4345da0() {
   return (neuron0x433e9e0()*0.0718465);
}

double mlp::synapse0x4345dd0() {
   return (neuron0x433ef90()*-0.110037);
}

double mlp::synapse0x4345e00() {
   return (neuron0x433f540()*0.0268821);
}

double mlp::synapse0x4345e30() {
   return (neuron0x433faf0()*-0.21919);
}

double mlp::synapse0x4345e60() {
   return (neuron0x43400a0()*-0.354559);
}

double mlp::synapse0x4345e90() {
   return (neuron0x4340650()*0.197274);
}

double mlp::synapse0x4345ec0() {
   return (neuron0x4340c00()*0.183236);
}

double mlp::synapse0x4345ef0() {
   return (neuron0x43411b0()*0.240346);
}

double mlp::synapse0x4345f20() {
   return (neuron0x43417e0()*-0.229795);
}

double mlp::synapse0x4345f50() {
   return (neuron0x4341d90()*-0.173101);
}

double mlp::synapse0x4346000() {
   return (neuron0x4342990()*0.118522);
}

double mlp::synapse0x4346030() {
   return (neuron0x4342ee0()*-0.239923);
}

double mlp::synapse0x4346060() {
   return (neuron0x4343470()*0.0275464);
}

double mlp::synapse0x4346210() {
   return (neuron0x433a0c0()*0.128625);
}

double mlp::synapse0x4346240() {
   return (neuron0x433ce00()*-0.238571);
}

double mlp::synapse0x4346270() {
   return (neuron0x433d410()*0.0841868);
}

double mlp::synapse0x43462a0() {
   return (neuron0x433d9c0()*0.0594905);
}

double mlp::synapse0x43462d0() {
   return (neuron0x433de80()*-0.180252);
}

double mlp::synapse0x4346300() {
   return (neuron0x433e430()*0.150539);
}

double mlp::synapse0x4346330() {
   return (neuron0x433e9e0()*-0.341708);
}

double mlp::synapse0x4346360() {
   return (neuron0x433ef90()*-0.157502);
}

double mlp::synapse0x4346390() {
   return (neuron0x433f540()*0.120617);
}

double mlp::synapse0x43463c0() {
   return (neuron0x433faf0()*-0.302969);
}

double mlp::synapse0x43463f0() {
   return (neuron0x43400a0()*-0.370703);
}

double mlp::synapse0x4346420() {
   return (neuron0x4340650()*0.223787);
}

double mlp::synapse0x4346450() {
   return (neuron0x4340c00()*0.197572);
}

double mlp::synapse0x4346480() {
   return (neuron0x43411b0()*0.365269);
}

double mlp::synapse0x43464b0() {
   return (neuron0x43417e0()*-0.251459);
}

double mlp::synapse0x43464e0() {
   return (neuron0x4341d90()*-0.137152);
}

double mlp::synapse0x4346590() {
   return (neuron0x4342990()*0.272753);
}

double mlp::synapse0x43465c0() {
   return (neuron0x4342ee0()*-0.163615);
}

double mlp::synapse0x43465f0() {
   return (neuron0x4343470()*0.138537);
}

double mlp::synapse0x43467a0() {
   return (neuron0x433a0c0()*0.0524217);
}

double mlp::synapse0x43467d0() {
   return (neuron0x433ce00()*0.276588);
}

double mlp::synapse0x4346800() {
   return (neuron0x433d410()*0.224859);
}

double mlp::synapse0x4346830() {
   return (neuron0x433d9c0()*-0.193028);
}

double mlp::synapse0x4346860() {
   return (neuron0x433de80()*0.340739);
}

double mlp::synapse0x4346890() {
   return (neuron0x433e430()*-0.069518);
}

double mlp::synapse0x43468c0() {
   return (neuron0x433e9e0()*-0.12444);
}

double mlp::synapse0x43468f0() {
   return (neuron0x433ef90()*-0.414105);
}

double mlp::synapse0x4346920() {
   return (neuron0x433f540()*0.337063);
}

double mlp::synapse0x4346950() {
   return (neuron0x433faf0()*0.0663782);
}

double mlp::synapse0x4346980() {
   return (neuron0x43400a0()*-0.053478);
}

double mlp::synapse0x43469b0() {
   return (neuron0x4340650()*0.10641);
}

double mlp::synapse0x43469e0() {
   return (neuron0x4340c00()*-0.16531);
}

double mlp::synapse0x4346a10() {
   return (neuron0x43411b0()*0.306217);
}

double mlp::synapse0x4346a40() {
   return (neuron0x43417e0()*-0.125472);
}

double mlp::synapse0x4346a70() {
   return (neuron0x4341d90()*0.223301);
}

double mlp::synapse0x4346b20() {
   return (neuron0x4342990()*0.117071);
}

double mlp::synapse0x4346b50() {
   return (neuron0x4342ee0()*0.105462);
}

double mlp::synapse0x4346b80() {
   return (neuron0x4343470()*-0.363331);
}

