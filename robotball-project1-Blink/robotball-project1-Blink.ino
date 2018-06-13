// Project 1 - LED Flasher
int ledPin = 10;

void setup() {
  // put your setup code here, to run once:
  
  // Configure PIN 10 to be used as an output pin
  pinMode(ledPin, OUTPUT);
}

void loop() {  
  // put your main code here, to run repeatedly:
  
  // Set PIN 10 to HIGH - in other words, turn it on
  digitalWrite(ledPin, HIGH);

  // Wait for 1 second (1000 milliseconds)
  delay(1000);

  // Now turn PIN 10 off by sending a LOW value to it. Being an OUTPUT pin means we can set it.
  digitalWrite(ledPin, LOW);

  // Wait another second
  delay(1000);
}
