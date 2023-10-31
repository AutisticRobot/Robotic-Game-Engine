//written by following Cakez celeste clone tutoriel on youtube


//Bumb Allocator
struct BumbAllocator
{
    size_t capacity;
    size_t used;
    char* memory;
};

BumbAllocator make_bump_allocator(size_t size);