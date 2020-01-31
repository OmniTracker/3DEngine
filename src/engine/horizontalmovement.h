#ifndef HORIZONTALMOVEMENT_H
#define HORIZONTALMOVEMENT_H


/*
Forward movement:
– Use the horizontal component of the look vector – forward_speed = some positive constant
– dir = normalize(look.x, 0, look.y)
– pos = pos + forward_speed * dir
*/

class HorizontalMovement
{
public:
    HorizontalMovement();



};



        /*
     *
     * Keep track of your player position
     *
     *
    • Forward movement:
    – Use the horizontal component of the look vector – forward_speed = some positive constant
    – dir = normalize(look.x, 0, look.y)
    – pos = pos + forward_speed * dir
    • Strafing
    – Use the perpendicular of the horizontal direction – sideways_speed = some positive constant
    – perp = normalize(dir.z, 0, -dir.x)
    – pos = pos + sideways_speed * perp
     *
     *
     */

    #endif // HORIZONTALMOVEMENT_H
