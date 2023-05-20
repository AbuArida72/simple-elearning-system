#pragma once

#include <iostream>
#include <string>
#include "Instructor.h"
#include "Student.h"

using namespace std;


class Admin {

	string username, password;

public:

	Admin();

	void set_username(string user);
	void set_password(string pass);

	string get_username();
	string get_password();

	void iCreate(int& teacherNum, int& countT, Instructor Teachers[]);
	void sCreate(int& studentNum, int& countS, Student Students[]);
	void change();
	void invalid(int& choice2);

};