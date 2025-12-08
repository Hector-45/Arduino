int dot = 100;
int dash = 300;
int ledAzul = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledAzul, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledAzul, HIGH);
  delay(dot);
  digitalWrite(ledAzul, HIGH);
  delay(dot);

  digitalWrite(ledAzul, LOW);
  delay(dash);
  digitalWrite(ledAzul, LOW);
  delay(dash);

  digitalWrite(ledAzul, LOW);
  delay(dot);
  digitalWrite(ledAzul, LOW);
  delay(dot);

}
