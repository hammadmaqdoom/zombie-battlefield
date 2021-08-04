#include <iostream>
#include "Score.hpp"

Score::Score():score(0){}

void Score::display()
{
    std::cout<<"Score: "<<score<<std::endl;
}

void Score::increment()
{
    //if adult destroyed -> +5
    //if child destroyed -> +1
}

int Score::check()
{

}