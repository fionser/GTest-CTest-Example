#ifndef TESTGTEST_HPP
#define TESTGTEST_HPP
#include "gtest/gtest.h"
namespace NS {
class Calculator {
    // friend class TestCalculator;
    FRIEND_TEST(TestCalculator, test_private_add);
public:
    int public_add(int a, int b) const;
private:
    int private_add(int a, int b) const;
};
}
#endif
