#pragma once

//#include <SFML/Graphics.hpp>
//#include <SFML/System/Vector2.hpp>

class tri
{
public:
    tri();
    tri(sf::Vector2f inRatio);
    int updateRatio(sf::Vector2f inRatio);
    sf::VertexArray getTri();
private:
    sf::VertexArray triangle;
    sf::Vector2f ratio;

};