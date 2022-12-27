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

