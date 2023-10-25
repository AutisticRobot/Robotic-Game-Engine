
#include "dataCon.hpp"


int hex2dec(std::string inHex)
{
    int out = 0;
    //test code

    for(int i=inHex.size()-1;i>=0;i--)
    {
        out *= 16;
        out += hexChar2dec(inHex[i]);

    }


    return out;
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