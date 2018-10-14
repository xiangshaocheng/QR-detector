// QR_detector.cpp: 定义控制台应用程序的入口点。
//

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
	ImageHandler hdl("image/bg1.jpg");
	hdl.convert2black_and_white();
	hdl.get_patterns();
	hdl.show_image();
	//hdl.get_patterns();
	waitKey(0);
    return 0;
}



