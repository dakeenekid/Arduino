#include "LedControl.h"
 
LedControl lc=LedControl(12,11,10,4);  // Pins: DIN,CLK,CS,and # of matricies. Yellow, Brown and Orange on board then Yellow, orange brown on the matrix. 
 
unsigned long delayTime=200;  // Delay between Frames

byte b[] =
{
  0x70,0x48,0x48,0x78,0x78,0x48,0x48,0x70,
};

byte o[] =
{
  0x3C,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,
};

byte ex[] =
{
  0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x18,
};



void setup() {
  // put your setup code here, to run once:

lc.shutdown(0,false);  // Wake up displays
  lc.shutdown(1,false);
  lc.shutdown(2,false);
  lc.shutdown(3,false);
  lc.setIntensity(0,5);  // Set intensity levels
  lc.setIntensity(1,5);
  lc.setIntensity(2,5);
  lc.setIntensity(3,5);
  lc.clearDisplay(0);  //Clear Displays
  lc.clearDisplay(1);
  lc.clearDisplay(2);
  lc.clearDisplay(3);
}

void sb()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,b[i]);
  }
}
void so()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(1,i,o[i]);
  }
}

void sex()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(3,i,ex[i]);
  }
}
void so1()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(2,i,o[i]);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  sb();
  delay(delayTime);
  so();
  delay(delayTime);
  so1();
  delay(delayTime);
  sex();
  delay(delayTime);

}



