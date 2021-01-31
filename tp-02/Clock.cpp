#include "MinuteHand.cpp"
#include "SecondHand.cpp"
#include "Event.h"
#include "iostream"

class Clock {

    public :
        void tick()
        {
            _sec_hand.advance();
        }

        void add_event(const Event& event)
        {
            _events.emplace_back(event);
        }
    private :
        MinuteHand& _min_hand;
        SecondHand& _sec_hand;
        std::vector<Event>& _events;

};