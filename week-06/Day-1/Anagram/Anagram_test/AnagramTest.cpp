//
// Created by Admin on 13/05/2019.
//

#include "gtest/gtest.h"
#include "Anagram.cpp"

TEST (AnagramaTest, testValidAnagram)
{
    //Arrange
    std::string word1 = "gyomorrontas";
    std::string word2 = "toronymorgas";

    //Act
    bool areTheyAnagrams = isAnagram(word1, word2);

    //Assert
    ASSERT_EQ(areTheyAnagrams, true);
}

TEST (AnagramaTest, testNotValidAnagram)
{
    //Arrange
    std::string word1 = "kukasmelleny";
    std::string word2 = "melleny";

    //Act
    bool areTheyAnagrams = isAnagram(word1, word2);

    //Assert
    ASSERT_EQ(areTheyAnagrams, false);
}