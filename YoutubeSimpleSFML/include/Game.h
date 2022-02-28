#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
/**
 * @brief Class that acts as game engine.
 * Wrapper class.
 *
 */
class Game {
private:
  // Variables
  // Window
  sf::RenderWindow *window;
  sf::VideoMode videoMode;
  sf::Event ev;

  // Private functions
  void initVariables();
  void initWindow();

public:
  // Constructors / Destructors
  Game();
  virtual ~Game();

  // Accessors
  const bool running() const;

  // Functions
  void pollEvents();
  void update();
  void render();
};