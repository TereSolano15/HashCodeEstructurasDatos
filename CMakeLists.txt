cmake_minimum_required(VERSION 3.17)
project(Hash)

set(CMAKE_CXX_STANDARD 14)

add_executable(HashCodeShift.cpp HashCodeShift.h HashBucket.cpp HashBucket.h main.cpp)