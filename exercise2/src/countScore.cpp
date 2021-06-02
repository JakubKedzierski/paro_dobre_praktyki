#include "include/countScrabbleScore.hpp"
#include <vector>
#include <utility>
	

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

    for(auto character:word){
        for(auto pair:charactersToValue){
            
        }
    }


    return 0;
}