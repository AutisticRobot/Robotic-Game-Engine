#include "Vector2.hpp"

 
    //Vector2()
    //{
    //
    //}
 
    Vector2(T X, T Y)
    {
        x = X;
        y = Y;
    }

    sf::Vector2 tosf()
    {

    }

    Vector2 normalize(inVec Vector2)
    {
        Vector2 output(inVec.x, inVec.y);

        output.x *= output.x;
        output.y *= output.y;

        T hyp = Vector2.x + Vector2.y;
        hyp = sqrt(hyp);

        output.x = inVec.x / hyp;
        output.y = inVec.y / hyp;

        return output;

    }
