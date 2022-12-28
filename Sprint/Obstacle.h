#pragma once
#include "Participant.h"
#include <iostream>
class Obstacle
{
protected:
	string type;
public:
	virtual bool Overcome(Participant* part) = 0;
	virtual void Print() = 0;
	virtual void Init() = 0;
};

