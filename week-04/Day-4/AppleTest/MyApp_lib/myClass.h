//
// Created by Admin on 25/04/2019.
//

#ifndef APPLETEST_MYCLASS_H
#define APPLETEST_MYCLASS_H

#include <iostream>
#include <vector>


class myClass {

public:

    int sum(std::vector<int> numbers){

        int summa = 0;

        for (int i = 0; i < numbers.size() ; ++i) {

            summa = summa + numbers[i];
        }

        return summa;
    }

    std::string getApple(){

        return "apple";
    }

};


#endif //APPLETEST_MYCLASS_H
