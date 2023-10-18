#include "game.h"

game::game()
{

}

void test_game()
{
    // Here write tests for the game logic
    {
#ifdef ISSUE_11
        // 11 - The game contains two players
        game g;
        assert(g.get_player_nb() == 2);
#endif
    }
}
