/*
  Titre      : Clapet Servo Moteur Controle
  Auteur     : Bilel Belhadj
  Date       : 09/02/2022
  Description: le programme sert a controller un servo moteur qui varie de 0 a 90 avec un capteur de rotation
  Version    : 0.0.1
*/

#include <Arduino.h>


//#include "WIFIConnector_mkrwifi1010.h"

const int rotation_Sensor = A1 ;
const int transistor = 2 ;
int angle_Capteur = 0 ;
int val_led = 0;




void setup() {
 
  Serial.begin(9600);

}

void loop() {
  angle_Capteur = analogRead(rotation_Sensor);
  val_led = map(angle_Capteur, 1, 1023, 0, 255);
  analogWrite(transistor, val_led);
 
  
}