#include <LED.h>
#include <CdS.h>

void setup() {
     pinMode(4, OUTPUT);
}

void loop() {
     if(Brightless(A5) == DARK) {
          LED(4, ON);
     }
     else {
          LED(4, OFF);
     }
}