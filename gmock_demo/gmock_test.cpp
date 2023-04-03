#include "mock_turtle.cpp"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::AtLeast;

TEST(PainterTest, CanDrawSomething) {
  MockTurtle turtle;
  EXPECT_CALL(turtle, PenDown()).Times(AtLeast(1));
}
