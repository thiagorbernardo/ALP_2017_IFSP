/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Piscar LED em 2 Hz - 17
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 22/08/2017.
 */
void setup() {
 pinMode (2, OUTPUT);
}

void loop() {
  for (int x = 2; x < 100; x++) {
    digitalWrite (2, HIGH);
    delay (1000/(x));
      digitalWrite (2, LOW);
  delay (1000/(x));
}
}
