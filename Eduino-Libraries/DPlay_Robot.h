#include <Arduino.h>

class DPlay_Robot {
    public:
	DPlay_Robot(uint8_t Lpin1, uint8_t Lpin2, uint8_t Rpin1, uint8_t Rpin2);

	static    uint8_t DPlay_Robot_Lpin1;
	static    uint8_t DPlay_Robot_Lpin2;
	static    uint8_t DPlay_Robot_Rpin1;
	static    uint8_t DPlay_Robot_Rpin2;

	static    void Front();
	static    void Back();
	static    void Right();
	static    void Left();
	static    void Break();
};