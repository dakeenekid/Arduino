#include "LedControl.h"
 
LedControl lc=LedControl(12,11,10,3);  // Pins: DIN,CLK,CS,and # of matricies. Yellow, Brown and Orange on board then Yellow, orange brown on the matrix. 
 
unsigned long delayTime=200;  // Delay between Frames
 
// Put values in arrays
byte eyeballa[] =
{ 
01111110,
10000001,
10100101,
10000001,
11000011,
01000010,
01000010,
01111110

};
 
byte eyeballb[] =
{
01111110,
10000001,
10010011,
10000001,
11000011,
01000010,
01000010,
01111110

};

byte eyeballc[] =
{
01111110,
10000001,
10100101,
10000001,
11000011,
01000010,
01000010,
01111110

};
byte eyeballd[] = 
{
01111110,
10000001,
11001001,
10000001,
11000011,
01000010,
01000010,
01111110

};
byte eyeballe[] =
{
00000000,
00111100,
00100100,
00100100,
00111000,
00101000,
00100100,
00000000,

};
byte eyeballf[] =
{
00011000,
00011000,
00000000,
00011000,
00011000,
00011000,
00011000,
00011000

};
byte eyeballg[] =
{
00000000,
00011110,
00010010,
00010010,
00011100,
00010000,
00010000,
00010000

};


 
void setup()
{
  lc.shutdown(0,false);  // Wake up displays
  lc.shutdown(1,false);
  lc.setIntensity(0,5);  // Set intensity levels
  lc.setIntensity(1,5);
  lc.clearDisplay(0);  //Clear Displays
  lc.clearDisplay(1);
}
 
 
//  Take values in Arrays and Display them
void seyeball1a()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,eyeballa[i]);
  }
}
 
void seyeball1b()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,eyeballb[i]);
  }
}

void seyeball1c()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,eyeballc[i]);
  }
}
void seyeball1d()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,eyeballd[i]);
  }
}
void seyeball1e()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(1,i,eyeballe[i]);
  }
}
void seyeball1f()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(1,i,eyeballf[i]);
  }
}
void seyeball1g()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(1,i,eyeballg[i]);
  }
}

void loop()
{
// Put #1 frame on both Display
    seyeball1a();
    delay(delayTime);
    seyeball1e();
    delay(delayTime);
    seyeball1b();
    delay(delayTime);
    seyeball1f();
    delay(delayTime);
    seyeball1c();
    delay(delayTime);
    seyeball1g();
    delay(delayTime);
    seyeball1g();
    delay(delayTime);





   
    
 
}
