//
// Created by Tyler on 10/24/2017.
//

#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H


#include "Employee.h"
#include "Student.h"

class Manager : private Employee, private Student
{
private:
    string title;           // "president" etc
    double dues;            // golf club dues
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_MANAGER_H
