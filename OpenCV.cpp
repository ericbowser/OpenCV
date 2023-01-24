// OpenCVTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <iostream>


using namespace cv;
using namespace std;

void chap_1();

int main()
{
    std::string path = "WIN_20220804_16_11_33_Pro_tiedie.jpg";
    Mat img = imread(path);
    cv::Mat imgGray;

    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    imshow("Image", img);
    imshow("Image Cvt", imgGray);
    waitKey(0);
}

void chap_2() {
   
    //Canny(imgCanny, imgCanny, Size(3, 3), 3, 0);
    //imshow("Image Canny", imgCanny);
}

void chap_1() {
    std::string path = "WIN_20220804_16_11_33_Pro_tiedie.jpg";
    cv::Mat img = imread(path, 1);
    imshow("Image", img);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
