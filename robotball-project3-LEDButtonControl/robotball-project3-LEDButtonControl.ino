#define BUTTON 2
#define LED 3

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonVal = digitalRead(BUTTON);

  if(buttonVal == 1){
    digitalWrite(LED, HIGH);
  }
  else if(buttonVal == 0){
    digitalWrite(LED, LOW);
  }

  delay(200);
}
