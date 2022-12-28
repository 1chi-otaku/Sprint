#include "Treadmill.h"
Treadmill::Treadmill()
{
	run_distance = 150;
	type = "Treadmill";
}

Treadmill::Treadmill(double rundistance)
{
	run_distance = rundistance;
	type = "Treadmill";
}

bool Treadmill::Overcome(Participant* part)
{
	if (part->GetRun() >= run_distance) {
		return true;
	}

	return false;
}

void Treadmill::Print()
{
	cout << "Treadmill Distance - " << run_distance << endl;
}

void Treadmill::Init()
{
	cout << "Enter run distance of treadmill: " << endl;
	cin >> run_distance;
}
