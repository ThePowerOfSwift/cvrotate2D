// Compile with: g++ demo.cpp cvrotate2D.cpp -lopencv_core -lopencv_imgcodecs -lopencv_imgproc

#include "cvrotate2D.hpp"

int main()
{
    const double degrees = 45;

    cv::UMat src = cv::imread("frog.png", cv::IMREAD_UNCHANGED);
    cv::UMat dst;

    cv::rotate2D(src, dst, degrees);

    cv::imwrite("frog_rotated.png", dst);

    return 0;
}
