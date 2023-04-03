#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp>

int add(int a, int b) { return a + b; }

BOOST_AUTO_TEST_CASE(TestAddition) {
  BOOST_CHECK_EQUAL(add(2, 2), 4);
  BOOST_CHECK_EQUAL(add(5, 7), 12);
  BOOST_CHECK_EQUAL(add(-3, 3), 0);
}
