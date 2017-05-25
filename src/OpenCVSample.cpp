#include "OpenCVSample.h"
#include <dlib/geometry.h>



using namespace cv;

void processImage(Mat &frame)
{
	// int thres = 128;
	// threshold(frame, frame, thres, 255, cv::THRESH_BINARY);
	int width = frame.cols;
	int height = frame.rows;
	dlib::point dp1(cols/4, rows/4);
	cv::Rect rec(dp1.x(),dp1,y(),cols/2,rows/2);
	cv::rectangle(frame, rec, cv::Scalar(0, 0, 255));
	return;
}

