#include "game.h"

game::game(int gameManPin, int gameWomanPin, int gameChildPin)
{
    setGame(gameManPin, gameWomanPin, gameChildPin);
}

void game::setGame(int gameManPin, int gameWomanPin, int gameChildPin)
{
    _gameManPin = gameManPin;
    _gameWomManPin = gameWomanPin;
    _gameChildPin = gameChildPin;
}