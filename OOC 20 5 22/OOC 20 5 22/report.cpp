
#include "report.h"
#include "exam.h"
#include <cstring>
using namespace std;

Report::Report()
{
  strcpy(reportName,"");
}

Report::Report(char preportName)
{
  strcpy(reportName, preportName);
}

void Report::addReport()
{
  
}
void report::displayReport()
{

}
Report::~Report()
{
  //Destructor
  cout << "Report Destroyed" << endl;
}
