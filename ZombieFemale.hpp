#pragma once
#include <SDL.h>

class ZombieFemale: public Zombie{
    SDL_Rect src, mover;
    public:
    ZombieFemale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void attack();
    void dead();
    void walk();
    void draw();