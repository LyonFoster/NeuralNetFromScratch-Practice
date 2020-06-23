#include <iostream>
#include <cmath>
#include <Eigen/Dense>
// #include "codingANeuron.h"
// #include "codingALayer.h"
 #include "addingLayers.h"

//  g++ -std=c++17 nnfsMain.cpp -I/Users/lfoster18/Documents/NeuralNetfromScratch/eigen-3.3.7 

// I'm just sorta going one chapter at a time, implementing as I go. 
// This whole main is going to serve
// as my notes as I learn. If you compile with the .cpp
// corresponing to the chapter I'm on and #include the 
// header file, you can run any part of this
// you'll also need to -I your directory of eigen-3.3.7


int main()
{

/**************************** Chapter 1 Codine a Neuron ********************************

	//coding a single neuron
	//so every neuron has a several connections it is connected to inputs
	//and connected to outputs. For the moment, this single neuron will have 3 input and 1 output connections
	// When taking in inputs, these inputs are the outputs of other neurons or the inputs are part of teh training data
	// these numbers are weighted, summed, then added to a neuron bias
	// So for a neuron with 3 inputs, and 1 output,
	// I need 3 weights, 1 bias, 3 input values and 1 output (the output will be the return)

	float inputs[3] = {1,2,3};

	float weights[3] = {.2,.8,-.5};
	float bias = 2;

	std::cout << returnNeuron(inputs,weights,bias) << std::endl;
 ****************************************************************************************/

 /*************************** Chapter 2 Coding a layer *********************************

	// coding a layer 
	// so this time around I'm using Eigen and now I can use some matrix multiplication
	// to do multiple dot products 

	// so going from the book, I want the parameters to be
		
		// inputs = [1.0, 2.0, 3.0, 2.5]

		// weights = [[0.2, 0.8, -0.5, 1],
        //   		   [0.5, -0.91, 0.26, -0.5],
        //             [-0.26, -0.27, 0.17, 0.87]]

        // biases = [2.0, 3.0, 0.5]            
       	
	
	// But these need to be in the correct format for my function
	//This is for a 1 element batch of inputs
		// Eigen::VectorXd inputs(4);
		// inputs << 1.0, 2.0, 3.0, 2.5;

		// std::cout << "\nthe inputs are \n" << inputs << std::endl;
	

 	  	//	Eigen::MatrixXd weights(3,4);
		// weights << 	0.2, 0.8, -0.5, 1.0, 
  	    //    			0.5, -0.91, 0.26, -0.5,
  	    //  		   -0.26, -0.27, 0.17, 0.87;

  		// std::cout << "\nthe weights are  \n" << weights << std::endl;

		// Eigen::VectorXd biases(3);
		// biases << 2.0, 3.0, 0.5;

		// std::cout << "\nthe biases are  \n" << weights << std::endl;

	 //  	std::cout << oneLayer(inputs, weights, biases) << std::endl;





	  	//this is for a larger batch of inputs
		Eigen::MatrixXd inputs(3,4);
		inputs << 1.0, 2.0, 3.0, 2.5, 
          			  2.0, 5.0, -1.0, 2.0, 
         			 -1.5, 2.7, 3.3, -0.8;

		 std::cout << "\nthe inputs are \n" << inputs << std::endl;

   		Eigen::MatrixXd weights(3,4);
		weights << 	0.2, 0.8, -0.5, 1.0, 
           			0.5, -0.91, 0.26, -0.5,
          		   -0.26, -0.27, 0.17, 0.87;
  		 
		std::cout << "\nthe weights are  \n" << weights << std::endl;

		Eigen::VectorXd biases(3);
		biases << 2.0, 3.0, 0.5;

		std::cout << "\nthe biases are  \n" << weights << std::endl;


		std::cout << "\n fed through the first layer \n" << fullBatch(inputs, weights, biases) << std::endl;
 ***************************************************************************************/












	
	return 0;
}