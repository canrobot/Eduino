#include "LED.h"

void LED(int PinNum, int State) {
	digitalWrite(PinNum, State);
}

void LED_Brightless(int PinNum, int Brightless) {
	analogWrite(PinNum, Brightless);
}

