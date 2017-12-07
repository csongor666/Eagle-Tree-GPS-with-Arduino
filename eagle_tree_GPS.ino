#include <SoftwareSerial.h>

SoftwareSerial mySer(3, 4); //digital 3 digital 4 pin

char inData = '0';

void setup(){
     Serial.begin(38400); 
      mySer.begin(38400);
}

void loop(){
    if(mySer.available()){
     inData = mySer.read(); 
     Serial.print(inData);
  }
}
