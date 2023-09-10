
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

sf::VertexArray renerTri(sf::Vector2i winPos, sf::Vector2u winSize)
{
    sf::Vector2f ratio(static_cast<float>(winSize.x), static_cast<float>(winSize.y));
    ratio.x = 300.f / ratio.x;
    ratio.y = 200.f / ratio.y;

    sf::Vector2f pos(static_cast<float>(winPos.x), static_cast<float>(winPos.y));
    //pos.x *= ratio.x;
    //pos.y *= ratio.y;


    // create an array of 3 vertices that define a triangle primitive
    sf::VertexArray triangle(sf::Triangles, 3);

    // define the position of the triangle's points
    triangle[0].position = sf::Vector2f(150.f, 400.f);
    triangle[1].position = sf::Vector2f(500.f, 50.f);
    triangle[2].position = sf::Vector2f(850.f, 400.f);

    triangle[0].position -= pos;
    triangle[1].position -= pos;
    triangle[2].position -= pos;

    triangle[0].position.x *= ratio.x;
    triangle[1].position.x *= ratio.x;
    triangle[2].position.x *= ratio.x;

    triangle[0].position.y *= ratio.y;
    triangle[1].position.y *= ratio.y;
    triangle[2].position.y *= ratio.y;



    // define the color of the triangle's points
    triangle[0].color = sf::Color::Blue;
    triangle[1].color = sf::Color::Red;
    triangle[2].color = sf::Color::Green;

    return triangle;
}

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

