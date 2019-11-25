/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Projete um semáforo simples - 05
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 08/08/2017.
 */
void setup() {
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(3,HIGH);
  delay(1000);
   digitalWrite(4,HIGH);
  delay(3000);
  
  digitalWrite(3,LOW);
  delay(0);
   digitalWrite(4,LOW);
  delay(4000);
  
  digitalWrite(13,LOW);
  delay(0);
  
  digitalWrite(13,LOW);
  delay(0);
  digitalWrite(13,HIGH);
  delay(4000);
  
  digitalWrite(13,LOW);
  delay(0);
  
  digitalWrite(11,HIGH);
  delay(3000);
  
  digitalWrite(11,LOW);
  delay(0);

  digitalWrite(12,HIGH);
  delay(1000);
  
  digitalWrite(12,LOW);
  delay(0);

   digitalWrite(13,HIGH);
  delay(4000);
  
  digitalWrite(5,HIGH);
  delay(1000);
  
  
}
