#ifndef PLAYER_H
#define PLAYER_H


class player {
public:
    player();
    int get_score() const;
    void set_position(double line_x_position);
    void score(double line_x_position);
private:
    int m_score;
    double m_line_x_position;
};

void test_player();

#endif // PLAYER_H
