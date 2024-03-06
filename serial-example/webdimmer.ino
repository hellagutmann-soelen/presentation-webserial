
int LED_AND_MOTOR = 9;

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode( LED_AND_MOTOR, OUTPUT );
  digitalWrite( LED_BUILTIN, 0 );
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

  if (Serial.available() > 0) {
    int inByte = Serial.read();
    analogWrite(led, inByte);
  }

}
