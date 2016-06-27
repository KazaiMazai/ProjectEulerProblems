//
// Created by Kazakov Sergey on 27.06.16.
//

#include <cmath>
#include <unordered_set>
#include <vector>
#include <iostream>
#include "SquareFreeBinomialCoefProblem.h"


SquareFreeBinomialCoefProblem::SquareFreeBinomialCoefProblem() :
        ProjectEulerBaseProblem("203", "Squarefree Binomial Coefficients", "https://projecteuler.net/problem=203") {
    binomial_coef_cache_ = std::vector<std::vector<long long>>(kRowsCount,
                                std::vector<long long>(kRowsCount / 2 + 1, 0));

}

SquareFreeBinomialCoefProblem::~SquareFreeBinomialCoefProblem() {

}

long long SquareFreeBinomialCoefProblem::binomialCoef(const int n, const int k) {
    auto k_var = k;

    if (k_var > n/2) {
        k_var = n - k;
    }

    if (k_var == 1) {
        return n;
    }

    if (k_var == 0) {
        return 1;
    }

    if (binomial_coef_cache_[n][k_var]  == 0) {
        binomial_coef_cache_[n][k_var] = binomialCoef(n - 1, k - 1) + binomialCoef(n - 1, k);
    }

    return  binomial_coef_cache_[n][k_var] ;
}

std::vector<long long> SquareFreeBinomialCoefProblem::evaluateSquaresOfPrimes(const long long max_value) const{
    std::vector<long long> squares_of_primes = {4};

    for (long long number = 3; number * number <= max_value; number += 2) {
        long long divider_limit = ceil(sqrt(number)) + 1;
        bool is_prime = true;

        for (long long divider = 3; divider < divider_limit; divider += 2) {
            if (number % divider == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            squares_of_primes.push_back(number * number);
        }
    }

    return squares_of_primes;
}


double SquareFreeBinomialCoefProblem::solveProblem() {

    int pascal_triangle_half_row_count = kRowsCount / 2 + 1;

    long long max_binomial_coef = binomialCoef(kRowsCount - 1, pascal_triangle_half_row_count - 1);

    std::vector<long long> squares_of_primes = evaluateSquaresOfPrimes(max_binomial_coef);

    unsigned long long square_free_coefficients_sum = 0;

    std::unordered_set<long long> distinct_coefs;

    for (int n = 0; n < kRowsCount; ++n) {
        for (int k = 0; k < n + 1; ++k) {
            long long coef = binomialCoef(n, k);

            if (distinct_coefs.find(coef) == distinct_coefs.end()) {
                distinct_coefs.insert(coef);

                bool is_square_free = true;

                for (const long long squared_prime : squares_of_primes) {
                    if (coef % squared_prime == 0) {
                        is_square_free = false;
                        break;
                    }
                }

                if (is_square_free) {
                    square_free_coefficients_sum += coef;
                }
            }
        }
    }

    return square_free_coefficients_sum;
}



