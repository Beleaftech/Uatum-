//Este é um codigo que pertence a Beleaf Technologies e faz parte do projeto Uatuma.

#define sensor 12
#define transistor 10

void setup() {
  pinMode(transistor, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(sensor)){
  digitalWrite(transistor, HIGH);
  }else{
    digitalWrite(transistor, LOW);
  }
}
