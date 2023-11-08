  int LEDAZ = 7;
  int LEDR = 5;
  int LEDA = 3;
  int LEDV = 1;

void setup() { // asignamos los pines
  pinMode(LEDR, OUTPUT);
  pinMode(LEDA, OUTPUT);
  pinMode(LEDV, OUTPUT);
  pinMode(LEDAZ, OUTPUT);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDV, LOW);
  digitalWrite(LEDAZ, LOW);
}

void loop() {
  digitalWrite(LEDV, HIGH);
  delay(200);
  digitalWrite(LEDA, HIGH);
  delay(200);
  digitalWrite(LEDR, HIGH);
  delay(200);
  digitalWrite(LEDAZ, HIGH);
  delay(200);
  
  digitalWrite(LEDV, LOW);
  delay(200);
  digitalWrite(LEDA, LOW);
  delay(200);
  digitalWrite(LEDR, LOW);
  delay(200);
  digitalWrite(LEDAZ, LOW);
  delay(200);
}
