/*
TP3
*/
#include <LiquidCrystal.h>

#define PASVOLT (float)(5.0F / 1024.0F)
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  lcd.begin(16, 2);
  lcd.print("Voltmetre 33.5V");
}

void loop() {
  unsigned int val = analogRead(A0);
  Serial.print("Val : ");
  Serial.println(val);

  // float pasSortie=31.0F/4.6268F;  // Tension d'entrée 31V pour 4,62V en entrée Arduino suivant le pont DIV
  float pasSortie=31.0F/5.0F;
  Serial.print("Tension : ");
  Serial.println((val * PASVOLT) * pasSortie);
  float tensionSortie = (val * PASVOLT) * pasSortie;

  lcd.setCursor(8,1);
  lcd.print(tensionSortie);
  lcd.print("V");

  delay(500);
}
