#pragma once
#include "Participant.h"
class Cat :
    public Participant
{
public:
    Cat();
    Cat(string spec_name, double jump, double run);
    void Jump();
    void Run();
    void Print();
};

