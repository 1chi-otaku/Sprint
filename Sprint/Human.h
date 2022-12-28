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
    void Init();
    double GetJump();
    double GetRun();
    string GetName();
    string GetType();
};

