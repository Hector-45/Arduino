int ledRojo = 10;
int ledVerde = 11;
int brillo_1 = 0;
int brillo_2 = 100;
int brillo_3 = 255;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledRojo, OUTPUT);
 pinMode(ledVerde, OUTPUT);
}

void loop() {
  //Solamente tenemos 255 bits disponibles
  //tendriamos que iniciar desde 0 hasta 255
  analogWrite(ledRojo, brillo_1);
  delay(delay_time);
  analogWrite(ledRojo, brillo_2);
  delay(delay_time);
  analogWrite(ledRojo, brillo_3);
  delay(delay_time); 
  
  analogWrite(ledVerde, brillo_1);
  delay(delay_time);
  analogWrite(ledVerde, brillo_2);
  delay(delay_time);
  analogWrite(ledVerde, brillo_3);
  delay(delay_time);  
}
