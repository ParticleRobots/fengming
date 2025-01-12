//fengmingjoystick 12/1/2024


int axis1 = 0;
int axis2 = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
axis1 = analogRead(A0);
//Serial.print("variable1:");
//Serial.println(axis1);


axis2 = analogRead(A1);
//Serial.println(axis2);
if (axis2 == 0){
  Serial.println0("up");
  
}

if (axis1 == 0){
  Serial.println("right");
}

}
