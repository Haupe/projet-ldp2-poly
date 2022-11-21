#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>

#include "levelwindow.hpp"

const int windowWidth = 700;
const int windowHeight = 500;
const double refreshPerSecond = 60;


LevelWindow::LevelWindow() : Fl_Window(500, 500, windowWidth, windowHeight, "Lab 6"),canvas(CanvasLevel{"map.txt"}){
    Fl::add_timeout(1.0 / refreshPerSecond, Timer_CB, this);
    resizable(this);
}

void LevelWindow::draw(){
    Fl_Window::draw();
    canvas.draw();
}

int LevelWindow::handle(int event) {
    return 0;
}


void LevelWindow::Timer_CB(void *userdata) {
    LevelWindow *o = (LevelWindow *)userdata;
    o->redraw();
    Fl::repeat_timeout(1.0 / refreshPerSecond, Timer_CB, userdata);
}