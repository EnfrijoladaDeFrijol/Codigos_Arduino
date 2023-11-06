void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);   // Decimos que se encienda
  delay(500);               // por 0.5 seg
  digitalWrite(13, LOW);    // Que se apague 
  delay(2000);              // por 2 seg
  digitalWrite(13, HIGH);   // Decimos que se encienda
  delay(1000);   
  digitalWrite(13, LOW);    
  delay(500);
}
