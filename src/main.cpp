#include <Arduino.h>
#include <Bounce2.h>
#include "game.h"

const int led = LED_BUILTIN;

void setup()
{
  pinMode(led, OUTPUT);
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
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}
