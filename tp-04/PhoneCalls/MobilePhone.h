#pragma once
#include <iostream>

class MobilePhone : public Phone 
{
    public :
    MobilePhone(const Person& owner)
        : Phone { owner }
    
    {}

    void ring() const override
    {
        {
            std::cout << "Hi! "<< _owner.get_name() << " on the phone." << std::endl; 
        }
    }
};