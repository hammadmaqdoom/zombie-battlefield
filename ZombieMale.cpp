#include "ZombieMale.hpp"

ZombieMale::ZombieMale(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Zombie(rend, ast), mover(mov){
    src = {1044, 573, 152, 252};
    //Walkk

}

void ZombieMale::draw(){
    Zombie::draw(src, mover);
    mover.x -= speed;
}

void ZombieMale::attack(){
src = {247, 605, 157, 233}; 
}

void ZombieMale::dead(){
    src = {427, 683, 239, 152}; 
}

void ZombieMale::walk(){
    // srcc.push_back({960, 1586, 125, 257});
    // srcc.push_back({776, 1585, 157, 260}); 
    // srcc.push_back({608, 1585, 159, 258});
    // srcc.push_back({430, 1586, 131, 257});
    // for(SDL_Rect sr: srcc) {
    //     Unit::draw(sr, mover);
    //     mover.x -= 30; 
    // }
}


// ZombieMale::~ZombieMale(){

// }



// idle {1044, 573, 152, 252};
// hurt {844, 902, 157, 254};
// dead {868, 1243, 164, 243}, {100, 1323, 255, 161}
// walk {960 1586, 125, 257}, {776, 1585, 157, 260}, {608, 1585, 159, 258}, {430, 1586, 131, 257}