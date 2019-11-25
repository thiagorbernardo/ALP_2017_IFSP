/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Efeito de iluminação sequencial com LED's com FOR  - 14
 *  
 *  Responsável: Thiago Ramos && Vitor Yuit
 *  
 *  Data: 15/08/2017.
 */

 int led;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}
void loop() {
  for (int led = 0; led <= 4; led++) {
    digitalWrite (led, HIGH);
    delay (100);
    digitalWrite (led, LOW);
    delay (100);
    
 
  }


}
