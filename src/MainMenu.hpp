#pragma once

#include <SFML/Graphics.hpp>

class MainMenu
{
public:
  MainMenu();

  void draw(sf::RenderWindow &window);

private:
  sf::Text playText;
  sf::Font font;
  sf::Text authorText;
  sf::Texture MainMenuBackgroundTexture;
  sf::Sprite MainMenuBackground;
};