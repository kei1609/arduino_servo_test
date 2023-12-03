#include <Servo.h>

//const int BUTTON_PIN = 2;
const int SERVO_PIN = 9;

Servo servo;
int pos = 0;
int potval;
int servo_pwm;

void setup() {
  servo.attach(SERVO_PIN);
  //pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  potval = analogRead(A0);
  servo_pwm = map(potval, 0, 1023, 600, 2400);

  servo.writeMicroseconds(servo_pwm);
  delay(100);

  Serial.print(potval);
  Serial.print(": ");
  Serial.print(servo_pwm);
  Serial.println("[us]");

}
