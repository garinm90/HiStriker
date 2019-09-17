#ifndef GAME_H
#define GAME_H

class Game
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
    Game(int gameManPin, int gameWomanPin, int gameChildPin);

    // void setGame(int gameManPin, int gameWomanPin, int gameChildPin);
    int getAttract()
    {
        return gameAttract;
    }
    int getMan() const { return gameMan; }
    int getWoman() { return gameWoman; }
    int getChild() { return gameChild; }
    int getManPin() const { return _gameManPin; }
    int getWomanPin() { return _gameWomManPin; }
    int getChildPin() { return _gameChildPin; }
    void setGame(int game){};
};

#endif