#pragma once
#include <iostream>

class Rectangle
{
public:
    Rectangle(float length, float width);
    Rectangle(float size);
    Rectangle();
    float get_length() const { return _length; }
    float get_width() const { return _width; }
    static void set_default_size(float size);
    void scale(float ratio);

private:
    static float _default_size;
    float _length;
    float _width;
};

std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle);
