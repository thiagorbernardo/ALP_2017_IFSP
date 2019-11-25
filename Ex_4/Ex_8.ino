/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Led controlado por um botão de pressão - 07
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 15/08/2017.
 */

 int led = 2;
 int button = 8;
 int valorEntrada = 0;
void setup() {

  pinMode(led, OUTPUT);
  pinMode(button,INPUT_PULLUP);

}

void loop() {
  
  valorEntrada = digitalRead(button);
  if (valorEntrada == LOW){
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }

}
