#include "Wall.h"
Wall::Wall()
{
    wall_height = 1;
    type = "Wall";
}

Wall::Wall(double wallheight)
{
    wall_height = wallheight;
    type = "Wall";
}

bool Wall::Overcome(Participant* part)
{
    if (part->GetJump() >= wall_height) {
        return true;
    }

    return false;
}

void Wall::Print()
{
    cout << "Wall Height - " << wall_height << endl;
}

void Wall::Init()
{
    cout << "Enter wall height of wall: " << endl;
    cin >> wall_height;
}
