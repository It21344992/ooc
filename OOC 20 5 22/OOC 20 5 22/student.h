#pragma once
#include <string>
using namespace std;

class Student{
protected:
char studentID[5];
int studentMobileNumber;
char studentName[20];
char studentEmail[30];


public:
Student();
Student(char pstudentID[5], int pstudentMobileNumber, const char pstudentName[],const char pstudentEmail[]);
void displayDetails();
char checkLoginDetails();
void searchExam();
void searchSubject();
void searchWorkMaterials();
void attemptExam();
void logout();
~Student();

};
