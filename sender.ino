#include <string.h>


void sleep(unsigned long n) {
  byte tick=0;
  for (unsigned long i = 0; i < n; i++) {
    tick++;
  }
}

int pin = 13;
char letra = 'a';

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  for (int i=0;i<=7;i++){
      Serial.println(bitRead(letra,i));
  }

}

void loop() {
  static bool led = false;
  led = !led;
  digitalWrite(pin,led);
  if (led){
    sleep(2000000000);
  }
  sleep(2187);
}