int UpDown = 0;
int LeftRight = 0; //Setting up controller//

#include "LedControl.h" //  need the library
LedControl lc=LedControl(8,10,9,2); //10 is to CLOCK, 9 = CS, 8=DIN//


void setup() {
  Serial.begin(9600);

  lc.shutdown(0,false);// turn off power saving, enables display
  lc.setIntensity(0,8);// sets brightness (0~15 possible values)
  lc.clearDisplay(0);// clear screen

}

void loop() {
  UpDown = analogRead(A0);
  LeftRight = analogRead(A1);
  char x_translate = map(LeftRight, 693, 0, 7, 0); //This maps the values//
  char y_translate = map(UpDown, 693, 0, 0, 7);
  
  Serial.print("UD = ");
  Serial.print(UpDown, DEC);
  Serial.print(", LR = ");
  Serial.print(LeftRight, DEC);
  Serial.print(", x = ");
  Serial.print(x_translate, DEC); 
  Serial.print(", y = ");
  Serial.println(y_translate, DEC); 
    // not in shutdown mode
    lc.clearDisplay(0);
    lc.setLed(0,x_translate,y_translate,true);  
  delay(150); //Mess with this delay to get your joystick correct//
}
