#include "Indikator.h"

  Indikator::Indikator(int PIN)
  {
    pinIO = PIN;
    pinMode(pinIO, OUTPUT);
  }
  void Indikator::ff(int TIMER)
  {
    TIMER = 1000000 / TIMER;
    if (micros() - P_Millis >= TIMER)
    {
      LED = !LED;
      digitalWrite(pinIO, LED);
      P_Millis = micros();
    }
  }
void Indikator::write(bool Condition)
  {
  digitalWrite(pinIO, Condition);
  }