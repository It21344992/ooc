
#include "feedback.h"
#include <iostream>
#include <string>
using namespace std;

Feedback::Feedback()
{
  strcpy(feedbackID,"");
}

Feedback::Feedback(char pfeedbackID)
{
  strcpy(feedbackID, pfeedbackID);
}

void Feedback::addFeedback()
{
  
}
void Feedback::displayFeedback()
{

}

Feedback::~Feedback()
{
  //Destructor
  cout << "Feedback Destroyed" << endl;
}
