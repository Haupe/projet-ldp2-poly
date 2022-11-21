#include "map.hpp"

#include <vector>
#include <fstream> 
#include <string>
#include <iostream>

#include "case.hpp"

using std::vector;
using std::string;

vector<string> Map::parser(string delimiter, string input){
    size_t pos = 0;
    vector<string> output;
    while ((pos = input.find(delimiter))!=string::npos){
        // assign the position of the next delimiter and check if it's the same position from the previous one,
        // if it is it means it's the last one.
        output.push_back(input.substr(0, pos));
        input.erase(0, pos + delimiter.length());
        // erase the substring + the delimiter from the input
        // (it's a copy of the value given in parameter so it's fine)
    }
    output.push_back(input);  // puts the substring after the last delimiter to the output
    return output;
}

Map::Map(string file_path){
    std::ifstream file(file_path);
    string line;
    int column_count = 0;
    while(getline(file, line)){
        vector<string> row = parser(" ", line);
        int row_count = 0;
        matrix.push_back(vector<Case>{});
        for(auto &elem : row){
            matrix[column_count].push_back(Case{Point{100 + 50*row_count, 100 + 50*column_count}, 50, 50, elem});
            row_count ++;
        }
        column_count ++;
    }
    file.close();
}

void Map::draw() {
    for (unsigned col=0; col<matrix.size(); col++){
        for (unsigned  row=0; row<matrix[0].size(); row++){
            matrix[col][row].draw();
        }
    }
}