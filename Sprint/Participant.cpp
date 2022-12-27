#include "Participant.h"
#include <iostream>
Participant::Participant()
{
	type = "";
	name = "N/A";
	max_run = 200;
	max_jump = 1.25;
}

Participant::Participant(string spec_name, double run, double jump)
{
	name = spec_name;
	max_run = run;
	max_jump = jump;
}

void Participant::Print()
{
	cout << "Type - " << type << endl;
	cout << "Name - " << name << endl;
	cout << "Max jump distance - " << max_jump << endl;
	cout << "Max run distance - " << max_run << endl;
}

