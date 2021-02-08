#include <iostream>

class A
{
public:
    virtual int  fcn1(int p1, int p2) const { 
    std::cout << "a" << std::endl;return p1 * p2;  }
    virtual void fcn2(const char* str) = 0;
    virtual void fcn3(bool) { std::cout << "a" << std::endl; }
    const char* fcn4() { std::cout << "a" << std::endl;return "artichaut"; }
};

class B : public A
{
public:
    int fcn1(int p1, int p2) { std::cout << "b" << std::endl;return p1 + p2; }

    void fcn2(const char*) override {std::cout << "b" << std::endl;}

    void fcn3(bool b) override
    {
        if (b)
        {
            A::fcn3(b);
        }
        std::cout << "b" << std::endl;
    }
    
    const char* fcn4() {std::cout << "b" << std::endl; return "sopalin"; }
};

int main()
{
    A* a = new B();

    a->fcn1(1, 3);
    a->fcn2("la la la");
    a->fcn3(false);
    a->fcn4();

    return 0;
}
/*
class SharedStuff
{
protected :
     SharedStuff(int value)
        : _value { value }
     {}

     int _value;
};

class MoreStuff : public SharedStuff
{
public :
    MoreStuff(int value, int value2)
       : SharedStuff { value }
       , _value2 { value2 }
    {}

    void print()
    {
         std::cout << _value << " " << _value2 << std::endl;
    }
    
    int _value2;
};

int main()
{
    return 0;
}

*/