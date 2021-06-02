#include "gtest/gtest.h"

#include "include/countScrabbleScore.hpp"

struct ScrabbleTestSuit {};

TEST(ScrabbleTestSuit, checkSumOnCasualWord)
{
    ASSERT_EQ(countScrabbleScore("AG"), 3);
}

