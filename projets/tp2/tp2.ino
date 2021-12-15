/*
TP2
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  attachInterrupt(INT0, turnOnLight, CHANGE);
}

volatile bool ledState=false;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("DEMAT BREIZH\n");
  digitalWrite(12, ledState);
}

void turnOnLight() {
  ledState =! ledState;
}

void turnOffLight() {
  digitalWrite(12, LOW);
}
