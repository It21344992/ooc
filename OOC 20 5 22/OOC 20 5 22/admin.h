#pragma once
#include <string>
using namespace std;

class Admin{
protected:
char adminID;
int adminMobileNumber[10];
char adminName[20];
char adminEmail[30];

public:
Admin();
Admin(char padminID, int padminMobileNumber, const char padminName[],const char padminEmail[]);
void addUser();
void updateUser();
void deleteUser();
~Admin();
};
