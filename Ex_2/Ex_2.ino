/* 
 *  IFSP - Registro - ALP
 *  Controlar um LED atráves da saída digital - 02
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

digitalWrite (2, LOW);
delay (0);
digitalWrite (3, LOW);
delay (1000);

digitalWrite (2, HIGH); 
delay (00);
digitalWrite (3, LOW);
delay (1000);

digitalWrite (2, LOW);
delay (0)
;digitalWrite (3, HIGH);
delay (1000);

digitalWrite (2, HIGH);
delay (1000);

}
