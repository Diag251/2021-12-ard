/*
TP1
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
}

bool ledState=false;
void loop() {
  // put your main code here, to run repeatedly:
  bool buttonState=digitalRead(2);
  if (buttonState)
  {
    digitalWrite(12, HIGH); 
  }
  delay(3000);
  digitalWrite(12, LOW);

  Serial.print("Val Port = ");
  Serial.println(buttonState);
  
}
