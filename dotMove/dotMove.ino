#include "LedControl.h"
 
LedControl lc=LedControl(12,11,10,1);  // Pins: DIN,CLK,CS, # of Display connected

// I put all the points on the matrix into an array. 
byte a11[] =
{
   0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a12[] =
{
   0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a13[] =
{
   0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a14[] =
{
   0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a15[] =
{
   0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a16[] =
{
   0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a17[] =
{
   0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a18[] =
{
   0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a21[] =
{
   0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a22[] =
{
   0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a23[] =
{
   0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a24[] =
{
   0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a25[] =
{
   0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a26[] =
{
   0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a27[] =
{
   0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a28[] =
{
   0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a31[] =
{
   0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,
};
byte a32[] =
{
   0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
};
byte a33[] =
{
   0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,
};
byte a34[] =
{
   0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
};
byte a35[] =
{
   0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,
};
byte a36[] =
{
   0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,
};
byte a37[] =
{
   0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,
};
byte a38[] =
{
   0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
};
byte a41[] =
{
   0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,
};
byte a42[] =
{
   0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,
};

byte a43[] =
{
   0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,
};

byte a44[] =
{
   0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,
};

byte a45[] =
{
   0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,
};

byte a46[] =
{
   0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,
};

byte a47[] =
{
   0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,
};

byte a48[] =
{
   0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
};

byte a51[] =
{
   0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
};

byte a52[] =
{
   0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,
};

byte a53[] =
{
   0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
};

byte a54[] =
{
   0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
};

byte a55[] =
{
   0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
};

byte a56[] =
{
   0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
};

byte a57[] =
{
   0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
};

byte a58[] =
{
   0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
};

byte a61[] =
{
   0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,
};

byte a62[] =
{
   0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,
};

byte a63[] =
{
   0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,
};

byte a64[] =
{
   0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,
};

byte a65[] =
{
   0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,
};

byte a66[] =
{
   0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
};

byte a67[] =
{
   0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,
};

byte a68[] =
{
   0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,
};

byte a71[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
};

byte a72[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,
};

byte a73[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,
};

byte a74[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,
};

byte a75[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,
};

byte a76[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
};

byte a77[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
};

byte a78[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
};

byte a81[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
};

byte a82[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,
};

byte a83[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,
};

byte a84[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
};

byte a85[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
};

byte a86[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,
};

byte a87[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
};

byte a88[] =
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
};

byte none[] = //array where no points are lit
{
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte all[] = //array which all points are lit
{
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};


int xPin = A1;
int yPin = A0;
int buttonPin = 2;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lc.shutdown(0,false);  // Wake up displays
  lc.setIntensity(0,5);  // Set intensity levels
  lc.clearDisplay(0);  // Clear Displays
  sa44();

  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  pinMode(buttonPin, INPUT_PULLUP);
}
 
 
//  I then made a function to display each corresponsing point on the screen.
// For example, point (1,1) is a11, and the function is sa11. 
// Point (2,3) is a23 and the function is sa23, etc. 
void sa11()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a11[i]);
  }
}
void sa12()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a12[i]);
  }
}
void sa13()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a13[i]);
  }
}
void sa14()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a14[i]);
  }
}
void sa15()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a15[i]);
  }
}
void sa16()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a16[i]);
  }
}
void sa17()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a17[i]);
  }
}
void sa18()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a18[i]);
  }
}
void sa21()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a21[i]);
  }
}
void sa22()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a22[i]);
  }
}
void sa23()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a23[i]);
  }
}
void sa24()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a24[i]);
  }
}
void sa25()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a25[i]);
  }
}
void sa26()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a26[i]);
  }
}
void sa27()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a27[i]);
  }
}
void sa28()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a28[i]);
  }
}
void sa31()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a31[i]);
  }
}
void sa32()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a32[i]);
  }
}
void sa33()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a33[i]);
  }
}
void sa34()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a34[i]);
  }
}
void sa35()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a35[i]);
  }
}
void sa36()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a36[i]);
  }
}
void sa37()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a37[i]);
  }
}
void sa38()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a38[i]);
  }
}
void sa41()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a41[i]);
  }
}
void sa42()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a42[i]);
  }
}
void sa43()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a43[i]);
  }
}
void sa44()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a44[i]);
  }
}
void sa45()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a45[i]);
  }
}
void sa46()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a46[i]);
  }
}
void sa47()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a47[i]);
  }
}
void sa48()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a48[i]);
  }
}
void sa51()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a51[i]);
  }
}
void sa52()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a52[i]);
  }
}
void sa53()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a53[i]);
  }
}
void sa54()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a54[i]);
  }
}
void sa55()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a55[i]);
  }
}
void sa56()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a56[i]);
  }
}
void sa57()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a57[i]);
  }
}
void sa58()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a58[i]);
  }
}
void sa61()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a61[i]);
  }
}
void sa62()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a62[i]);
  }
}
void sa63()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a63[i]);
  }
}
void sa64()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a64[i]);
  }
}
void sa65()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a65[i]);
  }
}
void sa66()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a66[i]);
  }
}
void sa67()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a67[i]);
  }
}
void sa68()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a68[i]);
  }
}

void sa71()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a71[i]);
  }
}
void sa72()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a72[i]);
  }
}
void sa73()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a73[i]);
  }
}
void sa74()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a74[i]);
  }
}
void sa75()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a75[i]);
  }
}
void sa76()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a76[i]);
  }
}
void sa77()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a77[i]);
  }
}
void sa78()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a78[i]);
  }
}
void sa81()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a81[i]);
  }
}
void sa82()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a82[i]);
  }
}
void sa83()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a83[i]);
  }
}
void sa84()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a84[i]);
  }
}
void sa85()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a85[i]);
  }
}
void sa86()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a86[i]);
  }
}
void sa87()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a87[i]);
  }
}
void sa88()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,a88[i]);
  }
}
void snone()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,none[i]);
  }
}
void sall()
{
  for (int i = 0; i < 8; i++)  
  {
    lc.setRow(0,i,all[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  xPosition = analogRead(xPin);
  
  yPosition = analogRead(yPin);

  buttonState = digitalRead(buttonPin);

  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" Y: ");
  Serial.print(yPosition);
  Serial.print(" Button: ");
  Serial.println(buttonState);
if(xPosition && yPosition > 300)
{
  sa44();
}
if(xPosition == 0)
{
  sa43();
if(xPosition == 692)
{
  sa54();  
}

}

delay(100);
}







