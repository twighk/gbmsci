#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8) {
   input0 = (in0 - 42.1827)/20.8917;
   input1 = (in1 - 48.6411)/73.1473;
   input2 = (in2 - 26.3703)/298.013;
   input3 = (in3 - 2.57257)/0.56415;
   input4 = (in4 - 7.60156e-05)/0.979457;
   input5 = (in5 - -0.00416881)/1.11664;
   input6 = (in6 - 1.03357)/2.85002;
   input7 = (in7 - 0.191235)/1.46727;
   input8 = (in8 - 0.734332)/2.31602;
   switch(index) {
     case 0:
         return neuron0x10499cc80();
     case 1:
         return neuron0x10499cea0();
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
   switch(index) {
     case 0:
         return neuron0x10499cc80();
     case 1:
         return neuron0x10499cea0();
     default:
         return 0.;
   }
}

double mlp::neuron0x104998e40() {
   return input0;
}

double mlp::neuron0x104998fa0() {
   return input1;
}

double mlp::neuron0x104999280() {
   return input2;
}

double mlp::neuron0x104999560() {
   return input3;
}

double mlp::neuron0x104999840() {
   return input4;
}

double mlp::neuron0x104999b20() {
   return input5;
}

double mlp::neuron0x104999e00() {
   return input6;
}

double mlp::neuron0x10499a110() {
   return input7;
}

double mlp::neuron0x10499a420() {
   return input8;
}

double mlp::input0x10499a870() {
   double input = 0.480851;
   input += synapse0x10498c090();
   input += synapse0x104998c60();
   input += synapse0x10498bd60();
   input += synapse0x10498bd90();
   input += synapse0x10498bdf0();
   input += synapse0x10498be20();
   input += synapse0x10498be50();
   input += synapse0x10498be80();
   input += synapse0x10499a9d0();
   return input;
}

