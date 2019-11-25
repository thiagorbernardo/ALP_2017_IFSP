/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Controlar um led a partir de um pushbutton  - 11
 *  
 *  Responsável: Thiago Ramos && Vitor Yuit
 *  
 *  Data: 15/08/2017.
 */

 int led = 2;
 int button = 8;
 int valorEntrada = 0;
void setup() {
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(button,INPUT_PULLUP);

}

void loop() {
  
  valorEntrada = digitalRead(button);
  if (valorEntrada == LOW){
    digitalWrite(led, LOW);
    Serial.println("LED APAGADO");
  }
  else{
    digitalWrite(led,HIGH);
    Serial.println("LED ACESO");
  }

}
