cmake_minimum_required(VERSION 3.24)
project(cppsandbox)

set(CMAKE_CXX_STANDARD 23)  # Change to 17 or 20 if needed
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/9c332145b71c36a5bad9688312c79184f98601ff.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(cppsandbox
        main.cpp
        demo_class_template.cpp
        demo_class_template.h
        demo_constexpr.h
        demo_optional.h
        demo_ranges.h
        demo_span.h
        demo_structured_bindings.h
        demo_variants.h

        circular_pointer_demo/mutual_pointer.h
        sequences/integer_seq.h
        circular_pointer_demo/reductive_version.h)
include(GoogleTest)

add_executable(gtest_demo
        gtest_demo/shared_ptr_tests.cpp
        )
target_link_libraries(gtest_demo GTest::gtest_main)
gtest_discover_tests(gtest_demo)

add_executable(gmock_demo
        gmock_demo/turtle.h
        gmock_demo/gmock_test.cpp
        gmock_demo/mock_turtle.cpp
        gmock_demo/Painter.h
        leetcode/zigzag_tests.cpp
        )
target_link_libraries(gmock_demo GTest::gmock_main)
gtest_discover_tests(gmock_demo)

find_package(Boost COMPONENTS
        system
        filesystem
        unit_test_framework REQUIRED
        )
add_executable(boost_test
        boost_demo/boost_test.cpp
        boost_demo/copilot_test.cpp boost_demo/copilot_test.h)

target_link_libraries(boost_test
        ${Boost_LIBRARIES}   # this is wildcard for all boost libraries
        ${Boost_FILESYSTEM_LIBRARY}  # this corresponds to the above filesystem
        ${Boost_SYSTEM_LIBRARY}  # this corresponds to system above
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} # this corresponds to the unit test framework
        )
