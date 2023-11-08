// Este programa fucniona con 4 leds
int boton = 2;
int status = LOW;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int delayMuyCorto = 50;
int delayCorto = 100;
int delayMedio = 500;
int i;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(boton, INPUT);
}

void loop() {
  //prenderTodo();
  while(digitalRead(boton) == LOW){ // Si presionamos el botón sale del ciclo 
  }
  patron1();
  
  //status = digitalRead(led1); // Leemos una vez que pulsamos el botón
  //digitalWrite(led1, !status); // Le asignamos el valor contrario de status o sea HIGH
  while(digitalRead(boton) == LOW){
  }
  patron2();

  while(digitalRead(boton) == LOW){
  }
  patron3();
}


// FUNCIONES PARA LOS LEDS

void prenderTodo(){
  for (i=0; i<2; i++){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(delayCorto);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);  
    delay(delayCorto);  
  }
}

void patron1(){
  // Encendido de leds
  for(i=0; i<4; i++){
    digitalWrite(led1, HIGH);
    delay(delayMuyCorto);
    digitalWrite(led2, HIGH);
    delay(delayMuyCorto);
    digitalWrite(led3, HIGH);
    delay(delayMuyCorto);
    digitalWrite(led4, HIGH);
    delay(delayMuyCorto);
    // Apagado de leds
    digitalWrite(led1, LOW);
    delay(delayMuyCorto);
    digitalWrite(led2, LOW);
    delay(delayMuyCorto);
    digitalWrite(led3, LOW);
    delay(delayMuyCorto);
    digitalWrite(led4, LOW);
    delay(delayCorto); 
  }
  
}

int patron2(){
  // Encendido y apagado de led 1
  for(i=0; i<4; i++){
    digitalWrite(led1, HIGH);
    delay(delayCorto);
    digitalWrite(led2, HIGH);
    delay(delayCorto);
    digitalWrite(led1, LOW);
    delay(delayCorto);
    digitalWrite(led3, HIGH);
    delay(delayCorto);
    digitalWrite(led2, LOW);
    delay(delayCorto);
    digitalWrite(led4, HIGH);
    delay(delayCorto);
    digitalWrite(led3, LOW);
    delay(delayCorto);
    digitalWrite(led1, HIGH);
    delay(delayCorto);
    digitalWrite(led4, LOW);
    digitalWrite(led1, LOW);
  } 
}

void patron3(){
    for(i=0; i<4; i++){
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      delay(delayMedio);
      digitalWrite(led1, LOW);
      digitalWrite(led3, LOW);

      digitalWrite(led2, HIGH);
      digitalWrite(led4, HIGH);
      delay(delayMedio);
      digitalWrite(led2, LOW);
      digitalWrite(led4, LOW);
    }
  }
