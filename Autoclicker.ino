#include <Servo.h>

Servo servo;
int servoPin = 9;      // Signal wire to pin 9
int pressAngle = 165;   // Angle for pressing the key
int restAngle = 140;     // Angle for resting position
int delayTime = 1000;  // Delay between presses (in ms)
 
void setup() {
  servo.attach(servoPin);
  servo.write(restAngle);
  delay(1000); // Give it a sec to settle
}

void loop() {
  servo.write(pressAngle);   // Press
  delay(150);                // Hold the press briefly
  servo.write(restAngle);    // Release
  delay(delayTime);          // Wait before next press
}
