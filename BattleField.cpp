#include "BattleField.hpp"
#include<iostream>

BattleField::BattleField(SDL_Renderer *renderer, SDL_Texture *asst):gRenderer(renderer), assets(asst){}

void BattleField::drawObjects(){
    // call draw functions of all the objects here
    
    for(Tank& t: tanks) {
            t.create();
    }
    
    for(Bullet& b: bullets) {
         b.draw();
    }
    
    for(Boom& bm: booms) {
         bm.draw();
    }
    booms.clear();

    wiggleAnimation();   
}

void BattleField::createObject(int x, int y){
    Tank t1(gRenderer, assets, {x, y, 160, 50});
    tanks.push_back(t1);
    std::cout << "Tank deployed at: " << x << " -- " << y << std::endl;
}


void BattleField::fire(){
    // provide code to fire all of the tanks.
    
    
    for(Tank& t: tanks) {
            movr = t.moverr();
            t.fire(true);
            Bullet b1(gRenderer, assets, {movr.x + 150 , movr.y + 20 , 20, 12});
            Boom bm1(gRenderer, assets, {movr.x + 150 , movr.y + 20 , 20, 12});
            bullets.push_back(b1);
            booms.push_back(bm1);
            std::cout << "Bullet fired from tank at: " << movr.x << " -- " << movr.y << std::endl;
    }
   
   
    // bullets.clear();
}

void BattleField::wiggleAnimation(){
    for(Tank& t: tanks) {
        t.fire(false);
    }
}