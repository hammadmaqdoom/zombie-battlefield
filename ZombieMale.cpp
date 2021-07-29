#include "ZombieMale.hpp"

ZombieMale::ZombieMale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov){
    //src = {603, 0, 507, 152};
}

void ZombieMale::draw(SDL_Rect mover){
    Unit::draw(src, mover);
}