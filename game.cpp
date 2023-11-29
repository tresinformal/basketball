#include "game.h"

#include <cassert>

game::game(const int& screen_height, const int& screen_width) :
    m_screen_width{screen_width}, m_screen_height{screen_height}
{
  players.resize(2);
}

int game::get_n_players()
{
  return players.size();
}

ball game::get_ball() const
{
  ball b;
  return b;
}

int game::get_screen_width() const {
  return m_screen_width;
}

int game::get_screen_height() const {
  return m_screen_height;
}

int get_screen_width(const game& g) {
  return g.get_screen_width();
}

int get_screen_height(const game& g) {
  return g.get_screen_height();
}

void test_game()
{
  // Here write tests for the game logic
  {
    // 11 - The game contains two players
    game g;
    assert(g.get_n_players() == 2);
  }
  // #14
  {
    const game g;
    g.get_ball();
  }
  // #30
  {
    const game g;
    g.get_ball().get_x();
    g.get_ball().get_y();
  }

  {
    const game g;
    get_screen_width(g);
    get_screen_height(g);
  }

  #define FIX_ISSUE_25
  #ifdef FIX_ISSUE_25
  {
    const game g;
    const auto screen_size{get_screen_size(g)};
    const auto ball_coordinat{get_ball_center_coordinat(g)};
    const auto screen_width{get_width(screen_size)};
    const auto half_screen_width{screen_width / 2.0};
    const auto ball_center_x{get_x(ball_coordinat)};
    const auto ball_center_y{get_y(ball_coordinat)};

    // Don't: never compare floating point values
    // assert(ball_center_x == half_screen_width);
    // assert(ball_center_y == 0.0);
    // Do: add some room for rounding errors
    assert(is_more_or_less_equal(ball_center_x, half_screen_width));
    assert(is_more_or_less_equal(ball_center_y, 0.0));
  }
  #endif // FIX_ISSUE_25
}
