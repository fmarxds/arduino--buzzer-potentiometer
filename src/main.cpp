#include <Arduino.h>

#define POTENTIOMETER A0
#define BUZZER 12

void setup() {
    pinMode(POTENTIOMETER, INPUT);
    pinMode(BUZZER, OUTPUT);
}

void loop() {

    int potency = analogRead(POTENTIOMETER);
    if (potency <= 0) {
        noTone(BUZZER);
    } else {
        tone(BUZZER, potency * 1.5);
    }

    delayMicroseconds(100);

}