#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>
#include <string>


struct Point{
    int x;
    int y;
};

class Rectangle {
  Point    center;
  int      w, h;
  Fl_Color fillColor, frameColor;

 public:
  Rectangle(Point center, int w, int h, Fl_Color frameColor = FL_BLACK,
            Fl_Color fillColor = FL_WHITE);
  void     draw();
  void     setFillColor(Fl_Color newFillColor);
  Fl_Color getFillColor() ;
  void     setFrameColor(Fl_Color newFrameColor);
  Fl_Color getFrameColor() ;
  void     setWidth(int neww) ;
  void     setHeight(int newh) ;
  int      getWidth() ;
  int      getHeight() ;
  bool     contains(Point p);
  Point    getCenter() ;
};


#endif