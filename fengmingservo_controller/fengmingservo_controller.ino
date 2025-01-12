// fengming servo controller.
#include <Servo.h>

Servo left_arm; 
Servo right_arm;

int pos = 0;
void setup() { 
  // put your setup code here, to run once:
Serial.begin(9600); 
left_arm.attach(11);
right_arm.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    right_arm.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    left_arm.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
}
} 
