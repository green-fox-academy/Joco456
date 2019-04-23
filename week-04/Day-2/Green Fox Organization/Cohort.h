//
// Created by Admin on 23/04/2019.
//

#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H

#include "vector"
#include "Mentor.h"
#include "Student.h"



class Cohort {

public:

    Cohort(std::string name);

    void addStudent(Student* student);
    void addMentor(Mentor* mentor);
    void info();
    std::string getName();

    std::vector<Student*> getStudents();
    std::vector<Mentor*> getMentors();

private:

    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;



};


#endif //GREEN_FOX_ORGANIZATION_COHORT_H
