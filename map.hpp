#ifndef MAP_HPP
#define MAP_HPP

#include <string>
#include <vector>

#include "case.hpp"


class Map{
    std::vector<std::vector<Case>> matrix;
    std::vector<std::string> parser(std::string delimiter, std::string input);
public:
    Map() = default ;
    Map(std::string file_path);

    void draw();
};

#endif