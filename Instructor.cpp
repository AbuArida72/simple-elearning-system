
#include <iostream>
#include <string>
#include "Quiz.h"
#include "Student.h"
#include "Instructor.h"

using namespace std;


Instructor::Instructor()
{
	username = "";
	password = "";
}

Instructor::Instructor(string user, string pass)
{
	username = user;
	password = pass;
}

Instructor::~Instructor()
{
	username = "Delete Account";
	password = "";
}

void Instructor::set_username(string user) { username = user; }
void Instructor::set_password(string pass) { password = pass; }
void Instructor::set_fname(string name1) { fname = name1; }
void Instructor::set_lname(string name2) { lname = name2; }
void Instructor::set_major(string major1) { major = major1; }
void Instructor::set_email(string email1) { email = email1; }



string Instructor::get_username() { return username; }
string Instructor::get_password() { return password; }
string Instructor::get_fname() { return fname; }
string Instructor::get_lname() { return lname; }
string Instructor::get_major() { return major; }
string Instructor::get_email() { return email; }


void Instructor::welcome(int& choice3)
{
	cout << "\n\n\t\t\t Welcome " << get_username() << endl << "\tThings You Can Do :" << endl
		<< "\t\t1 - Update Personnal Information" << endl << "\t\t2 - Create a Quiz"
		<< endl << "\t\t3 - Specify Number of Questions"
		<< endl << "\t\t4 - See Students Grade"
		<< endl << "\t\t5 - Change Username and Password" << endl
		<< "\t\t6 - Log Out" << endl << "\nEnter What Would You Like To Do : " << ends;

	cin >> choice3;
}

void Instructor::update()
{
	string First, Last, Major, Email;

	cout << "\n\t    You Are Updating Your Personnal Information" << endl
		<< "\t\tEnter First Name : " << endl
		<< "\t\tEnter Last Name : " << endl
		<< "\t\tEnter Major : " << endl
		<< "\t\tEnter Email : " << endl;

	cin >> First;
	cin >> Last;
	cin >> Major;
	cin >> Email;

	set_fname(First);
	set_lname(Last);
	set_major(Major);
	set_email(Email);
}

void Instructor::create(int& numOfQuiz, Quiz Quizzes[], int& Qnum)
{
	string Q1;
	string A1;
	int M1;

	cout << "\n\t  You Are Creating a Quiz" << endl
		<< "\t\tEnter Number of Questions : " << ends;

	cin >> Qnum;

	for (int i = 0; i < Qnum; i++)
	{
		cout << "\t\tEnter Question : " << ends;
		cin >> Q1;
		cout << "\t\tEnter Answer : " << ends;
		cin >> A1;
		cout << "\t\tEnter Question Grade : " << ends;
		cin >> M1;


		Quizzes[i].set_question(Q1);
		Quizzes[i].set_answer(A1);
		Quizzes[i].set_mark(M1);
	}

	numOfQuiz++;
}

void Instructor::specify(int& display, int Qnum)
{
	cout << "\nYou Are Specifying the Number of Questions Displayed to the Student" << endl
		<< "\t\tEnter Number of Questions : " << ends;

	cin >> display;

	for (; display > Qnum;)
	{
		if (display > Qnum)
		{
			cout << "   Number Entered Greater than Number of Questions in the Quiz" << endl
				<< "\t\tPlease Try Again" << endl;

			cin >> display;
		}
	}
}

void Instructor::viewgrades(int completed, int display, Student Students[], int Qnum, Quiz Quizzes[])
{
	if (completed == 0)
	{
		cout << "\t\tNo Grades Available" << endl;
	}
	else
	{
		for (int i = 0; i < completed; i++)
		{
			cout << "Available Grades : " << endl
				<< Students[i].get_fname() << Students[i].get_lname() << " grade = " << Students[i].get_grade()
				<< endl;
		}

		float sum = 0;

		for (int i = 0; i < Qnum; i++)
		{
			sum += Quizzes[i].get_mark();
		}

		float max = Students[0].get_grade();
		float min = Students[0].get_grade();

		float total = 0;
		float pass = 0;
		float fail = 0;

		int average = total / completed;

		for (int i = 0; i < completed; i++)
		{
			total += Students[i].get_grade();

			if (Students[i].get_grade() > sum / 2)
			{
				pass++;
			}
			else
			{
				fail++;
			}

			if (Students[i].get_grade() > max)
			{
				max = Students[i].get_grade();
			}

			if (Students[i].get_grade() < min)
			{
				min = Students[i].get_grade();
			}
		}

		cout << "The Average is = " << average << endl << "The Minimum is = " << min
			<< endl << "The Maximum is = " << max << endl;

		cout << "Number of Passing Students = " << pass << endl
			<< "Number of Failing Students = " << fail << endl;
	}
}

void Instructor::change()
{
	string NIuser, NIpass;

	cout << "\n\t You are Changing Your Username and Password" << endl
		<< "\t\tEnter New Username : " << ends;

	cin >> NIuser;

	cout << "\t\tEnter New Password : " << ends;

	cin >> NIpass;

	set_username(NIuser);
	set_password(NIpass);
}

void Instructor::invalid(int& choice3)
{
	cout << "\t\t\tInvalid Input" << endl << "Please Try Again : " << ends;

	cin >> choice3;
}