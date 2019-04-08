int ledPin = 10;

unsigned long previousMillis = 0;

int x = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  sad();
}

void sad() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= 150) {
    if (x < 15) {
      x++;
      previousMillis = currentMillis;
    }
    else {
      x = 0;
    }
  }

  if (x == 1 || x == 14) {
    analogWrite(ledPin, 102);
  }
  else if (x == 2 || x == 13) {
    analogWrite(ledPin, 128);
  }
  else if (x == 3 || x == 12) {
    analogWrite(ledPin, 153);
  }
  else if (x == 4 || x == 11) {
    analogWrite(ledPin, 179);
  }
  else if (x == 5 || x == 10) {
    analogWrite(ledPin, 204);
  }
  else if (x == 6 || x == 9) {
    analogWrite(ledPin, 230);
  }
  else if (x == 7 || x == 8) {
    analogWrite(ledPin, 255);
  }
}
