#ifndef PLAYER_H
#define PLAYER_H


class player {
public:
    player();
    [[nodiscard]] double get_x() const noexcept { return m_x; }
    [[nodiscard]] double get_y() const noexcept { return m_y; }

    int get_score() const noexcept;
    void set_score(const int new_score);
    void set_position(double line_x_position);
    void score(const double line_x_position);
private:
    int m_score;
    double m_x;
    double m_y;
    double m_line_x_position;

};

void test_player();

#endif // PLAYER_H
