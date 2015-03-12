#include"pitches.h"
int melody[] = {
  NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_E4,
  NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_D4,
  NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_FS4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_A3,
  NOTE_FS4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_E4, NOTE_D4, NOTE_D4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8/3, 8, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8/3, 8, 2,
  4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8/3, 8, 2
};

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

int note(int note) {
   int notes[] = {NOTE_A3, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_A4};
   return notes[note];
}

void noPin(int pin) {
  digitalWrite(pin, HIGH);
}

void killpin(int pin){
  digitalWrite(pin, LOW);
}

void loop() {
  for (int thisNote = 0; thisNote < 62; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    noPin(1 + note(melody[thisNote]));
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.10;
    delay(pauseBetweenNotes);
    killpin(1 + note(melody[thisNote]));
  }
}
