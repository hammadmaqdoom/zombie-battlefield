#include "Bullet.hpp"    

Bullet::Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov), renderer(rend), assets(ast){
    src = {616, 201, 302, 96};
    // src = {0, 13, 427, 281};
}

// draw bullet
void Bullet::draw(){
    // if (mover.x < 1000) {
        Unit::draw(src, mover);
        mover.x+=8;
    // } else {
    //     mover.x = 980;
        // Boom bmz(renderer, assets, {mover.x, mover.y, 20, 12.5});
        // bmz.draw();
        // SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        // bmz.clear();
    // }
    
    
}