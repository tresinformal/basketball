#ifndef PLAYER_H
#define PLAYER_H


class player {
public:
    player();

    int get_score() const;
    double get_x() const noexcept { return m_x; }
    double get_y() const noexcept { return m_y; }

    int get_score() const noexcept;
    void set_score(const int new_score);

private:
    int m_score;
    double m_x;
    double m_y;
};

void test_player();

#endif // PLAYER_H
