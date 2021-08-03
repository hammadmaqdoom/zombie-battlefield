#include "ZombieMale.hpp"

ZombieMale::ZombieMale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast), mover(mov){
    src = {591, 599, 142, 239};
}

void ZombieMale::draw(){
    Zombie::draw(src, mover);
    mover.x -= speed;
}

void ZombieMale::attack(){
src = {247, 605, 157, 233}; 
}

void ZombieMale::dead(){
    src = {427, 683, 239, 152}; 
}

void ZombieMale::walk(){

}


//Zombie Male 
// src = {79, 599, 142, 239}; //Idle
// src = {247, 605, 157, 233}; //Attack 
// src = {427, 683, 239, 152}; //Die

