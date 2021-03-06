//
// Created by Kazakov Sergey on 26.06.16.
//

#ifndef PROJECTEULER_LARGESTPRIMEFACTORPROBLEM_H
#define PROJECTEULER_LARGESTPRIMEFACTORPROBLEM_H


#include "ProjectEulerBaseProblem.h"

/*
Description:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
 */

class LargestPrimeFactorProblem : public ProjectEulerBaseProblem {
 private:
    const long kNumberToFactorize = 600851475143;
    std::pair<long, long> fermatFactorization(const long number) const;
    long findLargestPrimeFactorRecursively(const long number) const;

 public:
    LargestPrimeFactorProblem();
    ~LargestPrimeFactorProblem();
    double solveProblem() const override;

};


#endif //PROJECTEULER_LARGESTPRIMEFACTORPROBLEM_H
