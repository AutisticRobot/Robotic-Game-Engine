//Robotic Game Engine
//by Tyler Michael Kormannn (tylerkormann.com)
//Version 0.0.1.x
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
#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window/Window.hpp"
#include "headers/AER/rendering.hpp"
#include "headers/primitives/tri.hpp"


#include "headers/RGE.hpp"
//#include "headers/testProject.hpp"

using namespace std;

int frame = 0;
float delta;
sf::Vector2u winSize(300,200);//unsigned int Vector2 for window size
sf::Vector2i winPos(0,0);//unsigned int Vector2 for window size
sf::Vector2f GRatio;
sf::Text mineText;
sf::Font font;
tri testTri;

//array of pointers to all known nodes
void *_allNodes[16] = {0};
int _allNodesCnt = 0;
int _allNodesSize = 16;

//local functions
int _runtimeLoop(sf::RenderWindow &window);// runs every SFML frame
int _addNode(void *inNode);//adds a node to the main array.

int main()
{
    textMine(mineText, font);
    // select the font
    mineText.setFont(font); // font is a sf::Font
    //setFont() for some reason needs to be in the same context as draw function;

    sf::RenderWindow window(sf::VideoMode(winSize.x, winSize.y), "RGE");
    window.setVerticalSyncEnabled(true);//VSync


    

    Start();
    while (window.isOpen())
    {
        _runtimeLoop(window);
    }

    return 0;
}

int _runtimeLoop(sf::RenderWindow &window)
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

    pFrame(delta);

    window.clear();
    window.draw(testTri.getTri());
    window.draw(mineText);
    window.display();
    frame++;

    return 0;
}


int _addNode(void *inNode)//adds a node to the main array.
{
    void *tmp[_allNodesCnt];
    if(_allNodesCnt >= _allNodesSize)
    {
        tmp[_allNodesSize] = _allNodes;
        _allNodes[_allNodesSize *= 2] = tmp;
    }

    _allNodes[_allNodesCnt] = inNode;
    _allNodesCnt++;


    return 0;
}


//########################################################################################################################################################//
//                                                                                                                                                        //
//                                                                    Robotic Game Engine Global Functions                                                //
//                                                                                                                                                        //
//########################################################################################################################################################//
