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

void Cat::Jump()const
{
	cout << type << " " << name << " jumped!" << endl;
}

void Cat::Run()const
{
	cout << type << " " << name << " is running!" << endl;
}

void Cat::Print()const
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

double Cat::GetJump()const
{
	return max_jump;
}

double Cat::GetRun()const
{
	return max_run;
}

string Cat::GetName()const
{
	return name;
}

string Cat::GetType()const
{
	return type;
}

