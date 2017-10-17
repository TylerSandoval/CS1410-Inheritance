//
// Created by Tyler on 10/17/2017.
//

#include "Counter.h"
// Doxygen comments.  Type /*! or /** followed by Enter
/*!
 * Counter: 1 Parameter Constructor
 * @param count : Initial Counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default Constructor
 */
Counter::Counter(): count(0){}

/*!
 * getCount : Getter for count variable
 * @return : current count
 */
unsigned int Counter::getCount() const
{
    return count;
}

/*!
 * setCount : Setter for count variable
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}

/*!
 * ++ operator : Increments counter
 * @return : ++counter
 */
Counter Counter::operator++()
{

    return Counter(++count);
}

/*!
 * -- CountDn operator
 * @return : --counter
 */
Counter CountDn::operator--()
{
    return Counter(--count);
}

/*!
 * CounterDn Default Constructor
 */
CountDn::CountDn() : Counter() {}

/*!
 * CounterDn 1 Parameter Constructor
 * @param count : Initial counter
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
