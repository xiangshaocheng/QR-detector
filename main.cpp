#include "stdafx.h"
#include <iostream>
#include"opencv2/opencv.hpp"
#include"image_handler.h"
#include<string>
#include<vector>
#include<time.h>
using namespace std;
using namespace cv;


int main()
{
	clock_t t1=clock();
	ImageHandler hdl("image/bg0.jpg");//QR4
	hdl.convert2black_and_white();
	hdl.get_patterns();
	hdl.show_contours();
	//hdl.QR_in_image();
	//hdl.persepective_transform();
	clock_t t2=clock();
	cout << "time :" << (t2 - t1)<< endl;
	waitKey(0);
    return 0;
}



