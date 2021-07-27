// Inherit from Unit class
#pragma once
#include <iostream>
#include "Unit.hpp"

using namespace std;

class tankTurret: public Unit{
    SDL_Rect src, mover;
    int posX, posY;
    public:
    tankTurret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw(SDL_Rect mover);
    // SDL_Rect getMover();

    void fire(bool status);
    
};








