cmake_minimum_required(VERSION 3.0)
project(tests)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV CONFIG REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(tests main.cpp)

#target_link_libraries(tests PRIVATE opencv_ml opencv_dnn opencv_core opencv_flann)


target_link_libraries( tests ${OpenCV_LIBS} )


