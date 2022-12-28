#include "Robot.h"
#include <iostream>
Robot::Robot() :Participant()
{
	type = "Robot";
}

Robot::Robot(string spec_name, double jump, double run) :Participant(spec_name, jump, run)
{
	type = "Robot";
}

void Robot::Jump()
{
	cout << type << " " << name << " jumped!";
}

void Robot::Run()
{
	cout << type << " " << name << " is running!";
}

void Robot::Print()
{
	Participant::Print();
}

void Robot::Init()
{
	cout << "Enter name of " << type << ": " << endl;
	cin >> name;
	cout << "Enter max jump distance of " << name << " the " << type << ": " << endl;
	cin >> max_jump;
	cout << "Enter max run distance of " << name << " the " << type << ": " << endl;
	cin >> max_run;
}

double Robot::GetJump()
{
	return max_jump;
}

double Robot::GetRun()
{
	return max_run;
}

string Robot::GetName()
{
	return name;
}

string Robot::GetType()
{
	return type;
}

