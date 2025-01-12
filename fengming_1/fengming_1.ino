//first program 12/1/2024






int time_for_turn_off_LED = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(8, HIGH);
delay(time_for_turn_off_LED);
digitalWrite(8, LOW);
delay(time_for_turn_off_LED);
}
