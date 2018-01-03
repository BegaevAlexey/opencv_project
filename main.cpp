#include <opencv2/opencv.hpp>

// my first program on Clion
int main() {

    cv::namedWindow("Test Image", cv::WINDOW_GUI_NORMAL);
    cv::Mat image;
    image = cv::imread("/home/alexey/work/programming/opencv_projects/machine_vision.jpg");
    if (image.empty()) {
        std::cerr << "Error: Image not load" << std::endl;
        return -1;
    }
    cv::imshow("Test Image", image);
    cv::waitKey(0);

    return 0;
}
