//
// Created by Kazakov Sergey on 25.06.16.
//

#ifndef PROJECTEULER_PROJECTEULERBASEPROBLEM_H
#define PROJECTEULER_PROJECTEULERBASEPROBLEM_H

#include <string>

class ProjectEulerBaseProblem {
 private:
    std::string identifier_;
    std::string problem_title_;
    std::string url_string_;

 public:
    ProjectEulerBaseProblem();
    ProjectEulerBaseProblem(const std::string& identifier, const std::string& problemTitle, const std::string& urlString);

    virtual ~ProjectEulerBaseProblem();

    const std::string& getIdentifier() const;
    void setIdentifier(const std::string& identifier);

    const std::string& getProblemName() const;
    void setProblemName(const std::string& problemName);

    const std::string& getUrlString() const;
    void setUrlString(const std::string& urlString);

    virtual double solveProblem() const;

    friend std::ostream &operator<<(std::ostream& ostream, const ProjectEulerBaseProblem& problem);
};


#endif //PROJECTEULER_PROJECTEULERBASEPROBLEM_H
