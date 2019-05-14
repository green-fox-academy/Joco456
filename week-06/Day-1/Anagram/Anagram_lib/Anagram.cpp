//
// Created by Admin on 13/05/2019.
//
#include <iostream>
#include <algorithm>

bool isAnagram(std::string word1, std::string word2){

    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());

    if (word1 == word2)
        return true;
    else
        return false;
}