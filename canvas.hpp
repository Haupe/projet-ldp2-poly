#ifndef _CANVAS_HPP
#define _CANVAS_HPP

#include <string>

#include "map.hpp"

class Canvas {
    //thinking of  making this class an interface
public:
    void draw();
    //void mouseClick(Point mouseLoc);
    //void keyPressed(int keyCode);
};

class CanvasLevel : Canvas {
    Map map;
public:
    CanvasLevel(std::string file_path);
    ~CanvasLevel() = default;

    void draw();
    //void mouseClick(Point mouseLoc);
    //void keyPressed(int keyCode);

};

#endif