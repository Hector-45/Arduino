int ledAzul = 13;
int ledVerde = 12;
int ledRojo = 11;
int ledBlanco = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledBlanco, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledAzul,HIGH);
  delay(1000);
  digitalWrite(ledVerde,HIGH);
  delay(1000);
  digitalWrite(ledRojo,HIGH);
  delay(1000);
  digitalWrite(ledBlanco,HIGH);
  delay(1000);

  digitalWrite(ledAzul,LOW);
  delay(1000);
  digitalWrite(ledVerde,LOW);
  delay(1000);
  digitalWrite(ledRojo,LOW);
  delay(1000);
  digitalWrite(ledBlanco,LOW);
  delay(1000);
}
