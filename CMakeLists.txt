cmake_minimum_required(VERSION 3.24)
project(cppsandbox)

set(CMAKE_CXX_STANDARD 20)

add_executable(cppsandbox main.cpp demo_class_template.cpp demo_class_template.h circular_pointer_demo/mutual_pointer.h sequences/integer_seq.h)
