#include "ZombieFemale.hpp"

ZombieFemale::ZombieFemale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast), mover(mov) {
    src = {43, 1178, 183, 242};
}

void ZombieFemale::draw(){
    Zombie::draw(src, mover);
    mover.x -= speed;
}

void ZombieFemale::attack(){
    src = {242, 1169, 157, 250};
}
void ZombieFemale::dead(){
    src = {415, 1280, 287, 137};
}

void ZombieFemale::walk(){

}

int ZombieFemale::returnX()
{
    return mover.x;
}
int  ZombieFemale::returnY()
{
    return mover.y;
}


//Zombie Female
// src = {43, 1178, 183, 242}; //Idle
// src = {242, 1169, 157, 250}; //Attack
// src = {415, 1280, 287, 137}; //Die