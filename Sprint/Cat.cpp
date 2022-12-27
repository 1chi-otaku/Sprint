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
	cout << type << " " << name << " jumped!";
}

void Cat::Run()
{
	cout << type << " " << name << " is running!";
}

void Cat::Print()
{
	Participant::Print();
}

double Cat::GetJump()
{
	return max_jump;
}

double Cat::GetRun()
{
	return max_run;
}

