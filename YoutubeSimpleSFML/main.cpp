#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main() {
  /**
   * @brief Window
   *
   */
  sf::RenderWindow window(sf::VideoMode(640, 480), "My first game",
                    sf::Style::Titlebar | sf::Style::Close);
  sf::Event ev;

  /**
   * @brief Game Loop
   *
   */
  while (window.isOpen()) {
    // Event polling
    while (window.pollEvent(ev)) {
      switch (ev.type) {
      case sf::Event::Closed:
        window.close();
        break;

      case sf::Event::KeyPressed:
        if (ev.key.code == sf::Keyboard::Escape) {
          window.close();
        }
        break;

      default:
        break;
      }
    }

    // Update



    // Render
    window.clear(sf::Color::Blue); // Clear old frame

    // Draw your game

    window.display(); // Tell the app that window is done drawing
  }

  // End of 
  return 0;
}