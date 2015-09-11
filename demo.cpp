// Compile with: g++ demo.cpp cvrotate2D.cpp -lopencv_core -lopencv_imgcodecs -lopencv_imgproc

#include "cvrotate2D.hpp"

int main()
{
    const double degrees = 45;

    cv::Mat src = cv::imread("image.png", cv::IMREAD_UNCHANGED);
    cv::Mat dst;

    cv::rotate2D(src, dst, degrees);

    cv::imwrite("rotated.png", dst);

    return 0;
}
