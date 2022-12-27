#pragma once
#include "Participant.h"
#include <iostream>
class Obstacle
{
public:
	virtual bool Overcome(Participant* part) = 0;
	virtual void Print() = 0;
};

