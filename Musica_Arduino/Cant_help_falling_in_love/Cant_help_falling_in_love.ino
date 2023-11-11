/*  
  CAN´T HELP FALLING IN LOVE WITH YOU
  4/4
  Solo se usará el buzzer en el pin 2 para la melodía
*/

#define B0  31
#define C1  33
#define CS1 35
#define D1  37
#define DS1 39
#define E1  41
#define F1  44
#define FS1 46
#define G1  49
#define GS1 52
#define A1  55
#define AS1 58
#define B1  62
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978
#define REST      0

// Pin donde está el buzzer pasivo de la melodía:
int buzzerP = 2;
// Pin donse estaá el acompañamineto (bajeos)
int buzzerPbajo = 4;

// Duración: 
int redonda = 1000;
int blanca = redonda/2;
int negra = redonda/4;
int corchea = redonda/8;

// ______________________________________________________
//              Fragmentos de la canción
//  Aquí se pondrán todas las notas de la canción

int estribillo[] = {
  D4,redonda, 
  A4,redonda,
  D4,redonda,
  A3,blanca,  FS3,corchea,  E4,corchea,   FS4,corchea,
  G4,redonda,
  FS4,redonda,
  E4,redonda,
  A3,blanca,  REST,negra,   REST,corchea, 
};
int notasEstribillo = sizeof(estribillo) / sizeof(estribillo[0]) / 2;

int precoro[] = {
  G4,corchea,

  B3,redonda,
  CS4,redonda,
  D4,redonda,
};
int notasPrecoro = sizeof(precoro) / sizeof(precoro[0]) / 2;

int coro[] = {
  E4,blanca,  FS4,negra,    G4,negra,
  FS4,redonda,
  E4,redonda,
  D4,redonda,
};
int notasCoro = sizeof(coro) / sizeof(coro[0]) / 2;



// -----------------------------------------------------
//        Funciones para reproducir la canción


// Funciones para el correcto funcionamiento de este programa
void nota(int nota, int duracion, int buzzer){
  tone(buzzer, nota, duracion);
  delay(duracion);
  noTone(buzzer);
  delay(duracion);
}

void reproductor(int fragmentoCancion[], int notas, int buzzer){
  for (int i=0; i<notas*2; i = i+2){
    nota(fragmentoCancion[i], fragmentoCancion[i+1], buzzer);
  }
  //int i = 1;
  //nota(fragmentoCancion[i], fragmentoCancion[i+1]);
  
}


// -----------------------------------------------------
//              Reproducción de la canción

void setup() {
  pinMode(buzzerP, OUTPUT);
  pinMode(buzzerPbajo, OUTPUT);
}

void loop() {
  reproductor(estribillo, notasEstribillo, buzzerP);  

  reproductor(precoro, notasPrecoro,buzzerP);
  reproductor(coro, notasCoro,buzzerP);

  reproductor(precoro, notasPrecoro,buzzerP);
  reproductor(coro, notasCoro,buzzerP);

  delay(2000);
  
}