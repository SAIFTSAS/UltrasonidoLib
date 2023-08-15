#ifndef UltrasonidoLib_h
#define UltrasonidoLib_h

#include "Arduino.h"

class UltrasonidoLib {
public:
  UltrasonidoLib(int pinTrig, int pinEcho);
  void begin();
  float measure();

private:
  int _pinTrig;
  int _pinEcho;
};

#endif
