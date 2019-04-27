#include <iostream>

#include <opencv2/opencv.hpp>


using namespace std;

int main(int argc, char **argv)
{
    cv::Mat img = cv::imread(argv[1]);

    if(img.data == NULL)
        cerr << "file does not exist!" << endl;
    
    cv::namedWindow("color image");
    cv::imshow("color image", img);
    cv::waitKey(0);

    cv::Mat gray;
    cv::cvtColor(img, gray, CV_RGB2GRAY);

    cv::imshow("gray", gray);
    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
}