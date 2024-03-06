#ifndef BALL_H
#define BALL_H


class ball
{
public:
    ball();
    [[nodiscard]] double get_x();
    [[nodiscard]] double get_y();
    void set_x(double x);
    void set_y(double y);
private:
    double m_x;
    double m_y;
};

/// Tests the `ball` class
void test_ball();

#endif // BALL_H
