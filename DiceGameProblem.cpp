//
// Created by Kazakov Sergey on 25.06.16.
//

#include "DiceGameProblem.h"
#include <cmath>
#include <iostream>
#include <vector>

DiceGameProblem::DiceGameProblem() :
        ProjectEulerBaseProblem("205", "Dice game", "https://projecteuler.net/problem=205") {

}

DiceGameProblem:: ~DiceGameProblem() {

}


std::vector<int> evaluate_dice_results_histogram(const int attempts_count, const int dice_sides_count) {
    std::vector<int> outcomes_hist_array(attempts_count * dice_sides_count + 1, 0);
    std::vector<int>  outcomes_array(attempts_count, 0);

    int outcomes_total_count = pow(dice_sides_count, attempts_count);
    int current_outcomes_sum = 0;

    for (int i = 0; i < outcomes_total_count; i++) {
        current_outcomes_sum = 0;

        for (int j = 0; j < attempts_count; j++) {
            current_outcomes_sum += outcomes_array[j] + 1;
        }

        outcomes_hist_array[current_outcomes_sum]++;

        for (int j = 0; j < attempts_count; j++) {
            outcomes_array[j]++;
            if (outcomes_array[j] < dice_sides_count) {
                break;
            }
            outcomes_array[j] = 0;
        }
    }

    return outcomes_hist_array;
}

double DiceGameProblem::solveProblem() const {
    const int attempts_with_first_dice_count = 9;
    const int first_dice_sides_count = 4;
    std::vector<int> first_dice_outcomes_hist = evaluate_dice_results_histogram(attempts_with_first_dice_count,
                                                                               first_dice_sides_count);

    int first_dice_outcomes_total_count = pow(first_dice_sides_count, attempts_with_first_dice_count);


    const int attempts_with_second_dice_count = 6;
    const int second_dice_sides_count = 6;
    std::vector<int> second_dice_outcomes_hist = evaluate_dice_results_histogram(attempts_with_second_dice_count,
                                                                                second_dice_sides_count);
    int second_dice_outcomes_total_count = pow(second_dice_sides_count, attempts_with_second_dice_count);

    double first_dice_win_joint_prob = 0.0;

    for (int second_points = 0; second_points < second_dice_outcomes_hist.size(); ++second_points) {
        double second_dice_prob = ((double) second_dice_outcomes_hist[second_points]) / second_dice_outcomes_total_count;
        double first_dice_prob = 0.0;

        for (int first_points = 0; first_points < first_dice_outcomes_hist.size(); ++first_points) {
            if (first_points > second_points) {
                first_dice_prob += (double) first_dice_outcomes_hist[first_points];
            }
        }

        first_dice_prob = first_dice_prob / first_dice_outcomes_total_count;
        first_dice_win_joint_prob += second_dice_prob * first_dice_prob;
    }

    return first_dice_win_joint_prob;
}