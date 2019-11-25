/* 
 *  IFSP - Registro - ALP
 *    Super maquina com while - 18
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 29/08/2017.
 */
int i = 2;
int led;
 #define led i
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}
void loop() {
    while(i <5){
    digitalWrite (led, HIGH);
    delay(50);    
    digitalWrite (led, LOW);
    delay(50);
    Serial.println(i);
    i ++;
    }
  while (i > 2){
    digitalWrite (led, HIGH);
    delay(50);
    digitalWrite (led, LOW);
    delay(50);
    Serial.println(i);
    i --;
  }
    }
