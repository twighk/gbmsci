#include "mlp.h"
#include <cmath>

double mlp::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12) {
   input0 = (in0 - 33.742)/15.4313;
   input1 = (in1 - 49.8866)/144.12;
   input2 = (in2 - 36.1988)/690.944;
   input3 = (in3 - 2.68743)/0.586673;
   input4 = (in4 - 0.00937431)/0.984385;
   input5 = (in5 - -0.010325)/1.1652;
   input6 = (in6 - 0.865234)/1.5258;
   input7 = (in7 - 0.156601)/0.864081;
   input8 = (in8 - 0.600189)/1.98588;
   input9 = (in9 - -0.904673)/0.432599;
   input10 = (in10 - 1.24873)/1.04035;
   input11 = (in11 - 23.505)/42.004;
   input12 = (in12 - 33.742)/15.4313;
   switch(index) {
     case 0:
         return neuron0x1049ebb10();
     case 1:
         return neuron0x1049ebf60();
     default:
         return 0.;
   }
}

double mlp::Value(int index, double* input) {
   input0 = (input[0] - 33.742)/15.4313;
   input1 = (input[1] - 49.8866)/144.12;
   input2 = (input[2] - 36.1988)/690.944;
   input3 = (input[3] - 2.68743)/0.586673;
   input4 = (input[4] - 0.00937431)/0.984385;
   input5 = (input[5] - -0.010325)/1.1652;
   input6 = (input[6] - 0.865234)/1.5258;
   input7 = (input[7] - 0.156601)/0.864081;
   input8 = (input[8] - 0.600189)/1.98588;
   input9 = (input[9] - -0.904673)/0.432599;
   input10 = (input[10] - 1.24873)/1.04035;
   input11 = (input[11] - 23.505)/42.004;
   input12 = (input[12] - 33.742)/15.4313;
   switch(index) {
     case 0:
         return neuron0x1049ebb10();
     case 1:
         return neuron0x1049ebf60();
     default:
         return 0.;
   }
}

double mlp::neuron0x1049dddd0() {
   return input0;
}

double mlp::neuron0x1049e5300() {
   return input1;
}

double mlp::neuron0x1049e55e0() {
   return input2;
}

double mlp::neuron0x1049e58c0() {
   return input3;
}

double mlp::neuron0x1049e5ba0() {
   return input4;
}

double mlp::neuron0x1049e5e80() {
   return input5;
}

double mlp::neuron0x1049e6160() {
   return input6;
}

double mlp::neuron0x1049e6470() {
   return input7;
}

double mlp::neuron0x1049e6780() {
   return input8;
}

double mlp::neuron0x1049e6a90() {
   return input9;
}

double mlp::neuron0x1049e6da0() {
   return input10;
}

double mlp::neuron0x1049e70b0() {
   return input11;
}

double mlp::neuron0x1049e73c0() {
   return input12;
}

double mlp::input0x1049e76d0() {
   double input = 1.37814;
   input += synapse0x1049e51c0();
   input += synapse0x1049e49d0();
   input += synapse0x1049de180();
   input += synapse0x1049e5070();
   input += synapse0x1049e50a0();
   input += synapse0x1049ddd70();
   input += synapse0x1049ddda0();
   input += synapse0x1049dd860();
   input += synapse0x1049dd890();
   input += synapse0x1049e7830();
   input += synapse0x1049e7860();
   input += synapse0x1049e7890();
   input += synapse0x1049e78c0();
   return input;
}

