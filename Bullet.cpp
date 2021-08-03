#include "Bullet.hpp"
#include <list>
#include <iostream>    

Bullet::Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov), renderer(rend), assets(ast){
    src = {616, 201, 302, 96};
    // src = {0, 13, 427, 281};
}

// draw bullet
void Bullet::draw(){

    Unit::draw(src, mover);
    if (mover.x < 930)
        mover.x += 50;
    else
    {
        mover.x = 960;
        std::list<SDL_Rect> src = {{39, 394, 92, 95}, {189, 373, 133, 141}, {339, 362, 162, 165}, {506, 362, 162, 165}, {681, 362, 154, 165}, {847, 362, 154, 165}, {1010, 362, 158, 165}};
        for (SDL_Rect &r : src)

        {
            Unit::draw(r, {mover.x - 40, mover.y, 80, 25});
        }
        // src.clear();
    }
    std::cout << "Bullet reached, x= " << mover.x << "--" << mover.y << std::endl;
    // if (mover.x < 1000) {
        // Unit::draw(src, mover);
        // mover.x+=8;
    // } else {
    //     mover.x = 980;
        // Boom bmz(renderer, assets, {mover.x, mover.y, 20, 12.5});
        // bmz.draw();
        // SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        // bmz.clear();
    // }
    
    
}

bool Bullet::isTrue()
{
    if (mover.x == 960)
        return true;
    else
        return false;
}

int Bullet::returnX()
{
    return mover.x; 
}

int Bullet::returnY()
{
    return mover.y;
}