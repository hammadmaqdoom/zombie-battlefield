#pragma once
#include<SDL.h>
#include "Unit.hpp"
#include<list>

class Zombie: public Unit{
    // SDL_Rect src, mover;
    SDL_Renderer *renderer;
    SDL_Texture *assets;
    
    protected:
    int health;
    int speed;
    
    public:
    Zombie(SDL_Renderer* rend, SDL_Texture* ast);
    void draw(SDL_Rect, SDL_Rect);
    // std::list<Zombie> zombie;

};