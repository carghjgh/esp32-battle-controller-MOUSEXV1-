#include <Arduino.h>
#include <Servo.h>

//ALL SERVO ARE FOR TESTING 
Servo myServo;/*first servo(33) for joystick-1 X-axis*/
Servo joystickYServo;/*2nd servo(32) for joystick-1 Y-axis*/

Servo joystick2XServo;/*1st servo() for joystick-2 X-axis*/
Servo joystick2YServo;/*2nd servo(32) for joystick-2 Y-axis*/


//joystick-1
int joystickX = 35;
int joystickY = 34;

//joystick-2
int joystick2X = 36;
int joystick2Y = 39;

void setup() {
  
  Serial.begin(115200);//serial moitor
  //joystick-1
  pinMode(joystickX, INPUT);
  pinMode(joystickY, INPUT);
  
  //joystick-2
  pinMode(joystick2X,INPUT);
  pinMode(joystick2Y,INPUT);
  
  //joy1 servos
  myServo.attach(33);
  joystickYServo.attach(32);

  //joy2 servos
  joystick2XServo.attach(25);
  joystick2YServo.attach(26);
  
}



void loop() {
  //this maps the joystick to output 0-180 degress   //j1
  int mappedX = map(analogRead(joystickX), 0, 4095, 0 , 180);
  int mappedY = map(analogRead(joystickY), 0, 4095, 0 , 180);
  //j2
  int mappedX2 = map(analogRead(joystick2X), 0, 4095, 0 , 180);
  int mappedY2 = map(analogRead(joystick2Y), 0, 4095, 0 , 180);

  //Serial.println(mappedY);
  myServo.write(mappedX);
  joystickYServo.write(mappedY);
  
  joystick2XServo.write(mappedX2);
  joystick2YServo.write(mappedY2);
  
  
  delay(10);
  
}
