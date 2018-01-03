cmake_minimum_required(VERSION 3.9)
project(opencv_projects)
# New lines
set(OpenCV_DIR /home/alexey/work/programming/opencv/build)
find_package(OpenCV REQUIRED)
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)

# New line
set(SOURCE_FILES main.cpp)

add_executable(opencv_projects main.cpp)
target_link_libraries(opencv_projects ${OpenCV_LIBS})


