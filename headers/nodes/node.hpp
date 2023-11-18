#include "../GLI/Vector2.hpp"

class node
{
    public:

        node(gli::Vector2<float> pos);

        void push(gli::Vector2<float> direction, float force);

        gli::Vector2<float> pos; //Position
        gli::Vector2<float> vel; //Veloctiy
        gli::Vector2<float> mass;//Mass (weight)

    private:

};