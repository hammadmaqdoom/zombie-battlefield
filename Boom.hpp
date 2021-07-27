#pragma once
#include "SDL.h"
#include "Unit.hpp"
#include <list>

using namespace std;

class Boom: public Unit{
    SDL_Rect mover;
    // SDL_Rect src[7];
    std::list<SDL_Rect> src;
    public:
    Boom(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    void clear();
    ~Boom();
    
};