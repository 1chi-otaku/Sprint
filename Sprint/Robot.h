#pragma once
#include "Participant.h"
class Robot :
    public Participant
{
public:
    Robot();
    Robot(string spec_name, double jump, double run);
    void Jump()const;
    void Run()const;
    void Print()const;
    void Init();
    double GetJump()const;
    double GetRun()const;
    string GetName()const;
    string GetType()const;
};

