#pragma once
#include <SDL.h>
#include "Zombie.hpp"
#include<list>

class ZombieFemale: public Zombie{
    SDL_Rect src, mover;
    public:

    ZombieFemale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    // std::list<ZombieFemale> zombiefemale;
    void attack();
    void dead();
    void walk();
    void draw();
    int returnX();
    int returnY();
};