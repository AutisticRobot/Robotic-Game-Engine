
#pragma once
 
//#include <SFML/System/Vector2.hpp>
#include <iostream>
#include <cstdlib>
#include <cmath>


namespace gli
{
template<typename T>
class Vector2
{
public:
 
 
Vector2(T X, T Y)
{
    x = X;
    y = Y;
}

    //sf::Vector2 tosf();

    

Vector2& normalize()
{
    T typChk = x;
    typChk = 3;
    typChk = std::sqrt(typChk);
    std::cout << typChk << std::endl;
    if(typChk == 1)
    {
        std::cout << "Error: This type of Vector2 prevents accurate normalization." << std::endl;
        return 1;
    }
    Vector2 output(x, y);

    output.x *= output.x;
    output.y *= output.y;

    T hyp = (output.x + output.y);
    hyp = std::sqrt(hyp);

    output.x = (x / hyp);
    output.y = (y / hyp);


    x = output.x;
    y = output.y;
    return *this;

}
Vector2& operator+=(Vector2 right)
{
    x += right.x;
    y += right.y;

    return *this;
}
Vector2 operator+(Vector2 right)
{
    Vector2 out(x, y);

    out.x += right.x;
    out.y += right.y;

    return out;
}
Vector2& operator-=(Vector2 right)
{
    x -= right.x;
    y -= right.y;

    return *this;
}
Vector2 operator-(Vector2 right)
{
    Vector2 out(x, y);

    out.x -= right.x;
    out.y -= right.y;

    return out;
}
Vector2 operator*(Vector2 right)
{
    Vector2 out(x, y);
    out.x *= right.x;
    out.y *= right.x;
    return out;
}
Vector2& operator*=(Vector2 right)
{

    x *= right.x;
    y *= right.x;
    return *this;
}
Vector2 operator/(Vector2 right)
{
    Vector2 out(x, y);
    out.x /= right.x;
    out.y /= right.x;
    return out;
}
Vector2& operator/=(Vector2 right)
{

    x /= right.x;
    y /= right.x;
    return *this;
}


public:

T x;
T y;

};
} // namespace gli