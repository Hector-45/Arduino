//int VALOR;

#include <LiquidCrystal_I2C.h>

int buzzer = 11;
int SensorA0 = A0;

int umbral = 250;

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(SensorA0, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  int lecturaSensor = analogRead(SensorA0);
  Serial.print("PIN A0: ");
  Serial.println(lecturaSensor);

  lcd.setCursor(0,0);
  lcd.print("CALIDAD DE AIRE: ");
  lcd.setCursor(0,1);
  lcd.print(lecturaSensor);

  if(lecturaSensor>umbral){
    digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }
  delay(1000);

  //VALOR = analogRead(A0);
  //Serial.println(VALOR);
  //delay(500);
}
