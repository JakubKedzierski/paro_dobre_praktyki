#include "include/countScrabbleScore.hpp"
#include <vector>
#include <utility>
#include <algorithm>
	

int countScrabbleScore(const std::string &word){

    std::vector<std::pair<std::vector<char>,int>> charactersToValue{
        {{'A', 'E', 'I', 'O', 'U', 'L', 'N', 'R', 'S', 'T' },1},
        {{'D', 'G'}, 2},
        {{'B', 'C', 'M', 'P'},3},
        {{'F', 'H', 'V', 'W', 'Y' },4},
        {{'K'},5},
        {{'J', 'X'},8},
        {{'Q','Z'},10}
     };

    auto sum = 0;
    for(auto character:word){
        for(auto pair:charactersToValue){
            if(std::find(pair.first.cbegin(),pair.first.cend(),character) != pair.first.cend()){
                sum += pair.second;
            }
        }
    }


    return sum;
}