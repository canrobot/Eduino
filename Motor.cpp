#include "Motor.h"

void Motor_Left(int direction, int speed) {
	if(direction == CW) {
		analogWrite(DPlay_Motor_Lpin1, speed);
		analogWrite(DPlay_Motor_Lpin2, 0);
	}
	else if(direction == CCW) {
		analogWrite(DPlay_Motor_Lpin1, 0);
		analogWrite(DPlay_Motor_Lpin2, speed);
	}
	else {
		analogWrite(DPlay_Motor_Lpin1, 0);
		analogWrite(DPlay_Motor_Lpin2, 0);
	}
}

void Motor_Right(int direction, int speed) {
	if(direction == CW) {
		analogWrite(DPlay_Motor_Rpin1, speed);
		analogWrite(DPlay_Motor_Rpin2, 0);
	}
	else if(direction == CCW) {
		analogWrite(DPlay_Motor_Rpin1, 0);
		analogWrite(DPlay_Motor_Rpin2, speed);
	}
	else {
		analogWrite(DPlay_Motor_Rpin1, 0);
		analogWrite(DPlay_Motor_Rpin2, 0);
	}
}

void Motor_Stop() {
	analogWrite(DPlay_Motor_Lpin1, 0);
	analogWrite(DPlay_Motor_Lpin2, 0);
	analogWrite(DPlay_Motor_Rpin1, 0);
	analogWrite(DPlay_Motor_Rpin2, 0);
}

