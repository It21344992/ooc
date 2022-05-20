
#include "answer.h"
#include "feedback.h"
#include <iostream>
#include <string.h>
using namespace std;

Answer::Answer()
{
  answerID='1';
}
Answer::Answer(char panswerID,int no1, int no2 )
{
  answerID=panswerID;
  
}
void Answer::displayanswer()
{
}
void Answer::setAnswerFile()
{
}
Answer::~Answer()
{
	cout << "Answer Destroyed" << endl;
}
