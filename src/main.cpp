#include <iostream>
#include <SFML/Graphics.hpp>

#include "MainMenu.hpp"
#include "Game.hpp"

int main()
{
  sf::RenderWindow WMainMenu(sf::VideoMode(800, 600), "Game");
  MainMenu mainMenu;
  Game game;
  bool isGameStarted = false;

  while (WMainMenu.isOpen())
  {
    sf::Event event;
    while (WMainMenu.pollEvent(event))
    {
      switch (event.type)
      {
      case sf::Event::Closed:
        WMainMenu.close();
        break;

      case sf::Event::KeyPressed:
        if (event.key.code == sf::Keyboard::D)
        {
          game.firstShipSprite.move(3, 0);
          break;
        }
        if (event.key.code == sf::Keyboard::W)
        {
          game.firstShipSprite.move(0, -3);
          break;
        }
        if (event.key.code == sf::Keyboard::A)
        {
          game.firstShipSprite.move(-3, 0);
          break;
        }
        if (event.key.code == sf::Keyboard::S)
        {
          game.firstShipSprite.move(0, 3);
          break;
        }
        break;

      case sf::Event::MouseButtonPressed:
        if (event.mouseButton.button == sf::Mouse::Left && event.mouseButton.x >= 333 && event.mouseButton.x <= 467 && event.mouseButton.y >= 271 && event.mouseButton.y <= 330)
        {
          isGameStarted = true;
        }
        break;

      default:
        break;
      }
    }

    WMainMenu.clear();
    game.draw(WMainMenu);
    WMainMenu.display();
  }

  return 0;
}