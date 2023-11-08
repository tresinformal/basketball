#include "player.h"
#include <cassert>
player::player() {

}

void test_player() {
    // Here write tests for players
    // 17 - The player has a score counting system
    const player player_g;
    const int expected_player_score = 0;
    const int player_score = player_g.get_score();
    //check player score
    assert(expected_player_score == player_score);


}
