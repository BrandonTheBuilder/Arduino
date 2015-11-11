#include <SerialControl.h>

/*
    Testing the serial control class
*/
SerialControl control;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    control.run();
}