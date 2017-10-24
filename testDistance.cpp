// File: testDistance
// Created by Tyler Sandoval on 10/17/2017 for CS1410.
// Copyright (c) 2017 WSU
// TODO
#include <iostream>
#include "distanceTest.h"

using namespace std;
// Constants, Structs, Classes

// Prototypes

// Main Program Program
int main(void)
{
    distanceTest d1;
    distanceTest d2(5,2.5);

    d1.setFeet(4);
    d1.setInches(3.5);

    cout << "d1 feet: " << d1.getFeet() << " inches: " << d1.getInches() << endl;
    cout << "d2 feet: " << d2.getFeet() << " inches: " << d2.getInches() << endl;

    cout << d2 << endl;

    DistSign alpha;

    cout << alpha << endl;

    return 0;
}
// Function Definitions