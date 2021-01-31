class MinuteHand {
    public :
    const int get_minutes() const { return _minutes; }
    void advance(){ _minutes+=1;}
    private :
    int _minutes;
};