//
// Created by Tyler on 10/24/2017.
//

#include "Employee.h"
void Employee::setData()
{
    cout << "\n Enter last name:";
    cin >> name;
    cin.ignore();
    cout << "\n Enter ID Number: ";
    cin >> number;
}

void Employee::getData()
{
    cout << "\n Name: " << name;
    cout << "\n IdNumber: " << number;
}
