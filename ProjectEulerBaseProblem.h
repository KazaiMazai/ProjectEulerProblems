//
// Created by Kazakov Sergey on 25.06.16.
//

#ifndef PROJECTEULER_PROJECTEULERBASEPROBLEM_H
#define PROJECTEULER_PROJECTEULERBASEPROBLEM_H

#include <string>

class ProjectEulerBaseProblem {
private:
    std::string problem_name_;
    std::string url_string_;

 public:
    ProjectEulerBaseProblem();
    ProjectEulerBaseProblem(const std::string& problemName, const std::string& urlString);

    virtual ~ProjectEulerBaseProblem();

    const std::string& getProblemName() const;
    void setProblemName(const std::string& problemName);

    const std::string& getUrlString() const;
    void setUrlString(const std::string& urlString);

    virtual double solve();

    friend std::ostream &operator<<(std::ostream& ostream, const ProjectEulerBaseProblem& problem);
};


#endif //PROJECTEULER_PROJECTEULERBASEPROBLEM_H
