/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Controlar dois LEDs através da saída digital - 03
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 08/08/2017.
 */
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(2,HIGH);
  delay(1000);
  
  digitalWrite(2,LOW);
  delay(0);
  
  digitalWrite(3,HIGH);
  delay(1000);
  
  digitalWrite(3,LOW);
  delay(0);


  
  
  
}
