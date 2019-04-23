//
// Created by Admin on 23/04/2019.
//

#include "Person.h"

Person::Person(std::string name, int age, Gender gender) {
    _name = name;
    _age = age;
    _gender = gender;

}

Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;

}

void Person::introduce() {

    std::cout << "Hi, I'm " << _name << " a " << _age << " year old " << getGenderAsString() << "." << std::endl;

}

void Person::getGoal() {

    std::cout << "My goal is: Live for the moment!" << std::endl;

}

int Person::getAge() {
    return _age;
}

std::string Person::getGenderAsString() {

    switch (_gender){
        case FEMALE:
            return "female";
        case MALE:
            return "male";
    }
}

void Person::setName(std::string name) {
    _name = name;
}

std::string Person::getName() {
    return _name;
}
