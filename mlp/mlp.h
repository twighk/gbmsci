#ifndef mlp_h
#define mlp_h

class mlp { 
public:
   mlp() {}
   ~mlp() {}
   double Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8);
   double Value(int index, double* input);
private:
   double input0;
   double input1;
   double input2;
   double input3;
   double input4;
   double input5;
   double input6;
   double input7;
   double input8;
   double neuron0x104998e20();
   double neuron0x104998f80();
   double neuron0x104999260();
   double neuron0x104999540();
   double neuron0x104999820();
   double neuron0x104999b00();
   double neuron0x104999de0();
   double neuron0x10499a0f0();
   double neuron0x10499a400();
   double input0x10499a850();
   double neuron0x10499a850();
   double input0x10499a9e0();
   double neuron0x10499a9e0();
   double input0x10499abf0();
   double neuron0x10499abf0();
   double synapse0x10498c070();
   double synapse0x104998c40();
   double synapse0x10498bd40();
   double synapse0x10498bd70();
   double synapse0x10498bdd0();
   double synapse0x10498be00();
   double synapse0x10498be30();
   double synapse0x10498be60();
   double synapse0x10499a9b0();
   double synapse0x10499abc0();
   double synapse0x10499aed0();
};

#endif // mlp_h

