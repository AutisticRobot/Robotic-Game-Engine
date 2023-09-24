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
int decodeArg(char *argv, int state = 0);

int main(int argc, char *argv[])
{

}

int decodeArgs(int argc, char *argv[])
{
    for(int i=1;i<argc;i++)
    {
        decodeArg(argv[i]);
    }
}
int decodeArg(char *argv, int state)
{
    switch (argv)
    case 's':
        selfTest = true;
        return 0;
    case default:
        std::cout << "error: " << argv << " not a valid argument" << endl;
        return 1;


}