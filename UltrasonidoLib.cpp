#include "UltrasonidoLib.h"

UltrasonidoLib::UltrasonidoLib(int pinTrig, int pinEcho) {
  _pinTrig = pinTrig;
  _pinEcho = pinEcho;
}

void UltrasonidoLib::begin() {
  pinMode(_pinTrig, OUTPUT);
  pinMode(_pinEcho, INPUT);
}

float UltrasonidoLib::measure() {
  digitalWrite(_pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(_pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(_pinTrig, LOW);
  
  float duration = pulseIn(_pinEcho, HIGH);
  float distance = duration * 0.034 / 2;  // Speed of sound = 343 m/s
  
  return distance;
}
