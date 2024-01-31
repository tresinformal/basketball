#include "game.h"

#include <cassert>
#include <stdexcept>
#include <iostream>

game::game(const int& screen_height, const int& screen_width) :
    m_screen_width{screen_width}, m_screen_height{screen_height}
{
  players.resize(2);
  m_ball = new ball();
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

void game::tick() {
  constexpr double drop_value{1};

  // drop ball
  if (m_ball != 0) {
    double y = m_ball->get_y();
    if(y < 0) {
        throw std::runtime_error("ball is lower than 0!!!");
    }

    if (y < drop_value) {
      m_ball->set_y(0);
    } else {
      m_ball->set_y(y-drop_value);
    }
  }
}

int get_screen_width(const game& g) {
  return g.get_screen_width();
}

int get_screen_height(const game& g) {
  return g.get_screen_height();
}

bool has_winner(const game& g) {
    return
        g.get_players()[0].get_score() >= 20
     || g.get_players()[1].get_score() >= 20
    ;
}

int get_player_score(const game& g, const int player_index) {
    return g.get_players().at(player_index).get_score();
}

void set_player_score(
    game& g,
    const int player_index,
    const int score
) {
  g.get_players().at(player_index).set_score(score);

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
  // #23: The game finishes when a player reaches 20 points
  {
    game g;
    const int player_index{0};
    const int score{20};
    // Equivalent to g.get_player(player_index).set_score(score);
    set_player_score(g, player_index, score);
    get_player_score(g, player_index);
    assert(get_player_score(g, player_index) == score); // Check ourselves
    assert(has_winner(g));


  }

  // #15: The basketball must follow the laws of gravity

  {
    // we have just done some stuff. we still don't know enough about cpp.

    // create a game
    game g;

    ball b = g.get_ball();

    b.set_y(2.5);
    // get coordinates of the ball
    const double old_y = b.get_y();


    // (assume the ball is in the air)
    // go to next frame
    g.tick();

    // get new coordinates of the ball
    const double new_y = b.get_y();

    std::cout << new_y << std::endl;
    std::cout << old_y << std::endl;

    // the coordinates should differ
    assert(new_y < old_y);
  }
}
