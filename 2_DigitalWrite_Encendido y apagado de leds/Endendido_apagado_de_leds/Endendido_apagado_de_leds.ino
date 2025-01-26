int ledRojo = 10;
int ledVerde = 11;
int delay_time = 1000;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledRojo, OUTPUT);
 pinMode(ledVerde, OUTPUT);
}

void loop() {
  //Solamente tenemos 255 bits disponibles
  //tendriamos que iniciar desde 0 hasta 255
  digitalWrite(ledRojo,HIGH);
  delay(delay_time);
  digitalWrite(ledRojo,LOW);
  delay(delay_time);
  
  digitalWrite(ledVerde,HIGH);
  delay(delay_time);
  digitalWrite(ledRojo,LOW);
  delay(delay_time);
}
