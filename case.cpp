#include "case.hpp"
#include "shape.hpp"

#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>

#include <array>
#include <string>    
#include <iostream>

using std::string;


Case::Case(Point center,int w,int h, string content): rectangle{center, w, h}, content(std::shared_ptr<ElementFixe>(new ElementFixe{center, w, h})), id(content){
    if (!strcmp(content.c_str(), "V")){
        rectangle.setFillColor(FL_WHITE);
        rectangle.setFrameColor(FL_BLACK);
    }else if (!strcmp(content.c_str(), "M")){
        
        this->content = std::shared_ptr<ElementFixe>(new ElementFixe{center, w, h});
    }

}

void Case::draw(){
    if (!strcmp(id.c_str(), "M") || !strcmp(id.c_str(), "B") ){
        content->draw();
    }else {
        rectangle.draw();
    }
}