
//Sensores:
// HC-SR505 PIR Motion Sensor Module:  when the device detects a living body or IR emitting things the output will be HIGH 
// LM393 Optical Photosensitive LDR: When there is no light or the light intensity cannot reach the value, DO output is high level. 

#include <Arduino.h>

int LEDPin = 0;          //assigns LED pin to 0 (P0)
const int Presence = 1; // assigns pushbutton to pin A3 (P3)
const int Light = 2;
const int LightTime = 1000;



void setup()
{
  pinMode(LEDPin, OUTPUT);  //sets LEDPin to output
  pinMode(Presence, INPUT);  //sets buttonPin to input  
  pinMode(Light, INPUT);  //sets buttonPin to input
}
void loop()
{
  if (digitalRead(Presence) && digitalRead(Light)){
      digitalWrite(LEDPin, HIGH); // read the state of the pushbutton value
      delay(LightTime);
  }
}