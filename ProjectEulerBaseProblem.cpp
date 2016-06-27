//
// Created by Kazakov Sergey on 25.06.16.
//

#include "ProjectEulerBaseProblem.h"
#include <iostream>

ProjectEulerBaseProblem::ProjectEulerBaseProblem() {
    identifier_ = "";
    problem_title_ = "";
    url_string_ = "";
}

ProjectEulerBaseProblem::ProjectEulerBaseProblem(const std::string& identifier,
                                                 const std::string& problemTitle,
                                                 const std::string& urlString) :
        identifier_(identifier),
        problem_title_(problemTitle),
        url_string_(urlString) {

}

ProjectEulerBaseProblem::~ProjectEulerBaseProblem() {

}

const std::string& ProjectEulerBaseProblem::getIdentifier() const {
    return identifier_;

}
void ProjectEulerBaseProblem::setIdentifier(const std::string& identifier) {
    identifier_ = identifier;
}


const std::string& ProjectEulerBaseProblem::getProblemName() const {
    return problem_title_;
}

void ProjectEulerBaseProblem::setProblemName(const std::string& problemName) {
    problem_title_ = problemName;
}

const std::string& ProjectEulerBaseProblem::getUrlString() const {
    return url_string_;
}

void ProjectEulerBaseProblem::setUrlString(const std::string& urlString) {
    url_string_ = urlString;
}

double ProjectEulerBaseProblem::solveProblem() const {
    throw "solveProblem is not implemented yet.";
}

std::ostream& operator<<(std::ostream& ostream, const ProjectEulerBaseProblem& problem) {
    return ostream << "Id: " << problem.getIdentifier() << " Name: " << problem.getProblemName() << " Url: " << problem.getUrlString();
}
