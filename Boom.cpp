#include "Boom.hpp"    

Boom::Boom(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
    src.push_back({39, 394, 92, 165});
    src.push_back({189, 373, 133, 165});
    src.push_back({339, 362, 162, 165});
    src.push_back({506, 362, 162, 165});
    src.push_back({681, 362, 154, 165});
    src.push_back({847, 362, 154, 165});
    src.push_back({1010, 362, 158, 165});
    // src = {0, 13, 427, 281};
}

void Boom::draw(){
    for(SDL_Rect sr: src) {
        Unit::draw(sr, mover);    
    }
    
    // mover.x+=8;
}

void Boom::clear(){
    src.clear();
}

Boom::~Boom() { src.clear(); }


// blast
// 39, 394, 92, 165
// 189, 373, 133, 165
// 339, 362, 162, 165
// 506, 362, 162, 165
// 681, 362, 154, 165
// 847, 362, 154, 165
// 1010, 362, 158, 165