#ifndef _LEVELWINDOW_HPP
#define _LEVELWINDOW_HPP

#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>

#include "canvas.hpp"

class LevelWindow : public Fl_Window {
    CanvasLevel canvas;

public:
    LevelWindow() ;
    void draw() override ;
    int handle(int event) override ;
    static void Timer_CB(void *userdata) ;
};

#endif