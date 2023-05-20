#pragma once

#include <iostream>
#include <string>

using namespace std;


class Quiz {
	string question, answer;
	int mark;

public:

	Quiz();

	Quiz(string Q, string A);

	void set_question(string Q1);
	void set_answer(string A1);
	void set_mark(int mark1);

	string get_question();
	string get_answer();
	float get_mark();

};
