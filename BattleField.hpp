#pragma once
#include<SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include "Bullet.hpp"
#include "Tank.hpp"
#include "Unit.hpp"
#include "Boom.hpp"
#include "Zombie.hpp"
#include "ZombieChild.hpp"
#include "ZombieFemale.hpp"
#include "ZombieMale.hpp"

#include<list>
using namespace std;
class BattleField{

    list<Bullet> bullets;
    list<Tank> tanks;
    list<ZombieChild> zChild; 
    list<ZombieMale> zMale;
    list<ZombieFemale> zFemale;
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
    void DisplayTanks();//displays tanks from the beginning
    void drawZombies();
    void collision(ZombieChild);
    void collision(ZombieMale);
    void collision(ZombieFemale);
    bool GameOverCollision();
    
};