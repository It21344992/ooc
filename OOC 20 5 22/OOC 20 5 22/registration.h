#pragma once
#include <string>
using namespace std;

class Registration{
protected:
char studentID;
char subjectName;

public:
Registration();
Registration(char studentID,char subjectName);
void displayDetails();
~Registration();

};
