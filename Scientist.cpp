//
// Created by Tyler on 10/24/2017.
//

#include "Scientist.h"

void Scientist::setData()
{
    Employee::setData();
    cout << "\nEnter the number of publications: ";
    cin >> pubs;
}

void Scientist::getData()
{
    Employee::getData();
    cout << "\nNumber of bublications: " << pubs << endl;
}
