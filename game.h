#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"

class game
{
public:
    game();
    std::vector<player> players(2);
    int get_player_nb();
};

#endif // GAME_H
