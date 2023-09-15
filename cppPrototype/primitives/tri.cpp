#include "tri.hpp"


tri::tri()
{
    ratio.x = 300.f;
    ratio.y = 200.f;
    triangle = new sf::VertexArray(sf::Triangles, 3);
    
    // define the position of the triangle's points
    (*triangle)[0].position = sf::Vector2f(150.f, 400.f);
    (*triangle)[1].position = sf::Vector2f(500.f, 50.f);
    (*triangle)[2].position = sf::Vector2f(850.f, 400.f);



    // define the default color of the triangle's points
    (*triangle)[0].color = sf::Color::Blue;
    (*triangle)[1].color = sf::Color::Red;
    (*triangle)[2].color = sf::Color::Green;
}


int tri::updateRatio(sf::Vector2f inRatio)
{
    ratio.x = 300.f / inRatio.x;
    ratio.y = 200.f / inRatio.y;
    // define the position of the triangle's points
    (*triangle)[0].position = sf::Vector2f(150.f, 400.f);
    (*triangle)[1].position = sf::Vector2f(500.f, 50.f);
    (*triangle)[2].position = sf::Vector2f(850.f, 400.f);

    (*triangle)[0].position.x *= ratio.x;
    (*triangle)[1].position.x *= ratio.x;
    (*triangle)[2].position.x *= ratio.x;

    (*triangle)[0].position.y *= ratio.y;
    (*triangle)[1].position.y *= ratio.y;
    (*triangle)[2].position.y *= ratio.y;


    return 0;

}

sf::VertexArray tri::getTri()
{
    return (*triangle);
}
