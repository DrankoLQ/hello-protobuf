cmake_minimum_required(VERSION 3.8)
project(hello_protobuf)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    main.cpp
    Person.pb.cc
    Person.pb.h
    Person.proto)

add_executable(hello_protobuf ${SOURCE_FILES})