
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;

int frame = 0;
int main()
{
    sf::Font font;
    if (!font.loadFromFile("../data/fonts/Minecraftia.ttf"))
    {
        // error...
    }

    sf::Text text;
    // select the font
    text.setFont(font); // font is a sf::Font
    // set the character size
    text.setCharacterSize(24); // in pixels, not points!
    // set the color
    text.setFillColor(sf::Color::Red);
    // set the text style
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);



    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    // create an array of 3 vertices that define a triangle primitive
    sf::VertexArray triangle(sf::Triangles, 3);

    // define the position of the triangle's points
    triangle[0].position = sf::Vector2f(10.f, 100.f);
    triangle[1].position = sf::Vector2f(50.f, 10.f);
    triangle[2].position = sf::Vector2f(100.f, 100.f);

    // define the color of the triangle's points
    triangle[0].color = sf::Color::Blue;
    triangle[1].color = sf::Color::Red;
    triangle[2].color = sf::Color::Green;

    // no texture coordinates here, we'll see that later

    while (window.isOpen())
    {
        text.setString(std::to_string(frame));
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(triangle);
        window.draw(text);

        window.display();
        frame++;
    }

    return 0;
}