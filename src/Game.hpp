#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
  Game();
  void draw(sf::RenderWindow &);

  sf::Sprite firstShipSprite;

private:
  sf::Texture GameBackgroundTexture;
  sf::Sprite GameBackground;
  sf::Texture firstShipTexture;
};