#pragma once
#include <string>
using namespace std;

class Answer{
protected:
char answerID;
char answerFile[];


public:
Answer();
Answer(char panswerID,int no1 ,int no2);
void displayanswer();
void setAnswerFile();
~Answer();
};
