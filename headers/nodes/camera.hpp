
#include "../GLI/Vector2.hpp"
#include <string>

class camera
{
    public:

    std::string nodeID;

    camera();

    int setAsActive();

    gli::Vector2<float> pos;

    gli::Vector2<float> size;

};