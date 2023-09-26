#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
//#include "GLI/Vector2.hpp"
#include "rendering.hpp"
#include "primitives/tri.hpp"


bool selfTest = false;

int decodeArgs(int argc, char *argv[]);
int decodeArg(string argv, int state = 0);

int main(int argc, char *argv[])
{
    if(argc != 1 && std::string(argv[1]) == "-l")
    {
        selfTest = true;
    std::cout << "Start Diegnostic" << endl;
    }

    decodeArgs(argc, argv);

    std::cout << "End Diegnostic" << endl;

}

int decodeArgs(int argc, char *argv[])
{
    for(int i=1;i<argc;i++)
    {
        if(selfTest)
        {
        std::cout << "|" << argv[i] << "|" << endl;
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

    //default:
        std::cout << "error: " << argv << " not a valid argument" << endl;
        return 1;


}