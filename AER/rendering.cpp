
#include "../headers/AER/rendering.hpp"

using namespace std;


void *_allRendNodes[16] = {0};
int   _allRendNodesCnt = 0;
int   _allRendNodesSize = 16;

void *_allCamNodes[4] = {0};
int   _allCamNodesCnt = 0;
int   _allCamNodesSize = 4;


int renderLoop(sf::RenderWindow &window)
{



    return 0;
}

//needs some work
//sf::VertexArray renerTri(sf::Vector2i winPos, sf::Vector2u winSize)
//{
//    
//}


int _addRendNode(void *inNode)//adds a node to the main array.
{
    void *tmp[_allRendNodesCnt];
    if(_allRendNodesCnt >= _allRendNodesSize)
    {
        tmp[_allRendNodesSize] = _allRendNodes;
        _allRendNodes[_allRendNodesSize *= 2] = tmp;
    }

    _allRendNodes[_allRendNodesCnt] = inNode;
    _allRendNodesCnt++;


    return 0;
}
int _addCamNode(void *inNode)//adds a node to the main array.
{
    void *tmp[_allCamNodesCnt];
    if(_allCamNodesCnt >= _allCamNodesSize)
    {
        tmp[_allCamNodesSize] = _allCamNodes;
        _allCamNodes[_allCamNodesSize *= 2] = tmp;
    }

    _allCamNodes[_allCamNodesCnt] = inNode;
    _allCamNodesCnt++;


    return 0;
}

void textMine(sf::Text &text, sf::Font &font)
{
    if (!font.loadFromFile("resources/fonts/Minecraftia.ttf"))
    {
        cout << "failed loading file" << endl;
        // error...
    }



    text.setString("faik");
    // set the character size
    text.setCharacterSize(24); // in pixels, not points!
    // set the color
    text.setFillColor(sf::Color::White);
    // set the text style
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);
}

