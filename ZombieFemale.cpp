#include "ZombieFemale.hpp"

ZombieFemale::ZombieFemale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov) {}

void ZombieFemale::draw(SDL_Rect mover){
    Unit::draw(src, mover);
}

void ZombieFemale::attack(){

}
void ZombieFemale::dead(){

}

void ZombieFemale::walk(){

}