void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //pinMode(12, OUTPUT);
}

int ti = 75;

void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ti);              // wait for a second
  digitalWrite(12, HIGH);
  delay(ti);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(ti);
  digitalWrite(11, HIGH);
  delay(ti);
  digitalWrite(12, LOW);
  delay(ti);
  digitalWrite(11, LOW);
  delay(ti);
}
