#include <string.h>

byte tick = 0;
int deltat = 1094;
void sleep(unsigned long n) {
  for (unsigned long i = 0; i < n; i++) {
    tick++;
  }
}

int debug=0;

int pin = 4;
char letra = 'a';

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  sleep(deltat * 5);
  //Serial.println("comeca");
  digitalWrite(pin, LOW);
  sleep(deltat);
  for (int i = 0; i <= 7; i++) {
    //Serial.println(1 & (letra>>i));
    digitalWrite(pin, 1 & (letra>>i));

    sleep(deltat);
  }

 
}

void loop() {
  digitalWrite(pin, HIGH);
}