#include <string.h>


void sleep(unsigned long n) {
  byte tick=0;
  for (unsigned long i = 0; i < n; i++) {
    tick++;
  }
}

int pin = 5;
char letra = 'a';

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  sleep(2188*5);
  Serial.println("comeca");
  digitalWrite(pin, LOW);
  sleep(2188);
  for (int i=0;i<=7;i++){
      //Serial.println(bitRead(letra,i));
      digitalWrite(pin,bitRead(letra,i));
      sleep(2188);
  }

  Serial.println("acabou");

}

void loop() {
  digitalWrite(pin, HIGH);
  sleep(2188);
}