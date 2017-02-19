#include <Button.h>
#include <LED.h>

int LED_State = ON;

void setup() {
     pinMode(7, INPUT);
     pinMode(4, OUTPUT);
}

void loop() {
     if(Button_Pressed(7) == ON) {
          delay(100);
          if(Button_Pressed(7) == ON) {
              LED_State = !LED_State; 
          }
     }
     
     LED(4, LED_State);
}
