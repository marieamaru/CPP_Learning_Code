#include "MinuteHand.cpp"

class SecondHand {
    public :
        SecondHand(MinuteHand& minHand)
            : _min_hand { minHand }
            {}
        const int get_secondes() const { return _secondes; }

        void advance()
        { 
            if(_secondes==59)
            {
                _secondes=0;
                _min_hand.advance();
            } else {
                _secondes+=1;
            } 
        }
    private :
    int _secondes;
    MinuteHand& _min_hand;
};