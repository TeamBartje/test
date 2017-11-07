#define BUTTON 7
#define LED 13
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);//Om correct te beginnen
}

void loop() {
 if (digitalRead(BUTTON) == HIGH){
  digitalWrite (LED, LOW);
 }
 else digitalWrite(LED, HIGH);
}
