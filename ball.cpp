#include "ball.h"

#include <cassert>

ball::ball()
{

}

int ball::get_y() {
    return 0;
}

int ball::get_x() {
    return 0;
}

void test_ball()
{
  // 33
  {
    ball b;
    const double x{3.14};
    b.set_x(x);
    assert(b.get_x() == x)
    const double y{2.71};
    b.set_y(y);
    assert(b.get_y() == y)
  }
}
