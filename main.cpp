#include <random>

#include "levelwindow.hpp"

void init(){
    
}

int main(int argc, char *argv[]) {
    srand(time(0));
    LevelWindow window;
    window.show(argc, argv);
    return Fl::run();
}