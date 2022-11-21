
#include "shape.hpp"
#include <array>

using std::array;
/***********************************************
Class Rectangle
*************************************************/


Fl_Color Rectangle::getFillColor() { return fillColor; }
Fl_Color Rectangle::getFrameColor() { return frameColor; }
void     Rectangle::setWidth(int neww) { w = neww; }
void     Rectangle::setHeight(int newh) { h = newh; }
int      Rectangle::getWidth() { return w; }
int      Rectangle::getHeight() { return h; }
Point    Rectangle::getCenter() { return center; }


Rectangle::Rectangle(Point center, int w, int h, Fl_Color frameColor,
                     Fl_Color fillColor)
    : center{center},
      w{w},
      h{h},
      fillColor{fillColor},
      frameColor{frameColor} {}


void Rectangle::draw() {
  array<Point, 5> points{
      Point{center.x - w / 2, center.y - h / 2},
      Point{center.x - w / 2, center.y + h / 2},
      Point{center.x + w / 2, center.y + h / 2},
      Point{center.x + w / 2, center.y - h / 2},
      Point{center.x - w / 2, center.y - h / 2}
  };
  fl_color(fillColor);
  fl_begin_polygon();
  for (auto &point : points) {
    fl_vertex(point.x, point.y);
  }
  fl_end_polygon();
  fl_color(frameColor);
  fl_begin_line();
  for (auto &point : points) {
    fl_vertex(point.x, point.y);
  }
  fl_end_line();
}


void Rectangle::setFillColor(Fl_Color newFillColor) {
  fillColor = newFillColor;
}


void Rectangle::setFrameColor(Fl_Color newFrameColor) {
  frameColor = newFrameColor;
}


bool Rectangle::contains(Point p) {
  return p.x >= center.x - w / 2 && p.x < center.x + w / 2 &&
         p.y >= center.y - h / 2 && p.y < center.y + h / 2;
}