#include <DPlay_Robot.h>

//Motor Set pin and speed
DPlay_Robot Robot(3, 5, 6, 11);

void setup() {

}

void loop() {
     Robot.Front();
     delay(1000);
     Robot.Back();
     delay(1000);
     Robot.Left();
     delay(1000);
     Robot.Right();
     delay(1000);
     Robot.Break();
     delay(1000);
}
