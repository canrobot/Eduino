#include <DPlay_LED.h>
#include <DPlay_Button.h>

void setup() {
     pinMode(7, INPUT);
     pinMode(4, OUTPUT);
}

void loop() {
     if(Button_Pressed(7) == ON) {
          LED(4, ON);
     }
     else {
          LED(4, OFF);
     }
}

