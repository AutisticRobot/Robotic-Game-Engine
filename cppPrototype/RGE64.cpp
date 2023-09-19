//Robotic Game Engine
//by Tyler Michael Kormannn (tylerkormann.com)
//Version 0.0.0.x
//
//Curently the worlds worst game engine!! : D
//
//Dependences
//SFML


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "rendering.hpp"
#include "primitives/tri.hpp"

using namespace std;

int frame = 0;
sf::Vector2u winSize(300,200);//unsigned int Vector2 for window size
sf::Vector2i winPos(0,0);//unsigned int Vector2 for window size
sf::Vector2f GRatio;
sf::Text mineText;
sf::Font font;
tri testTri;

int main()
{
    textMine(mineText, font);
    // select the font
    mineText.setFont(font); // font is a sf::Font
    //setFont() for some reason needs to be in the same context as draw function;

    sf::RenderWindow window(sf::VideoMode(winSize.x, winSize.y), "RGE");
    window.setVerticalSyncEnabled(true);//VSync


    

    // no texture coordinates here, we'll see that later

    while (window.isOpen())
    {
        winSize = window.getSize();
        winPos = window.getPosition();
        GRatio.x = static_cast<float>(winSize.x);
        GRatio.y = static_cast<float>(winSize.y);
        testTri.updateRatio(GRatio);
        mineText.setString(std::to_string(frame));
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(testTri.getTri());
        window.draw(mineText);

        window.display();
        frame++;
    }

    return 0;
}

