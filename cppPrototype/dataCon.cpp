
#include "dataCon.hpp"


int hex2dec(std::string inHex)
{
    //test code

    int out = 0;

    for(int i=0;i<inHex.size();i++)
    {
        int val = 0;
        if(inHex[i]>=48)
        {
            val = inHex[i] - 38;
        }
        return val;
    }

    /*
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
    */
    return 0;
}


int hexChar2dec(char inHex)
{
    return 0;
}