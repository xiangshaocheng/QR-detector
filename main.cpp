#include "stdafx.h"
#include <iostream>
#include<string>
#include<vector>
#include<time.h>
#include"opencv2/opencv.hpp"
#include"image_handler.h"
#include"video_handler.h"

using namespace std;
using namespace cv;


int main()
{
	/*VideoHandler vhdl;
	vhdl.setInput("")
	vhdl.run();*/
	ImageHandler ihdl("image/timg (2).jpg");
	Mat output;
	/*ihdl.convert2black_and_white();
	ihdl.show_thre_image();*/
	ihdl.run();
	//ihdl.show_output();
	waitKey(0);
}



