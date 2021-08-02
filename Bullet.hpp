#pragma once
#include "Unit.hpp"
#include "Boom.hpp"


class Bullet: public Unit{
    SDL_Rect src, mover;
    SDL_Renderer *renderer;
    SDL_Texture *assets;
    public:
    Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    bool isTrue();
    
};