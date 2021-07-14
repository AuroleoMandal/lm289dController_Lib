/*
Library to simplify motor functionalities with lm298d motor driver
-Auroleo Mandal 12/07/2021
*/
#ifndef Motor_h
#define Motor_h
#include "Arduino.h"
class Motor
{
  public:
  Motor(int A1, int A2);
  Motor(int A1, int A2, int E);
  void fwd();
  void fwd(int);
  void rev();
  void rev(int);
  void off();
  void off(int);
  private:
  int _pin0;
  int _pin1;
  int _pinE;
};
#endif 