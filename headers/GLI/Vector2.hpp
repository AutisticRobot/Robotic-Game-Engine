
#pragma once
 
#include <SFML/System/Vector2.hpp>
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

sf::Vector2<T> tosf()
{
    return sf::Vector2<T>(x,y);
}

    

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
template<typename U>
Vector2& operator+=(Vector2<U> right)
{
    x += right.x;
    y += right.y;

    return *this;
}
template<typename U>
Vector2 operator+(Vector2<U> right)
{
    Vector2 out(x, y);

    out.x += right.x;
    out.y += right.y;

    return out;
}
template<typename U>
Vector2& operator-=(Vector2<U> right)
{
    x -= right.x;
    y -= right.y;

    return *this;
}
template<typename U>
Vector2 operator-(Vector2<U> right)
{
    Vector2 out(x, y);

    out.x -= right.x;
    out.y -= right.y;

    return out;
}
template<typename U>
Vector2 operator*(Vector2<U> right)
{
    Vector2 out(x, y);
    out.x *= right.x;
    out.y *= right.y;
    return out;
}
template<typename U>
Vector2& operator*=(Vector2<U> right)
{
    x *= right.x;
    y *= right.y;
    return *this;
}
template<typename U>
Vector2 operator/(Vector2<U> right)
{
    Vector2 out(x, y);
    out.x /= right.x;
    out.y /= right.y;
    return out;
}
template<typename U>
Vector2& operator/=(Vector2<U> right)
{

    x /= right.x;
    y /= right.y;
    return *this;
}

public:

T x;
T y;

};
} // namespace gli