//
// Created by Tyler on 10/24/2017.
//

#include "Manager.h"

void Manager::setData()
{
    Employee::setData();
    cout << "\nEnter your title: ";
    cin >> title;
    cin.ignore();
    cout << "\nEnter golf dues: ";
    cin >> dues;
}

void Manager::getData()
{
    Employee::getData();
    cout <<"\n Title: " << title;
    cout <<"\n Dues: " << dues;
}
