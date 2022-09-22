#include <Servo.h>
Servo myservo;
int led=6;
int pir=2;

void setup()
{
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
  myservo.attach(9);
  Serial.begin(9600);

}

void loop()
{
  int val = digitalRead(pir);
  Serial.println(val);
  if(val==HIGH){
    digitalWrite(led,HIGH);
    myservo.write(70);
  }
  else{
    digitalWrite(led,LOW);
    myservo.write(10);
  }
  
  delay(10);
  

}
