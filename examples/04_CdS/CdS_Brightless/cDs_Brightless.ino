#include <CdS.h>

void setup() {
     Serial.begin(9600);
}

void loop() {
     int Brightless_Data = Brightless_Divide(A5); // Brightless = 1 ~ 100
     Serial.println(Brightless_Data);
}
