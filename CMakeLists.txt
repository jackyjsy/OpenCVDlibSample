cmake_minimum_required(VERSION 2.8.12)

project(OpenCVSample)

include(dlib-19.4/dlib/cmake)

find_package(OpenCV REQUIRED)

#Bring the headers, such as Student.h into the project
include_directories(${OpenCV_INCLUDE_DIRS}/include)
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(demo ${SOURCES})
target_link_libraries(demo ${OpenCV_LIBS})
target_link_libraries(demo dlib::dlib)

#Copy all files in img/ to build directory after make
add_custom_command(TARGET demo POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/img $<TARGET_FILE_DIR:demo>)
