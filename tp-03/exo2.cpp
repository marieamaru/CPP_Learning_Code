#include <vector>

struct AbsolutePoint {
  double x = 0.0, y = 0.0;
};

AbsolutePoint default_origin;

class RelativePoint {
  const AbsolutePoint& _origin;
  AbsolutePoint        _shift;

public:
  RelativePoint():
    _origin { },
    _shift { }
  {}

  RelativePoint(const AbsolutePoint shift, const AbsolutePoint& origin = default_origin) :
    _origin { origin },
    _shift { shift }
  {}

  double get_x() const { return _origin.x + _shift.x; }
  double get_y() const { return _origin.y + _shift.y; }
};

int main()
{
    std::vector<RelativePoint>(3);
    std::vector<AbsolutePoint>(3);
    return 0;
}