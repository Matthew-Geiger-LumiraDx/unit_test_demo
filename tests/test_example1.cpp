#include <example1.h>
#include <LeapYearCalendar.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>


TEST(Success, NonFatal) {
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0.0, squareRoot(0.0));
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}

TEST(Success, Fatal){
    EXPECT_EQ(6, squareRoot(36.0));
    EXPECT_EQ(18.0, squareRoot(324.0));

}

TEST(Success, Death){
    EXPECT_EXIT(deathExit(0), ::testing::ExitedWithCode(0), "Success");
}

TEST(Failure, NonFatal){
   ASSERT_EQ(9.0, squareRoot(90));
   ASSERT_EQ(10, squareRoot(5));
}

TEST(Failure, Fatal){
   ASSERT_EQ(10, squareRoot(5));
   ASSERT_EQ(9.0, squareRoot(90));
}

TEST(Failure, Death){
    EXPECT_EXIT(deathExit(1), ::testing::ExitedWithCode(0), "Success");
}

class TypeFixtureTests : public ::testing::Test {
protected:
    LeapYearCalendar leapYearCalendar;
};

TEST_F(TypeFixtureTests, Success){
    ASSERT_TRUE(leapYearCalendar.isLeap(2020));
}

TEST_F(TypeFixtureTests, Failure){
    ASSERT_TRUE(leapYearCalendar.isLeap(2021));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
