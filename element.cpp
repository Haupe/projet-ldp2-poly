
#include "element.hpp"

#include <iostream>

using std::string;

/* ***************************************************
class Element 
******************************************************/

ElementFixe::ElementFixe(Point center,int w,int h): rectangle{center, w, h, FL_WHITE, FL_BLACK } {}

void ElementFixe::draw(){
    
    //printf("here \n");
}


/*****************************************************
class Player
********************************************************/

/* Player::Player(Point position): position(position){}

void Player::draw(){} */

/*****************************************************
class Player
********************************************************/

Wall::Wall(Point center,int w,int h): ElementFixe{ center, w, h}{}

void Wall::draw(){
    rectangle.draw();
    //std::cout << rectangle.getFillColor() << std::endl;
}