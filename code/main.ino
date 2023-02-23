#include <SoftwareSerial.h>
#include <AFMotor.h>

AF_DCMotor motor_L(1);
AF_DCMotor motor_R(4);

void setup(void)
{
  Serial.begin(9600);

  motor_L.setSpeed(150);
  motor_L.run(RELEASE);
  motor_R.setSpeed(150);
  motor_R.run(RELEASE);
}

void loop(void)
{
  int val1 = digitalRead(A0);
  int val2 = digitalRead(A5);

  // Serial.println(val1);
  // Serial.println(val2);
  // Serial.println();

  if (val1 == 0 && val2 == 0) {
    motor_L.setSpeed(150);
    motor_R.setSpeed(150);
    motor_L.run(FORWARD);
    motor_R.run(FORWARD);
  }
  else if (val1 == 0 && val2 == 1) {
    motor_R.run(RELEASE);
    motor_L.run(RELEASE);
    delay(500);
    motor_L.setSpeed(120);
    motor_L.run(FORWARD);
  }
  else if (val1 == 1 && val2 == 0) {
    motor_R.run(RELEASE);
    motor_L.run(RELEASE);
    delay(500);
    motor_R.setSpeed(120);
    motor_R.run(FORWARD);
  }
  else if (val1 == 1 && val2 == 1) {
    motor_L.run(RELEASE);
    motor_R.run(RELEASE);
  }
}
