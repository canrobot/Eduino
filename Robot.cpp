#include "Robot.h"

uint8_t DPlay_Robot::DPlay_Robot_Lpin1;
uint8_t DPlay_Robot::DPlay_Robot_Lpin2;
uint8_t DPlay_Robot::DPlay_Robot_Rpin1;
uint8_t DPlay_Robot::DPlay_Robot_Rpin2;

DPlay_Robot::DPlay_Robot(uint8_t Lpin1, uint8_t Lpin2, uint8_t Rpin1, uint8_t Rpin2) {
	DPlay_Robot_Lpin1 = Lpin1;
	DPlay_Robot_Lpin2 = Lpin2;
	DPlay_Robot_Rpin1 = Rpin1;
	DPlay_Robot_Rpin2 = Rpin2;
}

void DPlay_Robot::Front() {
     digitalWrite(DPlay_Robot_Lpin1, LOW);
     digitalWrite(DPlay_Robot_Lpin2, HIGH);
     digitalWrite(DPlay_Robot_Rpin1, HIGH);
     digitalWrite(DPlay_Robot_Rpin2, LOW);
}

void DPlay_Robot::Back() {
     digitalWrite(DPlay_Robot_Lpin1, HIGH);
     digitalWrite(DPlay_Robot_Lpin2, LOW);
     digitalWrite(DPlay_Robot_Rpin1, LOW);
     digitalWrite(DPlay_Robot_Rpin2, HIGH);
}

void DPlay_Robot::Left() {
     digitalWrite(DPlay_Robot_Lpin1, HIGH);
     digitalWrite(DPlay_Robot_Lpin2, LOW);
     digitalWrite(DPlay_Robot_Rpin1, HIGH);
     digitalWrite(DPlay_Robot_Rpin2, LOW);
}

void DPlay_Robot::Right() {
     digitalWrite(DPlay_Robot_Lpin1, LOW);
     digitalWrite(DPlay_Robot_Lpin2, HIGH);
     digitalWrite(DPlay_Robot_Rpin1, LOW);
     digitalWrite(DPlay_Robot_Rpin2, HIGH);
}

void DPlay_Robot::Break() {
     digitalWrite(DPlay_Robot_Lpin1, LOW);
     digitalWrite(DPlay_Robot_Lpin2, LOW);
     digitalWrite(DPlay_Robot_Rpin1, LOW);
     digitalWrite(DPlay_Robot_Rpin2, LOW);
}




