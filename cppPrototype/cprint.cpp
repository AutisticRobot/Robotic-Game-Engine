#include "cprint.hpp"


template<typename T>
int cprint(T test, bool con, std::string foreHex, std::string backHex)
{
    std::cout << "\033[38;2;255;255;255;";
    std::cout << "\033[48;2;0;0;0;";
    if(con)
    {
        std::cout << test;
    }
    std::cout << "\033[38;2;255;255;255;";
    std::cout << "\033[48;2;0;0;0;" << std::endl;

}
