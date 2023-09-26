
#pragma once
 
//#include <SFML/System/Vector2.hpp>
#include <cmath>


namespace gli
{
template<typename T>
class Vector2
{
public:
 
    //Vector2();
 
    Vector2(T X, T Y);

    //sf::Vector2 tosf();

    

    Vector2<T> normalize(Vector2 inVec);

private:

T x;
T y;

};
} // namespace gli