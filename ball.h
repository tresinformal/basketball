#ifndef BALL_H
#define BALL_H


class ball
{
public:
    ball();
    double get_x();
    double get_y();
    void set_x(double x);
    void set_y(double y);
    void drop(double value);
private:
    double m_x;
    double m_y;
};

/// Tests the `ball` class
void test_ball();

#endif // BALL_H
