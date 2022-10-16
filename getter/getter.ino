void sleep(unsigned long n) {
  byte tick = 0;
  for (unsigned long i = 0; i < n; i++) {
    tick++;
  }
}

int pin = 5;
byte resp = 0;
bool parity;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
}

void loop() {
  if (digitalRead(pin) == LOW) {
    sleep(3281);

    for (int i = 0; i <= 7; i++) {
      bitWrite(resp, i, digitalRead(pin));
      sleep(2188);
    }

    parity = digitalRead(pin);
    sleep(2188);

    for(int i = 0; i < 8; i++){
      if (bitRead(resp, i) == 1) {
        count++;
      }
    }

    if (count % 2 == 0 && parity == 1) {
      Serial.println(resp);
    } else if (count % 2 != 0 && parity == 0) {
      Serial.println(resp);
    } else {
      Serial.println("Erro");
    }
    
  }
}