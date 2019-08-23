/**
 * Sequencial de LEDs (Efeito Supermáquina)
 * @author - Leandro Derwin
 */
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  
  int efeito = 50;
  for (int i=13; i>=9; i--) {
    digitalWrite(i,HIGH);
    delay(efeito);
    digitalWrite(i,LOW);
  }

  for (int i=10; i<13; i++) {
    digitalWrite(i,HIGH);
    delay(efeito);
    digitalWrite(i,LOW);

  }
  

}
