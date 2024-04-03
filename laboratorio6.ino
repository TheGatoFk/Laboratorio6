const int ledPines[] = {2, 3, 4, 5, 6, 7, 8, 9}; // Pins para los LEDs
const int buttonPines[] = {10, 11, 12, 13}; // Pins para los botones

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPines[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPines[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (digitalRead(buttonPines[i]) == HIGH) {
      digitalWrite(ledPines[i * 2], HIGH); // Enciende el LED correspondiente
      digitalWrite(ledPines[i * 2 + 1], HIGH); // Enciende el siguiente LED
    } else {
      digitalWrite(ledPines[i * 2], LOW); // Apaga el LED correspondiente
      digitalWrite(ledPines[i * 2 + 1], LOW); // Apaga el siguiente LED
    }
  }
}

