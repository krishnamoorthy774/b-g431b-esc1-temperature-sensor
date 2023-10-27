#include <Arduino.h>

void tempSense(){
  float bitVal = analogRead(A_TEMPERATURE);
  float temp = (1000./19.)*(3.3/1023.)*bitVal-30.5263; //10bit // @25degree Celcius V=1.055 // (0,-48.6842)(1023,125)
  Serial.println(temp);
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  tempSense();
}
