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

private:
    std::vector<player> players;
    int m_screen_width;
    int m_screen_height;
};

int get_screen_width(const game& g);

int get_screen_height(const game& g);

void test_game();

#endif // GAME_H
