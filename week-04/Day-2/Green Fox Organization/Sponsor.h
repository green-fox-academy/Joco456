//
// Created by Admin on 23/04/2019.
//

#ifndef GREEN_FOX_ORGANIZATION_SPONSOR_H
#define GREEN_FOX_ORGANIZATION_SPONSOR_H

#include "Person.h"

class Sponsor : public Person{

public:

    Sponsor(std::string name, int age, Gender gender, std::string company);
    Sponsor();

    void introduce() override ;
    void hire() ;
    void getGoal() override;

private:
    std::string _company;
    int _hiredStudents;

};


#endif //GREEN_FOX_ORGANIZATION_SPONSOR_H
