#include <DPlay_LED.h>

void setup() {
     pinMode(4, OUTPUT);
}

void loop() {
     LED(4, ON);
     delay(1000);
     LED(4, OFF);
     delay(1000);
}
