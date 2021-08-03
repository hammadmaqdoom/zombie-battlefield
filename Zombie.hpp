#pragma once
#include<SDL.h>
#include "Unit.hpp"
#include<list>

class Zombie: public Unit{
    SDL_Rect src, mover;
    SDL_Renderer *renderer;
    SDL_Texture *assets;
    
    protected:
    int health;
    int size;
    
    public:
    Zombie(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void draw();
    // std::list<Zombie> zombie;

};