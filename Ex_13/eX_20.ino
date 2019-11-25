 /* 
 *  IFSP - Registro - ALP
 * Piscar LED 30 vezes botao-20
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 29/08/2017.
 */
 
 boolean butt;
 int led, i;
 #define led 2
void setup() {
  pinMode(2, OUTPUT);
  pinMode(7, INPUT_PULLUP);

}
void loop() {
  butt = digitalRead(7);
if (butt == false) {
 while (i<30) { 
 digitalWrite(led, HIGH);
 delay (100);
 digitalWrite (led, LOW);
 delay (100);
i++;
  }
  i= 0;
  }
  else{
}
}

