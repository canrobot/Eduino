#include <LED.h>

void setup() {
}

void loop() {
     for(int i = 0; i < 256; i++) {
          LED_Brightless(10, i);
          delay(10);
     }
     for(int i = 255; i >= 0; i--) {
          LED_Brightless(10, i);
          delay(10);
     }     
}
