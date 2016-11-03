#include "LedControl.h"
 
LedControl lc=LedControl(12,11,10,4);  // Pins: DIN,CLK,CS,and # of matricies. Yellow, Brown and Orange on board then Yellow, orange brown on the matrix. 
 
unsigned long delayTime=200;  // Delay between Frames
 
// Put values in arrays
byte eyeballa[] =
{
   0xFF,0x81,0x81,0x99,0x99,0x81,0x81,0xFF,
};
 
byte eyeballb[] =
{
0xFF,0x81,0x8D,0x8D,0x81,0x81,0x81,0xFF,
};

byte eyeballc[] =
{
  0xFF,0x81,0x81,0x8D,0x8D,0x81,0x81,0xFF,
};
byte eyeballd[] = 
{
  0xFF,0x81,0x81,0x81,0x8D,0x8D,0x81,0xFF,
};
byte eyeballe[] =
{
  0xFF,0x81,0x81,0x81,0xB1,0xB1,0x81,0xFF,
};
byte eyeballf[] =
{
  0xFF,0x81,0x81,0xB1,0xB1,0x81,0x81,0xFE,
};
byte eyeballg[] =
{
  0xFF,0x81,0x81,0xB1,0xB1,0x81,0x81,0xFE,
};

byte nose[] = 
{
  0x00,0x00,0x00,0x10,0x28,0x44,0x82,0x81,
};

byte b[] =
{
  0x00,0xC0,0xA0,0xA0,0xCE,0xAA,0xEE,0x00,
};

byte o[] =
{
  0x00,0x80,0x40,0x40,0x9D,0x55,0xDD,0x00,
};

byte ex[] =
{
  0x00,0x00,0x80,0x80,0x3B,0xAA,0xBB,0x00,
};

byte ex1[] = 
{
  0x00,0x00,0x00,0x00,0x77,0x55,0x77,0x00,
};
byte f[] = 
{
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};

 
void setup()
{
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
    lc.setRow(0,i,eyeballe[i]);
  }
}
void seyeball1f()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,eyeballf[i]);
  }
}
void seyeball1g()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,eyeballg[i]);
  }
}
void seyeball2a()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballa[i]);
  }
}
 
void seyeball2b()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballb[i]);
  }
}
void seyeball2c()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballc[i]);
  }
}
void seyeball2d()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballd[i]);
  }
}
void seyeball2e()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballe[i]);
  }
}
void seyeball2f()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballf[i]);
  }
}
void seyeball2g()
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(1,i,eyeballg[i]);
  }
}

void snose()
{
  for (int i=0; i < 8; i++)
  {
    lc.setRow(2,i,nose[i]);
  }
}
void sb()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(3,i,b[i]);
  }
}
void so()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(3,i,o[i]);
  }
}

void sex()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(3,i,ex[i]);
  }
}
void sex1()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(3,i,ex1[i]);
  }
}

void sf()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(3,i,f[i]);
  }
}
void loop()
{
// Put #1 frame on both Display
    snose();
    sf();
    seyeball1a();
    delay(delayTime);
    seyeball2a();
    delay(delayTime);
    seyeball1b();
    delay(delayTime);
    seyeball2b();
    delay(delayTime);
    seyeball1c();
    delay(delayTime);
    seyeball2c();
    delay(delayTime);
    seyeball1d();
    delay(delayTime);
    seyeball2d();
    delay(delayTime);
    seyeball1e();
    delay(delayTime);
    seyeball2e();
    delay(delayTime);
    seyeball1f();
    delay(delayTime);
    seyeball2f();
    delay(delayTime);
    seyeball1g();
    delay(delayTime);
    seyeball2g();
    delay(delayTime);


   
    
 
}
