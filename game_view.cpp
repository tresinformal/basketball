#include "game_view.h"

#ifndef LOGIC_ONLY // so this is NOT compiled on GitHub Actions

#include "game.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <sstream>

game_view::game_view(sf::Vector2f window_size) :
    m_game(),
    m_window_size{window_size},
    m_window(
        sf::VideoMode(m_window_size.x, m_window_size.y),
        "tresinformal game"
        )
{
    // something
}

void game_view::exec() noexcept
{
    // Open window
    m_window.create(
        sf::VideoMode(m_window_size.x, m_window_size.y),
        "tresinformal game"
        );

    while (m_window.isOpen())
    {
        show();
    }
}

void game_view::show() noexcept
{
    // Start drawing the new frame, by clearing the screen
    m_window.clear();

    // Display all shapes
    m_window.display();
}

void test_game_view() //!OCLINT tests may be many
{
#ifndef NDEBUG // no tests in release
    {
        // Show the game for one frame
        // (there will be a member function 'exec' for running the game)
        game_view v;
        v.show();
    }
#endif //NDEBUG
}

#endif // LOGIC_ONLY
