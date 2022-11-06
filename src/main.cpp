#include <iostream>
#include <SFML/Graphics.hpp>

#include "MainMenu.hpp"

int main()
{
  sf::RenderWindow WMainMenu(sf::VideoMode(800, 600), "Main menu");
  MainMenu mainMenu(WMainMenu.getSize().x, WMainMenu.getSize().y);

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

      case sf::Event::MouseButtonPressed:
        if (event.mouseButton.button == sf::Mouse::Left && event.mouseButton.x >= 333 && event.mouseButton.x <= 467 && event.mouseButton.y >= 271 && event.mouseButton.y <= 330)
        {
          std::cout << "the left button was pressed" << std::endl;
          std::cout << "mouse x: " << event.mouseButton.x << std::endl;
          std::cout << "mouse y: " << event.mouseButton.y << std::endl;
        }
        break;

      default:
        break;
      }
    }

    WMainMenu.clear();
    mainMenu.draw(WMainMenu);
    WMainMenu.display();
  }

  return 0;
}