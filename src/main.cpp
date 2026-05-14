#include <Arduino.h>
#include <Servo.h>

//ALL SERVO ARE FOR TESTING 
Servo myServo;/*first servo(33) for joystick-1 X-axis*/
Servo joystickYServo;/*2nd servo(32) for joystick-1 Y-axis*/

int joystickX = 35;//joystick-1
int joystickY = 34;//joystick-1

void setup() {
  
  Serial.begin(115200);
  //joystick-1
  pinMode(joystickX, INPUT);
  pinMODE(joystickY, INPUT);
  //joystick-2
  
  myServo.attach(33);
  joystickYServo.attach(32);
  
}



void loop() {
  //this maps the joystick to output 0-180 degress
  int mappedX = map(analogRead(joystickX), 0, 4095, 0 , 180);
  int mappedY = map(analogRead(joystickY), 0, 4095, 0 , 180);

  Serial.println(mappedY);
  myServo.write(mappedX);
  joystickYServo.write(mappedY);
  
  
  delay(10);
  
}
