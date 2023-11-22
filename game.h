#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"
#include "ball.h"

class game {

public:
    game();
    int get_n_players();
    ball get_ball() const;


private:
    std::vector<player> players;
};
void set_player_score(game g, int player_index, int score);

int get_player_score(game g, int player_index);

bool has_winner(game g);

void test_game();

#endif // GAME_H
