#include "ball.h"
#include <stdexcept>
#include <iostream>
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

void ball::drop(double drop_value ) {
    std::cout << drop_value << std::endl;
    if (m_y != 0) {
      if(m_y < 0) {
          throw std::runtime_error("ball is lower than 0!!!");
      }

      if (m_y < drop_value) {
        m_y = 0;
      } else {
        m_y = m_y - drop_value;
      }
    }
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

void test_ball_gravity()
{
    // issue 64
    // b.set_y(b.get_y - 1);
    // for the ball to follow the laws of gravity we need to implement the drop_value

}
