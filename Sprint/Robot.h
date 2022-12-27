#pragma once
#include "Participant.h"
class Robot :
    public Participant
{
public:
    Robot();
    Robot(string spec_name, double jump, double run);
    void Jump();
    void Run();
    void Print();
};

