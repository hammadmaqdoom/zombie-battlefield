#include "Tank.hpp"


Tank::Tank(tankBody tB, tankTurret tT): tB(tB), tT(tT){};

void Tank::draw(){
    tB.draw();
    tT.draw();
    // mover.x+=2;
}
tankturret Tank::returnTankturret()
{
    return tT;
}

int Tank::returnY()
{
    return tT.returnY();
}
Tank::Tank(){}

void Tank::fire(bool status){
        tT.fire(status);
}

SDL_Rect Tank::moverr(){
    return mover;
}

// blast
// 39, 394, 92, 165
// 189, 373, 133, 165
// 339, 362, 162, 165
// 506, 362, 162, 165
// 681, 362, 154, 165
// 847, 362, 154, 165
// 1010, 362, 158, 165