#pragma once
#include "ZombieChild.hpp"

ZombieChild::ZombieChild(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast, mov), mover(mov){
    //src = {603, 0, 507, 152};
}