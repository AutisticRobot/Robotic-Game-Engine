
    VertexArray()
    {

    }
 
    explicit VertexArray(PrimitiveType type, std::size_t vertexCount = 0)
    {

    }
 
    std::size_t getVertexCount() const;
 
    Vertex& operator [](std::size_t index);
 
    const Vertex& operator [](std::size_t index) const;
 
    void clear();
 
    void resize(std::size_t vertexCount);
 
    void append(const Vertex& vertex);
 
    void setPrimitiveType(PrimitiveType type);
 
    PrimitiveType getPrimitiveType() const;
 
    FloatRect getBounds() const;
 