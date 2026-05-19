#include <Arduino.h>

//joystick-1
int joystickX = 35;
int joystickY = 34;

//joystick-2
int joystick2X = 36;
int joystick2Y = 39;

//wepon button
int button = 27;

void setup() {
  
  Serial.begin(115200);//serial moitor
  //joystick-1
  pinMode(joystickX, INPUT);
  pinMode(joystickY, INPUT);
  
  //joystick-2
  pinMode(joystick2X,INPUT);
  pinMode(joystick2Y,INPUT);

  //weapon button
  pinMode(button, INPUT_PULLUP);
  
}
float angle = 0;
void loop() {
  //this maps the joystick to output 0-180 degress   //joystick1
  int mappedX = map(analogRead(joystickX), 0, 4095, 0 , 180);
  int mappedY = map(analogRead(joystickY), 0, 4095, 0 , 180);
  //joystick2
  int mappedX2 = map(analogRead(joystick2X), 0, 4095, 0 , 180);
  int mappedY2 = map(analogRead(joystick2Y), 0, 4095, 0 , 180);
  //button
  int buttonstate = digitalRead(button);
  
  //serial print joystick 1
  
  Serial.print(">");
Serial.print("joystickY:");
  Serial.print(mappedY);
  Serial.print(",");
  Serial.print("joystickX:");
  Serial.print(mappedX);
  Serial.print(",");

  //serial print joystick 2
  Serial.print("joystick2Y:");
  Serial.print(mappedY2);
  Serial.print(",");
  Serial.print("joystick2X:");
 Serial.print(mappedX2);
  Serial.println();
  
  
  //serial print button 
  if (buttonstate == LOW){
    Serial.println("pressed");
    
  }
  
  
  delay(10);//wait 1 milisec
  
}
