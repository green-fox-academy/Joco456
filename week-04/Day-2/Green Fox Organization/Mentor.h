//
// Created by Admin on 23/04/2019.
//

#ifndef GREEN_FOX_ORGANIZATION_MENTOR_H
#define GREEN_FOX_ORGANIZATION_MENTOR_H

#include "Person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {

public:

    Mentor (std::string name, int age, Gender gender, Level level);
    Mentor();

    void getGoal() override ;
    void introduce() override ;

    std::string getLevelasString();

private:

    Level _level;

};


#endif //GREEN_FOX_ORGANIZATION_MENTOR_H
