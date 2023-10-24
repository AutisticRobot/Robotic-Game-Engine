
#include "dataCon.hpp"


int hex2dec(std::string inHex)
{
    //test code
    return hexChar2dec(inHex[0]);

    int out = 0;


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
{// needs a redesighn to be claner and faster
    int val = 0;
    if(inHex<=57)
    {
        val = inHex - 48;
    }else if (inHex<=72) {
        val = inHex - 55;
    
    }else{
        val = inHex - 87;
    }
    return val;
}