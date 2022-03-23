#include "Direction.hpp"
#include <string>

using ariel::Direction;
using namespace std;

namespace ariel{
    class Notebook{
        public:
            Notebook();
            void write(unsigned int page, unsigned int row, unsigned int column, Direction direction, const string& text);
            string read(unsigned int page, unsigned int row, unsigned int column, Direction direction, unsigned int length);
            void erase(unsigned int page, unsigned int row, unsigned int column, Direction direction, unsigned int length);
            void show(unsigned int page);
    };
}