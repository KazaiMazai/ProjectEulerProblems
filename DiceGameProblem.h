//
// Created by Kazakov Sergey on 25.06.16.
//

#ifndef PROJECTEULER_DICEGAMEPROBLEM_H
#define PROJECTEULER_DICEGAMEPROBLEM_H


#include "ProjectEulerBaseProblem.h"

/*
Peter has nine four-sided (pyramidal) dice, each with faces numbered 1, 2, 3, 4.
Colin has six six-sided (cubic) dice, each with faces numbered 1, 2, 3, 4, 5, 6.

Peter and Colin roll their dice and compare totals: the highest total wins. The result is a draw if the totals are equal.

What is the probability that Pyramidal Pete beats Cubic Colin? Give your answer rounded to seven decimal places in the form 0.abcdefg
*/

class DiceGameProblem : public ProjectEulerBaseProblem {

 public:
    DiceGameProblem();
    ~DiceGameProblem();
    double solveProblem() const override;
};



#endif //PROJECTEULER_DICEGAMEPROBLEM_H
