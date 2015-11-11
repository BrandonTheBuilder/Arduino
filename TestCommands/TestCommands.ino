
#include <Command.h>

/*
    Testing the command class for serial control
*/

const char trigPin = 3;
const char echoPin = 2;
Command startTrig = Command('i', trigPin, 'o');
Command startEcho = Command('i', echoPin, 'i');
Command trigLow = Command('w', trigPin, 'l');
Command trigHigh = Command('w', trigPin, 'h');
Command readEcho = Command('p', echoPin, 'h');

void setup()
{
    Serial.begin(9600);
    startTrig.run();
    startEcho.run();
    
}


void loop()
{
    trigLow.run();
    delayMicroseconds(2);
    trigHigh.run();
    delayMicroseconds(10);
    trigLow.run();
    readEcho.run();
    Serial.println(int(readEcho.getResponse()));
    delay(50);
}
