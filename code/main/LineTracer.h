#ifndef LINE_TRACER_H
#define LINE_TRACER_H

#include <AFMotor.h>

class LineTracer {
public:
  LineTracer();
  void setup();
  void loop();

private:
  AF_DCMotor motor_L;
  AF_DCMotor motor_R;
  static const int n = 10;
  int val1_samples[n];
  int val2_samples[n];
  int val1_sum;
  int val2_sum;
  int val1_index;
  int val2_index;
};

#endif
