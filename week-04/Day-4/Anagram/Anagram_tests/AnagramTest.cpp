//
// Created by Admin on 25/04/2019.
//

#include <gtest/gtest.h>
#include "Anagram.h"

TEST(AnagramTest, testIfTheStringsAreAnagrams){

    Anagram ob1;
    bool result = ob1.anagram("tar", "rat");


    ASSERT_EQ(result, true);

}

TEST(AnagramTest, testIfTheStringsAreNotAnagrams){

    Anagram ob1;
    bool result = ob1.anagram("tar", "rats");


    ASSERT_EQ(result, false);

}

