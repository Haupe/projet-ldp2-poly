#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include <string>
#include <memory>
#include "shape.hpp"


/* ***************************************************
class Element 
******************************************************/
class  ElementFixe {
protected : 
    Rectangle rectangle;
public:
    ElementFixe() =default;
    ElementFixe(Point center,int w,int h);

    virtual void draw();
};


/*****************************************************
class Player
********************************************************/
/* class Player : public Element {
    Point position;
public:
    Player( Point position);
    
    
    void draw();
}; */

/*****************************************************
class Wall
********************************************************/

class Wall : public ElementFixe {
public:
    Wall(Point center,int w,int h);

    void draw() ;
};

#endif 