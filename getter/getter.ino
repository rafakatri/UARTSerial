byte tick = 0;
int deltat = 1094;
void sleep(unsigned long n) {
  for (unsigned long i = 0; i < n; i++) {
    tick++;
  }
}

int pin = 4;
byte resp = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  if (digitalRead(pin) == LOW) {
    sleep(deltat * 1.5);
    for (int i = 0; i <=7; i++) {
      resp = resp | (digitalRead(pin) << i);
      //Serial.println(digitalRead(pin)<<i)
      sleep(deltat);
    }
    
    Serial.println(resp);
  }
}