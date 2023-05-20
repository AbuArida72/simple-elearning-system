

#include <iostream>
#include <string>
#include "Quiz.h"
#include "Admin.h"
#include "Instructor.h"
#include "Student.h"
#include "Functions.h"

using namespace std;


void FirstScreen()
{
	cout << "\t\tWelcome to the System" << endl << "Account Types : " << endl
		<< "\t1 - Admin\n" << "\t2 - Instructor\n"
		<< "\t3 - Student\n\n" << endl << "Please Specify Your Account : " << ends;

	cin >> choice1;

	if (countT == 0 && countS == 0)
	{
		for (; choice1 != 1 ;)
		{
			if (choice1 == 2 || choice1 == 3)
			{
				cout << "\t    No Student or Instructor Accounts Available" << endl
					<< "\t\tPlease Choose a Different Choice\n" << endl
					<< "Please Specify Your Account : " << ends;

				cin >> choice1;
			}
			else
			{
				cout << "\t\t\tInvalid Input" << endl << "\tPlease Choose One of the Following Accounts :"
					<< endl << "\t\t\t1 - Admin\n" << "\t\t\t2 - Instructor\n"
					<< "\t\t\t3 - Student\n\n" << endl << "Please Specify Your Account : " << ends;

				cin >> choice1;
			}
		}
	}
}

void aLogin()
{
	cout << "------------------------------------------------\n\n\n"
		<< "\tWelcome to the System Admin" << endl
		<< "Please Login by Entering your Username and Password\n" << endl << "\t\tLogin"
		<< endl << "\tUsername : " << endl << "\tPassword : " << endl;

	cout << "\t" << ends;
	cin >> user1;
	cout << "\t" << ends;
	cin >> pass1;
}

void aCheck()
{
	for (; user1 != A1.get_username() || pass1 != A1.get_password();)
	{
		if (user1 != A1.get_username() || pass1 != A1.get_password())
		{
			cout << "\t  Incorrect Username or Password" << endl << "\t\tPlease Try Again" << endl;

			cout << "\t\t     Login" << endl << "\t    Username : " << endl << "\t    Password : " << endl;

			cout << "\t" << ends;
			cin >> user1;
			cout << "\t" << ends;
			cin >> pass1;
		}
	}
}

void aScreen()
{
	cout << "\n\n\t\t\t Welcome Admin" << endl << "\tThings You Can Do :" << endl
		<< "\t\t1 - Create Instructor Account" << endl << "\t\t2 - Create Student Account"
		<< endl << "\t\t3 - Change Username and Password" << endl
		<< "\t\t4 - Log Out" << endl << "\nEnter What Would You Like To Do : " << ends;

	cin >> choice2;
}

void icheck()
{
	cout << "\t\tNo Instructor Account Available" << endl
		<< "\tPlease Choose A Different Account" << endl
		<< "Please Specify Your Account : " << ends;

	cin >> choice1;
}

void iLogin()
{
	cout << "------------------------------------------------\n\n\n"
		<< "\tWelcome to the System Instructor" << endl
		<< "Please Login by Entering your Username and Password\n" << endl << "\t\tLogin"
		<< endl << "\tUsername : " << endl << "\tPassword : " << endl;

	cout << "\t" << ends;
	cin >> user2;
	cout << "\t" << ends;
	cin >> pass2;
}

void sCheck()
{
	cout << "\t\tNo Student Account Available" << endl
		<< "\tPlease Choose A Different Account" << endl
		<< "Please Specify Your Account : " << ends;

	cin >> choice1;
}

void sLogin()
{
	cout << "------------------------------------------------\n\n\n"
		<< "\tWelcome to the System Student" << endl
		<< "Please Login by Entering your Username and Password\n" << endl << "\t\tLogin"
		<< endl << "\tUsername : " << endl << "\tPassword : " << endl;

	cout << "\t" << ends;
	cin >> user3;
	cout << "\t" << ends;
	cin >> pass3;
}

