
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <fstream>
#include <string>
#include "rendering.h"

using namespace std;


void textMine(sf::Text &text, sf::Font &font)
{
    if (!font.loadFromFile("resources/fonts/Minecraftia.ttf"))
    {
        cout << "failed loading file" << endl;
        // error...
    }



    text.setString("faik");
    // set the character size
    text.setCharacterSize(24); // in pixels, not points!
    // set the color
    text.setFillColor(sf::Color::White);
    // set the text style
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);
}

