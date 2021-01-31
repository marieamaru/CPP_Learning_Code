#include "Polygon.h"
#include "realloc.h"

Polygon::~Polygon()
{
    delete[] _vertices;
}
void Polygon::add_vertex(int x, int y)
{
    const auto old_size = _size;
    ++_size;

    _vertices = realloc(_vertices, old_size, _size);
    _vertices[old_size] = Vertex { x, y };
}

std::ostream& operator<<(std::ostream& stream, const Polygon& poly)
{
    for(size_t i = 0; i<poly._size; ++i)
    {
        stream << "(" << poly._vertices[i].first << "," << poly._vertices[i].second << ")";
    }
    return stream ;
}

const Vertex& Polygon::get_vertex(size_t idx) const
{
    return _vertices[idx];
}