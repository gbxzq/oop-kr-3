#include "Game.hpp"

Game::Game()
{
  if (!GameBackgroundTexture.loadFromFile("images/gameBackground.jpg"))
  {
    return;
  }

  GameBackground.setTexture(GameBackgroundTexture);

  if (!firstShipTexture.loadFromFile("images/ship.png"))
  {
    return;
  }

  firstShipSprite.setTexture(firstShipTexture);
  firstShipSprite.setRotation(90);
}

void Game::draw(sf::RenderWindow &window)
{
  window.draw(GameBackground);
  window.draw(firstShipSprite);
}