#ifndef GAME_VIEW_H
#define GAME_VIEW_H

#include "game.h"
#include <SFML/Graphics.hpp>

/// The game's main window
/// Displays the game class
class game_view
{
public:
    game_view(
        sf::Vector2f window_size = sf::Vector2f(1280, 720)
    );

    /// Show one frame
    void show() noexcept;

    /// Run the game until the window is closed
    void exec() noexcept;

    /// Process one timestep
    void tick() { m_game.tick(); }

    ///Gets a const ref to m_game
    const game& get_game() const noexcept {return m_game; }

    // Get the size of the window
    const sf::Vector2f& get_window_size() const noexcept { return m_window_size; }

    // Get the window's state, for testing purposes only
    bool is_window_open() const { return m_window.isOpen(); }

    ///Gets constant ref to sf::RenderWindow m_window
    const sf::RenderWindow& get_window() const noexcept {return m_window; }

private:
    /// Processes events in game and ouputs false if quit
    /// is inputted
    bool process_events();

    /// The game logic
    game m_game;

    // The size of the window to draw
    sf::Vector2f m_window_size;

    /// The window to draw to
    sf::RenderWindow m_window;
};

void test_game_view();

#endif // GAME_VIEW_H
