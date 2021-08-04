#pragma once
#include <SDL.h>
#include "Zombie.hpp"
// #include<list>

class ZombieChild: public Zombie{
    SDL_Rect src, mover;
    public:
    ZombieChild(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void attack();
    void dead();
    void walk();
    void draw();
    int returnX();
    int returnY();
};