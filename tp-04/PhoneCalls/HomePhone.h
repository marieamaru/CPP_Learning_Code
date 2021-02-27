#pragma once
#include <iostream>

class HomePhone : public Phone 
{
    public :
    HomePhone(const Person& owner, int position)
        : Phone { owner }
        , _position { position }
    {}

    void ring() const override
    {
        if(_owner.get_position() == _position)
        {
            _owner.answer_phone();
        } 
        else
        {
            std::cout << "This is the voicemail of "<< _owner.get_name() << ". Please leave a message." << std::endl; 
        }
    }

    private :
        int _position = 0;
};