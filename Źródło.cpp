#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2\opencv.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace cv;

/// Global variables

int threshold_value = 0;
int threshold_type = 3;;
int const max_value = 255;
int const max_type = 4;
int const max_BINARY_value = 255;

Mat src, src_gray, dst, dilation_dst, erosion_dst, srcHSV;
Mat mask1;

char* trackbar_type = "Type: \n 0: Binary \n 1: Binary Inverted \n 2: Truncate \n 3: To Zero \n 4: To Zero Inverted";
char* trackbar_value = "Value";

void Threshold_Demo(int, void*);

int dilation_elem = 1;
int dilation_size = 3;
int erosion_elem = 1;
int erosion_size = 3;

void Dilation(int, void*)
{
	int dilation_type;
	if (dilation_elem == 0) { dilation_type = MORPH_RECT; }
	else if (dilation_elem == 1) { dilation_type = MORPH_CROSS; }
	else if (dilation_elem == 2) { dilation_type = MORPH_ELLIPSE; }

	Mat element = getStructuringElement(dilation_type,
		Size(2 * dilation_size + 1, 2 * dilation_size + 1),
		Point(dilation_size, dilation_size));
	/// Apply the dilation operation
	dilate(mask1, dilation_dst, element);
	imshow("Dylacja", dilation_dst);
}
Mat Erosion(int, void*, Mat source)
{
	Mat erosion_dst1;
	int erosion_type;
	if (erosion_elem == 0) { erosion_type = MORPH_RECT; }
	else if (erosion_elem == 1) { erosion_type = MORPH_CROSS; }
	else if (erosion_elem == 2) { erosion_type = MORPH_ELLIPSE; }

	Mat element = getStructuringElement(erosion_type,
		Size(2 * erosion_size + 1, 2 * erosion_size + 1),
		Point(erosion_size, erosion_size));
	erode(source, erosion_dst1, element);
	//imshow("Erozja", erosion_dst);
	return erosion_dst1;
}

int main(int argc, char** argv)
{

	src = imread("plansza6.jpg", 1);

	cvtColor(src, srcHSV, CV_BGR2HSV);
	inRange(srcHSV, Scalar(20, 0, 100), Scalar(42, 255, 255), mask1);
	cvtColor(src, src_gray, CV_BGR2GRAY);

	namedWindow("progowanie", CV_WINDOW_AUTOSIZE);

	createTrackbar(trackbar_type,
		"progowanie", &threshold_type,
		max_type, Threshold_Demo);

	createTrackbar(trackbar_value,
		"progowanie", &threshold_value,
		max_value, Threshold_Demo);
	Threshold_Demo(0, 0);


	imshow("hsv", srcHSV);
	imshow("maska 1", mask1);
	imshow("Erozja Maski 1", Erosion(0,0,mask1));

	while (true)
	{
		int c;
		erosion_dst = Erosion(0, 0, dst);
		imshow("erozja", erosion_dst);
		c = waitKey(20);
		if ((char)c == 27)
		{
			break;
		}
	}

}


void Threshold_Demo(int, void*)
{

	threshold(src_gray, dst, threshold_value, max_BINARY_value, threshold_type);

	imshow("progowanie", dst);
}