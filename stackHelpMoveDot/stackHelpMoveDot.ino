int xPin = A1; //Pins for Joystick and starting int's
int yPin = A0;
int buttonPin = 2;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

#include "LedControl.h"
LedControl lc=LedControl(12,11,10,1); 


void setup() {
  Serial.begin(9600);

  lc.shutdown(0,false);// turn off power saving, enables display
  lc.setIntensity(0,8);// sets brightness (0~15 possible values)
  lc.clearDisplay(0);// clear screen
  pinMode(xPin, INPUT); //Declaring joystick
  pinMode(yPin, INPUT);

  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  xPosition = analogRead(A0);
  yPosition = analogRead(A1);
  buttonState = digitalRead(buttonPin);
  char x_translate = map(xPosition, 1023, 1, 0, 7); //This maps the values//
  char y_translate = map(yPosition, 1023, 1, 7, 0);
  
  Serial.print("X = ");
  Serial.print(xPosition, DEC);
  Serial.print(", Y = ");
  Serial.print(yPosition, DEC);
  Serial.print(", x = ");
  Serial.print(x_translate, DEC); 
  Serial.print(", y = ");
  Serial.println(y_translate, DEC); 
  lc.clearDisplay(0);
  lc.setLed(0,x_translate,y_translate,true);  
  delay(150); //Mess with this delay to get your joystick correct//
}
