#include "DPlay_Button.h"

int Button_Pressed(int PinNum) {
	int Button = digitalRead(PinNum);
	if(Button == ON)         return ON;
	else                     return OFF;
}

