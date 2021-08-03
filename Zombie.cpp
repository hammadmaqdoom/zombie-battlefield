#include <cstdlib>
#include "Zombie.hpp"

Zombie::Zombie(SDL_Renderer* rend, SDL_Texture* ast): Unit(rend, ast){
    // src = {591, 599, 142, 239};
    health = 100;
    speed = 30;
}
void Zombie::draw(SDL_Rect srcRect, SDL_Rect moverRect){
    // int rn = rand() % 3;
    Unit::draw(srcRect, moverRect);
    // mover.x+=2;
}


