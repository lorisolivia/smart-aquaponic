#include <DallasTemperature.h>

#include<OneWire.h>

#define WATER_TEM_PIN A0
OneWire oneWire(WATER_TEM_PIN);
DallasTemperature sensors(&oneWire);



void setup()
{
  //on initialise la connexion serie
  Serial.begin(9600);
delay(2000);

 //on imprime un texte de bienvenu
 Serial.println("smart aquaponic");

}
 void loop()
 {
  //on recupere la temperature de la sonde
  sensors.requestTemperatures();
  double dTempWater = sensors.getTempCByIndex(0);

 //on imprime la temperature
 Serial.print("temperature de l'eau:");
 Serial.print(dTempWater);
 Serial.println("°C");


 //on attends 5secondes
 delay(5000);
 }


 
