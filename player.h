#ifndef PLAYER_H
#define PLAYER_H


class player {
public:
    player();
    int get_score() const;
    void set_score(const int new_score);
private:
    int m_score;
};

void test_player();

#endif // PLAYER_H
