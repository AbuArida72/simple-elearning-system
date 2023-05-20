
#define VAR_DECLS

#include <iostream>
#include <string>
#include "Admin.h"
#include "Instructor.h"
#include "Student.h"
#include "Quiz.h"
#include "Functions.h"
#include "Store.cpp"

using namespace std;


int main() {

	while (true)
	{
		FirstScreen();

		if (choice1 == 1)
		{
			aLogin();

			aCheck();

			while (true)
			{
				aScreen();

				if (choice2 == 1)
				{
					A1.iCreate(teacherNum, countT, Teachers);
				}
				else if (choice2 == 2)
				{
					A1.sCreate(studentNum, countS, Students);
				}
				else if (choice2 == 3)
				{
					A1.change();
				}
				else if (choice2 == 4)
				{
					break;
				}
				else
				{
					A1.invalid(choice2);
				}

			}
		}

		if (choice1 == 2)
		{
			if (countT == 0)
			{
				icheck();
			}
			else
			{
				iLogin();

				for (int i = 0; i < teacherNum; i++)
				{
					if (user2 == Teachers[i].get_username() && pass2 == Teachers[i].get_password())
					{
						while (true)
						{
							Teachers[i].welcome(choice3);

							if (choice3 == 1)
							{
								Teachers[i].update();
							}
							else if (choice3 == 2)
							{
								Teachers[i].create(numOfQuiz, Quizzes, Qnum);
							}
							else if (choice3 == 3)
							{
								Teachers[i].specify(display, Qnum);
							}
							else if (choice3 == 4)
							{
								Teachers[i].viewgrades(completed, display, Students, Qnum, Quizzes);
							}
							else if (choice3 == 5)
							{
								Teachers[i].change();
							}
							else if (choice3 == 6)
							{
								break;
							}
							else
							{
								Teachers[i].invalid(choice3);
							}
						}
					}
				}
			}
		}

		if (choice1 == 3)
		{
			if (countS == 0)
			{
				sCheck();
			}
			else
			{
				sLogin();

				for (int i = 0; i < studentNum; i++)
				{
					if (user3 == Students[i].get_username() && pass3 == Students[i].get_password())
					{
						while (true)
						{
							Students[i].welcome(choice4);

							if (choice4 == 1)
							{
								Students[i].update();
							}
							else if (choice4 == 2)
							{
								Students[i].quiz(numOfQuiz, correct, grade, Quizzes, display, completed);
							}
							else if (choice4 == 3)
							{
								Students[i].seegrade(completed, display);
							}
							else if (choice4 == 4)
							{
								Students[i].change();
							}
							else if (choice4 == 5)
							{
								break;
							}
							else
							{
								Students[i].invalid(choice4);
							}
						}
					}
				}
			}
		}
	}
}