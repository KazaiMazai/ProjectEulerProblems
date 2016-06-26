#include <iostream>
#include <string>
#include "ProjectEulerBaseProblem.h"
#include "MultiplesOfThreeFiveProblem.h"
#include "DiceGameProblem.h"

using namespace std;

int main() {
    ProjectEulerBaseProblem problem = MultiplesOfThreeFiveProblem();
    cout << problem << endl;
    cout << problem.solveProblem() << endl;

    problem = DiceGameProblem();
    cout << problem << endl;
    cout.precision(7);
    cout << problem.solveProblem() << endl;

    return 0;
}