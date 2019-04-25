//
// Created by Admin on 25/04/2019.
//

#include "CountLetters.h"

std::map<char, int> CountLetters::dictionary(std::string word) {


    std::map <char, int> map;
    for (int i = 0; i < word.length() ; ++i) {
        map[word[i]] ++;
    }

    return map;
}
