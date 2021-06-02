#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest)
{
  ASSERT_EQ(dayOfYear(3, 5, 2020), 64);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

