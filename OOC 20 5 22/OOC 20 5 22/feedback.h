#pragma once
#include <string>
using namespace std;

class Feedback{

protected:
char feedbackID;

public:
Feedback();
Feedback(char pfeedbackID);
void addFeedback();
void displayFeedback();
~Feedback();


};
