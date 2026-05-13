#include <Arduino.h>
#include <Servo.h>

Servo myServo;
int joystickX = 35;

void setup() {
  
  Serial.begin(115200);
  
  pinMode(joystickX, INPUT);
  myServo.attach(33);
  
}



void loop() {
  int mappedX = map(analogRead(joystickX), 0, 4095, 0 , 180);

  Serial.println(mappedX);
  myServo.write(mappedX);
  
  
  delay(10);
  
}
