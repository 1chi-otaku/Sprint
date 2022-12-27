#include "Participant.h"

Participant::Participant()
{
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

void Participant::Jump() const
{
}

void Participant::Run() const
{
}
