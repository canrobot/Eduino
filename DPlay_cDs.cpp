#include "DPlay_cDs.h"

int Brightless_Divide(int PinNum) {
	int Check_Data = analogRead(PinNum);
	Check_Data = map(Check_Data, 0, 1023, 1, 100);
	return Check_Data;
}

int Brightless(int PinNum) {
	int Check_Data = analogRead(PinNum);
	if(Check_Data > 200) {
		return BRIGHT;
	}
	else {
		return DARK;
	}
}