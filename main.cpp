#include <SFML/Graphics.hpp>

#include <cassert>
#include <chrono>
#include <iostream>
#include <vector>
#include <string>

#include "ball.h"
#include "game.h"
#include "player.h"

void test() {
    // TODO: populate with test functions
    test_ball();
    test_game();
    test_player();
}

int main(int argc, char **argv) {
    // Do something with args to not get a warning
    const std::vector<std::string> args(argv, argv + argc);
#ifndef NDEBUG
    assert(0.1 > 0.0); //!OCLINT indeed a constant conditional
    test();
#else
    // In release mode, all asserts are removed from the code
    assert(1 == 2);
#endif

    std::cout << "Hello Basketballers!\n";
        return 0; // Game completed succesfully
}
