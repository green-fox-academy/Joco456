//
// Created by Admin on 23/04/2019.
//

#include "Mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender) {
    _level = level;

}

Mentor::Mentor() {
    _level = INTERMEDIATE;

}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << getName() << " a " << getAge() << " year old " << getGenderAsString() << " "
              << getLevelasString() << " "
              << "mentor" << std::endl;
}

std::string Mentor::getLevelasString() {

    switch (_level) {
        case JUNIOR:
            return "junior";
        case INTERMEDIATE:
            return "intermediate";
        case SENIOR:
            return "senior";
        default:
            return "";
    }
}


