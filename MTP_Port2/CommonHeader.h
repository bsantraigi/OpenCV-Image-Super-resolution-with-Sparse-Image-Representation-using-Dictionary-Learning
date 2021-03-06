#pragma once
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <fstream>
#include <Windows.h>

#include <Eigen/Dense>
using Eigen::MatrixXd;
using Eigen::VectorXd;

#include "Timer.h"
#include "ImLoader.h"
#include "Float2D.h"
#include "Utilities.h"
#include "DLLayer.h"
#include "DLConfig.h"

#define del2D(mat,n) for(int i=0;i<n;i++){delete [] mat[i];}
