// Inherit from Unit class
#pragma once
#include "Unit.hpp"

class tankBody: public Unit{
    SDL_Rect src, mover;
    public:
    tankBody(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw(SDL_Rect mover);
    
};



