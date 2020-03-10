#include<Servo.h>
const int x=
Servo servo_1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo2.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(5));
if(analogRead(5)>x){
  servo2.write(180);
}
else if(analogRead(5)<x){
  servo2.write(30);
}
delay(100);
}
