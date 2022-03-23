#include "Notebook.hpp"
#include "Direction.hpp"
#include <string>

using ariel::Direction;
using namespace ariel;
using namespace std;

Notebook::Notebook(){
}

void Notebook::write(unsigned int page, unsigned int row, unsigned int column, Direction direction, const string& text){
}

string Notebook::read(unsigned int page, unsigned int row, unsigned int column, Direction direction, unsigned int length){
    return "";
}

void Notebook::erase(unsigned int page, unsigned int row, unsigned int column, Direction direction, unsigned int length){
}

void Notebook::show(unsigned int page){
}