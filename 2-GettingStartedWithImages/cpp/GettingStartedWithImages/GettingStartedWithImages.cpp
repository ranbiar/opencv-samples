// GettingStartedWithImages.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace cv;

int main()
{
    std::string image_path = samples::findFile("starry_night.jpg");

    // IMREAD_COLOR loads the image in the BGR 8 - bit format.This is the default that is used here.
    // IMREAD_UNCHANGED loads the image as is(including the alpha channel if present)
    // IMREAD_GRAYSCALE loads the image as an intensity one
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    if (k == 's')
    {
        imwrite("starry_night.png", img);
    }
    return 0;
}