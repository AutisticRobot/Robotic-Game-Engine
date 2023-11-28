
#include "../headers/AER/rendering.hpp"

using namespace std;


void *_allRendNodes[16] = {0};
int _allRendNodesCnt = 0;
int _allRendNodesSize = 16;

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

