#include "player.h"
#include <cassert>

player::player() :
  m_score{0},
  m_x{0.0},
  m_y{0.0},
  m_line_x_position{0}
{


}

int player::get_score() const noexcept {
    return m_score;
}

void player::set_score(const int new_score) {
    assert(new_score >= 0);
    m_score = new_score;
}

void player::set_position(double line_x_position) {
    m_line_x_position = line_x_position;
}

void player::score(const double line_x_position) {
    if (m_line_x_position <= line_x_position) {
        m_score += 2;
    } else {
        m_score += 3;
    }
}

void test_player() {
    // Here write tests for player

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

    // 17 - The player has a score counting system
    const player player_g;
    const int expected_player_score{0};
    const int player_score{player_g.get_score()};

    //check player score
    assert(expected_player_score == player_score);

    // 41 A player has a position in continuous space
    const double x{player_g.get_x()};
    const double y{player_g.get_y()};
    assert(x == 0.0);
    assert(y == 0.0);
    {
        player p;
        const int some_score{3}; // just a value, can be any between zero and 19 (inclusive)
        p.set_score(some_score);
        assert(p.get_score() == some_score);
    }

    // 68 A player has a hair color
    {
        player p;
        // A player's hair is black by default
        const color black; // tune the input as needed to get the right color
        assert(p.get_hair_color() == black);

        // Hair color can be set at construction
        const color red;
        p = player(red);
        assert(p.get_hair_color() == red);

        // Hair color can be set e.g. through options
        const color white;
        assert(p.get_hair_color() == white);
    }
}





