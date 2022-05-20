
#include "subject.h"
#include "workMaterials.h"
#include "subject.h"
#include "exam.h"
#include "supervisor.h"
#include <string>
#include <iostream>
using namespace std;

Subject::Subject()
{
  strcpy(subjectID,"");
  strcpy(subjectName,"");
}

Subject::Subject(char psubjectID , char psubjectName,int no1, int no2, int no3,int no4)
{
  strcpy(subjectID,psubjectID);
  strcpy(subjectName,psubjectName); 
  sup[0] = new Supervisor(no1);
  sup[1] = new Supervisor(no2);
  work[0] = new WorkMaterials(no1);
  work[1] = new WorkMaterials(no2);
}

void Subject::displaySubject()
{
  
}
Subject::~Subject()
{
  //Destructor
  cout << "Subject destroyed" << endl;
}
