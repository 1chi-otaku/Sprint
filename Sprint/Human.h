#pragma once
#include "Participant.h"
class Human :
    public Participant
{
public:
    Human();
    Human(string spec_name, double jump, double run);
    void Jump();
    void Run();
    void Print();
    double GetJump();
    double GetRun();
};

