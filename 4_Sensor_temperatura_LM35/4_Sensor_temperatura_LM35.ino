#define LM35 A1  // Pin analógico donde está conectado el sensor
#define ledRojo 7

void setup() {
  Serial.begin(9600);  // Inicia la comunicación serie
  pinMode(LM35,INPUT);
  pinMode(ledRojo,INPUT);
}

void loop() {
  float valorAnalogico = float(analogRead(LM35));  // Leer valor del sensor
  float temperatura = (valorAnalogico * 5.0 ) / 1023.0;  // Conversión a grados Celsius
  float temperaturaFinal = temperatura/0.010;

  //Serial.print(valorAnalogico);
  Serial.print("Temperatura: ");
  Serial.print(temperaturaFinal);
  Serial.println(" °C");

  if(temperaturaFinal<30){
    digitalWrite(ledRojo,HIGH);
  }else{
    digitalWrite(ledRojo,LOW);
  }

  delay(1000);  // Espera 1 segundo antes de la próxima lectura
}