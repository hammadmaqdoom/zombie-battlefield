#include "ZombieChild.hpp"

ZombieChild::ZombieChild(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov){
    //src = {603, 0, 507, 152};
}
void ZombieChild::draw(SDL_Rect mover){
    Unit::draw(src, mover);
}

void ZombieChild::dead(){

}

void ZombieChild::attack(){

}

void ZombieChild::walk(){
    
}