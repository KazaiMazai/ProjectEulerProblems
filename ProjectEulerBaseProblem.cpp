//
// Created by Kazakov Sergey on 25.06.16.
//

#include "ProjectEulerBaseProblem.h"
#include <iostream>


ProjectEulerBaseProblem::ProjectEulerBaseProblem() {
    problem_name_ = "";
    url_string_ = "";
}

ProjectEulerBaseProblem::ProjectEulerBaseProblem(const std::string& problemName, const std::string& urlString) : problem_name_(
        problemName), url_string_(urlString) {

}

ProjectEulerBaseProblem::~ProjectEulerBaseProblem() {

}

const std::string& ProjectEulerBaseProblem::getProblemName() const {
    return problem_name_;
}

void ProjectEulerBaseProblem::setProblemName(const std::string& problemName) {
    problem_name_ = problemName;
}

const std::string& ProjectEulerBaseProblem::getUrlString() const {
    return url_string_;
}

void ProjectEulerBaseProblem::setUrlString(const std::string& urlString) {
    url_string_ = urlString;
}

std::ostream& operator<<(std::ostream& ostream, const ProjectEulerBaseProblem& problem) {
    return ostream << "Name: " << problem.getProblemName() << " Url: " << problem.getUrlString();
}
