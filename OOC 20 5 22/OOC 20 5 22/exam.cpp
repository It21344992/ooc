
#include "exam.h"
#include <string.h>
#include <iostream>
using namespace std;

Exam::Exam()
{
  strcpy(examID,"EN001");
  strcpy(examName,"");
}
Exam::Exam(char pexamID[5],char pexamName[20])
{
  strcpy(examID,pexamID);
  strcpy( examName,pexamName);
}
void Exam::addStudent(Student *stu1, Student *stu2) 
{
stu[0] = stu1;
stu[1] = stu2;
}

void Exam::addSupervisor(Supervisor *sup1, Supervisor *sup2) 
{
sup[0] = sup1; sup[1] = sup2;
}
void Exam::setTime()
{
  
}
void Exam::setDuration()
{
  
}
void Exam::displayExam()
{
  
}
void Exam::displayDetails()
{
  
}
void Exam::addFeedback()
{
  
}
void Exam::addAnswer(Answer *ans1)
{
  ans[0] = ans1; 
}
Exam::~Exam()
{
  //destructor
  cout << "Exam Destroyed" << endl;
}
