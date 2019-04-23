//
// Created by Admin on 23/04/2019.
//

#include "Cohort.h"

Cohort::Cohort(std::string name) {
    _name = name;


}

void Cohort::addStudent(Student* student) {

    _students.push_back(student);


}

void Cohort::addMentor(Mentor* mentor) {

    _mentors.push_back(mentor);

}

void Cohort::info() {

    std::cout << "The " << getName() << " cohort has " << getStudents().size() << " students and "
              << getMentors().size() << " mentors " << std::endl;

}

std::string Cohort::getName() {
    return _name;
}

std::vector<Student*> Cohort::getStudents() {
    return _students;
}

std::vector<Mentor*> Cohort::getMentors() {
    return _mentors;
}




