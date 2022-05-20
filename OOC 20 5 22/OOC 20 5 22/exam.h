#pragma once
#include <string>
#include "supervisor.h"
#include "student.h"
#include "answer.h"
using namespace std;

class Exam{
protected:
char examID[5];
char examName[20];
int time;
Student *stu[];
Supervisor *sup[];
Answer *ans[];
public:
Exam();
Exam(char pexamID[5], char pexamName[20] );
void setTime();
void setDuration();
void displayExam();
void displayDetails();
void addFeedback();
void addSupervisor(Supervisor *sup1, Supervisor *sup2);
void addStudent(Student *stu1, Student *stu2);
void addAnswer(Answer *ans1);
~Exam();
};
