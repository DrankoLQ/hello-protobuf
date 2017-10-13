cmake_minimum_required(VERSION 3.8)
project(hello_protobuf)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_THREAD_SAFE -I/usr/local/include -L/usr/local/lib -lprotobuf -D_THREAD_SAFE")

set(SOURCE_FILES
    main.cpp
    Person.pb.cc
    Person.pb.h
    Person.proto)

add_executable(hello_protobuf ${SOURCE_FILES})