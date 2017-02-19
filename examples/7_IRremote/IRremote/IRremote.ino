#include <IRremote.h>
#include <Motor.h>

int RECV_PIN = 8; 
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
   Serial.begin(9600);
   irrecv.enableIRIn(); // Start the receiver
   pinMode(13, OUTPUT);//  LED
}

void loop() {
   if (irrecv.decode(&results)) {
      Serial.println(results.value, HEX);
      switch (results.value) {
         case 0xFF18E7:    //if you press the number "2", then "Forward"
              Motor_Left(CCW, 255);
              Motor_Right(CW, 255);
          break; 
          
         case 0xFF38C7:    //if you press the number "5", then "STOP"
              Motor_Left(CCW, 0);
              Motor_Right(CCW, 0);
          break;

          case 0xFF4AB5:    //if you press the number "8", then "Backward"
              Motor_Left(CW, 255);
              Motor_Right(CCW, 255);
          break;
      }
   irrecv.resume(); // Receive the next value
   }
}