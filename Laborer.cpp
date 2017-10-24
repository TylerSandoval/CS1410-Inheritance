//
// Created by Tyler on 10/24/2017.
//

#include "Laborer.h"

void Foreman::setData()
{
    Laborer::setData();
    cout << "\nEnter quotas: ";
    cin >> quotas;
}

void Foreman::getData()
{
    Laborer::getData();
    cout << "\nQuotas: " << quotas << endl;
}
