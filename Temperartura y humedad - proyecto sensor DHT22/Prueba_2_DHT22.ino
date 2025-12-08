/*
PIN OUT 
SDA A4
SCL A5
VCC  5V 
GND GND
SENSOR PIN 9

*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

//#define DHTTYPE DHT11
#define DHTTYPE DHT22
#define DHTPIN 9

DHT dht (DHTPIN,DHTTYPE);
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
void setup(){
  //Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop(){
  //delay(1000);
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();

  //if(isnan(humedad) || isnan(temperatura)){
  //  Serial.println("ERROR EN EL SENSOR");
  //  return;
  //}
  lcd.setCursor(0,0);
  lcd.print("HUMEDAD: ");
  lcd.setCursor(8,0);
  lcd.print(humedad);
  lcd.setCursor(0,1);
  lcd.print("TEMPERATURA:");
  lcd.setCursor(12,1);
  lcd.print(temperatura);
  lcd.setCursor(15,3);
  lcd.print("C");
}