#include "Human.h"
#include <iostream>
Human::Human():Participant()
{
	type = "Human";
}

Human::Human(string spec_name, double jump, double run):Participant(spec_name,jump,run)
{
	type = "Human";
}

void Human::Jump()
{
	cout << type << " " << name << " jumped!";
}

void Human::Run()
{
	cout << type << " " << name << " is running!";
}

void Human::Print()
{
	Participant::Print();
}

double Human::GetJump()
{
	return max_jump;
}

double Human::GetRun()
{
	return max_run;
}

