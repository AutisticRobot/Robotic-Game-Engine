#include "headers/FileIO.hpp"


//Bumb Allocator


BumbAllocator make_bump_allocator(size_t size)
{
    BumbAllocator ba = {};

    ba.memory = (char*)malloc(size);

    if(ba.memory)
    {
        ba.capacity = size;
        memset(ba.memory, 0, size);// sets the memory to 0
    }else{
        //fail con here
    }

    return ba;
}