/*
Library to control motor funtionalities using L298N motor driver
-Auroleo Mandal 12/07/2021
12/07/21 Currently features basic motor control (3 methods to set motor state to forward, reverse and off)
*/
#ifndef Motor_h
#define Motor_h
#include "Arduino.h"
class Motor
{
  public:
  Motor(int A1, int A2);
  void fwd();
  void rev();
  void off();
  private:
  int _pin00;
  int _pin01;
};
#endif 