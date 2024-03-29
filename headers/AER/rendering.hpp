#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "SFML/Graphics/RenderWindow.hpp"
#include <SFML/System/Vector2.hpp>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;



int renderLoop(sf::RenderWindow &window);
int setActCam(int ID);
int _addRendNode(void *inNode);
int _addCamNode(void *inNode);
sf::VertexArray renerTri(sf::Vector2i winPos, sf::Vector2u winSize);
void textMine(sf::Text &text, sf::Font &font);


