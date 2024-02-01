// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue1 = analogRead(A0);
  int knobValue2 = analogRead(A1);
   // print out the value you read:
  analogWrite(6, knobValue1/4);
  Serial.println(knobValue1/4);
}
