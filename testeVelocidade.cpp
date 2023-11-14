#include <Arduino.h>

#define pino8 PINB0 //digital 8

void setup(){
  DDRB = DDRB | (1 << DDB0);
  PORTB = PORTB & ~(1 << PB0);
}

void loop(){
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);

  PORTB = PORTB | (1 << pino8);
  PORTB = PORTB & ~(1 << pino8);
  PORTB = PORTB | (1 << pino8);
  PORTB = PORTB & ~(1 << pino8);
}
