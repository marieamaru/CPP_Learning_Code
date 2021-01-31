#include "Rectangle.h"

Rectangle::Rectangle(float length, float width)
        : _length { length }, _width { width }
{}

Rectangle::Rectangle(float size)
        : Rectangle { size, size }
{}

Rectangle::Rectangle()
        : Rectangle { _default_size }
{}
void Rectangle::set_default_size(float size)
{
    _default_size = size;
}

std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle)
{
    return stream << "{ L: " << rectangle.get_length() << ", W: " << rectangle.get_width() << " }";
}
float Rectangle::_default_size = 0.f;
void Rectangle::scale(float ratio)
{
        _length *= ratio;
        _width *= ratio;
}