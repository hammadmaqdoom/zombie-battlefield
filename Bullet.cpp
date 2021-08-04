#include "Bullet.hpp"
#include <list>
#include <iostream>

Bullet::Bullet(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast), mover(mov), renderer(rend), assets(ast)
{
    src = {616, 201, 302, 96};
    // src = {0, 13, 427, 281};
}

// draw bullet
void Bullet::draw()
{

    Unit::draw(src, mover);

    mover.x += 10; //28 appearances

    std::cout << "Bullet reached, x= " << mover.x << "--" << mover.y << std::endl;
}

bool Bullet::isTrue(ZombieChild Z)//true if collision happened
{
    if (mover.x == Z.returnX() && (mover.y > Z.returnY() && mover.y < Z.returnY() + 80))

        return true;

    else
        return false;
}

bool Bullet::isTrue(ZombieFemale Z)
{
    if (mover.x == Z.returnX() && (mover.y > Z.returnY() && (mover.y < Z.returnY() + 80)))
        return true;
    else
        return false;
}

bool Bullet::isTrue(ZombieMale Z)
{
    if (mover.x <= Z.returnX() && (mover.y > Z.returnY() && mover.y < Z.returnY() + 80))
        return true;

    else
        return false;
}

void Bullet::Blast()
{
    std::list<SDL_Rect> src = {{39, 394, 92, 95}, {189, 373, 133, 141}, {339, 362, 162, 165}, {506, 362, 162, 165}, {681, 362, 154, 165}, {847, 362, 154, 165}, {1010, 362, 158, 165}};
    for (SDL_Rect &r : src)

    {
        Unit::draw(r, {mover.x - 40, mover.y, 80, 25});
    }
}

int Bullet::returnX()
{
    return mover.x;
}

int Bullet::returnY()
{
    return mover.y;
}