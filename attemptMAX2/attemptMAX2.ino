#include "LedControl.h"
 
LedControl lc=LedControl(12,11,10,1);  // Pins: DIN,CLK,CS, # of Display connected
 
unsigned long delayTime=200;  // Delay between Frames
 
// Put values in arrays
byte invader1a[] =
{
 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

};
 
byte invader1b[] =
{
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,

};

 
byte invader2a[] =
{
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};

 
byte invader2b[] =
{
   0xFF,0xFF,0xFF,0x24,0x24,0xFF,0xFF,0xFF,
};
 
void setup()
{
  lc.shutdown(0,false);  // Wake up displays
  lc.shutdown(1,false);
  lc.setIntensity(0,5);  // Set intensity levels
  lc.setIntensity(1,5);
  lc.clearDisplay(0);  // Clear Displays
  lc.clearDisplay(1);
}
 
 
//  Take values in Arrays and Display them
void sinvader1a()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,invader1a[i]);
  }
}
 
void sinvader1b()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,invader1b[i]);
  }
}
 
void sinvader2a()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,invader2a[i]);
  }
}
 
void sinvader2b()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,invader2b[i]);
  }
}
 
void loop()
{
// Put #1 frame on both Display
    sinvader1a();
    delay(delayTime);
    sinvader2a();
    delay(delayTime);
 
 
// Put #2 frame on both Display
    sinvader1b();
    delay(delayTime);
    sinvader2b();
    delay(delayTime);
 
}
