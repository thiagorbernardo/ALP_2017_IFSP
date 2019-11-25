/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Controlar dois led a partir de um pushbutton  - 12
 *  
 *  Responsável: Thiago Ramos && Vitor Yuit
 *  
 *  Data: 15/08/2017.
 */

 int led = 2;
 int led2 = 3;
 int button = 8;
 int valorEntrada = 0;
void setup() {
  Serial.begin(9600);
  
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button,INPUT_PULLUP);

}

void loop() {
  
  valorEntrada = digitalRead(button);
  if (valorEntrada == LOW){
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
    Serial.println("LED 2 ACESO");
  }
  else{
    digitalWrite(led,HIGH);
    digitalWrite(led2, LOW);
    Serial.println("LED 1   ACESO");
  }

}
