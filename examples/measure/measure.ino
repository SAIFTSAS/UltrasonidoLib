#include <UltrasonidoLib.h>

UltrasonidoLib ultrasonido(2, 3);  // Pines de Trig y Echo

void setup() {
  Serial.begin(9600);
  ultrasonido.begin();
}

void loop() {
  float distance = ultrasonido.measure();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
