cmake_minimum_required(VERSION 3.9)
project(ntl)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES src/main.cpp src/bijection.cpp src/test.cpp src/type.h src/util.cpp)

add_executable(whiteboxgen ${SOURCE_FILES})
target_link_libraries(whiteboxgen /usr/local/lib/libntl.a)