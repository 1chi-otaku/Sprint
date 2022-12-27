#pragma once

#include <string>
using namespace std;
class Participant
{
protected:
	string type;
	string name;
	double max_jump;
	double max_run;
public:
	Participant();
	Participant(string spec_name, double run, double jump);
	virtual void Jump() = 0;
	virtual void Run() = 0;
	virtual void Print();
};

