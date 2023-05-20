

#include <iostream>
#include <string>
#include "Quiz.h"

using namespace std;


Quiz::Quiz()
{
	question = "";
	answer = "";
}

Quiz::Quiz(string Q, string A)
{
	question = Q;
	answer = A;
}

void Quiz::set_question(string Q1) { question = Q1; }
void Quiz::set_answer(string A1) { answer = A1; }
void Quiz::set_mark(int mark1) { mark = mark1; }

string Quiz::get_question() { return question; }
string Quiz::get_answer() { return answer; }
float Quiz::get_mark() { return mark; }
