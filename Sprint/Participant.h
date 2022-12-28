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
	virtual void Jump() const = 0;
	virtual void Run() const = 0;
	virtual void Print() const;
	virtual double GetJump()const = 0;
	virtual double GetRun()const = 0;
	virtual void Init() = 0;
	virtual string GetType()const = 0;
	virtual string GetName()const = 0;
};

