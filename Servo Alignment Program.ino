#include <Servo.h>

int servoPin1=6;
int servoPos1=90;

int servoPin2=5;
int servoPos2=90;

int servoPin3=10;
int servoPos3=160;

Servo myServo1;
Servo myServo2;
Servo myServo3;

void setup() {

Serial.begin(115200);
myServo1.attach(servoPin1);
myServo2.attach(servoPin2);
myServo3.attach(servoPin3);
}

void loop() {
  Serial.println("What Angle for the Servo1? ");
  while (Serial.available()==0){
  }
  servoPos1=Serial.parseInt();
myServo1.write(servoPos1);

  Serial.println("What Angle for the Servo2? ");
  while (Serial.available()==0){
  }
  servoPos2=Serial.parseInt();
myServo2.write(servoPos2);

Serial.println("What Angle for the Servo3? ");
  while (Serial.available()==0){
  }
  servoPos3=Serial.parseInt();
myServo3.write(servoPos3);
}
