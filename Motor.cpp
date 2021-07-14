/*
Library to simplify motor functionalities with lm298d motor driver
-Auroleo Mandal 12/07/2021
12/07/21 Currently features basic motor control (3 methods to set motor state to forward, reverse and off)
*/
#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int A1, int A2)
{
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  _pin0 = A1;
  _pin1 = A2;
}
Motor::Motor(int A1, int A2, int E)
{
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(E, OUTPUT);
  _pin0 = A1;
  _pin1 = A2;
  _pinE = E;
}
void Motor::fwd()
{
  digitalWrite(_pin0, HIGH);
  digitalWrite(_pin1, LOW);
}
void Motor::fwd(int E)
{
  digitalWrite(_pin0, HIGH);
  digitalWrite(_pin1, LOW);
  analogWrite(_pinE, E);
}
void Motor::rev()
{
  digitalWrite(_pin0, LOW);
  digitalWrite(_pin1, HIGH);
}
void Motor::rev(int E)
{
  digitalWrite(_pin0, LOW);
  digitalWrite(_pin1, HIGH);
  analogWrite(_pinE, E);
}
void Motor::off()
{
  digitalWrite(_pin0, LOW);
  digitalWrite(_pin1, LOW);
}