#include "Notebook.hpp"
#include "Direction.hpp"
#include <string>

using ariel::Direction;
using namespace ariel;
using namespace std;

Notebook::Notebook(){
}

void Notebook::write(int page, int row, int column, Direction direction, const string& text){
}

string Notebook::read(int page, int row, int column, Direction direction, int length){
    return "";
}

void Notebook::erase(int page, int row, int column, Direction direction, int length){
}

void Notebook::show(int page){
}