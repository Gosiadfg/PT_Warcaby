#include "opencv2/opencv.hpp"
#include <iostream>

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
	VideoCapture cap(0); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return -1;
	Mat src_gray, dst, dilation_dst, erosion_dst, srcHSV;
	Mat bialePionki, czarnePionki;
	Mat plansza;
	Mat mask1;

	int map[8][8];
	int map2[8][8];
	for (int i = 0; i < 8; i++)for (int j = 0; j < 8; j++)map[i][j] = 0;
	for (;;)
	{
		int c;
		Mat src;
		cap >> src; // get a new frame from camera
		cvtColor(src, srcHSV, CV_BGR2HSV);
		inRange(srcHSV, Scalar(30, 0, 100), Scalar(50, 255, 255), mask1);
		cvtColor(src, src_gray, CV_BGR2GRAY);
		mask1 = Erosion(mask1, 1, 9);
		c = waitKey(20);
		if ((char)c == 32)
		{
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
				inRange(planszaHSV, Scalar(105, 100, 0), Scalar(120, 255, 255), bialePionki);
				bialePionki = Erosion(bialePionki,1,5);
				bialePionki = Dilation(bialePionki, 1, 3);

				inRange(planszaHSV, Scalar(150, 30, 0), Scalar(200, 255, 255), czarnePionki);
				czarnePionki = Erosion(czarnePionki, 1, 3);
				czarnePionki = Dilation(czarnePionki, 1, 3);

				Size wymiary = bialePionki.size();
				int wysokoscPola = wymiary.height / 8;
				int szerokoscPola = wymiary.width / 8;
				//ustawienie bialych pionków:
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						std::vector<std::vector<Point> > czyWykryto;
						Mat hierarchia2;
						Rect rectCrop = Rect(i*szerokoscPola, j*wysokoscPola, szerokoscPola, wysokoscPola);
						Mat croppedImage = Mat(bialePionki, rectCrop);
						findContours(croppedImage, czyWykryto, hierarchia2, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
						if (czyWykryto.size())
						{
							map[i][j] = 1;
						}
					}
				}
				//ustawienie czarne pionków:
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						std::vector<std::vector<Point> > czyWykryto;
						Mat hierarchia2;
						Rect rectCrop = Rect(i*szerokoscPola, j*wysokoscPola, szerokoscPola, wysokoscPola);
						Mat croppedImage = Mat(czarnePionki, rectCrop);
						findContours(croppedImage, czyWykryto, hierarchia2, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
						if (czyWykryto.size())
						{
							map[i][j] = 2;
						}
					}
				}
			}
			
			for (int i = 0; i < 8; i++)for (int j = 0; j < 8; j++)map2[i][j] = map[i][j];
			
			for (int i = 0; i < 8; i++)
			{
				int m = 7;
				for (int j = 0; j < 8; j++)
				{
					map[i][j] = map2[i][m];
					m--;
				}				
			}
			
			for (int i = 0; i < 8; i++)
			{
				std::cout << "|";
				for (int j = 0; j < 8; j++)
				{
					std::cout << map[i][j] << "|";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
		}
		for (int i = 0; i < 8; i++)for (int j = 0; j < 8; j++)map[i][j] = 0;
		imshow("Erozja Maski 1", mask1);
		imshow("klatka", src);
		if(!bialePionki.empty()) imshow("Maska: Biale pionki", bialePionki);
		if(!czarnePionki.empty()) imshow("Maska: Czarne pionki", czarnePionki);
		if ((char)c == 27)
		{
			break;
		}
	}
	// the camera will be deinitialized automatically in VideoCapture destructor
	return 0;
}