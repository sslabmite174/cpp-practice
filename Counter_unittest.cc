#include "Counter.h"
#include "gtest/gtest.h"

TEST(Counter, increment) {
    // Check the initial counter value
    Counter counter(2);
    EXPECT_EQ(0, counter.getCounter());

    // Increment counter and check its value
    counter.increment();
    EXPECT_EQ(1, counter.getCounter());

    // Increment counter and check its value
    counter.increment();
    EXPECT_EQ(2, counter.getCounter());

    // Check if counter can get a value bigger than the value given during construction
    counter.increment();
    EXPECT_EQ(2, counter.getCounter());
}

TEST(Counter, decrement) {
    // Check the initial counter value
    Counter counter(2);
    EXPECT_EQ(0, counter.getCounter());

    // Check if counter can get a value less than zero
    counter.decrement();
    EXPECT_EQ(0, counter.getCounter());

    // Increment counter twice and check its value
    counter.increment();
    counter.increment();
    EXPECT_EQ(2, counter.getCounter());

    // Decrement counter and check its value
    counter.decrement();
    EXPECT_EQ(1, counter.getCounter());

    // Decrement counter and check its value
    counter.decrement();
    EXPECT_EQ(0, counter.getCounter());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}