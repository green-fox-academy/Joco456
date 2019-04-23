//
// Created by Admin on 23/04/2019.
//

#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H

#include "Person.h"


class Student : public Person {

public:

    Student (std::string name, int age, Gender gender, std::string previousOrganization);
    Student ();

    void  introduce() override ;
    void getGoal() override;
    void skipDays (int numberOfDays);


private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //GREEN_FOX_ORGANIZATION_STUDENT_H
