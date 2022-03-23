#include "doctest.h"
#include "Notebook.hpp"
#include <string>
#include <algorithm>

using ariel::Direction;
using namespace std;
using namespace ariel;

TEST_CASE("Good Input"){
    Notebook nb;
    Direction h = Direction::Horizontal;
    Direction v = Direction::Vertical;

    CHECK(nb.read(0, 0, 0, h, 10) == "__________");

    CHECK_NOTHROW(nb.write(0, 0, 0, h, "mind"));
    CHECK_NOTHROW(nb.write(0, 1, 0, h, "idea"));
    CHECK_NOTHROW(nb.write(0, 2, 0, h, "neat"));
    CHECK_NOTHROW(nb.write(0, 3, 0, h, "data"));

    CHECK(nb.read(0, 0, 0, v, 4) == "mind");
    CHECK(nb.read(0, 0, 1, v, 4) == "idea");
    CHECK(nb.read(0, 0, 2, v, 4) == "neat");
    CHECK(nb.read(0, 0, 3, v, 4) == "data");

    CHECK_NOTHROW(nb.erase(0, 1, 0, h, 4));
    CHECK_NOTHROW(nb.erase(0, 1, 3, v, 3));
    CHECK_NOTHROW(nb.erase(0, 2, 2, h, 1));

    CHECK(nb.read(0, 0, 0, v, 4) == "m~nd");
    CHECK(nb.read(0, 0, 1, v, 4) == "~~~~");
    CHECK(nb.read(0, 0, 2, v, 4) == "n~~~");
    CHECK(nb.read(0, 0, 3, v, 4) == "d~t~");
}

TEST_CASE("Bad Input"){
    Notebook nb;
    Direction h = Direction::Horizontal;

    CHECK_THROWS(nb.write(1, 1, 101, h, "a"));
    CHECK_THROWS(nb.write(1, 1, 95, h, "0123456789"));
    CHECK_THROWS(nb.erase(1, 1, 222, h, 1));
    CHECK_THROWS(nb.erase(1, 1, 94, h, 15));
    CHECK_THROWS(nb.read(1, 1, 321, h, 1));
    CHECK_THROWS(nb.read(1, 1, 50, h, 200));

    nb.write(0, 0, 0, h, "a");
    CHECK_THROWS(nb.write(0, 0, 0, h, "a"));
    nb.erase(0, 0, 0, h, 1);
    CHECK_THROWS(nb.erase(0, 0, 0, h, 1));
}