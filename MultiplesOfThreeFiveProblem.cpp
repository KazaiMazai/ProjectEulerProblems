//
// Created by Kazakov Sergey on 25.06.16.
//

#include "MultiplesOfThreeFiveProblem.h"

MultiplesOfThreeFiveProblem::MultiplesOfThreeFiveProblem() :
        ProjectEulerBaseProblem("1", "Multiples of 3 and 5", "https://projecteuler.net/problem=1") {

}

MultiplesOfThreeFiveProblem::~MultiplesOfThreeFiveProblem() {

}

double MultiplesOfThreeFiveProblem::solveProblem() const {
    int multiples_sum = 0;

    for (int i = 0; i < kProblemIterationsLimit; i += 3) {
        multiples_sum += i;
    }

    for (int i = 0; i < kProblemIterationsLimit; i += 5) {
        multiples_sum += i;
    }

    for (int i = 0; i < kProblemIterationsLimit; i += 15) {
        multiples_sum -= i;
    }

    return multiples_sum;
}

