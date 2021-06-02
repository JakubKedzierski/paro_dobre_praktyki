#include "include/countScrabbleScore.hpp"
#include <vector>

int countScrabbleScore(const std::string &word){
    std::vector<int> values{1,2,3,4,5,8,10};
    std::vector<std::vector<char>> characters{
        {'A', 'E', 'I', 'O', 'U', 'L', 'N', 'R', 'S', 'T' },
        {'D', 'G'},
        {'B', 'C', 'M', 'P'},
        {'F', 'H', 'V', 'W', 'Y' },
        {'K'},
        {'J', 'X'},
        {'Q','Z'}
     };


    return 0;
}