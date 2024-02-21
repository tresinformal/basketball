#include "color.h"

void test_color()
{
    // #69: colors can be created
    {
      const color red = color::red;
      const color black = color::black;
      const color white = color::white;
      static_assert(red != black, "red is not black");
      static_assert(red != white, "red is not white");
    }
}