double mlp::neuron0x10499a870() {
   double input = input0x10499a870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499aa00() {
   double input = -1.13149;
   input += synapse0x10499ad10();
   input += synapse0x10499ad40();
   input += synapse0x10499ad70();
   input += synapse0x10499ada0();
   input += synapse0x10499add0();
   input += synapse0x10499ae00();
   input += synapse0x10499ae30();
   input += synapse0x10499ae60();
   input += synapse0x10499af90();
   return input;
}

double mlp::neuron0x10499aa00() {
   double input = input0x10499aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499afc0() {
   double input = -0.868216;
   input += synapse0x10499b250();
   input += synapse0x10499b280();
   input += synapse0x10499b2b0();
   input += synapse0x10499b2e0();
   input += synapse0x10499b310();
   input += synapse0x10499b340();
   input += synapse0x10499b370();
   input += synapse0x10499b3a0();
   input += synapse0x10499b3d0();
   return input;
}

double mlp::neuron0x10499afc0() {
   double input = input0x10499afc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499b400() {
   double input = 1.17761;
   input += synapse0x10499b710();
   input += synapse0x10499b740();
   input += synapse0x10499b770();
   input += synapse0x10499b7a0();
   input += synapse0x10499b7d0();
   input += synapse0x10499b800();
   input += synapse0x10499ae90();
   input += synapse0x10499aec0();
   input += synapse0x10499aef0();
   return input;
}

double mlp::neuron0x10499b400() {
   double input = input0x10499b400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499ba30() {
   double input = -0.592591;
   input += synapse0x10499af50();
   input += synapse0x10499bd10();
   input += synapse0x10499bd40();
   input += synapse0x10499bd70();
   input += synapse0x10499bda0();
   input += synapse0x10499bdd0();
   input += synapse0x10499be00();
   input += synapse0x10499be30();
   input += synapse0x10499be60();
   return input;
}

double mlp::neuron0x10499ba30() {
   double input = input0x10499ba30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499be90() {
   double input = 0.393177;
   input += synapse0x10499c1a0();
   input += synapse0x10499c1d0();
   input += synapse0x10499c200();
   input += synapse0x10499c230();
   input += synapse0x10499c260();
   input += synapse0x10499c290();
   input += synapse0x10499c2c0();
   input += synapse0x10499c2f0();
   input += synapse0x10499c320();
   return input;
}

double mlp::neuron0x10499be90() {
   double input = input0x10499be90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499c350() {
   double input = -0.934343;
   input += synapse0x10499c660();
   input += synapse0x10499c690();
   input += synapse0x10499c6c0();
   input += synapse0x10499c6f0();
   input += synapse0x10499c720();
   input += synapse0x10499c750();
   input += synapse0x10499c780();
   input += synapse0x10499c7b0();
   input += synapse0x10499c7e0();
   return input;
}

double mlp::neuron0x10499c350() {
   double input = input0x10499c350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499c810() {
   double input = -0.393122;
   input += synapse0x10499cc20();
   input += synapse0x10499cc50();
   input += synapse0x10499b830();
   input += synapse0x10499b860();
   input += synapse0x10499b890();
   input += synapse0x10499b8c0();
   input += synapse0x10499b8f0();
   input += synapse0x10499b920();
   input += synapse0x10499b950();
   return input;
}

double mlp::neuron0x10499c810() {
   double input = input0x10499c810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x10499cc80() {
   double input = 0.0789265;
   input += synapse0x10499a7b0();
   input += synapse0x10499a7e0();
   input += synapse0x10499a810();
   input += synapse0x10499a840();
   input += synapse0x10499cde0();
   input += synapse0x10499ce10();
   input += synapse0x10499ce40();
   input += synapse0x10499ce70();
   return input;
}

double mlp::neuron0x10499cc80() {
   double input = input0x10499cc80();
   return (input * 1)+0;
}

double mlp::input0x10499cea0() {
   double input = 0.977581;
   input += synapse0x10499d180();
   input += synapse0x10499d1b0();
   input += synapse0x10499d1e0();
   input += synapse0x10499d210();
   input += synapse0x10499d240();
   input += synapse0x10499d270();
   input += synapse0x10499d2a0();
   input += synapse0x10499d2d0();
   return input;
}

double mlp::neuron0x10499cea0() {
   double input = input0x10499cea0();
   return (input * 1)+0;
}

double mlp::synapse0x10498c090() {
   return (neuron0x104998e40()*-0.449947);
}

double mlp::synapse0x104998c60() {
   return (neuron0x104998fa0()*0.543289);
}

double mlp::synapse0x10498bd60() {
   return (neuron0x104999280()*4.08954);
}

double mlp::synapse0x10498bd90() {
   return (neuron0x104999560()*0.104266);
}

double mlp::synapse0x10498bdf0() {
   return (neuron0x104999840()*0.12398);
}

double mlp::synapse0x10498be20() {
   return (neuron0x104999b20()*-0.280302);
}

double mlp::synapse0x10498be50() {
   return (neuron0x104999e00()*0.0235881);
}

double mlp::synapse0x10498be80() {
   return (neuron0x10499a110()*0.138362);
}

double mlp::synapse0x10499a9d0() {
   return (neuron0x10499a420()*-0.0295838);
}

double mlp::synapse0x10499ad10() {
   return (neuron0x104998e40()*-0.389501);
}

double mlp::synapse0x10499ad40() {
   return (neuron0x104998fa0()*0.707217);
}

double mlp::synapse0x10499ad70() {
   return (neuron0x104999280()*-2.50387);
}

double mlp::synapse0x10499ada0() {
   return (neuron0x104999560()*0.267239);
}

double mlp::synapse0x10499add0() {
   return (neuron0x104999840()*-0.217524);
}

double mlp::synapse0x10499ae00() {
   return (neuron0x104999b20()*0.586725);
}

double mlp::synapse0x10499ae30() {
   return (neuron0x104999e00()*-0.156204);
}

double mlp::synapse0x10499ae60() {
   return (neuron0x10499a110()*0.44197);
}

double mlp::synapse0x10499af90() {
   return (neuron0x10499a420()*0.108594);
}

double mlp::synapse0x10499b250() {
   return (neuron0x104998e40()*1.18811);
}

double mlp::synapse0x10499b280() {
   return (neuron0x104998fa0()*-0.0679538);
}

double mlp::synapse0x10499b2b0() {
   return (neuron0x104999280()*-0.486164);
}

double mlp::synapse0x10499b2e0() {
   return (neuron0x104999560()*-0.547033);
}

double mlp::synapse0x10499b310() {
   return (neuron0x104999840()*0.192199);
}

double mlp::synapse0x10499b340() {
   return (neuron0x104999b20()*-0.268341);
}

double mlp::synapse0x10499b370() {
   return (neuron0x104999e00()*0.238438);
}

double mlp::synapse0x10499b3a0() {
   return (neuron0x10499a110()*-0.237084);
}

double mlp::synapse0x10499b3d0() {
   return (neuron0x10499a420()*0.0441248);
}

double mlp::synapse0x10499b710() {
   return (neuron0x104998e40()*1.6106);
}

double mlp::synapse0x10499b740() {
   return (neuron0x104998fa0()*-0.249299);
}

double mlp::synapse0x10499b770() {
   return (neuron0x104999280()*0.497341);
}

double mlp::synapse0x10499b7a0() {
   return (neuron0x104999560()*-0.798836);
}

double mlp::synapse0x10499b7d0() {
   return (neuron0x104999840()*0.301231);
}

double mlp::synapse0x10499b800() {
   return (neuron0x104999b20()*-0.542436);
}

double mlp::synapse0x10499ae90() {
   return (neuron0x104999e00()*0.493282);
}

double mlp::synapse0x10499aec0() {
   return (neuron0x10499a110()*-0.168725);
}

double mlp::synapse0x10499aef0() {
   return (neuron0x10499a420()*0.0361011);
}

double mlp::synapse0x10499af50() {
   return (neuron0x104998e40()*0.926665);
}

double mlp::synapse0x10499bd10() {
   return (neuron0x104998fa0()*-0.543421);
}

double mlp::synapse0x10499bd40() {
   return (neuron0x104999280()*-2.58841);
}

double mlp::synapse0x10499bd70() {
   return (neuron0x104999560()*-0.425855);
}

double mlp::synapse0x10499bda0() {
   return (neuron0x104999840()*0.604313);
}

double mlp::synapse0x10499bdd0() {
   return (neuron0x104999b20()*-0.998433);
}

double mlp::synapse0x10499be00() {
   return (neuron0x104999e00()*0.186746);
}

double mlp::synapse0x10499be30() {
   return (neuron0x10499a110()*-0.23407);
}

double mlp::synapse0x10499be60() {
   return (neuron0x10499a420()*0.0535677);
}

double mlp::synapse0x10499c1a0() {
   return (neuron0x104998e40()*0.652106);
}

double mlp::synapse0x10499c1d0() {
   return (neuron0x104998fa0()*-1.446);
}

double mlp::synapse0x10499c200() {
   return (neuron0x104999280()*-0.433806);
}

double mlp::synapse0x10499c230() {
   return (neuron0x104999560()*0.109309);
}

double mlp::synapse0x10499c260() {
   return (neuron0x104999840()*-0.165048);
}

double mlp::synapse0x10499c290() {
   return (neuron0x104999b20()*-0.359383);
}

double mlp::synapse0x10499c2c0() {
   return (neuron0x104999e00()*-0.0197785);
}

double mlp::synapse0x10499c2f0() {
   return (neuron0x10499a110()*-0.247897);
}

double mlp::synapse0x10499c320() {
   return (neuron0x10499a420()*0.0308167);
}

double mlp::synapse0x10499c660() {
   return (neuron0x104998e40()*0.546379);
}

double mlp::synapse0x10499c690() {
   return (neuron0x104998fa0()*-0.0968596);
}

double mlp::synapse0x10499c6c0() {
   return (neuron0x104999280()*-0.454414);
}

double mlp::synapse0x10499c6f0() {
   return (neuron0x104999560()*-1.85658);
}

double mlp::synapse0x10499c720() {
   return (neuron0x104999840()*0.129144);
}

double mlp::synapse0x10499c750() {
   return (neuron0x104999b20()*-0.130485);
}

double mlp::synapse0x10499c780() {
   return (neuron0x104999e00()*0.10984);
}

double mlp::synapse0x10499c7b0() {
   return (neuron0x10499a110()*-0.186072);
}

double mlp::synapse0x10499c7e0() {
   return (neuron0x10499a420()*0.0968939);
}

double mlp::synapse0x10499cc20() {
   return (neuron0x104998e40()*0.329741);
}

double mlp::synapse0x10499cc50() {
   return (neuron0x104998fa0()*-0.23984);
}

double mlp::synapse0x10499b830() {
   return (neuron0x104999280()*-0.748653);
}

double mlp::synapse0x10499b860() {
   return (neuron0x104999560()*1.72862);
}

double mlp::synapse0x10499b890() {
   return (neuron0x104999840()*0.086587);
}

double mlp::synapse0x10499b8c0() {
   return (neuron0x104999b20()*-0.0482932);
}

double mlp::synapse0x10499b8f0() {
   return (neuron0x104999e00()*-0.15259);
}

double mlp::synapse0x10499b920() {
   return (neuron0x10499a110()*0.372959);
}

double mlp::synapse0x10499b950() {
   return (neuron0x10499a420()*0.368898);
}

double mlp::synapse0x10499a7b0() {
   return (neuron0x10499a870()*1.32934);
}

double mlp::synapse0x10499a7e0() {
   return (neuron0x10499aa00()*-1.03216);
}

double mlp::synapse0x10499a810() {
   return (neuron0x10499afc0()*0.692435);
}

double mlp::synapse0x10499a840() {
   return (neuron0x10499b400()*-0.69264);
}

double mlp::synapse0x10499cde0() {
   return (neuron0x10499ba30()*-0.89508);
}

double mlp::synapse0x10499ce10() {
   return (neuron0x10499be90()*-0.231637);
}

double mlp::synapse0x10499ce40() {
   return (neuron0x10499c350()*0.587668);
}

double mlp::synapse0x10499ce70() {
   return (neuron0x10499c810()*0.535096);
}

double mlp::synapse0x10499d180() {
   return (neuron0x10499a870()*-1.38918);
}

double mlp::synapse0x10499d1b0() {
   return (neuron0x10499aa00()*0.94587);
}

double mlp::synapse0x10499d1e0() {
   return (neuron0x10499afc0()*-0.781494);
}

double mlp::synapse0x10499d210() {
   return (neuron0x10499b400()*0.761392);
}

double mlp::synapse0x10499d240() {
   return (neuron0x10499ba30()*0.857442);
}

double mlp::synapse0x10499d270() {
   return (neuron0x10499be90()*0.189988);
}

double mlp::synapse0x10499d2a0() {
   return (neuron0x10499c350()*-0.56486);
}

double mlp::synapse0x10499d2d0() {
   return (neuron0x10499c810()*-0.500659);
}

