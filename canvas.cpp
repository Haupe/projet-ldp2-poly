#include <string>

#include "canvas.hpp"

using std::string;

/********************************

Class Canvas level

********************************/

CanvasLevel::CanvasLevel(string file_path): map(Map{file_path}){}

void CanvasLevel::draw(){
    map.draw();
}
