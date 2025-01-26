int ledRojo = 10;
int ledVerde = 11;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledRojo, OUTPUT);
 pinMode(ledVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledVerde,HIGH); 
}
