#ifndef VERTICALMOVEMENT_H
#define VERTICALMOVEMENT_H


class VerticalMovement
{
public:

    VerticalMovement();

    /*

    Keep track of the player’s vertical position and velocity

    Jump

    – Assign some positive velocity when the player jumps

    – Make sure the player is on the ground (pos.y == 0) before jumping

    Apply gravitational acceleration each tick

    – dt = time since last tick

    – g = some negative constant

    – velocity = velocity + g * dt – pos.y = pos.y + velocity

    Collision with ground

    – After moving the player, set pos.y = max(pos.y, 0)

     */


    bool canJump();
    void setPlayerPosition();


    /*

    [


velocity = velocity + g * dt – pos.y = pos.y + velocity

*/

private:

    bool  m_jumpInProgress;
    float m_gravity;
    float m_verticalPos;
    float m_deltaTime;
    float m_velocity;
    float m_acceleration;
    float m_currentPosition;
};


#endif // VERTICALMOVEMENT_H
