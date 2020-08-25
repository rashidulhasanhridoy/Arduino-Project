#include <Servo.h>

int a = 0;

Servo servo;

void setup()
{
  servo.attach(9);
}

void loop()
{
  for(a = 0; a <= 180; a += 1) {
    servo.write(a);
    delay(10);
  }
  for(a = 180; a >= 0; a -= 1) {
    servo.write(a);
    delay(10);
  }
}