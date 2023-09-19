//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2023 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
 
#pragma once
 
// Headers
#include <SFML/Graphics/Export.hpp>
#include <SFML/Graphics/Vertex.hpp>
#include <SFML/Graphics/PrimitiveType.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;
 
namespace gli
{
class SFML_GRAPHICS_API VertexArray : public Drawable
{
public:
 
    VertexArray();
 
    explicit VertexArray(PrimitiveType type, std::size_t vertexCount = 0);
 
    std::size_t getVertexCount() const;
 
    Vertex& operator [](std::size_t index);
 
    const Vertex& operator [](std::size_t index) const;
 
    void clear();
 
    void resize(std::size_t vertexCount);
 
    void append(const Vertex& vertex);
 
    void setPrimitiveType(PrimitiveType type);
 
    PrimitiveType getPrimitiveType() const;
 
    FloatRect getBounds() const;
 
private:
 
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
 
private:
 
    // Member data
    VertexArray     copy;
    std::vector<Vertex> m_vertices;      
    PrimitiveType   m_primitiveType; 
};
}