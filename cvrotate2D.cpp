#include "cvrotate2D.hpp"

namespace cv {

void rotate2D(const cv::Mat & src, cv::Mat & dst, const double degrees)
{
	double offsetX, offsetY;
    double width = src.size().width;
    double height = src.size().height;

    cv::Point2d center = cv::Point2d(width/2.0, height/2.0);
    cv::Rect bounds = cv::RotatedRect(center, src.size(), degrees).boundingRect();
    cv::Mat resized = cv::Mat::zeros(bounds.size(), src.type());

    offsetX = (bounds.width - width) / 2.0;
    offsetY = (bounds.height - height) / 2.0;

    cv::Rect ROI = cv::Rect(offsetX, offsetY, width, height);
    src.copyTo(resized(ROI));
    center += cv::Point2d(offsetX, offsetY);

    cv::Mat M = cv::getRotationMatrix2D(center, degrees, 1.0);

    cv::warpAffine(resized, dst, M, resized.size());
}

}
