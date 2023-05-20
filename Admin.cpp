
#include <iostream>
#include <string>
#include "Instructor.h"
#include "Student.h"
#include "Admin.h"

using namespace std;


Admin::Admin()
{
	username = "admin";
	password = "12@#6*^7";
}

void Admin::set_username(string user) { username = user; }
void Admin::set_password(string pass) { password = pass; }

string Admin::get_username() { return username; }
string Admin::get_password() { return password; }

void Admin::iCreate(int& teacherNum, int& countT, Instructor Teachers[])
{
	string Iuser, Ipass;

	cout << "\n\t      You Are Creating an Instructor's Account" << endl
		<< "\t\tEnter Username For the Account : " << ends;

	cin >> Iuser;

	cout << "\t\tEnter Password For the Account : " << ends;

	cin >> Ipass;

	Teachers[teacherNum].set_username(Iuser);
	Teachers[teacherNum].set_password(Ipass);

	teacherNum++;
	countT++;
}

void Admin::sCreate(int& studentNum, int& countS, Student Students[])
{
	string Suser, Spass;

	cout << "\n\t      You Are Creating a Student's Account" << endl
		<< "\t\tEnter Username For the Account : " << ends;

	cin >> Suser;

	cout << "\t\tEnter Password For the Account : " << ends;

	cin >> Spass;

	Students[studentNum].set_username(Suser);
	Students[studentNum].set_password(Spass);

	studentNum++;
	countS++;
}

void Admin::change()
{
	string Nuser, Npass;

	cout << "\n\t You are Changing Your Username and Password" << endl
		<< "\t\tEnter New Username : " << ends;

	cin >> Nuser;

	cout << "\t\tEnter New Password : " << ends;

	cin >> Npass;

	set_username(Nuser);
	set_password(Npass);
}

void Admin::invalid(int& choice2)
{
	cout << "\t\t\tInvalid Input" << endl << "Please Try Again : " << ends;

	cin >> choice2;
}