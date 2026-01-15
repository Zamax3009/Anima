#include <Arduino.h>
#include <Esp32Servo.h>
#include <math.h>


//link length
const int FEMUR_LENGTH = 80; //mm
const int TIBIA_LENGTH = 100; //mm

/// Servo configuration constants
  //GPIO pins
const int HIP_SERVO_PIN = 23; //GPIO pin for hip servo
const int KNEE_SERVO_PIN = 22; //GPIO pin for knee servo
  //Angle limits
const int HIP_SERVO_MIN_ANGLE = 10; //degrees
const int KNEE_SERVO_MIN_ANGLE = 90; //degrees
const int HIP_SERVO_MAX_ANGLE = 180; //degrees
const int KNEE_SERVO_MAX_ANGLE = 180; //degrees
  //Offsets to calibrate the servos
const int HIP_SERVO_OFFSET = 80; //degrees
const int KNEE_SERVO_OFFSET = 90; //degrees





void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}