/*
#if defined(ESP8266)
#define PIN 2
#elif defined(ESP32)
#define PIN 2
#elif defined(AVR)
#define PIN 13
#else
#error "Please check that the microcontroller you are using, can only be used on ESP8266 or ESP32 or AVR only"
#endif
*/
#include "Arduino.h"

class Indikator
{
public:
    Indikator (int PIN);
    void ff(int TIMER);
    void write(bool Condition);

private:
    int pinIO;
    bool LED = 0;
    unsigned long P_Millis = 0;
    
};
