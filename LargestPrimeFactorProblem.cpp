//
// Created by Kazakov Sergey on 26.06.16.
//

#include <cmath>
#include <iostream>
#include "LargestPrimeFactorProblem.h"


LargestPrimeFactorProblem::LargestPrimeFactorProblem() :
        ProjectEulerBaseProblem("3", "Largest prime factor", "https://projecteuler.net/problem=3") {

}

LargestPrimeFactorProblem:: ~LargestPrimeFactorProblem() {

}


std::pair<long, long> fermatFactorization(const long number) {
    long a = ceil(sqrt(number));
    long b2 = a * a - number;
    double b = sqrt(b2);
    while (b != ceil(b)) {
        a += 1;
        b2 = a * a - number;
        b = sqrt(b2);
    }

    return std::make_pair(a - long(b), a + long(b));
};

long findLargestPrimeFactorRecursively(const long number) {
    auto factors = fermatFactorization(number);
    if (factors.first == 1 || factors.second == 1) {
        return fmax(factors.first, factors.second);
    } else {
        return fmax(findLargestPrimeFactorRecursively(factors.first), findLargestPrimeFactorRecursively(factors.second));
    }
}

double LargestPrimeFactorProblem::solveProblem() const {
    return findLargestPrimeFactorRecursively(kNumberToFactorize);
}
