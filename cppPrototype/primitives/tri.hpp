#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class tri
{
    sf::VertexArray triangle;
    sf::Vector2f ratio;

    public:

    triangle();
    triangle(sf::Vector2f ratio);
    int updateRatio(sf::Vector2f ratio);
    sf::VertexArray getTri();
}