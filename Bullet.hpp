#pragma once
#include "Unit.hpp"
#include "Boom.hpp"
#include "Zombie.hpp"
#include "ZombieMale.hpp"
#include "ZombieFemale.hpp"
#include "ZombieChild.hpp"


class Bullet: public Unit{
    SDL_Rect src, mover;
    SDL_Renderer *renderer;
    SDL_Texture *assets;
    public:
    Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    bool isTrue(ZombieChild);
    bool isTrue(ZombieFemale);
    bool isTrue(ZombieMale);
    bool isTrue();
    int returnX();
    int returnY();
    void Blast();
    
};