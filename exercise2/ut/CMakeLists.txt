add_executable(CountScrabbleScoreTests
  count-scrabble-score-tests.cpp)

target_link_libraries (CountScrabbleScoreTests PUBLIC CountScrabbleScore gtest_main)
