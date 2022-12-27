#pragma once
#include "Obstacle.h"
#include "Participant.h"
class Treadmill :
    public Obstacle
{
    double run_distance;
public:
    Treadmill();
    Treadmill(double rundistance);
    bool Overcome(Participant* part);
    void Print();
};

