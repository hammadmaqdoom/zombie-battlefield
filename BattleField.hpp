#pragma once
#include<SDL.h>
#include "Bullet.hpp"
#include "Tank.hpp"
#include "Unit.hpp"
#include "Boom.hpp"
#include<list>
using namespace std;
class BattleField{
    list<Bullet> bullets;
    list<Tank> tanks;
    list<Boom> booms;
    SDL_Rect movr;

    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    public:
    BattleField(SDL_Renderer *, SDL_Texture *);
    void drawObjects(); 
    void createObject(int, int);
    void fire();
    void wiggleAnimation();
    void Onefire(int, int );
    void DisplayTanks();//displays tanks from
    //the beginning
    
};