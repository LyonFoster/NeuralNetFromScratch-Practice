// fuckin uhhhh neural net from scratch
#include <iostream>
#include <cmath>
#include <Eigen/Dense>



Eigen::MatrixXd oneLayer(Eigen::VectorXd inputs, Eigen::MatrixXd weights, Eigen::VectorXd biases)
{

	// inputs should be a row vector
	// weigths should be column vectors of weights
	// biases should be a row vector
	// dimensions that arent 1 should be the same so that these multiplications work out


	// this is the same as the dot operand for the input vector with every column (every weight) of the weights matrix

	// std::cout << weights << std::endl;

	Eigen::VectorXd outputs(3);

	outputs  =  weights * inputs + biases;

	return outputs;
}




Eigen::MatrixXd fullBatch(Eigen::MatrixXd inputs, Eigen::MatrixXd weights, Eigen::VectorXd biases)
{
	Eigen::MatrixXd outputs(3,3);

	outputs = inputs * weights.transpose() + (biases.replicate(1,3)).transpose();

	return outputs;
}