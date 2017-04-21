#include "TestCalculator.h"
#include "Calculator.hpp"
namespace NS {
TestCalculator::TestCalculator() {
}

TestCalculator::~TestCalculator() {
}

void TestCalculator::SetUp() {
}

void TestCalculator::TearDown() {
}

TEST_F(TestCalculator, test_public_add) {
	Calculator cal;	
    EXPECT_EQ(cal.public_add(1, 2), 3);
}

TEST_F(TestCalculator, test_private_add) {
	Calculator cal;	
    EXPECT_EQ(cal.private_add(1, 6), 2);
}
}
