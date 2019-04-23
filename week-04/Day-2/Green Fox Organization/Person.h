//
// Created by Admin on 23/04/2019.
//

#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H

#include <iostream>

enum Gender {
    MALE,
    FEMALE,
};

class Person {

public:

    Person (std::string name, int age, Gender gender);
    Person();


    virtual void introduce();
    virtual void getGoal();
    void setName(std::string name);
    int getAge();
    std::string getGenderAsString();
    std::string getName();


private:

    std::string _name;
    int _age;
    Gender _gender;


};


#endif //GREEN_FOX_ORGANIZATION_PERSON_H
