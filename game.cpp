#include "game.h"

#include <cassert>

game::game()
{
  players.resize(2);
}

int game::get_n_players()
{
  return players.size();
}

void game::get_ball() const
{
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

  //#define FIX_ISSUE_26
  #ifdef FIX_ISSUE_26
  {
    const game g;
    get_screen_size(g);
  }
  #endif // FIX_ISSUE_26

  //#define FIX_ISSUE_25
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
