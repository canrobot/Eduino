#include "bluetooth.h"



int getData[6]={0};
char dataBuffer[6] = {0};

bluetooth::bluetooth() {

} 

void bluetooth::begin(uint8_t boadrate) {
   Serial.begin(boadrate);
}

int bluetooth::read() {

   int i=0;
  if (Serial.available()) {

   while(i < 6){
       int rcvData = Serial.read();
       dataBuffer[i]= rcvData;
       getData[i] = dataBuffer[i];
       i++;
       delay(2);
   }
   
  }
    if( getData[0] == '0' && getData[1] == '1') {  return bt_F; }
    if( getData[0] == '2' && getData[1] == '0') {  return bt_L; }
    if( getData[0] == '1' && getData[1] == '0') {  return bt_R; }
    if( getData[0] == '0' && getData[1] == '2') {  return bt_B; }
    if( getData[0] == '2' && getData[1] == '1') {  return bt_FL; }
    if( getData[0] == '1' && getData[1] == '1') {  return bt_FR; }
    if( getData[0] == '2' && getData[1] == '2') {  return bt_BL; }
    if( getData[0] == '1' && getData[1] == '2') {  return bt_BR; }
    if( getData[0] == '0' && getData[1] == '0') {  return bt_S; }

       
  //   Serial.print("getData[0] = ");Serial.println(getData[0]);
  //   Serial.print("getData[1] = ");Serial.println(getData[1]);
  //   Serial.print("getData[2] = ");Serial.println(getData[2]);
  //   Serial.print("getData[3] = ");Serial.println(getData[3]);
  //   Serial.print("getData[4] = ");Serial.println(getData[4]);
  //   Serial.print("getData[5] = ");Serial.println(getData[5]);
  


}
