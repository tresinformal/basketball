#include "game.h"

#include <cassert>

game::game()
{
  players.resize(2);
}

int game::get_n_players() {
  return players.size();
}

void test_game()
{
  // Here write tests for the game logic
  {
    // 11 - The game contains two players
    game g;
    assert(g.get_n_players() == 2);
  }
  //#define FIX_ISSUE_14
  #ifdef FIX_ISSUE_14
  {
    const game g;
    g.get_ball();
  }
  #endif // FIX_ISSUE_14
}
