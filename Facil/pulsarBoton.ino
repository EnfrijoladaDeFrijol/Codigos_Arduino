int BOTON = 2; // asignamos el pin 2
int LED = 8; // asignamos el pin 8
int STATUS = LOW; // para tener una variable de control

void setup(){
  pinMode(BOTON, INPUT); // pin 2 entrada (botón)
  pinMode(LED, OUTPUT); // pin 8 salida (led)
}


//void loop(){
//  if(digitalRead(2) ==  HIGH){ // Si está presionado el botón
//    digitalWrite(8, HIGH); // Encendemos el led
//  }
//  else{ // si no está presionado el botón
//    digitalWrite(8, LOW); // Apagamos el led 
//  }
//}

void loop(){
  while(digitalRead(BOTON) == LOW){ // Aquí apagamos

  }
  STATUS = digitalRead(LED); // Leemos una vez que pulsamos el botón
  digitalWrite(LED, !STATUS); // Le asignamos el valor contrario de status o sea HIGH
  while(digitalRead(BOTON) == HIGH){
    // Se mantiene aquí encendido hasta que presionemos el botón
    // y vuelva al primer while
  }

}
