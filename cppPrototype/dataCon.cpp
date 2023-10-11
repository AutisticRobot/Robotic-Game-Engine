
#include "dataCon.hpp"


int hex2dec(std::string inHex)
{
    //test code
    //also try hex[i]>=48
    if(inHex.at(0) == 'A')
    {
        return 10;
    }
    if(inHex.at(0) == 'B')
    {
        return 11;
    }
    if(inHex.at(0) == 'C')
    {
        return 12;
    }
    if(inHex.at(0) == 'D')
    {
        return 13;
    }
    if(inHex.at(0) == 'E')
    {
        return 14;
    }
    if(inHex.at(0) == 'F')
    {
        return 15;
    }
    return 0;
}