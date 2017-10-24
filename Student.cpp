//
// Created by Tyler on 10/24/2017.
//

#include "Student.h"

void Student::setEducation()
{
    cout << "\n Enter name of school or university: ";
    cin >> school;
    cin.ignore();
    cout << "\n Enter highest degree earned: \n";
    cout << " (High School, BS, Master, Ph.D)";
    cin >> degree;
    cin.ignore();
}

void Student::getEducation()
{
    cout << "\nSchool or University: " << school;
    cout << "\nHighest degree earned: " << degree;
}
