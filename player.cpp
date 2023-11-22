#include "player.h"
#include <cassert>
player::player(): m_score{0} {

}

int player::get_score() const {
    return m_score;
}

void test_player()
{
    {
        // Here write tests for players
        // 17 - The player has a score counting system
        const player player_g;
        const int expected_player_score = 0;
        const int player_score = player_g.get_score();
        //check player score
        assert(expected_player_score == player_score);
    }
    // can set and get the score
    {
        player p;
        const int some_score{3}; // just a value, can be any between zero and 19 (inclusive)
        p.set_score(some_score);
        assert(p.get_score() == some_score);
    }
}
