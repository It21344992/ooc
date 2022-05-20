#pragma once
#include <string>
#include "supervisor.h"
#include "exam.h"
using namespace std;


class Report{
protected:
char reportName;
Supervisor* sup;
Exam* exm;

public:
Report();
Report( char preportName);
void addReport();
void displayReport();
~Report();
};
