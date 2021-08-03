#include "ZombieFemale.hpp"

ZombieFemale::ZombieFemale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov) {
    src = {43, 1178, 183, 242};
}

void ZombieFemale::draw(SDL_Rect mover){
    Unit::draw(src, mover);
}

void ZombieFemale::attack(){
    src = {242, 1169, 157, 250};
}
void ZombieFemale::dead(){
    src = {415, 1280, 287, 137};
}

void ZombieFemale::walk(){

}


//Zombie Female
// src = {43, 1178, 183, 242}; //Idle
// src = {242, 1169, 157, 250}; //Attack
// src = {415, 1280, 287, 137}; //Die