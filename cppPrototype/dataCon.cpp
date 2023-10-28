
#include "dataCon.hpp"


int* hexArr2dec(std::string inHex, int divSize)
{
    int* out;
    int outSize = inHex.size() / divSize;
    out = new int(outSize);

    for(int i=0;i<outSize;i++)
    {
        
    }

    return out;
}


double hex2dec(std::string inHex)
{
    double out = 0;
    //test code

    for(int i=inHex.size()-1;i>=0;i--)
    {
        int digit = hexChar2dec(inHex[i]);

        if(digit != 16)
        {
            out *= 16;
            out += digit;
        }


    }


    return out;
}


int hexChar2dec(char inHex)
{// can be replaced by enum
    switch (inHex) {
        case 'F':
        case 'f':
        return 15;
        break;
        case 'E':
        case 'e':
        return 14;
        break;
        case 'D':
        case 'd':
        return 13;
        break;
        case 'C':
        case 'c':
        return 12;
        break;
        case 'B':
        case 'b':
        return 11;
        break;
        case 'A':
        case 'a':
        return 10;
        break;

        case '9':
        return 9;
        break;
        case '8':
        return 8;
        break;
        case '7':
        return 7;
        break;
        case '6':
        return 6;
        break;
        case '5':
        return 5;
        break;
        case '4':
        return 4;
        break;
        case '3':
        return 3;
        break;
        case '2':
        return 2;
        break;
        case '1':
        return 1;
        break;
        case '0':
        return 0;
        break;

        default:
        return 16;
        break;
    
    }
}