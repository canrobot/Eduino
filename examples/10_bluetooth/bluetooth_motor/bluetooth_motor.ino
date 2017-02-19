#include "bluetooth.h"
#include <Motor.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = bluetooth::read();

  if( val == bt_F){  Motor_Left(CCW, 255);  Motor_Right(CW, 255); } //전진
  if( val == bt_L){  Motor_Left(CW, 255);  Motor_Right(CW, 255); }  //좌회전
  if( val == bt_R){  Motor_Left(CCW, 255);  Motor_Right(CCW, 255); }//우회전
  if( val == bt_B){  Motor_Left(CW, 255);  Motor_Right(CCW, 255); } //후진
  if( val == bt_S){  Motor_Left(CCW, 0);  Motor_Right(CW, 0); }     //정지
                
  
}