double mlp::neuron0x1049e76d0() {
   double input = input0x1049e76d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e78f0() {
   double input = 0.65646;
   input += synapse0x1049e7c00();
   input += synapse0x1049e7c30();
   input += synapse0x1049e7c60();
   input += synapse0x1049e7c90();
   input += synapse0x1049e7dc0();
   input += synapse0x1049e7df0();
   input += synapse0x1049e7e20();
   input += synapse0x1049e7e50();
   input += synapse0x1049e7e80();
   input += synapse0x1049e7eb0();
   input += synapse0x1049e7ee0();
   input += synapse0x1049e7f10();
   input += synapse0x1049e7f40();
   return input;
}

double mlp::neuron0x1049e78f0() {
   double input = input0x1049e78f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e7f70() {
   double input = -0.585294;
   input += synapse0x1049e8200();
   input += synapse0x1049e8230();
   input += synapse0x1049e8260();
   input += synapse0x1049e8290();
   input += synapse0x1049e82c0();
   input += synapse0x1049e82f0();
   input += synapse0x1049e8320();
   input += synapse0x1049e7cc0();
   input += synapse0x1049e7cf0();
   input += synapse0x1049e7d20();
   input += synapse0x1049e7d50();
   input += synapse0x1049e7d80();
   input += synapse0x1049e8550();
   return input;
}

double mlp::neuron0x1049e7f70() {
   double input = input0x1049e7f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e8580() {
   double input = -0.75782;
   input += synapse0x1049e8990();
   input += synapse0x1049e89c0();
   input += synapse0x1049e89f0();
   input += synapse0x1049e8a20();
   input += synapse0x1049e8a50();
   input += synapse0x1049e8a80();
   input += synapse0x1049e8ab0();
   input += synapse0x1049e8ae0();
   input += synapse0x1049e8b10();
   input += synapse0x1049e8b40();
   input += synapse0x1049e8b70();
   input += synapse0x1049e8ba0();
   input += synapse0x1049e8bd0();
   return input;
}

double mlp::neuron0x1049e8580() {
   double input = input0x1049e8580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e8c00() {
   double input = -0.684156;
   input += synapse0x1049e8e90();
   input += synapse0x1049e8ec0();
   input += synapse0x1049e8ef0();
   input += synapse0x1049e8f20();
   input += synapse0x1049e8f50();
   input += synapse0x1049e8f80();
   input += synapse0x1049e8fb0();
   input += synapse0x1049e8fe0();
   input += synapse0x1049e9010();
   input += synapse0x1049e9040();
   input += synapse0x1049e9070();
   input += synapse0x1049e90a0();
   input += synapse0x1049e90d0();
   return input;
}

double mlp::neuron0x1049e8c00() {
   double input = input0x1049e8c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e8350() {
   double input = -0.13245;
   input += synapse0x1049e84e0();
   input += synapse0x1049e8510();
   input += synapse0x1049e9280();
   input += synapse0x1049e92b0();
   input += synapse0x1049e92e0();
   input += synapse0x1049e9310();
   input += synapse0x1049e9340();
   input += synapse0x1049e9370();
   input += synapse0x1049e93a0();
   input += synapse0x1049e93d0();
   input += synapse0x1049e9400();
   input += synapse0x1049e9430();
   input += synapse0x1049e9460();
   return input;
}

double mlp::neuron0x1049e8350() {
   double input = input0x1049e8350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e9490() {
   double input = 2.72685;
   input += synapse0x1049e97a0();
   input += synapse0x1049e97d0();
   input += synapse0x1049e9800();
   input += synapse0x1049e9830();
   input += synapse0x1049e9860();
   input += synapse0x1049e9890();
   input += synapse0x1049e98c0();
   input += synapse0x1049e98f0();
   input += synapse0x1049e9920();
   input += synapse0x1049e9950();
   input += synapse0x1049e9980();
   input += synapse0x1049e99b0();
   input += synapse0x1049e99e0();
   return input;
}

double mlp::neuron0x1049e9490() {
   double input = input0x1049e9490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e9a10() {
   double input = 0.20082;
   input += synapse0x1049e9d20();
   input += synapse0x1049e9d50();
   input += synapse0x1049e9d80();
   input += synapse0x1049e9db0();
   input += synapse0x1049e9de0();
   input += synapse0x1049e9e10();
   input += synapse0x1049e9e40();
   input += synapse0x1049e9e70();
   input += synapse0x1049e9ea0();
   input += synapse0x1049e9ed0();
   input += synapse0x1049e9f00();
   input += synapse0x1049e9f30();
   input += synapse0x1049e9f60();
   return input;
}

double mlp::neuron0x1049e9a10() {
   double input = input0x1049e9a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049e9f90() {
   double input = -0.387143;
   input += synapse0x1049ea2a0();
   input += synapse0x1049ea2d0();
   input += synapse0x1049ea300();
   input += synapse0x1049ea330();
   input += synapse0x1049ea360();
   input += synapse0x1049ea390();
   input += synapse0x1049ea3c0();
   input += synapse0x1049ea3f0();
   input += synapse0x1049ea420();
   input += synapse0x1049ea450();
   input += synapse0x1049ea480();
   input += synapse0x1049ea4b0();
   input += synapse0x1049ea4e0();
   return input;
}

double mlp::neuron0x1049e9f90() {
   double input = input0x1049e9f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ea510() {
   double input = 3.24727;
   input += synapse0x1049ea820();
   input += synapse0x1049ea850();
   input += synapse0x1049ea880();
   input += synapse0x1049ea8b0();
   input += synapse0x1049ea8e0();
   input += synapse0x1049ea910();
   input += synapse0x1049ea940();
   input += synapse0x1049ea970();
   input += synapse0x1049ea9a0();
   input += synapse0x1049ea9d0();
   input += synapse0x1049eaa00();
   input += synapse0x1049eaa30();
   input += synapse0x1049eaa60();
   return input;
}

double mlp::neuron0x1049ea510() {
   double input = input0x1049ea510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049eaa90() {
   double input = -0.0340679;
   input += synapse0x1049eada0();
   input += synapse0x1049eadd0();
   input += synapse0x1049eae00();
   input += synapse0x1049eae30();
   input += synapse0x1049eae60();
   input += synapse0x1049eae90();
   input += synapse0x1049eaec0();
   input += synapse0x1049eaef0();
   input += synapse0x1049eaf20();
   input += synapse0x1049eaf50();
   input += synapse0x1049eaf80();
   input += synapse0x1049eafb0();
   input += synapse0x1049eafe0();
   return input;
}

double mlp::neuron0x1049eaa90() {
   double input = input0x1049eaa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049eb010() {
   double input = 0.897191;
   input += synapse0x1049eb320();
   input += synapse0x1049eb350();
   input += synapse0x1049eb380();
   input += synapse0x1049eb3b0();
   input += synapse0x1049eb3e0();
   input += synapse0x1049eb410();
   input += synapse0x1049eb440();
   input += synapse0x1049eb470();
   input += synapse0x1049eb4a0();
   input += synapse0x1049eb4d0();
   input += synapse0x1049eb500();
   input += synapse0x1049eb530();
   input += synapse0x1049eb560();
   return input;
}

double mlp::neuron0x1049eb010() {
   double input = input0x1049eb010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049eb590() {
   double input = -1.20284;
   input += synapse0x1049eb8a0();
   input += synapse0x1049eb8d0();
   input += synapse0x1049eb900();
   input += synapse0x1049eb930();
   input += synapse0x1049eb960();
   input += synapse0x1049eb990();
   input += synapse0x1049eb9c0();
   input += synapse0x1049eb9f0();
   input += synapse0x1049eba20();
   input += synapse0x1049eba50();
   input += synapse0x1049eba80();
   input += synapse0x1049ebab0();
   input += synapse0x1049ebae0();
   return input;
}

double mlp::neuron0x1049eb590() {
   double input = input0x1049eb590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double mlp::input0x1049ebb10() {
   double input = -0.247368;
   input += synapse0x1049ebcf0();
   input += synapse0x1049ebd20();
   input += synapse0x1049ebd50();
   input += synapse0x1049ebd80();
   input += synapse0x1049ebdb0();
   input += synapse0x1049ebde0();
   input += synapse0x1049ebe10();
   input += synapse0x1049ebe40();
   input += synapse0x1049ebe70();
   input += synapse0x1049ebea0();
   input += synapse0x1049ebed0();
   input += synapse0x1049ebf00();
   input += synapse0x1049ebf30();
   return input;
}

double mlp::neuron0x1049ebb10() {
   double input = input0x1049ebb10();
   return (input * 1)+0;
}

double mlp::input0x1049ebf60() {
   double input = 1.17931;
   input += synapse0x1049ec240();
   input += synapse0x1049ec270();
   input += synapse0x1049ec2a0();
   input += synapse0x1049ec2d0();
   input += synapse0x1049ec300();
   input += synapse0x1049ec330();
   input += synapse0x1049ec360();
   input += synapse0x1049ec390();
   input += synapse0x1049ec3c0();
   input += synapse0x1049ec3f0();
   input += synapse0x1049ec420();
   input += synapse0x1049ec450();
   input += synapse0x1049ec480();
   return input;
}

double mlp::neuron0x1049ebf60() {
   double input = input0x1049ebf60();
   return (input * 1)+0;
}

double mlp::synapse0x1049e51c0() {
   return (neuron0x1049dddd0()*-0.427822);
}

double mlp::synapse0x1049e49d0() {
   return (neuron0x1049e5300()*-0.396176);
}

double mlp::synapse0x1049de180() {
   return (neuron0x1049e55e0()*-0.190032);
}

double mlp::synapse0x1049e5070() {
   return (neuron0x1049e58c0()*-0.565418);
}

double mlp::synapse0x1049e50a0() {
   return (neuron0x1049e5ba0()*0.329121);
}

double mlp::synapse0x1049ddd70() {
   return (neuron0x1049e5e80()*0.347082);
}

double mlp::synapse0x1049ddda0() {
   return (neuron0x1049e6160()*-0.372078);
}

double mlp::synapse0x1049dd860() {
   return (neuron0x1049e6470()*0.77077);
}

double mlp::synapse0x1049dd890() {
   return (neuron0x1049e6780()*-0.0842367);
}

double mlp::synapse0x1049e7830() {
   return (neuron0x1049e6a90()*0.0694279);
}

double mlp::synapse0x1049e7860() {
   return (neuron0x1049e6da0()*-0.786514);
}

double mlp::synapse0x1049e7890() {
   return (neuron0x1049e70b0()*0.457167);
}

double mlp::synapse0x1049e78c0() {
   return (neuron0x1049e73c0()*-0.0740357);
}

double mlp::synapse0x1049e7c00() {
   return (neuron0x1049dddd0()*-0.349111);
}

double mlp::synapse0x1049e7c30() {
   return (neuron0x1049e5300()*-0.711128);
}

double mlp::synapse0x1049e7c60() {
   return (neuron0x1049e55e0()*-0.19568);
}

double mlp::synapse0x1049e7c90() {
   return (neuron0x1049e58c0()*1.00425);
}

double mlp::synapse0x1049e7dc0() {
   return (neuron0x1049e5ba0()*0.877174);
}

double mlp::synapse0x1049e7df0() {
   return (neuron0x1049e5e80()*-0.41536);
}

double mlp::synapse0x1049e7e20() {
   return (neuron0x1049e6160()*0.159682);
}

double mlp::synapse0x1049e7e50() {
   return (neuron0x1049e6470()*0.172832);
}

double mlp::synapse0x1049e7e80() {
   return (neuron0x1049e6780()*0.579045);
}

double mlp::synapse0x1049e7eb0() {
   return (neuron0x1049e6a90()*-0.291338);
}

double mlp::synapse0x1049e7ee0() {
   return (neuron0x1049e6da0()*0.263385);
}

double mlp::synapse0x1049e7f10() {
   return (neuron0x1049e70b0()*0.548368);
}

double mlp::synapse0x1049e7f40() {
   return (neuron0x1049e73c0()*-0.0580703);
}

double mlp::synapse0x1049e8200() {
   return (neuron0x1049dddd0()*-0.205604);
}

double mlp::synapse0x1049e8230() {
   return (neuron0x1049e5300()*-0.570739);
}

double mlp::synapse0x1049e8260() {
   return (neuron0x1049e55e0()*-0.277174);
}

double mlp::synapse0x1049e8290() {
   return (neuron0x1049e58c0()*-0.138794);
}

double mlp::synapse0x1049e82c0() {
   return (neuron0x1049e5ba0()*-0.0276334);
}

double mlp::synapse0x1049e82f0() {
   return (neuron0x1049e5e80()*-0.623586);
}

double mlp::synapse0x1049e8320() {
   return (neuron0x1049e6160()*-0.230754);
}

double mlp::synapse0x1049e7cc0() {
   return (neuron0x1049e6470()*-0.332126);
}

double mlp::synapse0x1049e7cf0() {
   return (neuron0x1049e6780()*-0.391246);
}

double mlp::synapse0x1049e7d20() {
   return (neuron0x1049e6a90()*1.51186);
}

double mlp::synapse0x1049e7d50() {
   return (neuron0x1049e6da0()*0.740546);
}

double mlp::synapse0x1049e7d80() {
   return (neuron0x1049e70b0()*-1.52576);
}

double mlp::synapse0x1049e8550() {
   return (neuron0x1049e73c0()*-0.23358);
}

double mlp::synapse0x1049e8990() {
   return (neuron0x1049dddd0()*0.396675);
}

double mlp::synapse0x1049e89c0() {
   return (neuron0x1049e5300()*-0.0769573);
}

double mlp::synapse0x1049e89f0() {
   return (neuron0x1049e55e0()*0.893257);
}

double mlp::synapse0x1049e8a20() {
   return (neuron0x1049e58c0()*-0.341475);
}

double mlp::synapse0x1049e8a50() {
   return (neuron0x1049e5ba0()*0.397895);
}

double mlp::synapse0x1049e8a80() {
   return (neuron0x1049e5e80()*0.0261965);
}

double mlp::synapse0x1049e8ab0() {
   return (neuron0x1049e6160()*-0.201509);
}

double mlp::synapse0x1049e8ae0() {
   return (neuron0x1049e6470()*0.228508);
}

double mlp::synapse0x1049e8b10() {
   return (neuron0x1049e6780()*0.251089);
}

double mlp::synapse0x1049e8b40() {
   return (neuron0x1049e6a90()*0.214796);
}

double mlp::synapse0x1049e8b70() {
   return (neuron0x1049e6da0()*-1.35648);
}

double mlp::synapse0x1049e8ba0() {
   return (neuron0x1049e70b0()*-0.120267);
}

double mlp::synapse0x1049e8bd0() {
   return (neuron0x1049e73c0()*-0.34643);
}

double mlp::synapse0x1049e8e90() {
   return (neuron0x1049dddd0()*2.194);
}

double mlp::synapse0x1049e8ec0() {
   return (neuron0x1049e5300()*0.251611);
}

double mlp::synapse0x1049e8ef0() {
   return (neuron0x1049e55e0()*0.171529);
}

double mlp::synapse0x1049e8f20() {
   return (neuron0x1049e58c0()*0.305366);
}

double mlp::synapse0x1049e8f50() {
   return (neuron0x1049e5ba0()*-1.11438);
}

double mlp::synapse0x1049e8f80() {
   return (neuron0x1049e5e80()*1.07292);
}

double mlp::synapse0x1049e8fb0() {
   return (neuron0x1049e6160()*0.372147);
}

double mlp::synapse0x1049e8fe0() {
   return (neuron0x1049e6470()*-0.231852);
}

double mlp::synapse0x1049e9010() {
   return (neuron0x1049e6780()*1.21961);
}

double mlp::synapse0x1049e9040() {
   return (neuron0x1049e6a90()*0.760731);
}

double mlp::synapse0x1049e9070() {
   return (neuron0x1049e6da0()*0.355639);
}

double mlp::synapse0x1049e90a0() {
   return (neuron0x1049e70b0()*-0.590769);
}

double mlp::synapse0x1049e90d0() {
   return (neuron0x1049e73c0()*1.7626);
}

double mlp::synapse0x1049e84e0() {
   return (neuron0x1049dddd0()*-0.0415243);
}

double mlp::synapse0x1049e8510() {
   return (neuron0x1049e5300()*-0.532531);
}

double mlp::synapse0x1049e9280() {
   return (neuron0x1049e55e0()*0.154378);
}

double mlp::synapse0x1049e92b0() {
   return (neuron0x1049e58c0()*-0.081272);
}

double mlp::synapse0x1049e92e0() {
   return (neuron0x1049e5ba0()*-0.20196);
}

double mlp::synapse0x1049e9310() {
   return (neuron0x1049e5e80()*0.108437);
}

double mlp::synapse0x1049e9340() {
   return (neuron0x1049e6160()*-0.402176);
}

double mlp::synapse0x1049e9370() {
   return (neuron0x1049e6470()*-0.240301);
}

double mlp::synapse0x1049e93a0() {
   return (neuron0x1049e6780()*-0.429886);
}

double mlp::synapse0x1049e93d0() {
   return (neuron0x1049e6a90()*-0.206848);
}

double mlp::synapse0x1049e9400() {
   return (neuron0x1049e6da0()*-0.27437);
}

double mlp::synapse0x1049e9430() {
   return (neuron0x1049e70b0()*-0.0296944);
}

double mlp::synapse0x1049e9460() {
   return (neuron0x1049e73c0()*-0.368383);
}

double mlp::synapse0x1049e97a0() {
   return (neuron0x1049dddd0()*-0.401849);
}

double mlp::synapse0x1049e97d0() {
   return (neuron0x1049e5300()*-1.00331);
}

double mlp::synapse0x1049e9800() {
   return (neuron0x1049e55e0()*-0.0400067);
}

double mlp::synapse0x1049e9830() {
   return (neuron0x1049e58c0()*-1.51571);
}

double mlp::synapse0x1049e9860() {
   return (neuron0x1049e5ba0()*0.937492);
}

double mlp::synapse0x1049e9890() {
   return (neuron0x1049e5e80()*-1.36422);
}

double mlp::synapse0x1049e98c0() {
   return (neuron0x1049e6160()*-0.0404612);
}

double mlp::synapse0x1049e98f0() {
   return (neuron0x1049e6470()*0.381168);
}

double mlp::synapse0x1049e9920() {
   return (neuron0x1049e6780()*0.216511);
}

double mlp::synapse0x1049e9950() {
   return (neuron0x1049e6a90()*0.702851);
}

double mlp::synapse0x1049e9980() {
   return (neuron0x1049e6da0()*-0.265513);
}

double mlp::synapse0x1049e99b0() {
   return (neuron0x1049e70b0()*0.25024);
}

double mlp::synapse0x1049e99e0() {
   return (neuron0x1049e73c0()*0.221568);
}

double mlp::synapse0x1049e9d20() {
   return (neuron0x1049dddd0()*0.159981);
}

double mlp::synapse0x1049e9d50() {
   return (neuron0x1049e5300()*-0.463122);
}

double mlp::synapse0x1049e9d80() {
   return (neuron0x1049e55e0()*0.399218);
}

double mlp::synapse0x1049e9db0() {
   return (neuron0x1049e58c0()*0.24737);
}

double mlp::synapse0x1049e9de0() {
   return (neuron0x1049e5ba0()*0.283101);
}

double mlp::synapse0x1049e9e10() {
   return (neuron0x1049e5e80()*-0.381765);
}

double mlp::synapse0x1049e9e40() {
   return (neuron0x1049e6160()*-0.525368);
}

double mlp::synapse0x1049e9e70() {
   return (neuron0x1049e6470()*0.275443);
}

double mlp::synapse0x1049e9ea0() {
   return (neuron0x1049e6780()*-0.195755);
}

double mlp::synapse0x1049e9ed0() {
   return (neuron0x1049e6a90()*-0.358335);
}

double mlp::synapse0x1049e9f00() {
   return (neuron0x1049e6da0()*-0.680761);
}

double mlp::synapse0x1049e9f30() {
   return (neuron0x1049e70b0()*-0.0522311);
}

double mlp::synapse0x1049e9f60() {
   return (neuron0x1049e73c0()*0.0216454);
}

double mlp::synapse0x1049ea2a0() {
   return (neuron0x1049dddd0()*-0.194275);
}

double mlp::synapse0x1049ea2d0() {
   return (neuron0x1049e5300()*0.130985);
}

double mlp::synapse0x1049ea300() {
   return (neuron0x1049e55e0()*-0.246303);
}

double mlp::synapse0x1049ea330() {
   return (neuron0x1049e58c0()*0.05605);
}

double mlp::synapse0x1049ea360() {
   return (neuron0x1049e5ba0()*0.322989);
}

double mlp::synapse0x1049ea390() {
   return (neuron0x1049e5e80()*-0.0871157);
}

double mlp::synapse0x1049ea3c0() {
   return (neuron0x1049e6160()*0.18638);
}

double mlp::synapse0x1049ea3f0() {
   return (neuron0x1049e6470()*-0.126914);
}

double mlp::synapse0x1049ea420() {
   return (neuron0x1049e6780()*0.0920331);
}

double mlp::synapse0x1049ea450() {
   return (neuron0x1049e6a90()*-0.487594);
}

double mlp::synapse0x1049ea480() {
   return (neuron0x1049e6da0()*0.312121);
}

double mlp::synapse0x1049ea4b0() {
   return (neuron0x1049e70b0()*-0.159097);
}

double mlp::synapse0x1049ea4e0() {
   return (neuron0x1049e73c0()*0.060137);
}

double mlp::synapse0x1049ea820() {
   return (neuron0x1049dddd0()*-0.154134);
}

double mlp::synapse0x1049ea850() {
   return (neuron0x1049e5300()*-1.30087);
}

double mlp::synapse0x1049ea880() {
   return (neuron0x1049e55e0()*-0.214137);
}

double mlp::synapse0x1049ea8b0() {
   return (neuron0x1049e58c0()*-1.29439);
}

double mlp::synapse0x1049ea8e0() {
   return (neuron0x1049e5ba0()*-0.731399);
}

double mlp::synapse0x1049ea910() {
   return (neuron0x1049e5e80()*2.87331);
}

double mlp::synapse0x1049ea940() {
   return (neuron0x1049e6160()*-0.014363);
}

double mlp::synapse0x1049ea970() {
   return (neuron0x1049e6470()*-0.011502);
}

double mlp::synapse0x1049ea9a0() {
   return (neuron0x1049e6780()*-0.0992333);
}

double mlp::synapse0x1049ea9d0() {
   return (neuron0x1049e6a90()*0.152236);
}

double mlp::synapse0x1049eaa00() {
   return (neuron0x1049e6da0()*-0.113314);
}

double mlp::synapse0x1049eaa30() {
   return (neuron0x1049e70b0()*-0.423228);
}

double mlp::synapse0x1049eaa60() {
   return (neuron0x1049e73c0()*-0.414651);
}

double mlp::synapse0x1049eada0() {
   return (neuron0x1049dddd0()*0.403095);
}

double mlp::synapse0x1049eadd0() {
   return (neuron0x1049e5300()*0.519319);
}

double mlp::synapse0x1049eae00() {
   return (neuron0x1049e55e0()*-0.368288);
}

double mlp::synapse0x1049eae30() {
   return (neuron0x1049e58c0()*0.0808877);
}

double mlp::synapse0x1049eae60() {
   return (neuron0x1049e5ba0()*0.0371756);
}

double mlp::synapse0x1049eae90() {
   return (neuron0x1049e5e80()*-0.230389);
}

double mlp::synapse0x1049eaec0() {
   return (neuron0x1049e6160()*0.339737);
}

double mlp::synapse0x1049eaef0() {
   return (neuron0x1049e6470()*0.157247);
}

double mlp::synapse0x1049eaf20() {
   return (neuron0x1049e6780()*0.099488);
}

double mlp::synapse0x1049eaf50() {
   return (neuron0x1049e6a90()*-0.0340464);
}

double mlp::synapse0x1049eaf80() {
   return (neuron0x1049e6da0()*0.523958);
}

double mlp::synapse0x1049eafb0() {
   return (neuron0x1049e70b0()*-0.0848672);
}

double mlp::synapse0x1049eafe0() {
   return (neuron0x1049e73c0()*0.186341);
}

double mlp::synapse0x1049eb320() {
   return (neuron0x1049dddd0()*0.406299);
}

double mlp::synapse0x1049eb350() {
   return (neuron0x1049e5300()*-0.513853);
}

double mlp::synapse0x1049eb380() {
   return (neuron0x1049e55e0()*0.16038);
}

double mlp::synapse0x1049eb3b0() {
   return (neuron0x1049e58c0()*-0.507876);
}

double mlp::synapse0x1049eb3e0() {
   return (neuron0x1049e5ba0()*-0.0887221);
}

double mlp::synapse0x1049eb410() {
   return (neuron0x1049e5e80()*0.010344);
}

double mlp::synapse0x1049eb440() {
   return (neuron0x1049e6160()*-0.648614);
}

double mlp::synapse0x1049eb470() {
   return (neuron0x1049e6470()*0.0103266);
}

double mlp::synapse0x1049eb4a0() {
   return (neuron0x1049e6780()*0.660882);
}

double mlp::synapse0x1049eb4d0() {
   return (neuron0x1049e6a90()*-0.421451);
}

double mlp::synapse0x1049eb500() {
   return (neuron0x1049e6da0()*-1.12005);
}

double mlp::synapse0x1049eb530() {
   return (neuron0x1049e70b0()*0.384031);
}

double mlp::synapse0x1049eb560() {
   return (neuron0x1049e73c0()*0.254138);
}

double mlp::synapse0x1049eb8a0() {
   return (neuron0x1049dddd0()*-0.353831);
}

double mlp::synapse0x1049eb8d0() {
   return (neuron0x1049e5300()*-0.177621);
}

double mlp::synapse0x1049eb900() {
   return (neuron0x1049e55e0()*-0.57609);
}

double mlp::synapse0x1049eb930() {
   return (neuron0x1049e58c0()*0.541383);
}

double mlp::synapse0x1049eb960() {
   return (neuron0x1049e5ba0()*0.93081);
}

double mlp::synapse0x1049eb990() {
   return (neuron0x1049e5e80()*0.0860799);
}

double mlp::synapse0x1049eb9c0() {
   return (neuron0x1049e6160()*0.215701);
}

double mlp::synapse0x1049eb9f0() {
   return (neuron0x1049e6470()*0.348757);
}

double mlp::synapse0x1049eba20() {
   return (neuron0x1049e6780()*-0.28175);
}

double mlp::synapse0x1049eba50() {
   return (neuron0x1049e6a90()*-0.0756719);
}

double mlp::synapse0x1049eba80() {
   return (neuron0x1049e6da0()*-0.37996);
}

double mlp::synapse0x1049ebab0() {
   return (neuron0x1049e70b0()*-0.0255839);
}

double mlp::synapse0x1049ebae0() {
   return (neuron0x1049e73c0()*0.181512);
}

double mlp::synapse0x1049ebcf0() {
   return (neuron0x1049e76d0()*-0.608895);
}

double mlp::synapse0x1049ebd20() {
   return (neuron0x1049e78f0()*0.426967);
}

double mlp::synapse0x1049ebd50() {
   return (neuron0x1049e7f70()*-0.813492);
}

double mlp::synapse0x1049ebd80() {
   return (neuron0x1049e8580()*0.832848);
}

double mlp::synapse0x1049ebdb0() {
   return (neuron0x1049e8c00()*-0.304566);
}

double mlp::synapse0x1049ebde0() {
   return (neuron0x1049e8350()*0.320109);
}

double mlp::synapse0x1049ebe10() {
   return (neuron0x1049e9490()*1.16605);
}

double mlp::synapse0x1049ebe40() {
   return (neuron0x1049e9a10()*0.38347);
}

double mlp::synapse0x1049ebe70() {
   return (neuron0x1049e9f90()*-0.34659);
}

double mlp::synapse0x1049ebea0() {
   return (neuron0x1049ea510()*0.856587);
}

double mlp::synapse0x1049ebed0() {
   return (neuron0x1049eaa90()*-0.00936917);
}

double mlp::synapse0x1049ebf00() {
   return (neuron0x1049eb010()*-0.818858);
}

double mlp::synapse0x1049ebf30() {
   return (neuron0x1049eb590()*-1.15561);
}

double mlp::synapse0x1049ec240() {
   return (neuron0x1049e76d0()*0.613353);
}

double mlp::synapse0x1049ec270() {
   return (neuron0x1049e78f0()*-0.441967);
}

double mlp::synapse0x1049ec2a0() {
   return (neuron0x1049e7f70()*0.798197);
}

double mlp::synapse0x1049ec2d0() {
   return (neuron0x1049e8580()*-0.861815);
}

double mlp::synapse0x1049ec300() {
   return (neuron0x1049e8c00()*0.287423);
}

double mlp::synapse0x1049ec330() {
   return (neuron0x1049e8350()*-0.230475);
}

double mlp::synapse0x1049ec360() {
   return (neuron0x1049e9490()*-1.15432);
}

double mlp::synapse0x1049ec390() {
   return (neuron0x1049e9a10()*-0.385128);
}

double mlp::synapse0x1049ec3c0() {
   return (neuron0x1049e9f90()*0.357183);
}

double mlp::synapse0x1049ec3f0() {
   return (neuron0x1049ea510()*-0.859169);
}

double mlp::synapse0x1049ec420() {
   return (neuron0x1049eaa90()*0.0847413);
}

double mlp::synapse0x1049ec450() {
   return (neuron0x1049eb010()*0.850743);
}

double mlp::synapse0x1049ec480() {
   return (neuron0x1049eb590()*1.11683);
}

