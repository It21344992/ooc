
#include "student.h"
#include "admin.h"
#include <string.h>
#include <iostream>
using namespace std;

Student::Student()
{
  studentMobileNumber = 1234567891;
  strcpy(studentID,"ID001");
  strcpy(studentName,"");
  strcpy(studentEmail, "");
 
}


Student::Student(char pstudentID[5], int pstudentMobileNumber, const char pstudentName[],const char pstudentEmail[])
{
  studentMobileNumber = pstudentMobileNumber;
  strcpy(studentID,pstudentID);
  strcpy(studentName,pstudentName);
  strcpy(studentEmail,pstudentEmail);
}

void Student::searchExam()
{
  
}
void Student::searchSubject()
{
  
}
void Student::searchWorkMaterials()
{
  
}
void Student::attemptExam()
{
  
}
void Student::logout()
{
  
}
char Student::checkLoginDetails()
{
  return 0;
}
Student::~Student()
{
  //destructor
  cout << "Student Destroyed" << endl;
}
