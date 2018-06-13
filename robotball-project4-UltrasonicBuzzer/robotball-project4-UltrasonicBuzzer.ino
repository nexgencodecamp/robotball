#include "Ultrasonic.h"

Ultrasonic ultrasonic(7);

void setup(){
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}
void loop(){
    long RangeInInches;
    long RangeInCentimeters;

    Serial.println("The distance to obstacles in front is: ");
    RangeInInches = ultrasonic.MeasureInInches();
    Serial.print(RangeInInches);//0~157 inches
    Serial.println(" inch");
    delay(250);

    RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval
    Serial.print(RangeInCentimeters);//0~400cm
    Serial.println(" cm");

    if(RangeInCentimeters < 10){
      digitalWrite(8, HIGH);
    }
    else {
      digitalWrite(8, LOW);
    }
    delay(250);
}
