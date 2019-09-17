#include <Arduino.h>
#include "game.h"
#include "game.cpp"
#include <Bounce2.h>

Game game(0, 1, 2);
Bounce manPin = Bounce();
Bounce womanPin = Bounce();
Bounce childPin = Bounce();

void setup()
{
  Serial.begin(9600);
  manPin.attach(game.getManPin(), INPUT_PULLUP);
  womanPin.attach(game.getWomanPin(), INPUT_PULLUP);
  childPin.attach(game.getChildPin(), INPUT_PULLUP);
  childPin.interval(25);
  womanPin.interval(25);
  manPin.interval(25);
}

void loop()
{

  /*
    Main loop will check the current game state. 

    States will be attract (not playing and not waiting for play) play specific patterns for attract.
    Wait for operator to press button to indicate player
    Output Attract Patterns.
    Poll for playertype.


    readyMan, readyWoman, readyChild: This will turn the indicator to a specified color for the type of player. Wait for  a player strike.
    Wait for player to hit striker.
    Output Color secondary lights for player
    Disable main lights

    scoring: Calculate the players score and light the poll
    Poll the striker for highest value
    Light up lights based on value.

    gameover: Play a sound based on score, display the score, and increment the game counter. Resets the game back to attract.
    Play sound based on score
    Display final score
    Total plays increase.

  */
  manPin.update();
  womanPin.update();
  childPin.update();
  if (manPin.rose())
  {
    Serial.println("Button Pressed");
  }
}
