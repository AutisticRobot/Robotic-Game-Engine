#pragma once

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <cstdlib>

class tri
{
public:
    tri();
    int updateRatio(sf::Vector2f inRatio);
    sf::VertexArray getTri();
private:
    sf::Vector2f ratio;
    sf::VertexArray *tmp;
    sf::VertexArray triangle;

};