#include <Arduino.h>
#include <ESP32Servo.h>

Servo myServo; //create a Servo object for easy control
const int SERVO_PIN = 12; // set according to which pin servo's data line is connected to
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // setup serial monitor with rate of 115200 bits per second
  myServo.setPeriodHertz(50); // set PWM period, gotten from datasheet
  myServo.attach(SERVO_PIN); // attaches the servo on pin 12 to the servo object
}

void loop() {
    for(int pos = 0; pos <= 180; pos++){
    myServo.write(0); // set the servo to an angle between 0 and 180
    delay(50); // wait 50 ms for the servo to be able to move
    myServo.write(90); // set the servo to an angle between 0 and 180

    Serial.print("Moved to "); // print out a debug message saying where the servo moves to
    Serial.println(90); 
  }
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}