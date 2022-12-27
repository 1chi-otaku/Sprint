#include "Wall.h"
Wall::Wall()
{
    wall_height = 1;
}

Wall::Wall(double wallheight)
{
    wall_height = wallheight;
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
