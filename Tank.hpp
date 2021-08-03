// Make composition of TankBody and TankTurret objects in Tank class
#pragma once
#include<iostream>
#include<list>
#include "Tank-body.hpp"
#include "Tank-turret.hpp"
#include "Bullet.hpp"

using namespace std;

class Tank{
    // SDL_Renderer* renderer;
    // SDL_Texture* assets;
    SDL_Rect src, mover;

    // std::list<Bullet> bllts;

    tankBody tB;
    tankTurret tT;  

    public:
    Tank();
    Tank(tankBody tb, tankTurret tT);
    void draw();
    SDL_Rect moverr();
    void fire(bool status);
    tankTurret returnTankturret();
    int returnY();
    int returnX();
    
};