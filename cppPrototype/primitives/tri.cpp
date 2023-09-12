
#include <SFML/System/Vector2.hpp>

class triangle
{
    // create an array of 3 vertices that define a triangle primitive
    sf::VertexArray triangle(sf::Triangles, 3);
    sf::Vector2f ratio(1,1);

    triangle()
    {
    ratio = new Vector2f(static_cast<float>(winSize.x), static_cast<float>(winSize.y));
    triangle(ratio);
    }
    triangle(sf::Vector2f ratio)
    {
        this.ratio = ratio;

        // define the position of the triangle's points
        triangle[0].position = sf::Vector2f(150.f, 400.f);
        triangle[1].position = sf::Vector2f(500.f, 50.f);
        triangle[2].position = sf::Vector2f(850.f, 400.f);



        // define the default color of the triangle's points
        triangle[0].color = sf::Color::Blue;
        triangle[1].color = sf::Color::Red;
        triangle[2].color = sf::Color::Green;
    }


    int updateRatio(sf::Vector2f ratio)
    {
        ratio.x = 300.f / ratio.x;
        ratio.y = 200.f / ratio.y;

        triangle[0].position.x *= ratio.x;
        triangle[1].position.x *= ratio.x;
        triangle[2].position.x *= ratio.x;

        triangle[0].position.y *= ratio.y;
        triangle[1].position.y *= ratio.y;
        triangle[2].position.y *= ratio.y;

    }
}