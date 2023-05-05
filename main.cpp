#include <iostream>
#include "opencv2/opencv.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    cv::Mat image;
    image = cv::imread("/home/bruce/Pictures/page_1.png");
    cv::imshow("Display Image", image);
    cv::waitKey(0);

    return 0;
}
