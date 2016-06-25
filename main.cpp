#include <iostream>
#include <string>
#include "ProjectEulerBaseProblem.h"
#include "MultiplesOfThreeFiveProblem.h"

using namespace std;

int main() {
    MultiplesOfThreeFiveProblem problem_1 = MultiplesOfThreeFiveProblem();
    cout << problem_1 << endl;
    cout << problem_1.solveProblem() << endl;
    cout << problem_1.solveProblemFaster() << endl;



    return 0;
}