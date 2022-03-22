#include "Notebook.hpp"
#include "Direction.hpp"
#include <string>

using ariel::Direction;
using namespace ariel;
using namespace std;

Notebook::Notebook(){
    return;
}

void Notebook::write(unsigned int page, unsigned int row, unsigned int column, Direction direction, string text){
    return;
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int column, Direction direction, unsigned int length){
    return "";
}

void Notebook::erase(unsigned int page, unsigned int row, unsigned int column, Direction direction, unsigned int length){
    return;
}

void Notebook::show(unsigned int length){
    return;
}