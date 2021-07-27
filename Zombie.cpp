#include "Zombie.hpp"

Zombie::Zombie(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
    //src = {603, 0, 507, 152};
}
void Zombie::draw(SDL_Rect mover){
    Unit::draw(src, mover);
    // mover.x+=2;
}