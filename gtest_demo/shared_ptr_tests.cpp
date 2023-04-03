#include <gtest/gtest.h>
#include <thread>
#include "../circular_pointer_demo/mutual_pointer.h"

TEST(SharedPtrTest, NoMemoryLeak) {
    testing::internal::CaptureStdout(); // redirect stdout
    auto lucy{std::make_shared<Person>("Lucy")}; // create a Person named "Lucy"
    auto ricky{std::make_shared<Person>("Ricky")}; // create a Person named "Ricky"
    std::string output = testing::internal::GetCapturedStdout(); // get the captured output
    EXPECT_EQ(output,
              "Lucy created\nRicky created\n"); // assert that the output is as expected
}

TEST(SharedPtrTest, MemoryLeak) {
    testing::internal::CaptureStdout(); // redirect stdout
    auto lucy{std::make_shared<Person>("Lucy")}; // create a Person named "Lucy"
    auto ricky{std::make_shared<Person>("Ricky")}; // create a Person named "Ricky"

    partnerUp(lucy, ricky); // Make "Lucy" point to "Ricky" and vice-versa
    std::string output = testing::internal::GetCapturedStdout(); // get the captured output
    EXPECT_EQ(output,
              "Lucy created\nRicky created\nLucy is now partnered with Ricky\n"); // assert that the output is as expected
}
