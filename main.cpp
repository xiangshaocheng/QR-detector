#include "stdafx.h"
#include <iostream>
#include"opencv2/opencv.hpp"
#include"image_handler.h"
#include<string>
#include<vector>
using namespace std;
using namespace cv;


int main()
{
	ImageHandler hdl("image/bg6.jpg");
	hdl.convert2black_and_white();
	hdl.get_patterns();
	hdl.QR_in_image();

	hdl.persepective_transform();
	waitKey(0);
    return 0;
}



