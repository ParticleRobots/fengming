// moter test with motor driver

int motorpin=13;

void setup() {
  // put your setup code here, to run once:

pinMode(motorpin, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motorpin, HIGH);

delay(5000);
digitalWrite(motorpin, LOW);
delay(1000);



}
