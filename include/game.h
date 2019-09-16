#ifndef GAME_H
#define GAME_H

class game
{
private:
    int gameAttract;
    int gameMan;
    int gameWoman;
    int gameChild;
    int gameScoring;
    int gameGameOver;

    int _gameManPin;
    int _gameWomManPin;
    int _gameChildPin;

public:
    game(int gameManPin, int gameWomanPin, int gameChildPin);

    void setGame(int gameManPin, int gameWomanPin, int gameChildPin);
    int getAttract() { return gameAttract; }
    int getMan() { return gameMan; }
    int getWoman() { return gameWoman; }
    int getChild() { return gameChild; }
};

#endif