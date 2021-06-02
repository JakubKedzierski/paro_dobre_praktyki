#include "day-of-year.hpp"
#include <vector>
#include <numeric>

int dayOfYear(int month, int dayOfMonth, int year) {
    std::vector<int> daysInEachMonth{31, 28, 31, 30, 31,30,31,31,30,31,30,31};
    auto it = daysInEachMonth.cbegin() + month - 1;
    auto sumOfDays = std::accumulate(daysInEachMonth.cbegin(),it, 0);
    sumOfDays+=dayOfMonth;

    return sumOfDays;
}

