#include "Cat.h"
#include <iostream>
Cat::Cat() :Participant()
{
	type = "Cat";
}

Cat::Cat(string spec_name, double jump, double run) :Participant(spec_name, jump, run)
{
	type = "Cat";
}

void Cat::Jump()
{
	cout << type << " " << name << " jumped!" << endl;
}

void Cat::Run()
{
	cout << type << " " << name << " is running!" << endl;
}

void Cat::Print()
{
	Participant::Print();
}

void Cat::Init()
{
	cout << "Enter name of " << type << ": " << endl;
	cin >> name;
	cout << "Enter max jump distance of " << name << " the " << type << ": " << endl;
	cin >> max_jump;
	cout << "Enter max run distance of " << name << " the " << type << ": " << endl;
	cin >> max_run;
}

double Cat::GetJump()
{
	return max_jump;
}

double Cat::GetRun()
{
	return max_run;
}

string Cat::GetName()
{
	return name;
}

string Cat::GetType()
{
	return type;
}

