#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"

class game
{
public:
    game();
    int get_n_players();

private:
    std::vector<player> players;
};

void test_game();

#endif // GAME_H
