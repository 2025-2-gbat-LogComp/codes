int pinAmarelo  = 27;
int pinVermelho = 26;
int pinVerde    = 25;
int pinAzul     = 33;

#define NIVEIS 3

int sorteados[NIVEIS];
int pinosLED[] = {pinAmarelo, pinVermelho, pinVerde, pinAzul};

void setup() {
  Serial.begin(115200);
  for (int i=0; i < 4; i++)
    pinMode(pinosLED[i], OUTPUT);
  randomSeed(analogRead(8));
}

void gera_numeros() {
  for (int i=0; i < NIVEIS; i++) {
    sorteados[i] = random(4);
    Serial.printf("sorteio %d = %d\n", i, sorteados[i]);
  }
}

void pisca_led (int pino) {
  for (int i=0; i < 5; i++) {
    digitalWrite(pino, HIGH);
    delay(200);
    digitalWrite(pino, LOW);
    delay(200);
  }
}

int le_botoes(int nivel) {
  return nivel;
}

void loop() {
  int nivel = 1;
  gera_numeros();
  while (nivel <= NIVEIS) {
    for (int i=0; i < nivel; i++) {
      digitalWrite(pinosLED[sorteados[i]], HIGH);
      delay(1000);
      digitalWrite(pinosLED[sorteados[i]], LOW);
      delay(300);
    }

    if (le_botoes(nivel) == nivel)
      nivel++;
    else
      break;

    delay(3000);
  }

  if (nivel == (NIVEIS+1)) 
    pisca_led(pinVerde);
  else
    pisca_led(pinVermelho);
 
  delay(3000);
}
