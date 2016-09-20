#include "LedControl.h"

LedControl lc=LedControl(12,11,10,1);  // Pins: DIN,CLK,CS, # of Display connected

byte a14[] =
{
   0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a15[] =
{
   0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a24[] =
{
   0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a25[] =
{
   0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
};
byte a34[] =
{
   0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
};
byte a35[] =
{
   0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,
};
byte a44[] =
{
   0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,
};
byte a45[] =
{
   0x08,0x00,0x00,0x08,0x00,0x00,0x00,0x00,
};
const int trigPin = 2;
const int echoPin = 4;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  lc.shutdown(0,false);
  lc.setIntensity(0,.7);
  lc.clearDisplay(0);
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
  


void loop()
{
  // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  long duration, inches, cm;

  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  if(inches > 50)
  {
    sa14();
    
  }
  if(inches > 25 && inches < 50 )
  {
    sa24();
    
   }
  if(inches > 10 && inches < 25 )
  {
    sa34();
    
  }
  if(inches > 1 && inches < 10)
  {
    sa44();
    
  }
  
  delay(100);
}

long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}

