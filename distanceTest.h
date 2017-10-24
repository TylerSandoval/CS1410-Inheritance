//
// Created by Tyler on 10/17/2017.
//

#ifndef INHERITANCE_DISTANCECLASS_H
#define INHERITANCE_DISTANCECLASS_H


#include <ostream>
enum posneg{pos, neg};  // For sign in DistSign

class distanceTest
{
private:
    int feet;
    float inches;
public:
    distanceTest();
    distanceTest(int feet, float inches);

    int getFeet() const;
    void setFeet(int feet);
    float getInches() const;
    void setInches(float inches);

    bool operator==(const distanceTest &rhs) const;
    bool operator!=(const distanceTest &rhs) const;

    bool operator<(const distanceTest &rhs) const;
    bool operator>(const distanceTest &rhs) const;
    bool operator<=(const distanceTest &rhs) const;
    bool operator>=(const distanceTest &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const distanceTest &test);
};

class DistSign : public distanceTest
{
private:
    posneg sign;    // sign is positive or negative
public:
    DistSign();
    DistSign(int feet, float inches, posneg sign);

    posneg getSign() const;
    void setSign(posneg sign);

    friend std::ostream &operator<<(std::ostream &os, const DistSign &sign);
};

#endif //INHERITANCE_DISTANCECLASS_H
