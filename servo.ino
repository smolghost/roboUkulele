/*
 * Movement and Motion
 * Elliot Grover
 * DIGF-1006FA Physical Computing
 * OCAD University
 * Created on: February 5th 2017
 * Based on:
 * Code example provided in class
 */


#include <Servo.h> // Include library

Servo myservo; // Make new servo object

int pos = 0; // Store the position

void setup() {
  
myservo.attach(9); // attaches the servo on pin 9 to the servo object
  }

void loop() {

for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees 
  // in steps of 1 degree
  myservo.write(pos); // tell servo to go to position in variable 'pos'
  delay(5); // waits 5ms for the servo to reach the position

    }

for (pos = 180; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
  myservo.write(pos); // tell servo to go to position in variable 'pos'
  delay(3); // waits 3ms for the servo to reach the position

  }
}
