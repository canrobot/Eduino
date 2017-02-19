#include <Temp.h>

int temp_Sensor = A0;

void setup() {
     Serial.begin(9600);
}

void loop() {
     float value = read_temperature(temp_Sensor);
     Serial.println(value);
}
