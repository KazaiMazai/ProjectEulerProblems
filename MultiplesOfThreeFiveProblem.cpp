//
// Created by Kazakov Sergey on 25.06.16.
//

#include "MultiplesOfThreeFiveProblem.h"

MultiplesOfThreeFiveProblem::MultiplesOfThreeFiveProblem() :
        ProjectEulerBaseProblem("1", "Multiples of 3 and 5", "https://projecteuler.net/problem=1") {

}

double MultiplesOfThreeFiveProblem::solveProblem() const  {
    int multiplesSum = 0;

    for (int i = 0; i < kProblemIterationsLimit; ++i) {

        if (i % 3 == 0 || i % 5 == 0) {
            multiplesSum += i;
        }

    }

    return multiplesSum;
}

double MultiplesOfThreeFiveProblem::solveProblemFaster() const {

    int multiplesSum = 0;

    for (int i = 0; i < kProblemIterationsLimit; i += 3) {
        multiplesSum += i;
    }

    for (int i = 0; i < kProblemIterationsLimit; i += 5) {
        multiplesSum += i;
    }

    for (int i = 0; i < kProblemIterationsLimit; i += 15) {
        multiplesSum -= i;
    }

    return multiplesSum;
}

