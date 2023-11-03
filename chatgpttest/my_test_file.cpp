#include<gtest/gtest.h>
#include "math.h"

TEST(MathTest,Add){
    Math math;
    EXPECT_EQ(math.Add(5,6),10);
}
TEST(MathTest, Subtract) {
    Math math;
    EXPECT_EQ(math.Subtract(5, 3), 2); // Check if the result of Subtract is 2
    EXPECT_EQ(math.Subtract(1, 1), 0); // Check another case
    EXPECT_EQ(math.Subtract(0, 0), 0);  // Check with zeroes
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); // Initialize Google Test
    return RUN_ALL_TESTS();                // Run all the tests and return the results
}