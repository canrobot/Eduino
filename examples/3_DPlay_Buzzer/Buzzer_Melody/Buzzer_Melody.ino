#include "pitches.h"

/*/
int melody[24] = {
     SOL4, SOL4, RA4, RA4, SOL4, SOL4, MI4, SOL4, SOL4, MI4, MI4, RE4, 
     SOL4, SOL4, RA4, RA4, SOL4, SOL4, MI4, SOL4, MI4, RE4, MI4, DO4
};

/*/
int melody[8] = {
     DO4, SOL3, SOL3, RA3, RA3, 0, SI3, DO4
};
//*/

int noteDurations[] = {
     4, 8, 8, 4, 4, 4, 4, 4 
     //4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 2
};

void setup() {
     for (int thisNote = 0; thisNote < 8; thisNote++) {

          int noteDuration = 1000 / noteDurations[thisNote];
          tone(8, melody[thisNote], noteDuration);

          int pauseBetweenNotes = noteDuration * 1.30;
          delay(pauseBetweenNotes);
          noTone(8);
     }
}

void loop() {
}