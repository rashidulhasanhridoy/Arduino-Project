#include <Servo.h>

int pos = 0;

Servo servo;
int angle = 45;
//to change the angle just change the vaule of angle.
void setup()
{
  servo.attach(9);
  servo.write(angle);

}

void loop()
{
  
}
