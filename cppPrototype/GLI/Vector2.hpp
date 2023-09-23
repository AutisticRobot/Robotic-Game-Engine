
#pragma once
 
#include <SFML/System/Vector2.hpp>

namespace gli
{
class Vector2
{
public:
 
    Vector2();
 
    Vector2(float X, float Y);

    sf::Vector2 tosf();

private:

}
} // namespace gli