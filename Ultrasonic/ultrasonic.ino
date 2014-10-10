
#include "Ultrasonic.h"


Ultrasonic ultrasonic(4);

void setup()
{
   Serial.begin(9600);
   
}

void loop()
{
        ultrasonic.MeasureInCentimeters();
        delay(150);
        Serial.print(ultrasonic.RangeInCentimeters);
        Serial.println(" cm");
}
