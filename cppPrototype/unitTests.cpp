#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
#include "GLI/Vector2.hpp"
#include "rendering.hpp"
#include "primitives/tri.hpp"


bool selfTest = false;
bool vector2 = false;

int argAll();
int decodeArgs(int argc, char *argv[]);
int decodeArg(string argv, int state = 0);
int testVector2();

int main(int argc, char *argv[])
{
    if(argc != 1)
    {
        if(std::string(argv[1]) == "all")
        {
            argAll();
        }
        if(std::string(argv[1]) == "-l")
        {
            selfTest = true;
        }
        if(selfTest)
        {
            std::cout << "Start Diegnostic" << std::endl;
        }
    }
    decodeArgs(argc, argv);

    if(vector2)
    {
        testVector2();
    }



    std::cout << "End Diegnostic" << endl;

}
int argAll()
{
    selfTest = true;
    vector2 = true;
    return 0;
}
int decodeArgs(int argc, char *argv[])
{
    for(int i=1;i<argc;i++)
    {
        if(selfTest)
        {
        std::cout << "|" << argv[i] << "|" << std::endl;
        }
        decodeArg(std::string(argv[i]));
    }
    return 0;
}
int decodeArg(string argv, int state)
{
    if(argv == "-l")
    {
        selfTest = true;
        return 0;
    }
    if(argv == "vec2")
    {
        vector2 = true;
        return 0;
    }
    if(argv == "all")
    {
        return 0;
    }

    std::cout << "error: " << argv << " not a valid argument" << std::endl;
    return 1;


}

int testVector2()
{

    std::cout << "TestVector2 called" << std::endl;

    gli::Vector2 testVector2(4,22);
    gli::Vector2 test2Vector2(5.f,2.f);
    std::cout << testVector2.x << ", " << testVector2.y << std::endl;
    std::cout << "*=" << std::endl;
    std::cout << test2Vector2.x << ", " << test2Vector2.y << std::endl;
    std::cout << "=" << std::endl;
    test2Vector2 *= testVector2;
    std::cout << test2Vector2.x << ", " << test2Vector2.y << std::endl;



    std::cout << "TestVector2 END" << std::endl;
    return 0;
}