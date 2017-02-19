#include <Arduino.h>

#define bt_F 1
#define bt_L 2
#define bt_B 3
#define bt_R 4
#define bt_FL 5
#define bt_FR 6
#define bt_BL 7
#define bt_BR 8
#define bt_S  9

class bluetooth {
    public:
	bluetooth();



	static    void begin(uint8_t boadrate);
	static    int read();
};