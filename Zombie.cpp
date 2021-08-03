#include <cstdlib>
#include "Zombie.hpp"

Zombie::Zombie(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
    src = {591, 599, 142, 239};
}
void Zombie::draw(){
    // int rn = rand() % 3;
    Unit::draw(src, mover);
    // mover.x+=2;
}


