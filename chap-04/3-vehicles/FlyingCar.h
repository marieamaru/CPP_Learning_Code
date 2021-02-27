#include "Car.h"

class FlyingCar : public Car 
{
    public : 
        FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed }
        , _flying_speed { speed * 10u }
    {}

    unsigned int drive() const override
    {
        if(!_driver.has_flying_license())
        {
            Car::drive();
        }
        else 
        {
            std::cout << "Sweeesh!" << std::endl;
            return _flying_speed;
        }
        
    }

private:
    unsigned int _flying_speed = 0;

};