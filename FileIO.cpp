#include "headers/FileIO.hpp"
#include <cstddef>


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


char* bump_alloc(BumbAllocator* bumpAllocator, size_t size)
{
    char* result = nullptr;

    size_t allignedSize = (size + 7) & ~ 7;//This makes shure that the 4 bits are 0
    if(bumpAllocator->used + allignedSize <= bumpAllocator->capacity)
    {
        result = bumpAllocator->memory + bumpAllocator->used;
        bumpAllocator->used += allignedSize;
    }else{
        //SM_ASSERT(false, "bumpAllocator is full")
    }

    return result;
}