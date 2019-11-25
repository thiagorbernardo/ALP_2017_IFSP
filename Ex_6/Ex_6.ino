/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Semáfaro completo - 06
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 08/08/2017.
 */
void setup() {
  
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(03, LOW);
  digitalWrite(04, LOW);
  digitalWrite(05, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  delay(4000);

  digitalWrite(03, LOW);
  digitalWrite(04, HIGH);
  digitalWrite(05, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(03, HIGH);
  digitalWrite(04, LOW);
  digitalWrite(05, LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  delay(3000);

}
