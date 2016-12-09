#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <random>

#include "DLConfig.h"
#include "Float2D.h"

using namespace std;

#include <Eigen/Dense>
using Eigen::MatrixXd;
using Eigen::VectorXd;

class DLLayer
{
	// Float2D lives and dies with this class : for any external
	// access return 2D vector

	// TODO: Handle desctruction of Float2D
	MatrixXd Y, D, S, B, post_PI;
	VectorXd PI;
	int M, N, K;
	double gam_d, gam_s, gam_n, gam_eta;

	default_random_engine generator;
	gamma_distribution<double> gdist;
private:
	void Init();
public:
	DLLayer();
	DLLayer(MatrixXd &fMat, DLConfig config);	
	~DLLayer();
};
