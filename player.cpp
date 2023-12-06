#include "player.h"
#include <cassert>
player::player(): m_score{0}, m_line_x_position{0} {

}

int player::get_score() const {
    return m_score;
}

void player::set_position(double line_x_position) {
    m_line_x_position{line_x_position};
}

void player::score(double line_x_position) {
    if (m_line_x_position < line_x_position) {
        m_score += 2;
    } else {
        m_score += 3;
    }
}

void test_player() {
    // Here write tests for players
    {
        // 17 - The player has a score counting system
        const player player_g;
        const int expected_player_score = 0;
        const int player_score = player_g.get_score();
        //check player score
        assert(expected_player_score == player_score);
    }

    {
        // 39 - A player that scores increase its score count
        // by 2 points if inside the line
        // by 3 points if outside the line

        player p;
        const double line_x_position = 30.0; // arbitrary value

        // the player is inside the line
        p.set_position(line_x_position - 1.0); // inside is below the line's x, arbitrary

        // it scores
        p.score(line_x_position);
        // now its score should be 2
        assert(p.get_score() == 2);
        // it scores again
        p.score(line_x_position);
        // now its score should be 4
        assert(p.get_score() == 4);
        // the player is now outside the line
        p.set_position(line_x_position + 1.0);

        // it scores
        p.score(line_x_position);
        // its score should now be 7
        assert(p.get_score() == 7);
    }
    // more tests...
}
