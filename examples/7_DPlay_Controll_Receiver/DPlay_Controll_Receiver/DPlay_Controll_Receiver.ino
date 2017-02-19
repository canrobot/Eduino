#include <DPlay_Robot.h>
#include <IRremote.h>
#include "Controll_Protocol.h"

DPlay_Robot Robot(3, 5, 6, 11);

int RECV_PIN = 8;

IRrecv irrecv(RECV_PIN);
decode_results results;
int SwitchPin[5] = {15, 16, 17, 18, 19};

unsigned int set_NUMBER = NUM_0;
unsigned int value[5];
unsigned int set_data;
unsigned int set_header;
unsigned int set_direction;
unsigned int set_sw;
unsigned int Header = 0b10000000000;
unsigned long Receive_Data;
unsigned long FRONT = 2;
unsigned long LEFT = 4;
unsigned long RIGHT = 6;
unsigned long BACK = 8;

void setup()
{
     pinMode(RECV_PIN, INPUT);
     for(int i = 0; i < 5; i++)   pinMode(SwitchPin[i], INPUT);
     
     Serial.begin(9600);
     irrecv.enableIRIn();
}

void loop() {
     convert_data();
     if (irrecv.decode(&results)) {
          Receive_Data = results.value;
          irrecv.resume();          
     }
     set_direction = Receive_Data & 0b00000001111;
     set_header = Receive_Data & 0b10000000000;
     set_sw = Receive_Data & 0b00111110000;
     if(set_header == Header) {
          if(set_sw == set_NUMBER) {
               Serial.println(set_direction);
               if(set_direction == FRONT) {
                    Robot.Front();
               }
               else if(set_direction == BACK) {
                    Robot.Back();
               }
               else if(set_direction == LEFT) {
                    Robot.Left();
               }
               else if(set_direction == RIGHT) {
                    Robot.Right();
               }          
               delay(200);
          }
     }
     Robot.Break();
     Receive_Data = 0;     
}

void convert_data() {
     for(int i = 0; i < 5; i++)    value[i] = digitalRead(SwitchPin[i]);
     
     if(value[0] == 0 && value[1] == 0 && value[2] == 0 && value[3] == 0 && value[4] == 0) {
          set_data = 0b000000000;
     }
     else if(value[0] == 1 && value[1] == 0 && value[2] == 0 && value[3] == 0 && value[4] == 0) {
          set_data = 0b100000000;
     }
     else if(value[0] == 1 && value[1] == 0 && value[2] == 0 && value[3] == 0 && value[4] == 1) {
          set_data = 0b100010000;
     }     
     else if(value[0] == 1 && value[1] == 0 && value[2] == 0 && value[3] == 1 && value[4] == 0) {
          set_data = 0b100100000;
     }
     else if(value[0] == 1 && value[1] == 0 && value[2] == 0 && value[3] == 1 && value[4] == 1) {
          set_data = 0b100110000;
     }     
     else if(value[0] == 1 && value[1] == 0 && value[2] == 1 && value[3] == 0 && value[4] == 0) {
          set_data = 0b101000000;
     }     
     else if(value[0] == 1 && value[1] == 0 && value[2] == 1 && value[3] == 0 && value[4] == 1) {
          set_data = 0b101010000;
     }     
     else if(value[0] == 1 && value[1] == 0 && value[2] == 1 && value[3] == 1 && value[4] == 0) {
          set_data = 0b101100000;
     }
     else if(value[0] == 1 && value[1] == 0 && value[2] == 1 && value[3] == 1 && value[4] == 1) {
          set_data = 0b101110000;
     }               
     else if(value[0] == 1 && value[1] == 1 && value[2] == 0 && value[3] == 0 && value[4] == 0) {
          set_data = 0b110000000;
     }          
     else if(value[0] == 1 && value[1] == 1 && value[2] == 0 && value[3] == 0 && value[4] == 1) {
          set_data = 0b110010000;
     }          
     else if(value[0] == 1 && value[1] == 1 && value[2] == 0 && value[3] == 1 && value[4] == 0) {
          set_data = 0b110100000;
     }               
     else if(value[0] == 1 && value[1] == 1 && value[2] == 0 && value[3] == 1 && value[4] == 1) {
          set_data = 0b110110000;
     }
     else if(value[0] == 1 && value[1] == 1 && value[2] == 1 && value[3] == 0 && value[4] == 0) {
          set_data = 0b111000000;
     }          
     else if(value[0] == 1 && value[1] == 1 && value[2] == 1 && value[3] == 0 && value[4] == 1) {
          set_data = 0b111010000;
     }          
     else if(value[0] == 1 && value[1] == 1 && value[2] == 1 && value[3] == 1 && value[4] == 0) {
          set_data = 0b111100000;
     }               
     else if(value[0] == 1 && value[1] == 1 && value[2] == 1 && value[3] == 1 && value[4] == 1) {
          set_data = 0b111110000;
     }
     else if(value[0] == 0 && value[1] == 0 && value[2] == 0 && value[3] == 0 && value[4] == 1) {
          set_data = 0b000010000;
     }                         
     else if(value[0] == 0 && value[1] == 0 && value[2] == 0 && value[3] == 1 && value[4] == 0) {
          set_data = 0b000100000;
     }                              
     else if(value[0] == 0 && value[1] == 0 && value[2] == 0 && value[3] == 1 && value[4] == 1) {
          set_data = 0b000110000;
     }                                   
     else if(value[0] == 0 && value[1] == 0 && value[2] == 1 && value[3] == 0 && value[4] == 0) {
          set_data = 0b001000000;
     }
     else if(value[0] == 0 && value[1] == 0 && value[2] == 1 && value[3] == 0 && value[4] == 1) {
          set_data = 0b001010000;
     }
     else if(value[0] == 0 && value[1] == 0 && value[2] == 1 && value[3] == 1 && value[4] == 0) {
          set_data = 0b001100000;
     }          
     else if(value[0] == 0 && value[1] == 0 && value[2] == 1 && value[3] == 1 && value[4] == 1) {
          set_data = 0b001110000;
     }     
     else if(value[0] == 0 && value[1] == 1 && value[2] == 0 && value[3] == 0 && value[4] == 0) {
          set_data = 0b010000000;
     }     
     else if(value[0] == 0 && value[1] == 1 && value[2] == 0 && value[3] == 0 && value[4] == 1) {
          set_data = 0b010010000;
     }
     else if(value[0] == 0 && value[1] == 1 && value[2] == 0 && value[3] == 1 && value[4] == 0) {
          set_data = 0b010100000;
     }     
     else if(value[0] == 0 && value[1] == 1 && value[2] == 0 && value[3] == 1 && value[4] == 1) {
          set_data = 0b010110000;
     }     
     else if(value[0] == 0 && value[1] == 1 && value[2] == 1 && value[3] == 0 && value[4] == 0) {
          set_data = 0b011000000;
     }          
     else if(value[0] == 0 && value[1] == 1 && value[2] == 1 && value[3] == 0 && value[4] == 1) {
          set_data = 0b011010000;
     }          
     else if(value[0] == 0 && value[1] == 1 && value[2] == 1 && value[3] == 1 && value[4] == 0) {
          set_data = 0b011100000;
     }          
     else if(value[0] == 0 && value[1] == 1 && value[2] == 1 && value[3] == 1 && value[4] == 1) {
          set_data = 0b011110000;
     }               
}