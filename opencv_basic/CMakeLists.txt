cmake_minimum_required(VERSION 2.8)
project( opencv_basic )


find_package(OpenCV 3.4.5 REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS})


add_executable(showImage main.cpp)
target_link_libraries(showImage ${OpenCV_LIBS})