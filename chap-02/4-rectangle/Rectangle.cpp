#include "Rectangle.h"

Rectangle::Rectangle(int v1, int v2)
       : _v1{v1 }, _v2{v2}
{}

Rectangle::Rectangle()

{}
void Rectangle::set(int v)
{
        _v2=v;
}
int Rectangle::get() const{ return _v2;}

int Rectangle::_nb = 2;
void Rectangle::call(const Rectangle& ratio)
{
        ratio.get();
}

void Rectangle::move(){}
void speak(){}
void print(std::ostream& stream, const Rectangle& dog){}