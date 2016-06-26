#include <iostream>
#include <string>
#include "ProjectEulerBaseProblem.h"
#include "MultiplesOfThreeFiveProblem.h"
#include "DiceGameProblem.h"
#include "LargestPrimeFactorProblem.h"

using namespace std;

int main() {
    auto problem_0= MultiplesOfThreeFiveProblem();
    cout << problem_0 << endl;
    cout << problem_0.solveProblem() << endl;

    auto problem_1 = DiceGameProblem();
    cout << problem_1 << endl;
    cout.precision(7);
    cout << problem_1.solveProblem() << endl;

    auto problem_2 = LargestPrimeFactorProblem();
    cout << problem_2 << endl;
    cout << problem_2.solveProblem() << endl;

    return 0;
}