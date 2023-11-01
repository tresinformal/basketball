#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"
#include "objbase.h"

class game
{
public:
    game();
    int get_n_players();
    void get_ball();

private:
    std::vector<player> players;
};

void test_game();

#endif // GAME_H
