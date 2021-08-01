#include "Tank-body.hpp"

tankBody::tankBody(){}
tankBody::tankBody(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
    src = {0, 13, 427, 281};
}

void tankBody::draw(){
    Unit::draw(src, mover);
    // mover.x+=2;
}
