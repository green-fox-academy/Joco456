// ZeroWeekProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <sstream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#define oneRadianToAngle 57.29577951

cv::Mat Ablak(500, 500, CV_8UC3, CV_RGB(0, 255, 255));

void myMouseCallback(int event, int x, int y, int flags, void* userdata);
double getAngle(int x, int y);

int main()
{

	cv::circle(Ablak, { Ablak.rows / 2, Ablak.cols / 2 }, 10, (76, 80, 212), 10);
	cv::line(Ablak, { Ablak.rows / 2, Ablak.cols / 2 }, { Ablak.rows, Ablak.cols / 2 }, { 0,0,255 }, 10);

	cv::imshow("Ablak", Ablak);

	cv::setMouseCallback("Ablak", myMouseCallback);
	cv::waitKey(0);
}

void myMouseCallback(int event, int x, int y, int flags, void* userdata)
{
	if (flags & cv::MouseEventFlags::EVENT_FLAG_LBUTTON) {
		Ablak = CV_RGB(0, 255, 255);

		cv::circle(Ablak, { Ablak.rows / 2, Ablak.cols / 2 }, 10, (76, 80, 212), 10);
		cv::line(Ablak, { Ablak.rows / 2, Ablak.cols / 2 }, { Ablak.rows, Ablak.cols / 2 }, { 0,0,255 }, 10);


		cv::line(Ablak, { Ablak.rows / 2, Ablak.cols / 2 }, { x, y }, { 0, 0, 255 }, 10);
		cv::circle(Ablak, { x,y }, 10, (76, 80, 212), 10);

		double angleAsDouble = getAngle(x, y);

		cv::putText(Ablak, std::to_string(angleAsDouble), { Ablak.rows / 2 + 10, Ablak.cols / 2 - 5 }, cv::FONT_HERSHEY_COMPLEX, 1, { 255, 0, 0 }, 3, cv::LINE_AA);
		cv::imshow("Ablak", Ablak);
	}
}

double getAngle(int x, int y)
{
	double sideA = (Ablak.cols / 2 - y);
	if (sideA < 0) {
		sideA = sideA * (-1);
	}

	double sideB = (Ablak.rows / 2 - x);
	if (sideB < 0) {
		sideB = sideB * (-1);
	}

	double tangAngle = sideA / sideB;

	double angle = atan(tangAngle) * oneRadianToAngle;

	if (x <= (Ablak.cols / 2) && y <= (Ablak.rows / 2)) {
		angle = (90 - angle) + 90;
	}

	if (x < (Ablak.cols / 2) && y >(Ablak.rows / 2)) {
		angle = angle + 180;
	}

	if (x >= (Ablak.cols / 2) && y > (Ablak.rows / 2)) {
		angle = (90 - angle) + 270;
	}

	return angle;
}