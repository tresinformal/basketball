#ifndef PLAYER_H
#define PLAYER_H


class player {
public:
    player();
    int get_score() const;
private:
    int m_score;
};

void test_player();

#endif // PLAYER_H
