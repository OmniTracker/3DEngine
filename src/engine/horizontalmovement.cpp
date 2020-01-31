#include "horizontalmovement.h"

HorizontalMovement::HorizontalMovement()
{

}

void HorizontalMovement::forwardMovement()
{
    /*
    – Use the horizontal component of the look vector – forward_speed = some positive constant
    – dir = normalize(look.x, 0, look.y)
    – pos = pos + forward_speed * dir
*/



}

void HorizontalMovement::strafing()
{

    /*
    – Use the perpendicular of the horizontal direction – sideways_speed = some positive constant
    – perp = normalize(dir.z, 0, -dir.x)
    – pos = pos + sideways_speed * perp
    */
}
