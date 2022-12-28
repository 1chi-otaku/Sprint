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

void Robot::Jump()const
{
	cout << type << " " << name << " jumped!" << endl;
}

void Robot::Run()const
{
	cout << type << " " << name << " is running!" << endl;
}

void Robot::Print()const
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

double Robot::GetJump()const
{
	return max_jump;
}

double Robot::GetRun()const
{
	return max_run;
}

string Robot::GetName()const
{
	return name;
}

string Robot::GetType()const
{
	return type;
}

