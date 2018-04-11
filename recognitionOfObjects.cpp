#include "opencv2/opencv.hpp"

using namespace cv;


Mat Erosion(Mat source, int erosion_elem, int erosion_size)
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
Mat Dilation(Mat source, int dilation_elem, int dilation_size)
{
	Mat dilation_dst;
	int typ_dylacji;
	if (dilation_elem == 0) { typ_dylacji = MORPH_RECT; }
	else if (dilation_elem == 1) { typ_dylacji = MORPH_CROSS; }
	else if (dilation_elem == 2) { typ_dylacji = MORPH_ELLIPSE; }

	Mat element = getStructuringElement(typ_dylacji,
		Size(2 * dilation_size + 1, 2 * dilation_size + 1),
		Point(dilation_size, dilation_size));
	/// Apply the dilation operation
	dilate(source, dilation_dst, element);
	return dilation_dst;
}
int main(int, char**)
{
	VideoCapture cap(1); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return -1;
	Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
	Mat bialePionki, czarnePionki;
	Mat plansza;
	Mat mask1;

	for (;;)
	{
		int c;
		Mat src;
		cap >> src; // get a new frame from camera
		cvtColor(src, srcHSV, CV_BGR2HSV);
		inRange(srcHSV, Scalar(30, 0, 100), Scalar(42, 255, 255), mask1);
		cvtColor(src, src_gray, CV_BGR2GRAY);
		mask1 = Erosion(mask1, 1, 7);
		
		std::vector<std::vector<Point> > kontury;
		Mat hierarchia;
		findContours(mask1, kontury, hierarchia, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
		std::vector<Point> srodki;
		for (int i = 0; i < kontury.size(); i++)
		{
			srodki.push_back(Point(0, 0));
			//drawContours(src, kontury, i, Scalar(0, 0, 255), 2, 8, hierarchia, 0, Point());
			int sumX = 0, sumY = 0;
			for (int j = 0; j < kontury[i].size(); j++)
			{
				sumX += kontury[i][j].x;
				sumY += kontury[i][j].y;
			}
			sumX /= kontury[i].size();
			sumY /= kontury[i].size();

			srodki[i] = Point(sumX, sumY);
			//drawMarker(src, srodki[i], Scalar(0, 255, 0));
		}
		if(srodki.size() == 4)
		{ 
			plansza = cv::Mat(src, cv::Rect(srodki[0], srodki[2]));
			//polylines(src, srodki, 3, Scalar(0, 255, 0),2);
			imshow("plansza", plansza);
			Mat planszaHSV;
			cvtColor(plansza, planszaHSV, CV_BGR2HSV);
			//inRange(plansza, Scalar(200, 100, 0), Scalar(250, 255, 255), bialePionki);
			inRange(planszaHSV, Scalar(110, 100, 0), Scalar(118, 255, 255), bialePionki);
			bialePionki = Erosion(bialePionki,1,3);
			bialePionki = Dilation(bialePionki, 1, 3);

			inRange(planszaHSV, Scalar(150, 100, 0), Scalar(200, 255, 255), czarnePionki);
			czarnePionki = Erosion(czarnePionki, 1, 3);
			czarnePionki = Dilation(czarnePionki, 1, 3);

			imshow("Maska: Biale pionki", bialePionki);
			imshow("Maska: Czarne pionki", czarnePionki);
		}
		imshow("Erozja Maski 1", mask1);
		imshow("klatka", src);

		c = waitKey(20);
		if ((char)c == 27)
		{
			break;
		}
	}
	// the camera will be deinitialized automatically in VideoCapture destructor
	return 0;
}