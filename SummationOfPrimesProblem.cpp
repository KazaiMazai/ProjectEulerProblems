//
// Created by Kazakov Sergey on 26.06.16.
//

#include <cmath>
#include "SummationOfPrimesProblem.h"



SummationOfPrimesProblem::SummationOfPrimesProblem() :
        ProjectEulerBaseProblem("10", "Summation of primes", "https://projecteuler.net/problem=10") {
}

SummationOfPrimesProblem:: ~SummationOfPrimesProblem() {

}

double SummationOfPrimesProblem::solveProblem() const {
    long long primes_sum = 2;

    for (int number = 3; number < kPrimesLimit; number += 2) {
        long divider_limit = ceil(sqrt(number)) + 1;
        bool is_prime = true;

        for (int divider = 3; divider < divider_limit; divider += 2) {
            if (number % divider == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes_sum += number;
        }
    }

    return primes_sum;
}
