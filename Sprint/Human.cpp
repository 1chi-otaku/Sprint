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
	cout << type << " " << name << " jumped!" << endl;
}

void Human::Run()
{
	cout << type << " " << name << " is running!" << endl;
}

void Human::Print()
{
	Participant::Print();
}

void Human::Init()
{
	cout << "Enter name of " << type << ": " << endl;
	cin >> name;
	cout << "Enter max jump distance of " << name << " the " << type << ": " << endl;
	cin >> max_jump;
	cout << "Enter max run distance of " << name << " the " << type << ": " << endl;
	cin >> max_run;
}

double Human::GetJump()
{
	return max_jump;
}

double Human::GetRun()
{
	return max_run;
}

string Human::GetName()
{
	return name;
}

string Human::GetType()
{
	return type;
}

