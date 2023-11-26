#include "../GLI/Vector2.hpp"
#include <string>

class node
{
    public:


        std::string nodeID;

        node(gli::Vector2<float> pos);

        void push(gli::Vector2<float> direction, float force);

        gli::Vector2<float> pos; //Position
        gli::Vector2<float> vel; //Veloctiy
        gli::Vector2<float> mass;//Mass (weight)

    private:

};