#pragma once
#include <SDL.h>
#include<list>

class ZombieMale: public Zombie{
    SDL_Rect src, mover;
    public:
    std::list<ZombieMale> zombiemale;
    ZombieMale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);
    void attack();
    void dead();
    void walk();
    void draw();