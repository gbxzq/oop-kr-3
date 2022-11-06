#include <iostream>

#include "MainMenu.hpp"

MainMenu::MainMenu(float width, float height)
{
  if (!font.loadFromFile("fonts/arial.ttf"))
  {
    std::cout << "Error when loading a font" << std::endl;
    return;
  }

  playText.setFont(font);
  playText.setFillColor(sf::Color::Red);
  playText.setString("Play");
  playText.setCharacterSize(70);
  playText.setPosition(335, 250);

  authorText.setFont(font);
  authorText.setFillColor(sf::Color::White);
  authorText.setString("Author: Andrii Halaiko SP-336");
  authorText.setCharacterSize(32);
  authorText.setPosition(230, 450);

  if (!MainMenuBackgroundTexture.loadFromFile("images/mainMenuBackground.jpg"))
  {
    std::cout << "Error when loading a texture" << std::endl;
    return;
  }

  MainMenuBackground.setTexture(MainMenuBackgroundTexture);
}

void MainMenu::draw(sf::RenderWindow &window)
{
  window.draw(MainMenuBackground);
  window.draw(playText);
  window.draw(authorText);
}