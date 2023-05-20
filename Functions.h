#pragma once

#ifndef VAR_DEFS
#define VAR_DEFS 1

#ifndef VAR_DECLS
# define _DECL extern
# define _INIT(x)
#else
# define _DECL
# define _INIT() = 0
#endif


#include <iostream>
#include <string>
#include "Quiz.h"
#include "Admin.h"
#include "Instructor.h"
#include "Student.h"

using namespace std;


_DECL string user1;
_DECL string pass1;
_DECL string user2;
_DECL string pass2;
_DECL string user3;
_DECL string pass3;

_DECL Admin A1;
_DECL Instructor Teachers[20];
_DECL Student Students[20];
_DECL Quiz Quizzes[20];

_DECL int teacherNum _INIT(0);
_DECL int studentNum _INIT(0);

_DECL int countT _INIT(0);
_DECL int countS _INIT(0);

_DECL int numOfQuiz _INIT(0);
_DECL int correct _INIT(0);
_DECL int completed _INIT(0);

_DECL int display;
_DECL float grade;
_DECL int Qnum;

_DECL int choice1;
_DECL int choice2;
_DECL int choice3;
_DECL int choice4;

#endif

void FirstScreen();

void aLogin();

void aCheck();

void aScreen();

void icheck();

void iLogin();

void sCheck();

void sLogin();

