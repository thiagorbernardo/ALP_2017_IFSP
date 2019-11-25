  /* 
 *  IFSP - Registro - ALP
 *  Algorítmo Controlar frequencia do led a partir de potenciometro  - 22
 *  
 *  Responsável: Thiago Ramos && Vitor Yuiti
 *  
 *  Data: 12/09/2017.
 */
#define ptc A1
#define led 2
void setup() {
  Serial.begin(9600);
  pinMode(led , OUTPUT);

}

void loop() {
  int lecture = analogRead(ptc);
  float voltage = lecture/204.6;
  digitalWrite(led, HIGH);
  delay(lecture);
  digitalWrite(led, LOW);
  delay(lecture);
  analogWrite(led, map(lecture, 0, 1023, 0, 255));


}
