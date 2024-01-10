#include "ball.h"

#include <cassert>

ball::ball()
{

}

void ball::set_x(double x) {
    m_x = x;
}

void ball::set_y(double y) {
    m_y = y;
}

double ball::get_x() {
    return m_x;
}

double ball::get_y() {
    return m_y;
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
