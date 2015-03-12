void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //pinMode(12, OUTPUT);
}

int ti = 75;
int ch = 10;

void pOn(int p) {
  digitalWrite(p, HIGH);
}

void pOff(int p) {
  digitalWrite(p, LOW);
}

void loop() {
  if (ti > 100) {
    ch = -10;
  } else if (ti < 10) {
    ch = 10;
  }
  pOn(13);
  delay(ti);
  pOn(12);
  delay(ti);
  pOff(13);
  delay(ti);
  pOn(11);
  delay(ti);
  pOff(12);
  delay(ti);
  pOff(11);
  delay(ti);
  ti += ch;
}
