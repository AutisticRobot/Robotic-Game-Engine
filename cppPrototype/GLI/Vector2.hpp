
#pragma once
 
#include <SFML/System/Vector2.hpp>
#include <cmath>

template<typename T>
namespace gli
{
class Vector2
{
public:
 
    //Vector2();
 
    Vector2(T X, T Y);

    sf::Vector2 tosf();

    Vector2 normalize(intVec Vector2);

private:

T x;
T y;

}
} // namespace gli