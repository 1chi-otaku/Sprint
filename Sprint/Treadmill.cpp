#include "Treadmill.h"
Treadmill::Treadmill()
{
	run_distance = 150;
}

Treadmill::Treadmill(double rundistance)
{
	run_distance = rundistance;
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
