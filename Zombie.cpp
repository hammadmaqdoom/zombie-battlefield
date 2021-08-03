#include "Zombie.hpp"

Zombie::Zombie(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
    src = {79, 599, 142, 239};
}
void Zombie::draw(){
    Unit::draw(src, mover);
    // mover.x+=2;
}