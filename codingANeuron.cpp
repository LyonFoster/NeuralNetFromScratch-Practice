#include <iostream>
#include <cmath>
#include <Eigen/Dense>
#include "codingANeuron.h"


//  g++ -std=c++17 codingANeuron.cpp -I/Users/lfoster18/Documents/NeuralNetfromScratch/eigen-3.3.7 


float returnNeuron(float inputs[3], float weights[3], float bias)
{
	return (inputs[0]*weights[0] + inputs[1]*weights[1] + inputs[2]*weights[2]) + bias;
}
