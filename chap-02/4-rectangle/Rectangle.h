#pragma once
#include <iostream>

class Rectangle
{
public:
    Rectangle();
    Rectangle(int v1, int v2);

    void set(int v);
    int get() const;

    static int _nb;
    static void call(const Rectangle& d);

private:
    void move();

    static void speak();
    friend void print(std::ostream& stream, const Rectangle& dog);
    int _v1;
    int _v2;
};