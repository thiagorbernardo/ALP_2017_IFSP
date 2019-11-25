/* 
 *  IFSP - Registro - ALP
 *  Algorítmo Led controlado por um botão retentivo - 10
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 15/08/2017.
 */
   int led = 13;
   int botao = 7;
   int valorEntrada = LOW;
   int valorAnterior = LOW;
   int estado = LOW;
void setup() { 
   pinMode(led, OUTPUT);
   pinMode(botao, INPUT_PULLUP);
   
}

void loop() {

  valorEntrada = digitalRead (botao) ;
  if ((valorEntrada == HIGH) && (valorAnterior == LOW)) {
    estado = 1 - estado;
    delay(10);
  }
  if (estado == HIGH) {
    digitalWrite (led, LOW);
  }
  else{
    digitalWrite (led, HIGH);
  }
  valorAnterior = valorEntrada;
}
