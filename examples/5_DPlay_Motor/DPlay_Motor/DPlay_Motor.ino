#include <DPlay_Motor.h>

void setup() {

}

void loop() {
     Motor_Left(CW, 255);
     Motor_Right(CW, 255);
     delay(1000);
     Motor_Left(CCW, 255);
     Motor_Right(CCW, 255);
     delay(1000);               
}
