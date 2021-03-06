#include "ZombieChild.hpp"

ZombieChild::ZombieChild(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast), mover(mov){
    src = {1036, 1952, 145, 248 }; //Idle 
}
void ZombieChild::draw(){
    Zombie::draw(src, mover);
    mover.x -= speed;
}

void ZombieChild::dead(){
    src = {442, 977, 230, 149}; //Die
}

void ZombieChild::attack(){
    src = {249, 904, 156, 225}; //Attack
}

void ZombieChild::walk(){

    
}
int ZombieChild::returnX()
{
    return mover.x;
}
int  ZombieChild::returnY()
{
    return mover.y;
}

// Zombie Kid
// src = {88, 900, 132, 233}; //Idle
// src = {249, 904, 156, 225}; //Attack
// src = {442, 977, 230 149}; //Die
