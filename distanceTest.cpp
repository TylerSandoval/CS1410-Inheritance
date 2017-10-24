//
// Created by Tyler on 10/17/2017.
//

#include "distanceTest.h"

/*!
 * distanceTest: default constructor for class
 */
distanceTest::distanceTest() {}

/*!
 * distanceTest: constructor with parameters for class
 * @param feet  : feet to set class
 * @param inches : inches to set class
 */
distanceTest::distanceTest(int feet, float inches) : feet(feet), inches(inches) {}

/*!
 * getFeet : getter for distanceTest
 * @return : returns feet
 */
int distanceTest::getFeet() const {
    return feet;
}

/*!
 * setFeet: setter for distanceTest
 * @param feet : feet to set class at
 */
void distanceTest::setFeet(int feet) {
    distanceTest::feet = feet;
}

/*!
 * getInches: getter for distanceTest
 * @return : returns inches
 */
float distanceTest::getInches() const {
    return inches;
}

/*!
 * setInches: setter for distanceTest
 * @param inches : inches to set class at
 */
void distanceTest::setInches(float inches) {
    distanceTest::inches = inches;
}

bool distanceTest::operator==(const distanceTest &rhs) const {
    return feet == rhs.feet &&
           inches == rhs.inches;
}

bool distanceTest::operator!=(const distanceTest &rhs) const {
    return !(rhs == *this);
}

bool distanceTest::operator<(const distanceTest &rhs) const {
    if (feet < rhs.feet)
        return true;
    if (rhs.feet < feet)
        return false;
    return inches < rhs.inches;
}

bool distanceTest::operator>(const distanceTest &rhs) const {
    return rhs < *this;
}

bool distanceTest::operator<=(const distanceTest &rhs) const {
    return !(rhs < *this);
}

bool distanceTest::operator>=(const distanceTest &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const distanceTest &test) {
    os << "feet: " << test.feet << " inches: " << test.inches;
    return os;
}

DistSign::DistSign()
{
    sign = pos;
}

DistSign::DistSign(int feet, float inches, posneg sign) : distanceTest(feet, inches), sign(sign) {}

posneg DistSign::getSign() const
{
    return sign;
}

void DistSign::setSign(posneg sign)
{
    DistSign::sign = sign;
}

std::ostream &operator<<(std::ostream &os, const DistSign &sign) {
    os << static_cast<const distanceTest &>(sign) << " sign: " << sign.sign;
    return os;
}
