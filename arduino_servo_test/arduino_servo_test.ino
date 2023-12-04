#include <Servo.h>

//const int BUTTON_PIN = 2;
const int SERVO_L_PIN = 9;
const int SERVO_R_PIN = 10;

Servo servo_l, servo_r;
int pos = 0;
int potval;
int servo_l_pwm, servo_r_pwm;

void setup() {
  servo_l.attach(SERVO_L_PIN);
  servo_r.attach(SERVO_R_PIN);
  //pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  potval = analogRead(A0);
  servo_r_pwm = map(potval, 0, 1023, 600, 2400);
  servo_l_pwm = map(potval, 0, 1023, 2400, 600);

  servo_l.writeMicroseconds(servo_l_pwm);
  servo_r.writeMicroseconds(servo_r_pwm);
  delay(1000);

  Serial.print(potval);
  Serial.print(": ");
  Serial.print(servo_r_pwm);
  Serial.println("[us]");

}
