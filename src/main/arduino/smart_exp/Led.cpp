#include "Led.h"

Led::Led(uint8_t pin) {
    this->pin = pin;
    pinMode(pin,OUTPUT);
}

void Led::switchOn() {
    digitalWrite(pin, HIGH);
}

void Led::switchOff() {
    digitalWrite(pin, LOW);
};
