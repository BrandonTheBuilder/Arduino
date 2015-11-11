#include <SoftwareSerial.h>

SoftwareSerial mySerial(1, 0);//Initialize serial communications on pins 1TX, 0RX 

void setup(){
    mySerial.begin(9600)
}

void loop(){
    
}