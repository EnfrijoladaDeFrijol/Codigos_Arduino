 // Alarma al precionar el botón

int boton = 2;
int buzzer = 8;
int led1 = 9;

void setup() {
  pinMode(boton, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  while(digitalRead(boton) == HIGH){
    digitalWrite(led1, HIGH);
  }
  digitalWrite(led1, LOW);
  for(int i=0; i<1; i++){
    patron1();
  } 

}

void patron1(){
  delay(100);
  digitalWrite(buzzer, HIGH),
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH),
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(300);

  digitalWrite(buzzer, HIGH),
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH),
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(100);

  digitalWrite(buzzer, HIGH),
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(50);
}


