#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
#include "headers/GLI/Vector2.hpp"
#include "headers/rendering.hpp"
#include "headers/primitives/tri.hpp"
#include "headers/dataCon.hpp"


bool selfTest = false;
bool vector2 = false;
bool hex2decTest = false;

int argAll();
int decodeArgs(int argc, char *argv[]);
int decodeArg(string argv, int state = 0);
int testVector2();
int testHex2Dec();

int main(int argc, char *argv[])
{
    if(argc != 1)
    {
        if(std::string(argv[1]) == "all")
        {
            argAll();
            std::cout << "update test" << std::endl;
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
    if(hex2decTest)
    {
        testHex2Dec();
        std::cout << "native hex test: 0x063AB \n" << 0x063AB << std::endl;
    }


    std::cout << "End Diegnostic" << endl;

}
int argAll()
{
    selfTest = true;
    vector2 = true;
    hex2decTest = true;
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

int testHex2Dec()
{
    std::cout << "test hex to dec conversion start" << std::endl;

    for(std::string i="0"-10;i[0]<9;i[0]++)
    {

        std::cout << hex2dec(i) << std::endl;

    }
    std::string test = "a";
    std::cout << static_cast<int>(test[0]) << std::endl;
    test[0]=65;
    std::cout << static_cast<int>(test[0]) << std::endl;
    std::cout << test << std::endl;
    std::cout << hex2dec("1") << std::endl;
    std::cout << hex2dec("A") << std::endl;
    std::cout << hex2dec("a") << std::endl;
    std::cout << hex2dec("3E") << std::endl;
    std::cout << hex2dec("1A") << std::endl;
    std::cout << hex2dec("#FFFFFF") << std::endl;
    std::cout << hex2dec("FFFFFF") << std::endl;
    std::cout << "test hex array:" << std::endl;
    std::cout << "inHex: " << "1A3E4" << std::endl;

    int testLen;
    int *testingHex = hex2decArr("1A3E4", 2, testLen);

    std::cout << 5/2 << std::endl;
    for(int i=0;i<testLen;i++)
    {
        std::cout << testingHex[i] << std::endl;
    }


    std::cout << "test hex to dec conversion end" << std::endl;
    return 0;
}