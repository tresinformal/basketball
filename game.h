#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"

class game
{
public:
    game();
    int get_player_nb();

private:
    std::vector<player> players;
};




void test_game();

#endif // GAME_H
