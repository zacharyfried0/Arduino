#include"pitches.h"
int melody[] = {
  NOTE_GS2, NOTE_GS2, NOTE_DS3, NOTE_DS3, NOTE_AS2, NOTE_C3, NOTE_C3, noTone,
  NOTE_DS3, NOTE_DS3, NOTE_F3, NOTE_F3, NOTE_G3, NOTE_AS3, NOTE_AS3, noTone,
  NOTE_C4, NOTE_AS3, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_DS3, NOTE_F3, NOTE_DS3, NOTE_GS3, NOTE_F3
  NOTE_DS3, NOTE_DS3, NOTE_C3, NOTE_AS2, NOTE_GS2, NOTE_GS2
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 4, 4, 8/3, 8, 4, 4,
  4, 8, 4, 4, 8/3, 8, 4, 4,
  8, 4, 8, 4, 8, 4, 8, 4, 4, 4,
  8/3, 8/3, 8, 8/3, 4, 2
};

void setup() {
  for (int thisNote = 0; thisNote < 32; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.10;
    delay(pauseBetweenNotes);
  }
}



void loop() {
}
