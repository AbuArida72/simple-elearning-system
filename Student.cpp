
#include <iostream>
#include <string>
#include "Quiz.h"
#include "Student.h"

Student::Student()
{
	username = "";
	password = "";
}

Student::Student(string user, string pass)
{
	username = user;
	password = pass;
}

Student::~Student()
{
	username = "Delete Account";
	password = "";
}

void Student::set_username(string user) { username = user; }
void Student::set_password(string pass) { password = pass; }
void Student::set_fname(string name1) { fname = name1; }
void Student::set_lname(string name2) { lname = name2; }
void Student::set_major(string major1) { major = major1; }
void Student::set_email(string email1) { email = email1; }
void Student::set_grade(float grade1) { grade = grade1; }

string Student::get_username() { return username; }
string Student::get_password() { return password; }
string Student::get_fname() { return fname; }
string Student::get_lname() { return lname; }
string Student::get_major() { return major; }
string Student::get_email() { return email; }
int Student::get_grade() { return grade; }


void Student::welcome(int& choice4)
{
	cout << "\n\n\t\t\t Welcome " << get_username() << endl << "\tThings You Can Do :" << endl
		<< "\t\t1 - Update Personnal Information" << endl << "\t\t2 - Start Quiz"
		<< endl << "\t\t3 - See Grade"
		<< endl << "\t\t4 - Change Username and Password" << endl
		<< "\t\t5 - Log Out" << endl << "\nEnter What Would You Like To Do : " << ends;

	cin >> choice4;
}

void Student::update()
{
	string First2, Last2, Major2, Email2;

	cout << "\n\t    You Are Updating Your Personnal Information" << endl
		<< "\t\tEnter First Name : " << endl
		<< "\t\tEnter Last Name : " << endl
		<< "\t\tEnter Major : " << endl
		<< "\t\tEnter Email : " << endl;

	cin >> First2;
	cin >> Last2;
	cin >> Major2;
	cin >> Email2;

	set_fname(First2);
	set_lname(Last2);
	set_major(Major2);
	set_email(Email2);
}

void Student::quiz(int numOfQuiz, int& correct, float& grade, Quiz Quizzes[], int display, int& completed)
{
	string answer101;

	if (numOfQuiz == 0)
	{
		cout << "\t\tNo Quizzes Available" << endl;
	}
	else
	{
		cout << "\n\t   This is Quiz" << endl
			<< "\tAnswer All Questions" << endl;

		for (int i = 0; i < display; i++)
		{
			cout << "\tQuestion " << i << " : " << Quizzes[i].get_question() << endl
				<< "\tEnter Answer : " << endl;

			cin >> answer101;

			if (answer101 == Quizzes[i].get_answer())
			{
				correct++;
				grade += Quizzes[i].get_mark();
			}
		}

		set_grade(grade);

		cout << "\t\t  The Quiz Has Ended" << endl << "\t\t  Good Luck" << endl;

		completed++;
	}
}

void Student::seegrade(int completed, int display)
{
	if (completed == 0)
	{
		cout << "\t\tNo Grades Available" << endl;
	}
	else
	{
		cout << "\t   Your Grade = " << get_grade() << "/ " << display << endl;
	}
}

void Student::change()
{
	string NSuser, NSpass;

	cout << "\n\t You are Changing Your Username and Password" << endl
		<< "\t\tEnter New Username : " << ends;

	cin >> NSuser;

	cout << "\t\tEnter New Password : " << ends;

	cin >> NSpass;

	set_username(NSuser);
	set_password(NSpass);

}

void Student::invalid(int& choice4)
{
	cout << "\t\t\tInvalid Input" << endl << "Please Try Again : " << ends;

	cin >> choice4;
}