/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Buzzer para codigo morse - 13
 *  
 *  Responsável: Thiago Ramos && Vitor Yuit
 *  
 *  Data: 15/08/2017.
 */
  int buzzer = 6;
void setup() {
 pinMode(buzzer, OUTPUT); 
}
void loop() {
  for (int sos = 0; sos < 3; sos++) {
    digitalWrite(buzzer, HIGH);
    delay(150);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  delay(100);

  for (int sos = 0; sos < 3; sos++) {
    digitalWrite(buzzer, HIGH);
    delay(400);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  delay(100);

  for (int sos = 0; sos < 3; sos++) {
    digitalWrite(buzzer, HIGH);
    delay(150);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  delay(5000);
  
}
