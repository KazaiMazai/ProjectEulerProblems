#include <iostream>
#include <string>
#include "ProjectEulerBaseProblem.h"

using namespace std;

int main() {
    ProjectEulerBaseProblem problem = ProjectEulerBaseProblem();
    problem.setProblemName("prob1");
    problem.setUrlString("fuck url");

    cout << problem;

    return 0;
}