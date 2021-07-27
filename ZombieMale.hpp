#pragma once
#include <SDL.h>

class ZombieMale: public Zombie{
    SDL_Rect src, mover;
    public:
    ZombieMale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void attack();
    void dead();
    void walk();
    void draw();