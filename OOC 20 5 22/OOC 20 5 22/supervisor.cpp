
#include "supervisor.h"
#include "admin.h"
#include <string.h>
#include <iostream>
using namespace std;

Supervisor::Supervisor()
{
  int supMobileNumber = 0;
  strcpy(supID,"");
  strcpy(supName,"");
  strcpy(supEmail, "");
  Admin *admin;
}
Supervisor::Supervisor(char psupID, int psupMobileNumber[10], const char psupName[],const char psupEmail[])
{
  supMobileNumber=psupMobileNumber;
  strcpy(supID,psupID);
  strcpy(supName,psupName);
  strcpy(supEmail,psupEmail);
}
void Supervisor::displayDetails()
{
  
}
void Supervisor::setExam()
{
  
}
void Supervisor::displayExam()
{
  
}
void Supervisor::displayResults()
{
  
}
Supervisor::~Supervisor()
{
  //Destructor
  cout << "Supervisor Destroyed" << endl;
}
