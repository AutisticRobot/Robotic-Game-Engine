#include "../headers/GLI/VertexArray.hpp"

    VertexArray()
    {
        copy.VertexArray();
    }
 
    explicit VertexArray(PrimitiveType type, std::size_t vertexCount = 0)
    {
        copy.VertexArray(type, vertexCount);
    }
 
    std::size_t getVertexCount() const
    {
        return copy.getVertexCount();
    }
 
    Vertex& operator [](std::size_t index)
    {
        return copy[index];
    }
 
    const Vertex& operator [](std::size_t index) const
    {
        return copy[index];
    }
 
    void clear()
    {
        copy.clear();
    }
 
    void resize(std::size_t vertexCount)
    {
        copy.resize(vertexCount);
    }
 
    void append(const Vertex& vertex)
    {
        copy.append(vertex);
    }
 
    void setPrimitiveType(PrimitiveType type)
    {
        copy.setPrimitiveType(type);
    }
 
    PrimitiveType getPrimitiveType() const
    {
        return.getPrimitiveType();
    }
 
    FloatRect getBounds() const
    {
        return copy.getBounds();
    }
 