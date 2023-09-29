
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
 
    Vector2(T X, T Y)
{
    x = X;
    y = Y;
}

    //sf::Vector2 tosf();

    

    int normalize()
{
    Vector2 output(x, y);

    output.x *= output.x;
    output.y *= output.y;

    T hyp = x + y;
    hyp = sqrt(hyp);

    output.x = x / hyp;
    output.y = y / hyp;

    x = output.x;
    y = output.y;
    return 0;

}

private:

T x;
T y;

};
} // namespace gli