#ifndef CASE_HPP
#define CASE_HPP


#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>
#include <string>
#include <memory>

#include "element.hpp"
#include "shape.hpp"


class Case {
    Rectangle rectangle;
    std::shared_ptr<ElementFixe> content;
    std::string id;
public:
    Case(Point center,int w,int h, std::string content);
    Case() = default;
    ~Case() = default;

    void draw(); 
    std::shared_ptr<ElementFixe> contains(){return content;}
};

#endif