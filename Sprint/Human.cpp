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

