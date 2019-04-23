//
// Created by Admin on 23/04/2019.
//

#include "Sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) : Person(name, age, gender) {

    _company = company;
    _hiredStudents = 0;


}

Sponsor::Sponsor() {
    _company = "Google";
    _hiredStudents = 0;

}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << getName() << ", a " << getAge() << " year old " << getGenderAsString()
              << " who represents " << _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::hire() {
    _hiredStudents ++;

}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}
