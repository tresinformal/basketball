#include "player.h"
#include <cassert>
player::player(): m_score{0} {

}

int player::get_score() const {
    return m_score;
}

void test_player() {
    // Here write tests for players
    // 17 - The player has a score counting system
    const player player_g;
    const int expected_player_score = 0;
    const int player_score = player_g.get_score();
    //check player score
    assert(expected_player_score == player_score);

    // 39 - A player that scores increase its score count
    player p;
    bool is_player_inside_line;
    // if player inside line
    // should score 2 points
    // if outside line
    // should score 3 points
    p.score();
}
