const int ledPins [] = {35, 18, 32, 17};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera = 1250;
const int apagar = 1500;

const int ledPisca [] = {19, 13, 34, 23};
const int numPisca = sizeof(ledPisca) / sizeof(ledPisca[0]);
const int wait = 375;

void setup() {
  for(int i = 0; i < numLeds; i++){
   pinMode(ledPins[i],OUTPUT);

  for(int b = 0; b < numPisca; b++){
  pinMode(ledPisca[b], OUTPUT);
  }
  }
}

void loop() {
  for(int i = 0; i< numLeds; i ++){
    digitalWrite(ledPins[i], HIGH);
    delay(espera);
    }
    for(int b = 0; b< numPisca; b++){
    digitalWrite(ledPisca[b], HIGH);
    delay(wait);
    for(int b = 0; b< numPisca; b++)
    digitalWrite(ledPisca[b], LOW);
    }
    for(int i = 0; i< numLeds; i++){
    digitalWrite(ledPins[i], LOW);
    }
    delay(apagar);
}