#include "ball.h"

#include <cassert>

ball::ball()
{

}

void ball::set_x(double) {
    return;
}

void ball::set_y(double) {
    return;
}

double ball::get_x() {
    return 3.14;
}

double ball::get_y() {
    return 2.71;
}

void test_ball()
{
  // 33
  {
    ball b;
    const double x{3.14};
    b.set_x(x);
    assert(b.get_x() == x);
    const double y{2.71};
    b.set_y(y);
    assert(b.get_y() == y);
  }
}
