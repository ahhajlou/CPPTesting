#include <gtest/gtest.h>
#include "calculator.h"

// Test fixture (optional, useful for setup/teardown)
class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, AdditionWorks) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(0, 0), 0);
}

TEST_F(CalculatorTest, SubtractionWorks) {
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(0, 5), -5);
}

TEST_F(CalculatorTest, MultiplicationWorks) {
    EXPECT_EQ(calc.multiply(3, 4), 12);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
}

TEST_F(CalculatorTest, DivisionWorks) {
    EXPECT_DOUBLE_EQ(calc.divide(10, 2), 5.0);
    EXPECT_DOUBLE_EQ(calc.divide(5, 2), 2.5);
}

TEST_F(CalculatorTest, DivisionByZeroThrows) {
    EXPECT_THROW(calc.divide(5, 0), std::invalid_argument);
}