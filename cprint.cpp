#include "headers/cprint.hpp"
#include "headers/dataCon.hpp"


template<typename T>
int cprint(T test, bool con, std::string foreHex, std::string backHex)
{
    std::string tmp[3];
    tmp[0] = foreHex[0] + foreHex[1];
    tmp[1] = foreHex[2] + foreHex[3];
    tmp[2] = foreHex[4] + foreHex[5];

    tmp[0] = hex2dec(tmp[0]);
    tmp[1] = hex2dec(tmp[1]);
    tmp[2] = hex2dec(tmp[2]);

    foreHex = tmp[0] + ";" +tmp[1] + ";" + tmp[2] + ";";

    tmp[0] = backHex[0] + backHex[1];
    tmp[1] = backHex[2] + backHex[3];
    tmp[2] = backHex[4] + backHex[5];

    tmp[0] = hex2dec(tmp[0]);
    tmp[1] = hex2dec(tmp[1]);
    tmp[2] = hex2dec(tmp[2]);

    backHex = tmp[0] + ";" +tmp[1] + ";" + tmp[2] + ";";



    std::cout << "\033[38;2;" << foreHex;
    std::cout << "\033[48;2;" << backHex;
    if(con)
    {
        std::cout << test;
    }
    std::cout << "\033[38;2;255;255;255;";
    std::cout << "\033[48;2;0;0;0;" << std::endl;

}
