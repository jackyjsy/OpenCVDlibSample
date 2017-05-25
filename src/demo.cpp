
#include <opencv2/opencv.hpp>
#include "OpenCVSample.h"

using namespace cv;

int main()
{
    Mat img = imread("Lenna.png");
    processImage(img);
    imshow("test_window", img);
    waitKey(0);
    return 0;
}
