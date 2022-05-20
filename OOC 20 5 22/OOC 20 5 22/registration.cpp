
#include "registration.h"
#include "student.h"
#include "subject.h"
#include <string>
#include <iostream>
using namespace std;

Registration::Registration()
{
  strcpy(stuID, "");
  strcpy(subName, "");
}
Registration::Registration(char pstuID, char subName,int no1, int no2,int no3, int no4)
{
  strcpy(stuID,pstuID);
  strcpy(subName,psubName);
  stu[0] = new Student(no1);
  stu[1] = new Student(no2);
  sub[0] = new Subject(no3);
  sub[1] = new Subject(no4);
}
void Registration::displayDetails()
{
  
}
Registration::~Registration()
{
  //Destructor
  cout << "Registration Destroyed" << endl;
}
