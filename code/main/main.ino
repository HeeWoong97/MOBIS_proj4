#include <SoftwareSerial.h>
#include "LineTracer.h"

LineTracer lineTracer;

void setup() {
  Serial.begin(9600);
  lineTracer.setup();
}

void loop() {
  lineTracer.loop();
}
