#include <Servo.h>

//const int BUTTON_PIN = 2;
const int SERVO_PIN = 9;

Servo servo;
int pos = 0;

void setup() {
  servo.attach(SERVO_PIN);
  //pinMode(BUTTON_PIN, INPUT); 
}

void loop() {
  for (pos = 0; pos <= 180; pos++) {
    servo.Write(pos);
    delay(15);
  }
  for (pos = 180; pos <= 0; pos--) {
    servo.Write(pos);
    delay(15);
  }
}
