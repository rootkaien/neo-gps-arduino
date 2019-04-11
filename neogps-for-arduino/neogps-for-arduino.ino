#include <SoftwareSerial.h>
 
SoftwareSerial neoGps(7,6);
 
void setup() {
  Serial.begin(9600);
  Serial.println("Start GPS... ");
  neoGps.begin(9600);
}
 
void loop() {
  if(neoGps.available())
  {
    Serial.write(neoGps.read());
  }
}
