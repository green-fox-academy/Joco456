//
// Created by Admin on 23/04/2019.
//

#include "Student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) : Person(name, age,
                                                                                                      gender) {
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}

Student::Student() {
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}

void Student::introduce() {
    std::cout << "Hi, I'm " << getName() << " a " << getAge() << " year old " << getGenderAsString() << " from "
              << _previousOrganization << " who skipped " << _skippedDays << " days from the course already."
              << std::endl;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberOfDays) {

    _skippedDays = _skippedDays + numberOfDays;

}
