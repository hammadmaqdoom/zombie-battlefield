#include "ZombieMale.hpp"

ZombieMale::ZombieMale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov){
    src = {79, 599, 142, 239};
}

void ZombieMale::draw(SDL_Rect mover){
    Unit::draw(src, mover);
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

