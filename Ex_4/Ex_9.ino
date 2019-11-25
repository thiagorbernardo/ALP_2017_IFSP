/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Controle dois leds a partir de um botão de pressão - 09
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 15/08/2017.
 */

 int led = 2;
 int led2 = 3;
 int button = 8;
 int valorEntrada = 0;
void setup() {

  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button,INPUT_PULLUP);

}

void loop() {
  
  valorEntrada = digitalRead(button);
  if (valorEntrada == LOW){
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
  }
  else{
    digitalWrite(led,HIGH);
    digitalWrite(led2, LOW);
  }

}
