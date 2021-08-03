#include "ZombieChild.hpp"

ZombieChild::ZombieChild(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov){
    src = {88, 900, 132, 233}; //Idle
}
void ZombieChild::draw(SDL_Rect mover){
    Unit::draw(src, mover);
}

void ZombieChild::dead(){
    src = {442, 977, 230, 149}; //Die
}

void ZombieChild::attack(){
    src = {249, 904, 156, 225}; //Attack
}

void ZombieChild::walk(){
    
}

// Zombie Kid
// src = {88, 900, 132, 233}; //Idle
// src = {249, 904, 156, 225}; //Attack
// src = {442, 977, 230 149}; //Die
