#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"
#include "ball.h"

class game {

public:
    game(const int& screen_height = 720, const int& screen_width = 1280);
    int get_n_players();
    ball get_ball() const;
    int get_screen_width() const;
    int get_screen_height() const;

    /// Read-only version of get_players
    const auto& get_players() const noexcept { return players; }

    /// Modifyable-players version of get_players
    auto& get_players() noexcept { return players; }

private:
    std::vector<player> players;
    int m_screen_width;
    int m_screen_height;
};

int get_screen_width(const game& g);

int get_screen_height(const game& g);

bool has_winner(const game& g);

int get_player_score(const game& g, const int player_index);

void set_player_score(game& g, const int player_index, const int score);

void test_game();

#endif // GAME_H
