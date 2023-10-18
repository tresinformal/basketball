#include "game.h"

#include <cassert>

game::game()
{
    players.resize(2);
}

int game::get_player_nb() {
    return players.size();
}

void test_game()
{
    // Here write tests for the game logic
    {
        // 11 - The game contains two players
        game g;
        assert(g.get_player_nb() == 2);
    }
}
