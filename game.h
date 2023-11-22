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

    /// Read-only version of get_players
    const auto& get_players() const noexcept { return players; }

    /// Modifyable-players version of get_players
    auto& get_players() noexcept { return players; }

private:
    std::vector<player> players;
};


bool has_winner(const game& g);

int get_player_score(const game& g, const int player_index);

void set_player_score(game& g, const int player_index, const int score);

void test_game();

#endif // GAME_H
