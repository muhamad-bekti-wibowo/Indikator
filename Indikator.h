#include "Arduino.h"

class Indikator
{
public:
    Indikator (int PIN);
    void ff(int TIMER);
    void write(bool Condition);

private:
    int pinIO;
    bool LED;
    unsigned long Millis;
    
};
