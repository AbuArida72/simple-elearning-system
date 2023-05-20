#pragma once

#include <iostream>
#include <string>
#include "Quiz.h"

using namespace std;


class Student {

	string username, password, fname, lname, major, email;
	float grade;

public:

	Student();

	Student(string user, string pass);

	~Student();

	void set_username(string user);
	void set_password(string pass);
	void set_fname(string name1);
	void set_lname(string name2);
	void set_major(string major1);
	void set_email(string email1);
	void set_grade(float grade1);


	string get_username();
	string get_password();
	string get_fname();
	string get_lname();
	string get_major();
	string get_email();
	int get_grade();


	void welcome(int& choice4);
	void update();
	void quiz(int numOfQuiz, int& correct, float& grade, Quiz Quizzes[], int display, int& completed);
	void seegrade(int completed, int display);
	void change();
	void invalid(int& choice4);

};