
#include "admin.h"
#include "student.h"
#include "supervisor.h"
#include <string>
#include <iostream>
using namespace std;
Admin::Admin()
{
  int adminMobileNumber = 0;
  strcpy(adminID,"");
  strcpy(adminName,"");
  strcpy(adminEmail, "");
}
Admin::Admin(char padminID, int padminMobileNumber, const char padminName[],const char padminEmail[])
{
  adminMobileNumber = padminMobileNumber;
  strcpy(adminID,psupID);
  strcpy(adminName,padminName);
  strcpy(adminEmail,padminEmail);
}
void Admin::addUser()
{
  
}
void Admin::updateUser()
{
  
}
void Admin::deleteUser()
{
  
}
Admin::~Admin()
{
  //destructor
cout << "Admin Destroyed" << endl;
}
