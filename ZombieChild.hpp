#pragma once
#include <SDL.h>

class ZombieChild: public Zombie{
    SDL_Rect src, mover;
    public:
    ZombieChild(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void attack();
    void dead();
    void walk();
    void draw();