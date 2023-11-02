//written by following Cakez celeste clone tutoriel on youtube
#pragma once

#include <stdio.h>

//for malloc
#include <stdlib.h>

//for memset
#include <string.h>

//Bumb Allocator
struct BumbAllocator
{
    size_t capacity;
    size_t used;
    char* memory;
};

BumbAllocator make_bump_allocator(size_t size);