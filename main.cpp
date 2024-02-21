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
    // TODO: populate with test functions
    test_ball();
    test_game();
    test_player();
}


int main(int argc, char **argv) //!OCLINT tests may be long
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
#endif

    const std::vector<std::string> args(argv, argv + argc);

    // We've already tested, so the program is done
    if (args.size() > 1 && args[1] == "--test")
        return 0;

    else  if (args.size() > 1 && args[1] == "--profile")
    {
#ifndef NDEBUG
        perror("Do not profile in debug mode");
        abort();
#else
#ifndef LOGIC_ONLY // that is, not compiled on GitHub Actions
        using namespace std::chrono;
        game_view v;
        double max_duration = 10;
        auto start = high_resolution_clock::now();
        duration<double> time = high_resolution_clock::now() - start;
        while( time.count() < max_duration)
        {
            v.process_events();
            v.tick();
            v.show();
            time =  high_resolution_clock::now() - start;
        }
        std::cout << time.count() << '\n';
#endif // LOGIC_ONLY // that is, not compiled on GitHub Actions
#endif
    }
#ifndef LOGIC_ONLY // don't run game on Github Actions

  // Default view mode

  game_view v;
  v.exec();

  std::cout << "Hello Basketballers!\n";
  return 0; // Game completes successfully

#endif // LOGIC_ONLY
}
