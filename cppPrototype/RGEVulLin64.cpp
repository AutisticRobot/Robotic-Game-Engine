
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

using namespace std;

int frame = 0;
sf::Vector2u winSize(300,200);//unsigned int Vector2 for window size
sf::Vector2i winPos(0,0);//unsigned int Vector2 for window size
sf::VertexArray renerTri();

int main()
{
    sf::Font font;
    if (!font.loadFromFile("resources/fonts/Minecraftia.ttf"))
    {
        // error...
    }

    sf::Text text;
    // select the font
    text.setFont(font); // font is a sf::Font
    // set the character size
    text.setCharacterSize(24); // in pixels, not points!
    // set the color
    text.setFillColor(sf::Color::White);
    // set the text style
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);



    sf::RenderWindow window(sf::VideoMode(winSize.x, winSize.y), "RGE");
    //window.setVerticalSyncEnabled(true);//VSync

    

    // no texture coordinates here, we'll see that later

    while (window.isOpen())
    {
        winSize = window.getSize();
        winPos = window.getPosition();
        text.setString(std::to_string(winSize.x));
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(renerTri());
        window.draw(text);

        window.display();
        frame++;
    }

    return 0;
}

sf::VertexArray renerTri()
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