#include "Temp.h"


float read_temperature(int PinNum) {
	int value = analogRead(PinNum);
	float LM35 = ((5.0 * value) / 1024.0) * 100;

	return LM35;
}

