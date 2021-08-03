#include "Tank-turret.hpp"

tankTurret::tankTurret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
    src = {603, 0, 507, 152};
}

void tankTurret::draw(){
    Unit::draw(src, mover);
    // mover.x+=2;
}

void tankTurret::fire(bool status){
        if (status == true) {
            src = {985, 155, 512, 157};
            std::cout << "Wiggle True!"<< endl;
        } else if (status == false) {
            src = {603, 0, 507, 152};
            // std::cout << "Wiggle False!" << endl;
        }
    }

int tankTurret::returnY()
{
    return mover.y;
}

int tankTurret::returnX()
{
    return mover.x;
}
tankTurret::tankTurret(){}
// void tankTurret::fire(){
    
// }
// SDL_Rect getMover(){
//     return mover;
// }

// -603px 0;
// 	width: 507px;
// 	height: 152px;


// Tank rotate to left 
// -985px -155px 512px 157px;