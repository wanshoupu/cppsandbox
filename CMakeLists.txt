cmake_minimum_required(VERSION 3.24)
project(cppsandbox)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/9c332145b71c36a5bad9688312c79184f98601ff.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()


add_executable(cppsandbox main.cpp demo_class_template.cpp demo_class_template.h circular_pointer_demo/mutual_pointer.h sequences/integer_seq.h circular_pointer_demo/reductive_version.h)

add_executable(hello_test gtest/shared_ptr_tests.cpp)
target_link_libraries(
        hello_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)
