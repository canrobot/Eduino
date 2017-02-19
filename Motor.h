#include <Arduino.h>

#define CW		0
#define CCW		1
#define DPlay_Motor_Lpin1	3
#define DPlay_Motor_Lpin2	5
#define DPlay_Motor_Rpin1	6
#define DPlay_Motor_Rpin2	11

void Motor_Left(int direction, int speed);
void Motor_Right(int direction, int speed);
void Motor_Stop();
