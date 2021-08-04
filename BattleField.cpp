#include "BattleField.hpp"
#include <iostream>

BattleField::BattleField(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}

void BattleField::drawObjects()
{
    // call draw functions of all the objects here

    for (Bullet *&b : bullets)
    {
        b->draw();
    }

    for (Tank *&t : tanks)
    {
        t->draw();
    }
    for (Boom *&bm : booms)
    {
        bm->draw();
    }
    booms.clear();
    for (ZombieChild *&z : zChild)
    {
        z->draw();
    }

    for (ZombieMale *&z : zMale)
    {
        z->draw();
    }

    for (ZombieFemale *&z : zFemale)
    {
        z->draw();
    }

    wiggleAnimation();
}
void BattleField::DisplayTanks()
{
    int x = 0;
    int y = 37;
    for (int i = 0; i < 6; i++)
    {
        tankBody tb(gRenderer, assets, {x, y, 120, 46});
        tankTurret tt(gRenderer, assets, {x + 30, y, 120, 46});
        Tank *tank = new Tank(tb, tt);
        tanks.push_back(tank);
        y += 50 + 46;
    }
}

void BattleField::drawZombies()
{ //draws zombies on the right most
    int x = 1000;
    int y = 37;
    for (int i = 0; i < 6; i++)
    {
        ZombieMale *zM = new ZombieMale(gRenderer, assets, {x, y, 40, 80});
        zM->UpdateY(y);
        zMale.push_back(zM);
        y += 50 + 46;
    }
}

void BattleField::createObject(int x, int y)
{
    tankBody tb1(gRenderer, assets, {x, y, 240, 75});
    tankTurret tt1(gRenderer, assets, {x + 30, y, 240, 75});
    Tank *tank = new Tank(tb1, tt1);
    tanks.push_back(tank);
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}

void BattleField::fire()
{
    // provide code to fire all of the tanks.

    for (Tank *&t : tanks)
    {
        tankTurret tt = t->returnTankturret();

        //Turret's xy corrdinates
        int x = tt.returnX();
        int y = tt.returnY();

        //creating bullet from end of turret
        Bullet *b1 = new Bullet(gRenderer, assets, {x + 120, y + 23, 20, 6}); //where 120 is the width of turret
        bullets.push_back(b1);

        t->fire(true);

        Boom *bm1 = new Boom(gRenderer, assets, {x + 120, y + 23, 20, 12});

        booms.push_back(bm1);
        std::cout << "Bullet fired from tank at: " << x + 120 << " -- " << y + 20 << std::endl;
    }
}

void BattleField::Onefire(int x, int y)
{
    Tank *tankptr = new Tank;
    for (Tank *&t : tanks)
    {
        if (x <= 120 && (y > t->returnY() && y < (t->returnY() + 46)))
        {
            tankptr = t;
            std::cout << "Mouse clicked at: " << x << " , " << y << std::endl;
            std::cout << "Tank at: " << t->returnX() << " , " << t->returnY() << std::endl;
            tankTurret tt = tankptr->returnTankturret();

            //Turret's xy corrdinates
            int xc = tt.returnX();
            int yc = tt.returnY();

            std::cout << "Turret: " << xc << " , " << yc << std::endl;

            //creating bullet from end of turret
            Bullet *b1 = new Bullet(gRenderer, assets, {xc + 120, yc + 23, 20, 6}); //where 120 is the width of turret
            bullets.push_back(b1);

            //Boom animation
            t->fire(true);

            Boom *bm1 = new Boom(gRenderer, assets, {xc + 120, yc + 23, 20, 12});

            booms.push_back(bm1);
        }
        else
        {
            tankptr = NULL;
        }
    }
    //only the tank that the user click on fires bullet
    delete tankptr;
}
void BattleField::wiggleAnimation()
{
    for (Tank *&t : tanks)
    {
        t->fire(false);
    }
}

// void BattleField::collision(ZombieChild Z)
// {
//     for (Bullet &b : bullets)
//     {
//         for (ZombieChild &Z : zChild) //check if hit zombie
//         {
//             if (b.isTrue(Z) != true)
//                 b.draw();
//             else
//                 b.Blast();
//         }
//     }
// }

// void BattleField::collision(ZombieFemale Z)
// {
//     for (Bullet &b : bullets)
//     {
//         for (ZombieFemale &Z : zFemale) //check if hit zombie
//         {
//             if (b.isTrue(Z) != true)
//                 b.draw();
//             else
//                 b.Blast();
//         }
//     }
// }
void BattleField::collision()
{
    for (Bullet* &b : bullets)
    {
        for (ZombieMale* &Z : zMale) //check if hit zombie
        {
            if (b->isTrue(*Z) == true)
            {std::cout << "Blast!, " << Z->returnX() << ", " << Z->returnY() << std::endl;
                b->Blast();
                }
            else
            std::cout << "No blast, " << Z->returnX() << ", " << Z->returnY() << std::endl;
            //   std::cout << "No blast, ";
            //     std::cout << Z << std::endl;
  
        }
    }
}



bool BattleField::GameOverCollision()
{
    for (ZombieMale *&zM : zMale)
    {
        for (Tank *&t : tanks)
        {
            if (t->returnX() == zM->returnX() && (t->returnY() > zM->returnY() && t->returnY() < zM->returnY() + 80))
            {
                return true;
            }
            else
                return false;
        }
    }
}

// std::ostream& BattleField::operator<<(std::ostream& output,   ZombieMale* &zm){
//     output << zm->returnX() << ", " << zm->returnY();
//     return output;
// }

BattleField::~BattleField()
{
    for (Bullet *&b : bullets)
    {
        delete b;
    }

    for (ZombieMale *&zM : zMale)
    {
        delete zM;
    }
    for (Boom *&b : booms)
    {
        delete b;
    }
    for (Tank *&t : tanks)
    {
        delete t;
    }

    for (ZombieFemale *&zF : zFemale)
    {
        delete zF;
    }

    for (ZombieChild *&zC : zChild)
    {
        delete zC;
    }
}
