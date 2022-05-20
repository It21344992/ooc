#pragma once
#include <string>
using namespace std;

class Subject{
protected:
char subjectID;
char subjectName;


public:
Subject();
Subject(char psubjectID , char psubjectName);
void displaySubject();
~Subject();
};
