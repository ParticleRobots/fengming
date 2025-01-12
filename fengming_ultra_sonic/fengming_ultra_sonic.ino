// 2025 january 5. Fengming ultra sonic

int trigpin = 9;
int echopin = 8;
float duration = 0;
float distance = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);

  distance = 0.017 * duration;
  if ((distance > 10)&&(distance < 50)) {
    Serial.println("stop");
  } else {
    Serial.print("distance; ");
    Serial.print(distance);
    Serial.println("cm");
  }

  delay(300);
}
