//
// Created by Kazakov Sergey on 25.06.16.
//

#ifndef PROJECTEULER_MULTIPLESOFTHREEFIVEPROBLEM_H
#define PROJECTEULER_MULTIPLESOFTHREEFIVEPROBLEM_H


#include "ProjectEulerBaseProblem.h"

/*
 * Describption:
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
 */

class MultiplesOfThreeFiveProblem : public ProjectEulerBaseProblem {

    const int kProblemIterationsLimit = 1000;

public:
    MultiplesOfThreeFiveProblem();
    double solveProblem() const override;
    double solveProblemFaster() const;
};

#endif //PROJECTEULER_MULTIPLESOFTHREEFIVEPROBLEM_H
