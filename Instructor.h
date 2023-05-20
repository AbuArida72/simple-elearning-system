#pragma once

#include <iostream>
#include <string>
#include "Quiz.h"
#include "Student.h"

using namespace std;


class Instructor {

	string username, password, fname, lname, major, email;

public:

	Instructor();

	Instructor(string user, string pass);

	~Instructor();

	void set_username(string user);
	void set_password(string pass);
	void set_fname(string name1);
	void set_lname(string name2);
	void set_major(string major1);
	void set_email(string email1);



	string get_username();
	string get_password();
	string get_fname();
	string get_lname();
	string get_major();
	string get_email();


	void welcome(int& choice4);
	void update();
	void create(int& numOfQuiz, Quiz Quizzes[], int& Qnum);
	void specify(int& display, int Qnum);
	void viewgrades(int completed, int display, Student Students[], int Qnum, Quiz Quizzes[]);
	void change();
	void invalid(int& choice3);

};