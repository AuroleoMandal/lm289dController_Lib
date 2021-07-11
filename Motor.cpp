/*
Library to control motor funtionalities using L298N motor driver
-Auroleo Mandal 12/07/2021
*/
#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int A1, int A2)
{
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  _pin00 = A1;
  _pin01 = A2;
}
void Motor::fwd()
{
  digitalWrite(_pin00, HIGH);
  digitalWrite(_pin01, LOW);
}
void Motor::rev()
{
  digitalWrite(_pin00, LOW);
  digitalWrite(_pin01, HIGH);
}
void Motor::off()
{
  digitalWrite(_pin00, LOW);
  digitalWrite(_pin01, LOW);
}