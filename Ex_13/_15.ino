/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Efeito de iluminação sequencial com LED's e decremento  - 15
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 15/08/2017.
 */
void setup() {
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
}

void loop() {
for (int x = 2; x <= 5; x++) {
  digitalWrite (x,HIGH);
  delay (50);
  digitalWrite (x,LOW);
  delay (50);
}
for (int x = 5; x >= 2; x--) {
  digitalWrite (x,HIGH);
  delay (50);
  digitalWrite (x,LOW);
  delay (50);
}
}

