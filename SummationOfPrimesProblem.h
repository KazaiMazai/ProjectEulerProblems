//
// Created by Kazakov Sergey on 26.06.16.
//

#ifndef PROJECTEULER_SUMMATIONOFPRIMESPROBLEM_H
#define PROJECTEULER_SUMMATIONOFPRIMESPROBLEM_H


#include "ProjectEulerBaseProblem.h"

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

class SummationOfPrimesProblem : public ProjectEulerBaseProblem {

    const long kPrimesLimit =  2000000;

 public:
    SummationOfPrimesProblem();
    ~SummationOfPrimesProblem();
    double solveProblem() const override;

};


#endif //PROJECTEULER_SUMMATIONOFPRIMESPROBLEM_H
