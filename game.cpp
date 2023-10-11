#include "game.h"

game::game()
{

}

void test_game()
{

#ifdef ISSUE_11
    // Here write tests for the game logic
    {
        // 11 - The game contains two players
        game g;
        assert(g.get_player_nb() == 2);
    }
#endif

}
