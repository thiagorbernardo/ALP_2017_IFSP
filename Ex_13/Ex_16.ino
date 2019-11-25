/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Piscar LED 8x em 0,5s  - 16
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 15/08/2017.
 */
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {

  for(int x = 0 ; x < 8 ; x++){
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
  }
  for(int x = 0 ; x < 10 ; x++){
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);
  }
  for(int x = 0 ; x < 2 ; x++){
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
  }

}
