#pragma once
#include "Obstacle.h"
#include "Participant.h"
class Wall :
    public Obstacle
{
    double wall_height;

public:
    Wall();
    Wall(double wallheight);
    bool Overcome(Participant* part);
    void Print();
};

