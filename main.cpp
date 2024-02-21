#include <SFML/Graphics.hpp>

#include <cassert>
#include <chrono>
#include <iostream>
#include <vector>
#include <string>

#include "ball.h"
#include "game.h"
#include "player.h"
#include "game_view.h"

void test() {
    test_ball();
    test_game();
    test_player();
    #ifndef LOGIC_ONLY
    test_game_view();
    #endif
}


int main() //!OCLINT tests may be long
{

#ifndef NDEBUG
    assert(0.1 > 0.0); //!OCLINT indeed a constant conditional
    test();
#else
    // In release mode, all asserts are removed from the code
    assert(1 == 2);
#endif

#ifdef LOGIC_ONLY
    std::cout << "Compiled with LOGIC_ONLY\n";
#else
    // Cannot show game on GitHub Actions
    game_view v;
    v.exec();
#endif

    std::cout << "Hello Basketballers!\n";
    return 0; // Game completes successfully
}
